#include "pch.h"

GameAddresses GameAddrs_Steam =
{
  .CheckDataAddr = 0xD8,   // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1607981102, // 2020/12/14 21:25:02

  .GUObjectArray = 0x5D83BF8,
  .Names = 0x5D7AE20,

  .Cvar_ScreenPercentage = 0x5C48810,
  .Cvar_DisableMovementModeOptimization = 0x5BFBDB8,
  .Cvar_DisableDitherHidden = 0x5BFBDE8,
  .Cvar_ShadowFilterMethod = 0x5E18AD0,

  .ExcludedDebugPackage_1 = 0x367FA48,
  .ExcludedDebugPackage_2 = 0x3680100,

  .RenderScaleDefault_Width = 0x5896CC0,
  .RenderScaleDefault_Height = 0x5896CC4,

  .UObject__ProcessEvent = 0xEF12A0,
  .UInputComponent__BindAction = 0x6AA7A0,
  .FName__Ctor = 0xD697D0,
  .FString__Printf__VA = 0xCAAC00,
  .StaticConstructObject_Internal = 0xF16220,
  .FWeakObjectPtr__OperatorEquals = 0xF1B650,

  .SetsCharacterViewerResolution = 0x914E60,
  .AJackFieldPlayerController__InitActionMappings = 0x629560,
  .GetSourceIniFilename = 0xD2E700,
  .FPaths__GeneratedConfigDir = 0xD4F480,
  .AActor__InitActionMappingsUI = 0x91B100,
  .AJackTripleManager__SetupPlayerInputComponent = 0x9156C0,
  .FTripleModule__StartupModule = 0x215F5C0,

  .GenerateActionMappings_1 = 0x75A200,
  .GenerateActionMappings_2 = 0x7D0DF0,

  .USceneCaptureComponent2D__Ctor_ShowFlags_AND = 0x19D3785,
  .AJackTriplePlayerController__ProcessConsoleExec_result_AND = 0x912CB9,

  .UGameViewportClient__SetupInitialLocalPlayer = 0x1AA5050,
  .FPakPlatformFile__FindFileInPakFiles = 0x1F653E0,
  .FPakPlatformFile__IsNonPakFilenameAllowed = 0x1F68680,

  .AJackPlayerController__PushCameraMode = 0x652850,
  .AJackPlayerController__PopCameraMode = 0x651C60,
  .CameraInterpolate = 0x62E5F0,
  .UJackGamePlayer__UpdateRidingVehicle = 0x745450,
  .APawn__RecalculateBaseEyeHeight = 0x1C49F30,
  .AJackBattleManager__BattleInitialize = 0x4D6FE0,
  .AJackBattleManager__BattleFinalize = 0x4D6A50
};

// UWP/MS Store
GameAddresses GameAddrs_UWP =
{
  .CheckDataAddr = 0x1F0, // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1603439301, // 2020/10/23 07:48:21

  .GUObjectArray = 0x5CE48B8,
  .Names = 0x5E21158,

  .Cvar_ScreenPercentage = 0x5CEEA68,
  .Cvar_DisableMovementModeOptimization = 0x5C99AB8,
  .Cvar_DisableDitherHidden = 0x5C99AE8,
  .Cvar_ShadowFilterMethod = 0x5EB6530,

  .ExcludedDebugPackage_1 = 0x36F1088,
  .ExcludedDebugPackage_2 = 0x36F1318,

  .RenderScaleDefault_Width = 0x5930C40,
  .RenderScaleDefault_Height = 0x5930C44,

  .UObject__ProcessEvent = 0xD9D2A0, // needs verifying
  .UInputComponent__BindAction = 0x679E40,
  .FName__Ctor = 0xE9A180,
  .FString__Printf__VA = 0xDE0770,
  .StaticConstructObject_Internal = 0xDC24B0,
  .FWeakObjectPtr__OperatorEquals = 0xDC78E0,

  .SetsCharacterViewerResolution = 0x8A8520,
  .AJackFieldPlayerController__InitActionMappings = 0x5BAE80,
  .GetSourceIniFilename = 0xE5FF20,
  .FPaths__GeneratedConfigDir = 0xE805D0,
  .AActor__InitActionMappingsUI = 0x8AEF90,
  .AJackTripleManager__SetupPlayerInputComponent = 0x8A8D80,
  .FTripleModule__StartupModule = 0x20F8610,

  .GenerateActionMappings_1 = 0x6EC5D0,
  .GenerateActionMappings_2 = 0x7634B0,

  .USceneCaptureComponent2D__Ctor_ShowFlags_AND = 0x1968B85,
  .AJackTriplePlayerController__ProcessConsoleExec_result_AND = 0x8A61F9,

  .UGameViewportClient__SetupInitialLocalPlayer = 0x1A3AB80, // needs verifying
  .FPakPlatformFile__FindFileInPakFiles = 0x1EF9A70, // needs verifying
  .FPakPlatformFile__IsNonPakFilenameAllowed = 0x1EFCB80,

  .AJackPlayerController__PushCameraMode = 0x5E4730,
  .AJackPlayerController__PopCameraMode = 0x5E3B40,
  .CameraInterpolate = 0x5C0010,
  .UJackGamePlayer__UpdateRidingVehicle = 0x6D7940,
  .APawn__RecalculateBaseEyeHeight = 0x1BE00B0,
  .AJackBattleManager__BattleInitialize = 0x469E50,
  .AJackBattleManager__BattleFinalize = 0x4698C0
};

GameAddresses* GameAddrs = nullptr;

bool GameAddresses::CheckDataValid()
{
  if (!mBaseAddress)
    return false;
  return CheckData == *reinterpret_cast<unsigned int*>(mBaseAddress + CheckDataAddr);
}

bool UpdateGameAddrs()
{
  GameAddrs = nullptr;

  if (GameAddrs_Steam.CheckDataValid())
    GameAddrs = &GameAddrs_Steam;
  else if (GameAddrs_UWP.CheckDataValid())
    GameAddrs = &GameAddrs_UWP;

  return GameAddrs != nullptr;
}
