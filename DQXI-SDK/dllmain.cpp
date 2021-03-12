// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <fstream>
#include <sstream>
#include <Shlobj.h>
#include <filesystem>

using namespace SDK;

HMODULE GameHModule;
uintptr_t mBaseAddress;

UConsole* g_Console = nullptr;
UJackGameplayStatics* g_StaticFuncs = nullptr;

IniSettings Options;

// Cached things so we don't need any lookups during runtime
extern FName CamStyle_FirstPersonView;
extern FName CamStyle_FirstPerson;
extern FName CamStyle_Normal;

typedef void (*InitActionMappingsFn)(AActor* thisptr);
InitActionMappingsFn InitActionMappings_Field_Orig;

void CacheUFunctions()
{
  CamStyle_FirstPersonView = FName("FirstPersonView", 1);
  CamStyle_FirstPerson = FName("FirstPerson", 1);
  CamStyle_Normal = FName("Normal", 1);

  g_StaticFuncs = UObject::FindObject<UJackGameplayStatics>();

  // Prevent UFunctions from actually being called, we just want wrapper to cache the addr of them
  UObject::AllowFunctionCalls = false;

  AJackCharacter character;
  character.SetHiddenControl(EJackCharacterHiddenPurpose::EJackCharacterHiddenPurpose__LVD, false, false);

  AJackFieldPlayerController playerController;
  playerController.Camera(nullptr);
  playerController.NakamaKaiwa();

  AJackPlayerCameraManager cameraManager;
  cameraManager.SetHiddenControlBeginOverlapEnabled(true);

  UJackGameplayStatics statics;
  statics.STATIC_GetJackGamePlayer(nullptr);
  statics.STATIC_GetJackPlayerCameraManager(nullptr);
  statics.STATIC_GetJackPlayerCharacter(nullptr, 1);
  statics.STATIC_GetJackPlayerController(nullptr);
  statics.STATIC_GetPlayerPawn(nullptr, EJackPlayerController::EJackPlayerController__Player1);

  UJackGamePlayerCondition condition;
  condition.IsCondition(EJackGamePlayerCondition::EJackGamePlayerCondition__MoveInputDisable);

  UObject::AllowFunctionCalls = true;
}

void InitActionMappings_Field_Hook(AJackFieldPlayerController* thisptr)
{
  InitActionMappings_Field_Orig(thisptr);

  FName name("FirstPersonCamera", 1);
  thisptr->InputComponent->BindAction(name, EInputEvent::IE_Pressed, thisptr, FirstPersonCamera);

  name = FName("EnterPartyChat", 1);
  thisptr->InputComponent->BindAction(name, EInputEvent::IE_Pressed, thisptr, EnterPartyChat);

  // EnterNakamaKaiwa is apparently original name, based on INI files
  name = FName("EnterNakamaKaiwa", 1);
  thisptr->InputComponent->BindAction(name, EInputEvent::IE_Pressed, thisptr, EnterPartyChat);

  // Cache our UFunctions & FNames
  CacheUFunctions(); // moved to reduce stack usage of this func

  OnLoad_FirstPerson();

  // A render resolution variable used by game in a few spots, always set to 1920x1080
  // Doesn't seem to ever get changed, maybe something was broken during UE4 engine update
  // CharacterCaptureCamera calc uses (720 / this) as a render scale, was maybe meant to be (this / 720)?
  // Setting it to 1280x720 should allow things to render at 1x scale
  UnsafeWriteModule<int32_t>(0x5896CC0, 1280);
  UnsafeWriteModule<int32_t>(0x5896CC4, 720);

  // Fixes for some common misconfigurations
  // TODO: move these to an AfterConfigIniRead hook, so they only get applied once per session
  if (Options.FixCommonMisconfigs)
  {
    // set r.JackLoadReduction.DisableMovementModeOptimization to 0, fixes floating NPCs
    auto* disableMovementModeOptimization = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + GameAddrs->Cvar_DisableMovementModeOptimization);
    if (disableMovementModeOptimization && disableMovementModeOptimization->GetInt() != 0)
    {
      disableMovementModeOptimization->Set(L"0");
      if (g_Console)
        g_Console->OutputText(L">>> DQXIS-SDK: detected misconfigured r.JackLoadReduction.DisableMovementModeOptimization cvar, has been set to 0 to fix floating NPCs");
    }

    // set r.JackLoadReduction.DisableDitherHidden to 0, allows NPCs to fade in/out instead of popping
    auto* disableDitherHidden = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + GameAddrs->Cvar_DisableDitherHidden);
    if (disableDitherHidden && disableDitherHidden->GetInt() != 0)
    {
      disableDitherHidden->Set(L"0");
      if (g_Console)
        g_Console->OutputText(L">>> DQXIS-SDK: detected misconfigured r.JackLoadReduction.DisableDitherHidden cvar, has been set to 0 to fix NPC fading");
    }

    // set r.Shadow.FilterMethod to 0 as 1 seems to break shadows (but still gets recommended by some ancient UE4 mod guides...)
    auto* shadowFilterMethod = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + GameAddrs->Cvar_ShadowFilterMethod);
    if (shadowFilterMethod && shadowFilterMethod->GetInt() != 0)
    {
      shadowFilterMethod->Set(L"0");
      if (g_Console)
        g_Console->OutputText(L">>> DQXIS-SDK: detected misconfigured r.Shadow.FilterMethod cvar, has been set to 0 to fix shadows");
    }
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
    auto* screenPercentageCVar = *reinterpret_cast<IConsoleVariable**>(mBaseAddress + GameAddrs->Cvar_ScreenPercentage); // r.ScreenPercentage address

    // Scale display width/height by percentage
    float screenPercentageMult = max(screenPercentageCVar->GetFloat(), 1) / 100.f;
    screenPercentageMult = min(screenPercentageMult, 4); // 400% seems to be max allowed by UE4, so we'll limit to that too

    userResolutionX = (int)((float)userResolutionX * screenPercentageMult);
    userResolutionY = (int)((float)userResolutionY * screenPercentageMult);

    // Apply new resolution to the render texture
    auto* texture = camera->CaptureComponent2D->TextureTarget;
    texture->JackTargetSizeX = userResolutionX;
    texture->JackTargetSizeY = userResolutionY;

    // Prevent render texture from being affected by r.TextureRenderTarget2DScale cvar
    texture->bAutoScaling = false;
  }

  SetsCharacterViewerResolution_Orig(camera, rdx);
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

