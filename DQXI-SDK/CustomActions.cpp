#include "pch.h"

// Code for enabling/handling custom input actions, can be bound to keyboard/controller via Input.h
UKismetSystemLibrary* g_StaticKismet = nullptr;

bool IsPlayerMovementEnabled(AActor* actor)
{
  auto player = g_StaticFuncs->STATIC_GetJackGamePlayer(actor);

  if (!player)
    return false;

  auto condition = player->GamePlayerCondition;
  if (!condition)
    return false;

  if (condition->IsCondition(EJackGamePlayerCondition::MoveInputDisable)
    || condition->IsCondition(EJackGamePlayerCondition::MovementDisabled))
    return false;

  return true;
}

void FirstPersonCamera(AJackFieldPlayerController* playerController)
{
  if (!Options.FirstPersonWherever && !IsPlayerMovementEnabled(playerController))
    return;

  FName newStyle = CamStyle_FirstPersonView;
  if (Options.FirstPersonMovable)
  {
    auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(playerController);
    bool IsFirstPerson = camera->CameraStyle == CamStyle_FirstPerson;
    IsFirstPerson = !IsFirstPerson; // toggle

    return SetMovableFirstPersonCam(playerController, IsFirstPerson);
  }

  playerController->Camera(newStyle);
}

void EnterPartyChat(AJackFieldPlayerController* playerController)
{
  if (!IsPlayerMovementEnabled(playerController))
    return;

  playerController->NakamaKaiwa();
}

void QuitGame(AJackFieldPlayerController* playerController)
{
  if (!g_StaticKismet)
    return;

  std::wstring warning = L"Any unsaved progress will be lost. Are you sure you want to exit the game?\r\n";
  if (MessageBoxW(NULL, warning.c_str(), L"DRAGON QUEST XI S", MB_YESNO ) == IDYES)
      g_StaticKismet->STATIC_QuitGame(nullptr, playerController, EQuitPreference::Quit);
}

void Init_CustomActions_Field(AJackFieldPlayerController* playerController)
{
  if(!g_StaticKismet)
    g_StaticKismet = UObject::FindObject<UKismetSystemLibrary>();

  auto input = playerController->InputComponent;
  input->BindAction("FirstPersonCamera", EInputEvent::IE_Pressed, playerController, FirstPersonCamera);

  input->BindAction("EnterPartyChat", EInputEvent::IE_Pressed, playerController, EnterPartyChat);

  // EnterNakamaKaiwa is apparently original name, based on INI files
  input->BindAction("EnterNakamaKaiwa", EInputEvent::IE_Pressed, playerController, EnterPartyChat);
  
  input->BindAction("QuitGame", EInputEvent::IE_Pressed, playerController, QuitGame);
}
