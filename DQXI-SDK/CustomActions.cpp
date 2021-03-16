#include "pch.h"

// Code for enabling/handling custom input actions, can be bound to keyboard/controller via Input.h

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
  auto camera = g_StaticFuncs->STATIC_GetJackPlayerCameraManager(playerController);
  bool IsFirstPerson = ((camera->CameraStyle == CamStyle_FirstPerson) || (camera->CameraStyle == CamStyle_FirstPersonView));

  //NOTE: Changed the logic on this so that the bind could be used in regular (non-movable) first person mode to exit first person
  //(unfortunately something still prevents this bind/method from being called when in regular first-person anyway)
  if (!Options.FirstPersonWherever && !IsPlayerMovementEnabled(playerController) && (!IsFirstPerson || Options.FirstPersonMovable))
    return; 

  IsFirstPerson = !IsFirstPerson; //toggle first person
  if (Options.FirstPersonMovable)
  {
    if (Options.HideMinimap)
      g_JackCheatManager->SetMiniMapVisible(!IsFirstPerson);

    return SetMovableFirstPersonCam(playerController, IsFirstPerson);
  }

  playerController->Camera(IsFirstPerson ? CamStyle_FirstPersonView : CamStyle_Normal);
}

void EnterPartyChat(AJackFieldPlayerController* playerController)
{
  if (!IsPlayerMovementEnabled(playerController))
    return;

  playerController->NakamaKaiwa();
}

time_t LastDialog;
void QuitGame(AActor* actor)
{
  // Workaround for multiple UI classes calling QuitGame immediately after each other
  // Only show dialog if it's been 5 seconds or more since the last one:

  time_t curTime;
  time(&curTime);

  if (curTime - LastDialog < 5)
    return;

  LastDialog = curTime;

  // Make DQXIS show "Are you sure you want to quit" messagebox prompt
  HWND mainWindow = FindMainWindow(GetCurrentProcessId());
  if(mainWindow)
    PostMessageA(mainWindow, WM_SYSCOMMAND, SC_CLOSE, 0);
}

void Init_CustomActions_Field(AJackFieldPlayerController* playerController)
{
  auto input = playerController->InputComponent;
  input->BindAction("FirstPersonCamera", EInputEvent::IE_Pressed, playerController, FirstPersonCamera);

  input->BindAction("EnterPartyChat", EInputEvent::IE_Pressed, playerController, EnterPartyChat);

  // EnterNakamaKaiwa is apparently original name, based on INI files
  input->BindAction("EnterNakamaKaiwa", EInputEvent::IE_Pressed, playerController, EnterPartyChat);

  input->BindAction("QuitGame", EInputEvent::IE_Pressed, (AActor*)playerController, QuitGame);
}

void Init_CustomActions_UI(AActor* actor)
{
  // This is called by multiple UI classes at varying times
  // Actions bound here will likely also get called by all the UI classes that registered it!

  auto input = actor->InputComponent;

  input->BindAction("QuitGame", EInputEvent::IE_Pressed, actor, QuitGame);
}
