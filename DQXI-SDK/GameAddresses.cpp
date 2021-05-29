#include "pch.h"

GameAddresses GameAddrs_Steam =
{
  .CheckDataAddr = 0xD8,   // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1607981102, // 2020/12/14 21:25:02
  .CheckDataJP = 1607969596, // 2020/12/14 18:13:16

  // 2021/05/28 non-Denuvo update - offsets pretty much match Denuvo version
  // Timestamp addr was moved though, so can't use CheckDataAddr above...
  // .CheckDataAddr = 0x1D8, // NtHeader.FileHeader.TimeDateStamp
  // .CheckData = 1607948570, // 2020/12/14 12:22:50

  // Since I don't have JP timestamp to check with, check against some data in .rdata
  // Hopefully this'll catch both WW & JP versions
  .AltCheckDataAddr = 0x36835D0,
  .AltCheckData = 0x37353A38313A3132, // "21:18:57", build time?

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

  .TripleRunRate_Value = 0x59D9140,
  .TripleRunRate_IsSet = 0x5EFE99A,

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
  .FTripleModule__GetCheatManager = 0x215FB10,
  .Triple_CharWalk = 0x2124FC0,

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

// Epic Games Store
GameAddresses GameAddrs_EGS =
{
  .CheckDataAddr = 0xE8,   // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1607685241, // 2020/12/11 11:14:01
  .CheckDataJP = 0, // unknown

  // 2021/05/28 non-Denuvo update - offsets pretty much match Denuvo version
  // Timestamp addr was moved though, so can't use CheckDataAddr above...
  // .CheckDataAddr = 0x1D8, // NtHeader.FileHeader.TimeDateStamp
  // .CheckData = 1607662965, // 2020/12/11 05:02:45

  // Since I don't have JP timestamp to check with, check against some data in .rdata
  // Hopefully this'll catch both WW & JP versions
  .AltCheckDataAddr = 0x3682C30,
  .AltCheckData = 0x34333A35353A3331, // "13:55:34", build time?

  .GUObjectArray = 0x5C4D6F8,
  .Names = 0x5E871A8,

  .Cvar_ScreenPercentage = 0x5D54C50,
  .Cvar_DisableMovementModeOptimization = 0x5C028D8,
  .Cvar_DisableDitherHidden = 0x5C02908,
  .Cvar_ShadowFilterMethod = 0x5CE29D0,

  .ExcludedDebugPackage_1 = 0x3686660,
  .ExcludedDebugPackage_2 = 0x36867E8,

  .RenderScaleDefault_Width = 0x5894EE0,
  .RenderScaleDefault_Height = 0x5894EE4,

  .TripleRunRate_Value = 0x59DFBF0,
  .TripleRunRate_IsSet = 0x5F0828A,

  .UObject__ProcessEvent = 0xE0CA90,
  .UInputComponent__BindAction = 0x685D30,
  .FName__Ctor = 0x1F44030,
  .FString__Printf__VA = 0x1E8BC40,
  .StaticConstructObject_Internal = 0xE31CD0,
  .FWeakObjectPtr__OperatorEquals = 0xE37100,

  .SetsCharacterViewerResolution = 0x918210,
  .AJackFieldPlayerController__InitActionMappings = 0x62BE50,
  .GetSourceIniFilename = 0x1F0AE00,
  .FPaths__GeneratedConfigDir = 0x1F2AD90,
  .AActor__InitActionMappingsUI = 0x91E7D0,
  .AJackTripleManager__SetupPlayerInputComponent = 0x918A70,
  .FTripleModule__GetCheatManager = 0x21654F0,
  .Triple_CharWalk = 0x212AB00,

  .GenerateActionMappings_1 = 0x75C6A0,
  .GenerateActionMappings_2 = 0x7D4040,

  .USceneCaptureComponent2D__Ctor_ShowFlags_AND = 0x18F02F5,
  .AJackTriplePlayerController__ProcessConsoleExec_result_AND = 0x915E69,

  .UGameViewportClient__SetupInitialLocalPlayer = 0x19C31E0,
  .FPakPlatformFile__FindFileInPakFiles = 0x1F6B6F0,
  .FPakPlatformFile__IsNonPakFilenameAllowed = 0x1F6E6D0,

  .AJackPlayerController__PushCameraMode = 0x6550A0,
  .AJackPlayerController__PopCameraMode = 0x6544A0,
  .CameraInterpolate = 0x630EE0,
  .UJackGamePlayer__UpdateRidingVehicle = 0x747950,
  .APawn__RecalculateBaseEyeHeight = 0x1B68830,
  .AJackBattleManager__BattleInitialize = 0x4D9C80,
  .AJackBattleManager__BattleFinalize = 0x4D96F0
};

// UWP/MS Store v1.0.6.0
GameAddresses GameAddrs_UWP_1060 =
{
  .CheckDataAddr = 0x1F0, // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1620982367, // 2021/05/14 08:52:47
  .CheckDataJP = 0, // unknown

  // Since I don't have JP timestamp to check with, check against some data in .rdata
  // Hopefully this'll catch both WW & JP versions
  .AltCheckDataAddr = 0x36ED920,
  .AltCheckData = 0x33333A38343A3731,

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

  .TripleRunRate_Value = 0x5A731A0,
  .TripleRunRate_IsSet = 0x5F9C53A,

  .UObject__ProcessEvent = 0xD9CAC0,
  .UInputComponent__BindAction = 0x63D270,
  .FName__Ctor = 0xE99810,
  .FString__Printf__VA = 0xDE0310,
  .StaticConstructObject_Internal = 0xDC2200,
  .FWeakObjectPtr__OperatorEquals = 0xDC7630,

  .SetsCharacterViewerResolution = 0x8A7730,
  .AJackFieldPlayerController__InitActionMappings = 0x5BC0A0,
  .GetSourceIniFilename = 0xE5F9B0,
  .FPaths__GeneratedConfigDir = 0xE7FCC0,
  .AActor__InitActionMappingsUI = 0x8ADE60,
  .AJackTripleManager__SetupPlayerInputComponent = 0x8A7FA0,
  .FTripleModule__GetCheatManager = 0x20F9EF0,
  .Triple_CharWalk = 0x20BF050,

  .GenerateActionMappings_1 = 0x6ED030,
  .GenerateActionMappings_2 = 0x763620,

  .USceneCaptureComponent2D__Ctor_ShowFlags_AND = 0x1967FC5,
  .AJackTriplePlayerController__ProcessConsoleExec_result_AND = 0x8A5489,

  .UGameViewportClient__SetupInitialLocalPlayer = 0x1A3A2E0, // needs verifying
  .FPakPlatformFile__FindFileInPakFiles = 0x1EFB1F0,
  .FPakPlatformFile__IsNonPakFilenameAllowed = 0x1EFE490,

  .AJackPlayerController__PushCameraMode = 0x5E5540,
  .AJackPlayerController__PopCameraMode = 0x5E4950,
  .CameraInterpolate = 0x5C1130,
  .UJackGamePlayer__UpdateRidingVehicle = 0x6D80C0,
  .APawn__RecalculateBaseEyeHeight = 0x1BE0290,
  .AJackBattleManager__BattleInitialize = 0x469C70,
  .AJackBattleManager__BattleFinalize = 0x4696E0
};

// UWP/MS Store v1.0.4.0
// (I don't mind removing the v1.0.4.0 build if we ever add anything new that needs more addrs etc)
// (mostly just left this here since we already have the addrs for it - really there's not much point in supporting older versions)
GameAddresses GameAddrs_UWP_1040 =
{
  .CheckDataAddr = 0x1F0, // NtHeader.FileHeader.TimeDateStamp
  .CheckData = 1603439301, // 2020/10/23 07:48:21
  .CheckDataJP = 0, // unknown

  // Since I don't have JP timestamp to check with, check against some data in .rdata
  // Hopefully this'll catch both WW & JP versions
  .AltCheckDataAddr = 0x36ED920,
  .AltCheckData = 0x31303A33343A3631,

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

  .TripleRunRate_Value = 0x5A731A0,
  .TripleRunRate_IsSet = 0x5F9C53A,

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
  .FTripleModule__GetCheatManager = 0x20F8B60,
  .Triple_CharWalk = 0x20BDF70,

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

  auto checkDataValue = *reinterpret_cast<unsigned int*>(mBaseAddress + CheckDataAddr);

  if (CheckData == checkDataValue || (CheckDataJP != 0 && CheckDataJP == checkDataValue))
    return true;

  if (AltCheckDataAddr == 0)
    return false;

  auto altCheckDataValue = *reinterpret_cast<uint64_t*>(mBaseAddress + AltCheckDataAddr);
  return AltCheckData == altCheckDataValue;
}

bool UpdateGameAddrs()
{
  GameAddrs = nullptr;

  if (GameAddrs_UWP_1040.CheckDataValid())
    GameAddrs = &GameAddrs_UWP_1040;
  else if (GameAddrs_UWP_1060.CheckDataValid())
    GameAddrs = &GameAddrs_UWP_1060;
  else if (GameAddrs_EGS.CheckDataValid())
    GameAddrs = &GameAddrs_EGS;
  else if (GameAddrs_Steam.CheckDataValid())
    GameAddrs = &GameAddrs_Steam;

  return GameAddrs != nullptr;
}
