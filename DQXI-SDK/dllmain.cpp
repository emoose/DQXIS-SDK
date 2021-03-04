// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "SDK.h"
#include <fstream>
#include "MinHook.h"
#include "ConsoleVariable.h"
#include <sstream>

using namespace SDK;

HMODULE GameHModule;
uintptr_t mBaseAddress;

struct {
  bool RenderFix = true;
  bool CustomActions = true;
  bool EnableDevConsole = true;
  bool LoadUnpackedFiles = true;
  bool AllowDebugPackages = true;
  bool FixCommonMisconfigs = true;
  bool BindFromInputIniOnly = false;
} Options;

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

bool FileExists(const WCHAR* Filename)
{
  DWORD dwAttrib = GetFileAttributesW(Filename);
  return (dwAttrib != INVALID_FILE_ATTRIBUTES && !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}

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
  UnsafeWriteModule<int32_t>(0x5896CC0, 1280);
  UnsafeWriteModule<int32_t>(0x5896CC4, 720);

  // Fixes for some common misconfigurations
  // TODO: move these to an AfterConfigIniRead hook, so they only get applied once per session
  if(Options.FixCommonMisconfigs)
  {
    // set r.JackLoadReduction.DisableMovementModeOptimization to 0, fixes floating NPCs
    auto* disableMovementModeOptimization = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + 0x5BFBDB8);
    if (disableMovementModeOptimization && disableMovementModeOptimization->GetInt() != 0)
        disableMovementModeOptimization->Set(L"0");

    // set r.JackLoadReduction.DisableDitherHidden to 0, allows NPCs to fade in/out instead of popping
    auto* disableDitherHidden = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + 0x5BFBDE8);
    if (disableDitherHidden && disableDitherHidden->GetInt() != 0)
      disableDitherHidden->Set(L"0");

    // set r.Shadow.FilterMethod to 0 as 1 seems to break shadows (but still gets recommended by some ancient UE4 mod guides...)
    auto* shadowFilterMethod = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + 0x5E18AD0);
    if (shadowFilterMethod && shadowFilterMethod->GetInt() != 0)
      shadowFilterMethod->Set(L"0");
  }
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
    auto* screenPercentageCVar = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + 0x5C48810); // r.ScreenPercentage address

    // Scale display width/height by percentage
    float screenPercentageMult = max(screenPercentageCVar->GetFloat(), 1) / 100.f;
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

      thisptr->ViewportConsole = (UConsole*)StaticConstructObject_Internal(engine->ConsoleClass, thisptr, 0, 0, 0, 0, 0, 0, 0);
      if(thisptr->ViewportConsole)
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

// Hook FPaths::GeneratedConfigDir so we can check for Input.ini existence before game opens it
typedef FString(*FPaths__GeneratedConfigDirFn)();
FPaths__GeneratedConfigDirFn FPaths__GeneratedConfigDir_Orig;
FString FPaths__GeneratedConfigDir_Hook()
{
  static bool UserWarned = false;

  auto configDir = FPaths__GeneratedConfigDir_Orig();
  if (UserWarned)
    return configDir;

  UserWarned = true;

  std::wstring configPath = configDir.c_str();
  configPath += L"WindowsNoEditor/Input.ini";

  bool hasActionBind = false;
  bool hasAxisBind = false;
  const std::string actionBind = "ActionMappings=";
  const std::string axisBind = "AxisMappings=";

  std::ifstream iniStream(configPath);
  if (iniStream.is_open())
  {
    // Search for any action/axis binds
    std::string line;
    while (std::getline(iniStream, line))
    {
      if (!hasActionBind && line.substr(0, actionBind.length()) == actionBind)
        hasActionBind = true;
      if (!hasAxisBind && line.substr(0, axisBind.length()) == axisBind)
        hasAxisBind = true;

      if (hasActionBind && hasAxisBind)
        break; // found both types :)
    }
  }
  iniStream.close();

  if (hasActionBind && hasAxisBind)
    return configDir;

  std::wstringstream warning;
  warning << L"Warning: you're using 'BindFromInputIniOnly' without setting up binds inside Input.ini!\r\n";
  warning << L"Do you want DQXIS-SDK to set up a default Input.ini file?\r\n";
  warning << L"(DQXI won't respond properly without these binds being setup)\r\n";
  warning << L"INI path: " << configPath;
  if (MessageBoxW(NULL, warning.str().c_str(), L"DQXIS-SDK", MB_YESNO | MB_ICONEXCLAMATION) == IDYES)
  {
    std::ofstream iniOutStream(configPath, std::ios::trunc);
    if (!iniOutStream.is_open())
    {
      warning.clear();
      warning << L"Error: failed to open Input.ini file for writing...\r\n";
      warning << L"Game likely still won't respond properly!\r\n";
      warning << L"INI path: " << configPath;
      MessageBoxW(NULL, warning.str().c_str(), L"DQXIS-SDK", MB_ICONEXCLAMATION);
    }
    else
    {
      extern const char* DefaultInputIni;
      iniOutStream << DefaultInputIni;
      iniOutStream.close();
    }
  }

  return configDir;
}

typedef FString(*GetSourceIniFilenameFn)(const TCHAR* ConfigDir, const TCHAR* Prefix, const TCHAR* BaseIniName);
GetSourceIniFilenameFn GetSourceIniFilename_Orig;
static FString GetSourceIniFilename_Hook(const TCHAR* ConfigDir, const TCHAR* Prefix, const TCHAR* BaseIniName)
{
  // Check if this is INI we want to ignore
  if (wcscmp(BaseIniName, L"Input") == 0 && wcscmp(Prefix, L"Default") == 0 && wcscmp(ConfigDir, L"../../../Game/Config/") == 0)
    // Change BaseIniName to prevent default ini from being loaded
    BaseIniName = L"InputForced";

  return GetSourceIniFilename_Orig(ConfigDir, Prefix, BaseIniName);
}

