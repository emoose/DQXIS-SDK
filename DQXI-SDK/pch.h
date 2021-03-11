#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include "MinHook/MinHook.h"

struct IniSettings {
  bool RenderFix = true;
  bool CustomActions = true;
  bool FirstPersonWherever = false;
  bool FirstPersonMovable = false;
  float FirstPersonMovableHeight = 64.f;
  bool EnableDevConsole = true;
  bool LoadUnpackedFiles = true;
  bool AllowDebugPackages = true;
  bool FixCommonMisconfigs = true;
  bool BindFromInputIniOnly = false;
};

struct GameAddresses
{
  // Check data
  uintptr_t CheckDataAddr;
  unsigned int CheckData;

  // Variables
  uintptr_t GUObjectArray; // aka GObjects
  uintptr_t Names; // aka GNames, "TNameEntryArray* Names"

  uintptr_t Cvar_ScreenPercentage;
  uintptr_t Cvar_DisableMovementModeOptimization;
  uintptr_t Cvar_DisableDitherHidden;
  uintptr_t Cvar_ShadowFilterMethod;

  uintptr_t ExcludedDebugPackage_1;
  uintptr_t ExcludedDebugPackage_2;

  // Functions
  uintptr_t UObject__ProcessEvent;
  uintptr_t BindAction;
  uintptr_t FNameCreate;
  uintptr_t FStringPrintf;
  uintptr_t StaticConstructObject_Internal;
  
  // Hooked functions
  uintptr_t SetsCharacterViewerResolution;
  uintptr_t InitActionMappings_Field;
  uintptr_t GetSourceIniFilename;
  uintptr_t FPaths__GeneratedConfigDir;

  // Stubbed functions
  uintptr_t GenerateActionMappings_1;
  uintptr_t GenerateActionMappings_2;

  // DQXIHook hooked funcs
  uintptr_t UGameViewportClient__SetupInitialLocalPlayer;
  uintptr_t FPakPlatformFile__FindFileInPakFiles;
  uintptr_t FPakPlatformFile__IsNonPakFilenameAllowed;

  // FirstPerson hooked funcs
  uintptr_t AJackPlayerController__PushCameraMode;
  uintptr_t AJackPlayerController__PopCameraMode;
  uintptr_t CameraInterpolate;
  uintptr_t UJackGamePlayer__UpdateRidingVehicle;
  uintptr_t APawn__RecalculateBaseEyeHeight;
  uintptr_t AJackBattleManager__BattleInitialize;
  uintptr_t AJackBattleManager__BattleFinalize;

  bool CheckDataValid();
};

// GameAddresses.cpp
extern GameAddresses* GameAddrs;
bool UpdateGameAddrs();

#include "SDK.h"
using namespace SDK;

#include "ConsoleVariable.h"

// dllmain.cpp
typedef void(*FStringPrintf_Fn)(FString* fstring, const TCHAR* format, ...);
extern FStringPrintf_Fn FStringPrintf;

extern IniSettings Options;
extern UConsole* g_Console;
extern UJackGameplayStatics* g_StaticFuncs;

// CustomActions.cpp
void FirstPersonCamera(AJackFieldPlayerController* playerController);
void EnterPartyChat(AJackFieldPlayerController* playerController);

// DQXIHook.cpp
void Init_DQXIHook();

// FirstPerson.cpp
bool IsPlayerMovementEnabled(AActor* actor);
void SetMovableFirstPersonCam(AActor* actor, bool IsFirstPerson);
void OnLoad_FirstPerson();
void Init_FirstPerson();

// Utility.cpp
bool FileExists(const WCHAR* Filename);

template <typename T>
void SafeWrite(uintptr_t address, T value)
{
  DWORD oldProtect = 0;
  VirtualProtect((LPVOID)address, sizeof(T), PAGE_READWRITE, &oldProtect);
  *reinterpret_cast<T*>(address) = value;
  VirtualProtect((LPVOID)address, sizeof(T), oldProtect, &oldProtect);
}

template <typename T>
void SafeWriteModule(uintptr_t offset, T value)
{
  SafeWrite<T>(mBaseAddress + offset, value);
}

// Same as SafeWrite but doesn't VirtualProtect first, more efficient if you already know the memory is writable!
template <typename T>
inline void UnsafeWriteModule(uintptr_t offset, T value)
{
  *reinterpret_cast<T*>(mBaseAddress + offset) = value;
}