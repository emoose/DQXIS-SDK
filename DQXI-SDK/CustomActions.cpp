#include "pch.h"
#include <sstream>

// Code for enabling/handling custom input actions, can be bound to keyboard/controller via Input.h

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
    UKismetSystemLibrary* g_StaticKismet = UObject::FindObject<UKismetSystemLibrary>();
    TEnumAsByte<EQuitPreference> justQuit = (EQuitPreference) 0;

    std::wstringstream warning;
    warning.clear();
    warning << L"Any unsaved progress will be lost. Are you sure you want to exit the game?\r\n";
    if (MessageBoxW(NULL, warning.str().c_str(), L"DRAGON QUEST XI S", MB_YESNO ) == IDYES)
    {
        g_StaticKismet->STATIC_QuitGame(nullptr, playerController, justQuit);
    }
    return;
}

void Init_CustomActions(AJackFieldPlayerController* playerController)
{
  auto input = playerController->InputComponent;
  input->BindAction("FirstPersonCamera", EInputEvent::IE_Pressed, playerController, FirstPersonCamera);

  input->BindAction("EnterPartyChat", EInputEvent::IE_Pressed, playerController, EnterPartyChat);

  // EnterNakamaKaiwa is apparently original name, based on INI files
  input->BindAction("EnterNakamaKaiwa", EInputEvent::IE_Pressed, playerController, EnterPartyChat);
  
  input->BindAction("QuitGame", EInputEvent::IE_Pressed, playerController, QuitGame);
}
