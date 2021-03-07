#include "pch.h"

// Cached things so we don't need any lookups during runtime
FName CamStyle_FirstPersonView;
FName CamStyle_FirstPerson;
FName CamStyle_Normal;

bool IsPlayerMovementEnabled(AActor* actor)
{
  auto player = g_StaticFuncs->STATIC_GetJackGamePlayer(actor);

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

void PawnRecalculateBaseEyeHeight(APawn* Pawn, TEnumAsByte<EJackVehicle> VehicleType, FName CameraStyle)
{
  auto firstPersonEyeHeight = Options.FirstPersonMovableHeight;
  if (VehicleType == EJackVehicle::EJackVehicle__Herukattya)
    firstPersonEyeHeight *= 1.5f;
  else if (VehicleType != EJackVehicle::EJackVehicle__None && VehicleType != EJackVehicle::EJackVehicle__Eggurobo)
    firstPersonEyeHeight *= 2.1f;

  Pawn->BaseEyeHeight = (CameraStyle == CamStyle_FirstPerson) ? firstPersonEyeHeight : 0;

  bool HideModel = (CameraStyle == CamStyle_FirstPerson);
  bool HideCharaModel = HideModel;
  if (VehicleType != EJackVehicle::EJackVehicle__None && VehicleType != EJackVehicle::EJackVehicle__Eggurobo && VehicleType != EJackVehicle::EJackVehicle__Herukattya)
    HideModel = false; // don't hide vehicles

  // Hide character model
  auto chara = g_StaticFuncs->STATIC_GetJackPlayerCharacter(Pawn, true);
  if (chara)
    chara->SetHiddenControl(EJackCharacterHiddenPurpose::EJackCharacterHiddenPurpose__FPSCamera, HideCharaModel, HideCharaModel);

  // Hide character/vehicle model (would happen automatically if we didn't disable HiddenControlBeginOverlapEnabled)
  if (VehicleType != EJackVehicle::EJackVehicle__None)
  {
    chara = g_StaticFuncs->STATIC_GetJackPlayerCharacter(Pawn, false);
    if (chara)
      chara->SetHiddenControl(EJackCharacterHiddenPurpose::EJackCharacterHiddenPurpose__FPSCamera, HideModel, HideModel);
  }
}

typedef void (*UJackGamePlayer__UpdatingRidingVehicle_Fn)(UJackGamePlayer* thisptr, TEnumAsByte<EJackVehicle> Vehicle, TEnumAsByte<EJackVehicleModelId> VehicleModel);
UJackGamePlayer__UpdatingRidingVehicle_Fn UJackGamePlayer__UpdatingRidingVehicle_Orig;
void UJackGamePlayer__UpdatingRidingVehicle_Hook(UJackGamePlayer* thisptr, TEnumAsByte<EJackVehicle> VehicleType, TEnumAsByte<EJackVehicleModelId> VehicleModelType)
{
  // Orig code
  thisptr->GamePlayerCondition->RidingVehicleType = VehicleType;
  thisptr->GamePlayerCondition->RidingVehicleModelType = VehicleModelType;

  // Our code
#ifdef _DEBUG
  if (g_Console)
  {
    FString debugText;
    FStringPrintf(&debugText, L">>> VehicleType changed to %d", (int32_t)VehicleType.GetValue());
    g_Console->OutputText(debugText);
  }
#endif

  auto pawn = g_StaticFuncs->STATIC_GetPlayerPawn(thisptr, EJackPlayerController::EJackPlayerController__Player1);
  auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(thisptr);
  if (pawn && camera)
    PawnRecalculateBaseEyeHeight(pawn, VehicleType, camera->CameraStyle);
}

typedef void (*APawn__RecalculateBaseEyeHeight_Fn)(APawn* thisptr);
APawn__RecalculateBaseEyeHeight_Fn APawn__RecalculateBaseEyeHeight_Orig;
void APawn__RecalculateBaseEyeHeight_Hook(APawn* thisptr)
{
  APawn__RecalculateBaseEyeHeight_Orig(thisptr);

  auto pawn = g_StaticFuncs->STATIC_GetPlayerPawn(thisptr, EJackPlayerController::EJackPlayerController__Player1);
  if (!pawn || thisptr != pawn)
    return;

  auto gamePlayer = g_StaticFuncs->STATIC_GetJackGamePlayer(thisptr);
  if (!gamePlayer)
    return;

  auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(thisptr);
  if (camera)
    PawnRecalculateBaseEyeHeight(pawn, gamePlayer->GamePlayerCondition->RidingVehicleType, camera->CameraStyle);
}

bool ShouldZeroInterpSpeed = false;

void SetMovableFirstPersonCam(AActor* actor, bool IsFirstPerson)
{
  auto newStyle = IsFirstPerson ? CamStyle_FirstPerson : CamStyle_Normal;

  auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(actor);
  if (!camera)
    return;

  camera->SetHiddenControlBeginOverlapEnabled(!IsFirstPerson); // stop NPCs from fading/dithering out when too close

  auto gamePlayer = g_StaticFuncs->STATIC_GetJackGamePlayer(actor);
  if (!gamePlayer)
    return;

  auto pawn = g_StaticFuncs->STATIC_GetPlayerPawn(actor, EJackPlayerController::EJackPlayerController__Player1);
  if (!pawn)
    return;

  PawnRecalculateBaseEyeHeight(pawn, gamePlayer->GamePlayerCondition->RidingVehicleType, newStyle);

  auto playerController = g_StaticFuncs->STATIC_GetJackPlayerController(actor);
  if (playerController)
    playerController->Camera(newStyle);

  // set flag to make CameraInterpolate hook zero out the interp speed, making it instant
  // (only if switching to third-person, and only for a single CameraInterpolate call)
  ShouldZeroInterpSpeed = !IsFirstPerson;
}

bool ShouldRestoreFirstPerson = false;

typedef void (*AJackBattleManager__ClassFn)(AJackBattleManager* thisptr);

AJackBattleManager__ClassFn AJackBattleManager__BattleInitialize_Orig;
void AJackBattleManager__BattleInitialize_Hook(AJackBattleManager* thisptr) // TODO: unsure if this is actually AJackBattleManager
{
  auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(thisptr);
  if (camera->CameraStyle == CamStyle_FirstPerson)
  {
    SetMovableFirstPersonCam(thisptr, false);
    ShouldRestoreFirstPerson = true;
  }

  AJackBattleManager__BattleInitialize_Orig(thisptr);
}

AJackBattleManager__ClassFn AJackBattleManager__BattleFinalize_Orig;
void AJackBattleManager__BattleFinalize_Hook(AJackBattleManager* thisptr) // TODO: unsure if this is actually AJackBattleManager
{
  if (ShouldRestoreFirstPerson)
  {
    SetMovableFirstPersonCam(thisptr, true);
    ShouldRestoreFirstPerson = false;
  }

  AJackBattleManager__BattleFinalize_Orig(thisptr);
}

typedef void(*AJackPlayerController__PushCameraMode_Fn)(AJackPlayerController* thisptr, TEnumAsByte<EJackCameraMode> InMode, float InterpSeconds, bool bKeepOldCameraView);
AJackPlayerController__PushCameraMode_Fn AJackPlayerController__PushCameraMode_Orig;
void AJackPlayerController__PushCameraMode_Hook(AJackPlayerController* thisptr, TEnumAsByte<EJackCameraMode> InMode, float InterpSeconds, bool bKeepOldCameraView)
{
  AJackPlayerController__PushCameraMode_Orig(thisptr, InMode, InterpSeconds, bKeepOldCameraView);

  auto currentCam = thisptr->CurrentCameraMode();
  if (currentCam == EJackCameraMode::EJackCameraMode__FirstPersonView)
  {
    // Entering first-person mode, stop NPCs from fading/dithering when up close
    ((AJackPlayerCameraManager*)thisptr->PlayerCameraManager)->SetHiddenControlBeginOverlapEnabled(false);
  }
}

typedef void(*AJackPlayerController__PopCameraMode_Fn)(AJackPlayerController* thisptr, TEnumAsByte<EJackCameraMode> InMode, float InterpSeconds);
AJackPlayerController__PopCameraMode_Fn AJackPlayerController__PopCameraMode_Orig;
void AJackPlayerController__PopCameraMode_Hook(AJackPlayerController* thisptr, TEnumAsByte<EJackCameraMode> InMode, float InterpSeconds)
{
  auto prevCam = thisptr->CurrentCameraMode();

  AJackPlayerController__PopCameraMode_Orig(thisptr, InMode, InterpSeconds);

  if (prevCam != EJackCameraMode::EJackCameraMode__FirstPersonView)
    return;

  auto currentCam = thisptr->CurrentCameraMode();
  if (prevCam != currentCam)
  {
    // Leaving first-person mode, allow NPCs to fade/dither away
    ((AJackPlayerCameraManager*)thisptr->PlayerCameraManager)->SetHiddenControlBeginOverlapEnabled(true);
  }
}

// Cached CameraData class pointers
std::vector<UJackPlayerCameraData*> CameraDatas;
std::vector<UJackPlayerCameraData> OriginalCameraDatas;

typedef void* (*CameraInterpolate_Fn)(UObject* a1, void* a2, void* a3);
CameraInterpolate_Fn CameraInterpolate_Orig;

// TODO: find what class this belongs to
// func seems to use data from UJackPlayerCameraData somehow
void* CameraInterpolate_Hook(UObject* a1, void* a2, void* a3)
{
  for (int i = 0; i < CameraDatas.size(); i++)
  {
    CameraDatas[i]->InterpTargetLocation_Speed = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_Speed;
    CameraDatas[i]->InterpTargetLocation_SpeedXY = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_SpeedXY;
    CameraDatas[i]->InterpTargetLocation_SpeedInZoom = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_SpeedInZoom;
    CameraDatas[i]->InterpTargetLocation_SpeedXYInZoom = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_SpeedXYInZoom;
    CameraDatas[i]->InterpTargetLocation_SpeedInZoomMoveStop = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_SpeedInZoomMoveStop;
    CameraDatas[i]->InterpTargetLocation_SpeedXYInZoomMoveStop = ShouldZeroInterpSpeed ? 0 : OriginalCameraDatas[i].InterpTargetLocation_SpeedXYInZoomMoveStop;
  }

  // Only zero it for this call
  ShouldZeroInterpSpeed = false;

  return CameraInterpolate_Orig(a1, a2, a3);
}

void OnLoad_FirstPerson()
{
  // Cache the CameraData pointers, and store a copy of their original values
  CameraDatas = UObject::FindObjects<UJackPlayerCameraData>();
  OriginalCameraDatas.clear();
  for (auto data : CameraDatas)
    OriginalCameraDatas.push_back(*data);
}

void Init_FirstPerson()
{
  // Need to hook AJackPlayerController::PushCameraMode/AJackPlayerController::PopCameraMode so we can track FirstPersonView camera
  MH_CreateHook((LPVOID)(mBaseAddress + 0x652850), AJackPlayerController__PushCameraMode_Hook, (LPVOID*)&AJackPlayerController__PushCameraMode_Orig);
  MH_CreateHook((LPVOID)(mBaseAddress + 0x651C60), AJackPlayerController__PopCameraMode_Hook, (LPVOID*)&AJackPlayerController__PopCameraMode_Orig);

  if (!Options.FirstPersonMovable)
    return;

  MH_CreateHook((LPVOID)(mBaseAddress + 0x62E5F0), CameraInterpolate_Hook, (LPVOID*)&CameraInterpolate_Orig);

  // Hook UpdatingRidingVehicle to know current vehicle being used
  MH_CreateHook((LPVOID)(mBaseAddress + 0x745450), UJackGamePlayer__UpdatingRidingVehicle_Hook, (LPVOID*)&UJackGamePlayer__UpdatingRidingVehicle_Orig);
  // RecalculateBaseEyeHeight normally sets BaseEyeHeight back to APawn class default (0), hook it so we can override that
  MH_CreateHook((LPVOID)(mBaseAddress + 0x1C49F30), APawn__RecalculateBaseEyeHeight_Hook, (LPVOID*)&APawn__RecalculateBaseEyeHeight_Orig);

  // Hook BattleManager so we know when battle begins/ends
  MH_CreateHook((LPVOID)(mBaseAddress + 0x4D6FE0), AJackBattleManager__BattleInitialize_Hook, (LPVOID*)&AJackBattleManager__BattleInitialize_Orig);
  MH_CreateHook((LPVOID)(mBaseAddress + 0x4D6A50), AJackBattleManager__BattleFinalize_Hook, (LPVOID*)&AJackBattleManager__BattleFinalize_Orig);
}
