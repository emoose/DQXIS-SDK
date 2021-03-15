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
  if(!g_StaticKismet)
    g_StaticKismet = UObject::FindObject<UKismetSystemLibrary>();

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
