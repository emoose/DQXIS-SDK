#include "pch.h"

// Code to enable dev-console & allow loading loose/unpacked files
// Originally part of DQXIHook

// UGameViewportClient::SetupInitialLocalPlayer hook, allows us to set ViewportConsole
// and with that, the UE4 dev console will be available even in Shipping builds!
StaticConstructObject_InternalFn StaticConstructObject_Internal = nullptr;

typedef void* (*UGameViewportClient__SetupInitialLocalPlayerFn)(UGameViewportClient* thisptr, void* OutError);
UGameViewportClient__SetupInitialLocalPlayerFn UGameViewportClient__SetupInitialLocalPlayer_Orig;
void SetupViewportConsole(UGameViewportClient* viewport)
{
  if (viewport->ViewportConsole)
    return; // already has console;

  auto engines = UObject::FindObjects<UEngine>();
  for (auto engine : engines)
  {
    // First UEngine is usually a dud
    if (!engine->ConsoleClass)
      continue;

    viewport->ViewportConsole = g_Console = (UConsole*)StaticConstructObject_Internal(engine->ConsoleClass, viewport, 0, 0, 0, 0, 0, 0, 0);
    if (viewport->ViewportConsole)
      break;
  }
}

void* UGameViewportClient__SetupInitialLocalPlayer_Hook(UGameViewportClient* thisptr, void* OutError)
{
  auto ret = UGameViewportClient__SetupInitialLocalPlayer_Orig(thisptr, OutError);

  SetupViewportConsole(thisptr);

  return ret;
}

typedef void* (*FPakPlatformFile__FindFileInPakFilesFn)(void* Paks, const TCHAR* Filename, void** OutPakFile);
typedef bool (*FPakPlatformFile__IsNonPakFilenameAllowedFn)(void* thisptr, const FString& InFilename);

const wchar_t* gameDataStart = L"../../../"; // seems to be at the start of every game path

// FPakPlatformFile::FindFileInPakFiles hook: this will check for any loose file with the same filename
// If a loose file is found will return null (ie: saying that the .pak doesn't contain it)
// 90% of UE4 games will then try loading loose files, luckily DQXI is part of that 90% :D
FPakPlatformFile__FindFileInPakFilesFn FPakPlatformFile__FindFileInPakFiles_Orig;
void* FPakPlatformFile__FindFileInPakFiles_Hook(void* Paks, const TCHAR* Filename, void** OutPakFile)
{
  if (OutPakFile)
    *OutPakFile = nullptr;

  if (Filename && wcsstr(Filename, gameDataStart) && FileExists(Filename))
    return 0; // file exists, tell game it's not in pak

  return FPakPlatformFile__FindFileInPakFiles_Orig(Paks, Filename, OutPakFile);
}

FPakPlatformFile__IsNonPakFilenameAllowedFn FPakPlatformFile__IsNonPakFilenameAllowed_Orig;
bool FPakPlatformFile__IsNonPakFilenameAllowed_Hook(void* thisptr, const FString& InFilename)
{
  return 1;
}

typedef void(*FTripleModule__StartupModule_Fn)(FTripleModule*);
FTripleModule__StartupModule_Fn FTripleModule__StartupModule__Orig;

typedef UObject*(*UClass__CreateDefaultObject_Fn)(UClass*);
void FTripleModule__StartupModule__Hook(FTripleModule* thisptr)
{
  FTripleModule__StartupModule__Orig(thisptr);

  // CheatManager field needs to be filled with a UTripleCheatManager object
  auto cheatClass = UTripleCheatManager::StaticClass();
  if (!cheatClass->ClassDefaultObject)
    cheatClass->CreateDefaultObject();

  thisptr->CheatManager = cheatClass->ClassDefaultObject;
}

void Init_DQXIHook()
{
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + GameAddrs->StaticConstructObject_Internal);

  if (Options.EnableDevConsole)
  {
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->UGameViewportClient__SetupInitialLocalPlayer), UGameViewportClient__SetupInitialLocalPlayer_Hook, (LPVOID*)&UGameViewportClient__SetupInitialLocalPlayer_Orig);
    
    // Unlock Triple (2D mode) cheats while we're at it
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->FTripleModule__StartupModule), FTripleModule__StartupModule__Hook, (LPVOID*)&FTripleModule__StartupModule__Orig);
  }

  if (Options.LoadUnpackedFiles)
  {
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->FPakPlatformFile__FindFileInPakFiles), FPakPlatformFile__FindFileInPakFiles_Hook, (LPVOID*)&FPakPlatformFile__FindFileInPakFiles_Orig);
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->FPakPlatformFile__IsNonPakFilenameAllowed), FPakPlatformFile__IsNonPakFilenameAllowed_Hook, (LPVOID*)&FPakPlatformFile__IsNonPakFilenameAllowed_Orig);
  }

  if (UObject::GObjects->ObjObjects.Num())
  {
    // Objects is already filled, likely DLL has been injected instead of being ran at startup
    // Search for UGameViewportClient and apply the dev-console enabler
    auto viewports = UObject::FindObjects<UGameViewportClient>();
    for (auto viewport : viewports)
    {
      if (!viewport->World || !viewport->GameInstance)
        continue; // dud object

      SetupViewportConsole(viewport);
    }
  }
}