WCHAR IniPath[4096];
WCHAR IniData[256];
bool INI_GetBool(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, bool DefaultValue)
{
  bool retVal = false;
  if (GetPrivateProfileString(Section, Key, DefaultValue ? L"true" : L"false", IniData, 256, IniPath) > 0)
    retVal = (wcscmp(IniData, L"true") == 0 || wcscmp(IniData, L"1") == 0 || wcscmp(IniData, L"yes") == 0);
  return retVal;
}

void InitPlugin()
{
  GameHModule = GetModuleHandleA("DRAGON QUEST XI S.exe");

  if (!GameHModule)
    return;

  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  // Get folder path of currently running EXE
  GetModuleFileName(GameHModule, IniPath, 4096);
  int len = wcslen(IniPath);
  int lastPathSep = -1;
  for (int i = len - 2; i >= 0; i--)
  {
    if (IniPath[i] == '\\' || IniPath[i] == '/')
    {
      lastPathSep = i;
      break;
    }
  }

  if (lastPathSep >= 0)
  {
    IniPath[lastPathSep + 1] = 0;

    // Read config INI from EXE's folder
    swprintf_s(IniPath, L"%sDQXIS-SDK.ini", IniPath);

    if (FileExists(IniPath))
    {
      Options.RenderFix = INI_GetBool(IniPath, L"Patches", L"RenderFix", Options.RenderFix);
      Options.CustomActions = INI_GetBool(IniPath, L"Patches", L"CustomActions", Options.CustomActions);
      Options.EnableDevConsole = INI_GetBool(IniPath, L"Patches", L"EnableDevConsole", Options.EnableDevConsole);
      Options.LoadUnpackedFiles = INI_GetBool(IniPath, L"Patches", L"LoadUnpackedFiles", Options.LoadUnpackedFiles);
      Options.AllowDebugPackages = INI_GetBool(IniPath, L"Patches", L"AllowDebugPackages", Options.AllowDebugPackages);
      Options.FixCommonMisconfigs = INI_GetBool(IniPath, L"Patches", L"FixCommonMisconfigs", Options.FixCommonMisconfigs);
      Options.BindFromInputIniOnly = INI_GetBool(IniPath, L"Patches", L"BindFromInputIniOnly", Options.BindFromInputIniOnly);

      // Check old INI names
      if (INI_GetBool(IniPath, L"Patches", L"BindFromIniOnly", false))
        Options.BindFromInputIniOnly = true;
    }
  }

  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + 0x5D83BF8);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + 0x5D7AE20);

  BindAction = reinterpret_cast<BindActionFn>(mBaseAddress + 0x6AA7A0);
  FNameCreate = reinterpret_cast<FNameCreateFn>(mBaseAddress + 0xD697D0);
  StaticConstructObject_Internal = reinterpret_cast<StaticConstructObject_InternalFn>(mBaseAddress + 0xF16220);

  MH_Initialize();

  if (Options.RenderFix)
    MH_CreateHook((LPVOID)(mBaseAddress + 0x914E60), SetsCharacterViewerResolution_Hook, (LPVOID*)&SetsCharacterViewerResolution_Orig);

  if (Options.CustomActions)
    MH_CreateHook((LPVOID)(mBaseAddress + 0x629560), InitActionMappings_Field_Hook, (LPVOID*)&InitActionMappings_Field_Orig);

  if (Options.EnableDevConsole)
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1AA5050), UGameViewportClient__SetupInitialLocalPlayer_Hook, (LPVOID*)&UGameViewportClient__SetupInitialLocalPlayer_Orig);

  if (Options.LoadUnpackedFiles)
  {
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1F653E0), FPakPlatformFile__FindFileInPakFiles_Hook, (LPVOID*)&FPakPlatformFile__FindFileInPakFiles_Orig);
    MH_CreateHook((LPVOID)(mBaseAddress + 0x1F68680), FPakPlatformFile__IsNonPakFilenameAllowed_Hook, (LPVOID*)&FPakPlatformFile__IsNonPakFilenameAllowed_Orig);
  }

  // Disable ExcludedDebugPackage* variables by renaming them
  if (Options.AllowDebugPackages)
  {
    SafeWriteModule<uint8_t>(0x367FA48, 0x44);
    SafeWriteModule<uint8_t>(0x3680100, 0x44);
  }

  // Only allows bindings from Input.ini, prevents game EXE from creating any that could collide with any custom binds
  if (Options.BindFromInputIniOnly)
  {
    SafeWriteModule<uint8_t>(0x75A200, 0xC3);
    SafeWriteModule<uint8_t>(0x7D0DF0, 0xC3);

    // Hook GetSourceIniFilename so we can make game ignore DefaultInput.ini
    // (We only want Input.ini to be the source of bindings)
    MH_CreateHook((LPVOID)(mBaseAddress + 0xD2E700), GetSourceIniFilename_Hook, (LPVOID*)&GetSourceIniFilename_Orig);

    // Hook FPaths::GeneratedConfigDir so we can check for Input.ini existence before game opens it
    MH_CreateHook((LPVOID)(mBaseAddress + 0xD4F480), FPaths__GeneratedConfigDir_Hook, (LPVOID*)&FPaths__GeneratedConfigDir_Orig);
  }

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
