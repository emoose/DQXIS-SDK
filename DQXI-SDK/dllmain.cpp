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
  void* FnPtr;
  uint64_t unused;
};

typedef void (*BindActionFn)(UInputComponent* thisptr, const FName ActionName, const EInputEvent KeyEvent, void* Object, BindActionFnPtr* FnPtr);
BindActionFn BindAction = nullptr;

// FName::FName() constructor
// TODO: make our FName ctor call this?
typedef FName* (*FNameCreateFn)(FName* thisptr, const char* Name, int FindType);
FNameCreateFn FNameCreate = nullptr;

// Cached things so we don't need any lookups during runtime
FName FirstPersonView;
UJackGameplayStatics* StaticFuncs;

bool IsPlayerMovementEnabled(AActor* actor)
{
  auto player = StaticFuncs->STATIC_GetJackGamePlayer(actor);

  if (!player)
    return false;

  auto condition = player->GamePlayerCondition;
  if (!condition)
    return false;

  if (condition->IsCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MoveInputDisable)
    || condition->IsCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MovementDisabled))
    return false;

  return true;
}

void FirstPersonCamera(AJackFieldPlayerController* playerController)
{
  if (!IsPlayerMovementEnabled(playerController))
    return;

  playerController->Camera(FirstPersonView);

  // TODO: these allow player to move in first-person view, but camera doesn't follow...
  //condition->SetCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MovementDisabled, EJackGamePlayerConditionControlPurpose::EJackGamePlayerConditionControlPurpose__FirstParsonCamera, false);
  //condition->SetCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MoveInputDisable, EJackGamePlayerConditionControlPurpose::EJackGamePlayerConditionControlPurpose__FirstParsonCamera, false);
}

void EnterPartyChat(AJackFieldPlayerController* playerController)
{
  if (!IsPlayerMovementEnabled(playerController))
    return;

  playerController->NakamaKaiwa();
}

typedef void (*InitActionMappingsFn)(AActor* thisptr);
InitActionMappingsFn InitActionMappings_Field_Orig;

void InitActionMappings_Field_Hook(AActor* thisptr)
{
  InitActionMappings_Field_Orig(thisptr);

  FName name;

  FNameCreate(&name, "FirstPersonCamera", 1);
  BindActionFnPtr fnptr = { FirstPersonCamera };
  BindAction(thisptr->InputComponent, name, EInputEvent::IE_Pressed, thisptr, &fnptr);

  FNameCreate(&name, "EnterPartyChat", 1);
  fnptr = { EnterPartyChat };
  BindAction(thisptr->InputComponent, name, EInputEvent::IE_Pressed, thisptr, &fnptr);

  // EnterNakamaKaiwa is apparently original name, based on INI files
  FNameCreate(&name, "EnterNakamaKaiwa", 1);
  fnptr = { EnterPartyChat };
  BindAction(thisptr->InputComponent, name, EInputEvent::IE_Pressed, thisptr, &fnptr);

  // Cache our UFunctions & FNames
  {
    FNameCreate(&FirstPersonView, "FirstPersonView", 1);
    StaticFuncs = UObject::FindObject<UJackGameplayStatics>();

    // Prevent UFunctions from actually being called, we just want wrapper to cache the addr of them
    UObject::AllowFunctionCalls = false;

    AJackFieldPlayerController playerController;
    playerController.Camera(nullptr);
    playerController.NakamaKaiwa();

    UJackGameplayStatics statics;
    statics.STATIC_GetJackGamePlayer(nullptr);

    UJackGamePlayerCondition condition;
    condition.IsCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MoveInputDisable);

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

// Hook SetupInitialLocalPlayer for us to set ViewportConsole, enables UE4 dev console in shipping builds:
typedef void* (*StaticConstructObject_InternalFn)(UClass* Class, UObject* InOuter, FName Name, void* SetFlags, void* InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, struct FObjectInstancingGraph* InstanceGraph, bool bAssumeTemplateIsArchetype);
typedef void* (*UGameViewportClient__SetupInitialLocalPlayerFn)(UGameViewportClient* thisptr, void* OutError);
UGameViewportClient__SetupInitialLocalPlayerFn UGameViewportClient__SetupInitialLocalPlayer_Orig;

void* UGameViewportClient__SetupInitialLocalPlayer_Hook(UGameViewportClient* thisptr, void* OutError)
{
  auto ret = UGameViewportClient__SetupInitialLocalPlayer_Orig(thisptr, OutError);

  if (!thisptr->ViewportConsole) {
    auto StaticConstructObject_Internal = (StaticConstructObject_InternalFn)(mBaseAddress + 0xF16220);

    auto engines = UObject::FindObjects<UEngine>();
    for (auto engine : engines)
    {
      // First UEngine is usually a dud
      if (!engine->ConsoleClass)
        continue;

      thisptr->ViewportConsole = (UConsole*)StaticConstructObject_Internal(engine->ConsoleClass, thisptr, 0, 0, 0, 0, 0, 0, 0);
      break;
    }
  }

  return ret;
}

template <typename T>
void SafeWrite(uintptr_t address, T value)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T), PAGE_READWRITE, &oldProtect);
  *reinterpret_cast<T*>(address) = value;
  VirtualProtect((LPVOID)address, sizeof(T), oldProtect, &oldProtect);
}

void InitPlugin()
{
  mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA("DRAGON QUEST XI S.exe"));

  if (!mBaseAddress)
    return;

  UObject::AllowFunctionCalls = false;
  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + 0x5D83BF8);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + 0x5D7AE20);

  BindAction = reinterpret_cast<BindActionFn>(mBaseAddress + 0x6AA7A0);
  FNameCreate = reinterpret_cast<FNameCreateFn>(mBaseAddress + 0xD697D0);

  MH_Initialize();

  MH_CreateHook((LPVOID)(mBaseAddress + 0x914E60), SetsCharacterViewerResolution_Hook, (LPVOID*)&SetsCharacterViewerResolution_Orig);
  MH_CreateHook((LPVOID)(mBaseAddress + 0x629560), InitActionMappings_Field_Hook, (LPVOID*)&InitActionMappings_Field_Orig);

  MH_CreateHook((LPVOID)(mBaseAddress + 0x1AA5050), UGameViewportClient__SetupInitialLocalPlayer_Hook, (LPVOID*)&UGameViewportClient__SetupInitialLocalPlayer_Orig);

  MH_EnableHook(MH_ALL_HOOKS);

  // Disable ExcludedDebugPackage* variables by renaming them
  SafeWrite<uint8_t>(mBaseAddress + 0x367FA48, 0x44);
  SafeWrite<uint8_t>(mBaseAddress + 0x3680100, 0x44);
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

      bool Proxy_Attach(); // proxy.cpp
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
