#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#include "MinHook/MinHook.h"

#include "SDK.h"
using namespace SDK;

#include "ConsoleVariable.h"

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