float INI_GetFloat(const WCHAR* IniPath, const WCHAR* Section, const WCHAR* Key, float DefaultValue)
{
  float retVal = false;
  if (GetPrivateProfileString(Section, Key, std::to_wstring(DefaultValue).c_str(), IniData, 256, IniPath) > 0)
    retVal = std::stof(IniData);
  return retVal;
}

bool TryLoadINIOptions(const WCHAR* IniFilePath)
{
  // Read config INI from given folder

  if (!FileExists(IniFilePath))
    return false;

  // Store ini path in case it's ever needed later
  wcscpy_s(IniPath, IniFilePath);

  Options.RenderFix = INI_GetBool(IniPath, L"Patches", L"RenderFix", Options.RenderFix);
  Options.CustomActions = INI_GetBool(IniPath, L"Patches", L"CustomActions", Options.CustomActions);
  Options.EnableDevConsole = INI_GetBool(IniPath, L"Patches", L"EnableDevConsole", Options.EnableDevConsole);
  Options.LoadUnpackedFiles = INI_GetBool(IniPath, L"Patches", L"LoadUnpackedFiles", Options.LoadUnpackedFiles);
  Options.AllowDebugPackages = INI_GetBool(IniPath, L"Patches", L"AllowDebugPackages", Options.AllowDebugPackages);
  Options.FixCommonMisconfigs = INI_GetBool(IniPath, L"Patches", L"FixCommonMisconfigs", Options.FixCommonMisconfigs);
  Options.BindFromInputIniOnly = INI_GetBool(IniPath, L"Patches", L"BindFromInputIniOnly", Options.BindFromInputIniOnly);

  Options.FirstPersonWherever = INI_GetBool(IniPath, L"FirstPerson", L"UseWherever", Options.FirstPersonWherever);
  Options.FirstPersonMovable = INI_GetBool(IniPath, L"FirstPerson", L"UseMovableCamera", Options.FirstPersonMovable);
  Options.FirstPersonMovableHeight = INI_GetFloat(IniPath, L"FirstPerson", L"MovableCameraHeight", Options.FirstPersonMovableHeight);

  // Check old INI names
  if (INI_GetBool(IniPath, L"Patches", L"BindFromIniOnly", false))
    Options.BindFromInputIniOnly = true;

  return true;
}

