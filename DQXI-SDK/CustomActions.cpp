#include "pch.h"

// Code for enabling/handling custom input actions, can be bound to keyboard/controller via Input.h
// For adding to this file, see list of hookable SetupInputComponent funcs at https://gist.github.com/emoose/61be532af247f486902103096da5d38f
// (indented funcs call into the non-indented func above it, so only that needs hooking to affect all its indented children)

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
  if (mainWindow)
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

void Init_CustomActions_UI(AActor* Actor, UInputComponent* PlayerInputComponent)
{
  PlayerInputComponent->BindAction("QuitGame", EInputEvent::IE_Pressed, Actor, QuitGame);
}

// Doubt this is actually AActor, probably a class that inherits it
typedef void (*AActor__InitActionMappingsUI_Fn)(AActor* thisptr, void* a2, void* a3);

AActor__InitActionMappingsUI_Fn AActor__InitActionMappingsUI_Orig;
void AActor__InitActionMappingsUI_Hook(AActor* thisptr, void* a2, void* a3)
{
  AActor__InitActionMappingsUI_Orig(thisptr, a2, a3);

  if (!Options.CustomActions || !thisptr->InputComponent)
    return;

  // This is called by multiple UI classes at varying times
  // Actions bound here will likely also get called by all the UI classes that registered it!
  Init_CustomActions_UI(thisptr, thisptr->InputComponent);
}

// SetupPlayerInputComponent is defined by APawn, AJackTripleManager inherits and overrides it
typedef void (*APawn__SetupPlayerInputComponent)(APawn* thisptr, UInputComponent* PlayerInputComponent);

APawn__SetupPlayerInputComponent AJackTripleManager__SetupPlayerInputComponent_Orig;
void AJackTripleManager__SetupPlayerInputComponent_Hook(AJackTripleManager* thisptr, UInputComponent* PlayerInputComponent)
{
  AJackTripleManager__SetupPlayerInputComponent_Orig(thisptr, PlayerInputComponent);

  if (!Options.CustomActions || !PlayerInputComponent)
    return;

  Init_CustomActions_UI(thisptr, PlayerInputComponent);
}


typedef void (*AJackFieldPlayerController__InitActionMappings_Fn)(AJackFieldPlayerController* thisptr);

AJackFieldPlayerController__InitActionMappings_Fn AJackFieldPlayerController__InitActionMappings_Orig;
void AJackFieldPlayerController__InitActionMappings_Hook(AJackFieldPlayerController* thisptr)
{
  AJackFieldPlayerController__InitActionMappings_Orig(thisptr);

  if (Options.CustomActions)
    Init_CustomActions_Field(thisptr);

  // Let us do stuff during the load screen
  OnLoadScreen();
}

void Init_CustomActions()
{
  // Always hook AJackFieldPlayerController::InitActionMappings as it's called during load, so we can perform things during loading screen
  MH_Hook(GameAddrs->AJackFieldPlayerController__InitActionMappings, AJackFieldPlayerController__InitActionMappings_Hook, &AJackFieldPlayerController__InitActionMappings_Orig);

  if (!Options.CustomActions)
    return;

  MH_Hook(GameAddrs->AActor__InitActionMappingsUI, AActor__InitActionMappingsUI_Hook, &AActor__InitActionMappingsUI_Orig);
  MH_Hook(GameAddrs->AJackTripleManager__SetupPlayerInputComponent, AJackTripleManager__SetupPlayerInputComponent_Hook, &AJackTripleManager__SetupPlayerInputComponent_Orig);
}
