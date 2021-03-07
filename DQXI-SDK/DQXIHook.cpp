#include "pch.h"

// Code to enable dev-console & allow loading loose/unpacked files
// Originally part of DQXIHook

// UGameViewportClient::SetupInitialLocalPlayer hook, allows us to set ViewportConsole
// and with that, the UE4 dev console will be available even in Shipping builds!
typedef void* (*StaticConstructObject_InternalFn)(UClass* Class, UObject* InOuter, FName Name, void* SetFlags, void* InternalSetFlags, UObject* Template, bool bCopyTransientsFromClassDefaults, struct FObjectInstancingGraph* InstanceGraph, bool bAssumeTemplateIsArchetype);
StaticConstructObject_InternalFn StaticConstructObject_Internal = nullptr;

typedef void* (*UGameViewportClient__SetupInitialLocalPlayerFn)(UGameViewportClient* thisptr, void* OutError);
UGameViewportClient__SetupInitialLocalPlayerFn UGameViewportClient__SetupInitialLocalPlayer_Orig;

void* UGameViewportClient__SetupInitialLocalPlayer_Hook(UGameViewportClient* thisptr, void* OutError)
{
  auto ret = UGameViewportClient__SetupInitialLocalPlayer_Orig(thisptr, OutError);

  if (!thisptr->ViewportConsole) {
    auto engines = UObject::FindObjects<UEngine>();
    for (auto engine : engines)
    {
      // First UEngine is usually a dud
      if (!engine->ConsoleClass)
        continue;

      thisptr->ViewportConsole = g_Console = (UConsole*)StaticConstructObject_Internal(engine->ConsoleClass, thisptr, 0, 0, 0, 0, 0, 0, 0);
      if (thisptr->ViewportConsole)
        break;
    }
  }

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

void Init_DQXIHook()
{
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + 0xF16220);

  if (Options.EnableDevConsole)
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1AA5050), UGameViewportClient__SetupInitialLocalPlayer_Hook, (LPVOID*)&UGameViewportClient__SetupInitialLocalPlayer_Orig);

  if (Options.LoadUnpackedFiles)
  {
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1F653E0), FPakPlatformFile__FindFileInPakFiles_Hook, (LPVOID*)&FPakPlatformFile__FindFileInPakFiles_Orig);
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1F68680), FPakPlatformFile__IsNonPakFilenameAllowed_Hook, (LPVOID*)&FPakPlatformFile__IsNonPakFilenameAllowed_Orig);
  }
}