bool TrySearchINI(const std::wstring_view& FolderPath)
{
  for (const auto& entry : std::filesystem::recursive_directory_iterator(FolderPath))
  {
    if (entry.path().filename().generic_wstring() == L"DQXIS-SDK.ini")
      if (TryLoadINIOptions(entry.path().generic_wstring().c_str()))
        return true;
  }

  return false;
}

void InitPlugin()
{
  GameHModule = GetModuleHandleA("DRAGON QUEST XI S.exe");

  if (!GameHModule)
    return;

  mBaseAddress = reinterpret_cast<uintptr_t>(GameHModule);

  if (!UpdateGameAddrs())
  {
    MessageBoxW(NULL, L"DQXIS-SDK doesn't support current game version, maybe check for an update?", L"DQXIS-SDK", MB_ICONEXCLAMATION);
    return;
  }

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
    swprintf_s(IniPath, L"%s/DQXIS-SDK.ini", IniPath);
    
    if (!TryLoadINIOptions(IniPath))
    {
      // Failed to find INI inside EXE dir, try searching inside documents folders

      PWSTR path = NULL;

      HRESULT hr = SHGetKnownFolderPath(FOLDERID_Documents, 0, NULL, &path);

      if (SUCCEEDED(hr)) {
        std::wstring documents = path;

        if (!TrySearchINI(documents + L"\\My Games\\DRAGON QUEST XI S"))
          TrySearchINI(documents + L"\\My Games\\ドラゴンクエスト XI S");
      }

      CoTaskMemFree(path);
    }
  }

  UObject::GObjects = reinterpret_cast<FUObjectArray*>(mBaseAddress + GameAddrs->GUObjectArray);
  FName::GNames = reinterpret_cast<TNameEntryArray*>(mBaseAddress + GameAddrs->Names);

  UInputComponent::BindAction_Ptr = reinterpret_cast<UInputComponent::BindAction_Fn>(mBaseAddress + GameAddrs->UInputComponent__BindAction);
  FName::Ctor_Ptr = reinterpret_cast<FName::Ctor_Fn>(mBaseAddress + GameAddrs->FName__Ctor);
  FString::Printf = reinterpret_cast<FString::Printf__VA_Fn>(mBaseAddress + GameAddrs->FString__Printf__VA);

  MH_Initialize();

  if (Options.RenderFix)
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->SetsCharacterViewerResolution), SetsCharacterViewerResolution_Hook, (LPVOID*)&SetsCharacterViewerResolution_Orig);

  if (Options.CustomActions)
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->InitActionMappings_Field), InitActionMappings_Field_Hook, (LPVOID*)&InitActionMappings_Field_Orig);

  // Disable ExcludedDebugPackage* variables by renaming them
  if (Options.AllowDebugPackages)
  {
    if (GameAddrs->ExcludedDebugPackage_1)
      SafeWriteModule<uint8_t>(GameAddrs->ExcludedDebugPackage_1, 0x44);
    if (GameAddrs->ExcludedDebugPackage_2)
      SafeWriteModule<uint8_t>(GameAddrs->ExcludedDebugPackage_2, 0x44);
  }

  // Only allows bindings from Input.ini, prevents game EXE from creating any that could collide with any custom binds
  if (Options.BindFromInputIniOnly)
  {
    // Stub game functions that generate ActionMappings, as we only want mappings from Input.ini
    if (GameAddrs->GenerateActionMappings_1)
      SafeWriteModule<uint8_t>(GameAddrs->GenerateActionMappings_1, 0xC3);
    if (GameAddrs->GenerateActionMappings_2)
      SafeWriteModule<uint8_t>(GameAddrs->GenerateActionMappings_2, 0xC3);

    // Hook GetSourceIniFilename so we can make game ignore DefaultInput.ini
    // (We only want Input.ini to be the source of bindings)
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->GetSourceIniFilename), GetSourceIniFilename_Hook, (LPVOID*)&GetSourceIniFilename_Orig);

    // Hook FPaths::GeneratedConfigDir so we can check for Input.ini existence before game opens it
    MH_CreateHook((LPVOID)(mBaseAddress + GameAddrs->FPaths__GeneratedConfigDir), FPaths__GeneratedConfigDir_Hook, (LPVOID*)&FPaths__GeneratedConfigDir_Orig);
  }

  Init_FirstPerson();

  Init_DQXIHook();

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
