// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "SDK.h"
#include <fstream>
#include "MinHook.h"
#include "ConsoleVariable.h"

using namespace SDK;

uintptr_t mBaseAddress;

struct BindActionFnPtr
{
  uintptr_t FnPtr;
  uint64_t unused;
};

typedef void (*BindActionFn)(UInputComponent* thisptr, const FName ActionName, const EInputEvent KeyEvent, void* Object, BindActionFnPtr* FnPtr);
BindActionFn BindAction = nullptr;

// FName::FName() constructor
// TODO: make our FName ctor call this?
typedef FName* (*FNameCreateFn)(FName* thisptr, const char* Name, int FindType);
FNameCreateFn FNameCreate = nullptr;

FName FirstPersonView;

// TODO: these probably should check game state and make sure we're not in any menus etc...
void FirstPersonCamera(AJackFieldPlayerController* a1)
{
  a1->Camera(FirstPersonView);
}

void EnterNakamaKaiwa(AJackFieldPlayerController* a1)
{
  a1->NakamaKaiwa();
}

typedef void (*InitActionMappingsFn)(AActor* thisptr);
InitActionMappingsFn InitActionMappings_Orig;

void InitActionMappings_Hook(AActor* thisptr)
{
  InitActionMappings_Orig(thisptr);

  FName name;

  FNameCreate(&name, "FirstPersonCamera", 1);
  BindActionFnPtr fnptr = { (uintptr_t)FirstPersonCamera, 0 };
  BindAction(thisptr->InputComponent, name, EInputEvent::IE_Pressed, thisptr, &fnptr);

  FNameCreate(&name, "EnterNakamaKaiwa", 1);
  fnptr = { (uintptr_t)EnterNakamaKaiwa, 0 };
  BindAction(thisptr->InputComponent, name, EInputEvent::IE_Pressed, thisptr, &fnptr);

  // Cache our UFunctions & FNames
  {
    FNameCreate(&FirstPersonView, "FirstPersonView", 1);

    // Prevent UFunctions from actually being called, we just want to cache the addr of them
    UObject::AllowFunctionCalls = false;

    AJackFieldPlayerController playerController;
    playerController.Camera(0);
    playerController.NakamaKaiwa();

    UObject::AllowFunctionCalls = true;
  }

  // A render resolution variable used by game in a few spots, always set to 1920x1080
  // Doesn't seem to ever get changed, maybe something was broken during UE4 engine update
  // CharacterCaptureCamera calc uses (720 / this) as a render scale, was maybe meant to be (this / 720)?
  // Setting it to 1280x720 should allow things to render at 1x scale
  *(DWORD*)(mBaseAddress + 0x5896CC0) = 1280;
  *(DWORD*)(mBaseAddress + 0x5896CC4) = 720;
}

typedef void (*SetsCharacterViewerResolutionFn)(AJackCharacterCaptureCamera*, void*);
SetsCharacterViewerResolutionFn SetsCharacterViewerResolution_Orig;

void SetsCharacterViewerResolution_Hook(AJackCharacterCaptureCamera* camera, void* rdx)
{
  int userResolutionX = 0;
  int userResolutionY = 0;

  // Find user settings and grab resolution from it
  auto settingList = UObject::FindObjects<UJackGameUserSettings>();
  for (auto settings : settingList)
  {
    if (settings && settings->ResolutionSizeX && settings->ResolutionSizeY)
    {
      userResolutionX = settings->ResolutionSizeX;
      userResolutionY = settings->ResolutionSizeY;
      break;
    }
  }

  if (userResolutionX && userResolutionY)
  {
    // Multiply resolution by screen percentage cvar
    auto* screenPercentage = *(TConsoleVariableData<float>**)(mBaseAddress + 0x5C48818); // r.ScreenPercentage address

    // Scale display width/height by percentage
    float screenPercentageMult = max(screenPercentage->GetValueOnGameThread(), 1) / 100.f;
    screenPercentageMult = min(screenPercentageMult, 4); // 400% seems to be max allowed by UE4, so we'll limit to that too

    userResolutionX = (int)((float)userResolutionX * screenPercentageMult);
    userResolutionY = (int)((float)userResolutionY * screenPercentageMult);

    // Apply new resolution to the render texture
    auto* texture = camera->CaptureComponent2D->TextureTarget;
    texture->JackTargetSizeX = userResolutionX;
    texture->JackTargetSizeY = userResolutionY;
  }

  SetsCharacterViewerResolution_Orig(camera, rdx);
}

void InitPlugin()
{
  mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA("DRAGON QUEST XI S.exe"));

  if (!mBaseAddress)
    return;

  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + 0x5D83BF8);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + 0x5D7AE20);
  UObject::AllowFunctionCalls = false;

  BindAction = reinterpret_cast<BindActionFn>(mBaseAddress + 0x6AA7A0);
  FNameCreate = reinterpret_cast<FNameCreateFn>(mBaseAddress + 0xD697D0);

  MH_Initialize();

  MH_CreateHook((LPVOID)(mBaseAddress + 0x914E60), SetsCharacterViewerResolution_Hook, (LPVOID*)&SetsCharacterViewerResolution_Orig);
  MH_CreateHook((LPVOID)(mBaseAddress + 0x629560), InitActionMappings_Hook, (LPVOID*)&InitActionMappings_Orig);

  MH_EnableHook(MH_ALL_HOOKS);
}

HMODULE ourModule;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
      ourModule = hModule;

      bool Proxy_Attach();
      Proxy_Attach();

      InitPlugin();
      break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
      break;
    case DLL_PROCESS_DETACH:
      void Proxy_Detach();
      Proxy_Detach();
      break;
    }
    return TRUE;
}

