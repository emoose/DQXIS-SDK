// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "SDK.h"
#include <fstream>
#include "MinHook.h"

using namespace SDK;

uintptr_t mBaseAddress;

typedef void (*SetsCharacterViewerResolutionFn)(AJackCharacterCaptureCamera*, void*);
SetsCharacterViewerResolutionFn SetsCharacterViewerResolution_Orig;

int userResolutionX = 0;
int userResolutionY = 0;

void SetsCharacterViewerResolution_Hook(AJackCharacterCaptureCamera* camera, void* rdx)
{
  if (!userResolutionX || !userResolutionY)
  {
    // Init SDK
    UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + 0x5D83BF8);
    FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + 0x5D7AE20);

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

    // A render resolution variable used by game in a few spots, set to 1920x1080
    // Doesn't seem to ever get changed, maybe something was broken during UE4 engine update
    // CharacterCaptureCamera calc uses (720 / this) as a render scale, was maybe meant to be (this / 720)?
    // Setting it to 1280x720 should allow things to render at 1x scale
    *(DWORD*)(mBaseAddress + 0x5896CC0) = 1280;
    *(DWORD*)(mBaseAddress + 0x5896CC4) = 720;
  }

  if (userResolutionX && userResolutionY)
  {
    auto* texture = camera->CaptureComponent2D->TextureTarget;
    if (texture->JackTargetSizeX == 1920 && texture->JackTargetSizeY == 1080) {
      texture->JackTargetSizeX = userResolutionX;
      texture->JackTargetSizeY = userResolutionY;
    }
  }

  SetsCharacterViewerResolution_Orig(camera, rdx);
}

void InitPlugin()
{
  mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA("DRAGON QUEST XI S.exe"));

  if (!mBaseAddress)
    return;

  MH_Initialize();

  MH_CreateHook((LPVOID)(mBaseAddress + 0x914E60), SetsCharacterViewerResolution_Hook, (LPVOID*)&SetsCharacterViewerResolution_Orig);
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

