#include "pch.h"

// Code for enabling/handling custom input actions, can be bound to keyboard/controller via Input.h

extern FName CamStyle_FirstPersonView;
extern FName CamStyle_FirstPerson;
extern FName CamStyle_Normal;

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
