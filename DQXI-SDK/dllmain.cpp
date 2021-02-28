// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "SDK.h"
#include <fstream>

using namespace SDK;

DWORD WINAPI DoStuff(LPVOID lpParameter)
{
  auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA("DRAGON QUEST XI S.exe"));

  auto gObjects = reinterpret_cast<SDK::FUObjectArray*>(mBaseAddress + 0x5D83BF8);
  auto gNames = reinterpret_cast<SDK::TNameEntryArray*>(mBaseAddress + 0x5D7AE20);

  UObject::GObjects = gObjects;
  FName::GNames = gNames;

  Sleep(15 * 1000);

  // Loop in case game hasn't loaded up yet
  while (true)
  {
    if (gObjects->ObjObjects.Empty())
    {
      Sleep(15 * 1000);
      continue;
    }

    // Objects/Names are filled, give it a couple more seconds
    Sleep(5 * 1000);

    // Game should be loaded now, apply our mods

    // UJackCheatManager::DisableLoadReductionForNPC does mostly the same as below
    // except we add bReductionInCutScene = false for any reducers that try it
    // (setting the vars directly should be slightly quicker & less prone to crashes too)
    auto loadReductions = UObject::FindObjects<UJackLoadReductionComponent>();
    for (auto reducer : loadReductions)
    {
      reducer->bDisabled = true;
      reducer->bReductionInCutScene = false;
    }

    // Disable tick-rate reduction

    auto modes = UObject::FindObjects<AJackGameMode>();
    for (auto mode : modes)
    {
      if (!mode->CharacterTickIntervalManager)
        continue;

      mode->CharacterTickIntervalManager->bLoadReducerDisabled = true;
    }

    // Loop again as reducers seem to get add/removed at any point
    // TODO: find & patch the code that reads bDisabled/bLoadReducerDisabled instead?
  }

  return 0;
}

DWORD WINAPI DoStuffTest(LPVOID lpParameter)
{
  // The new thread will start here

  Sleep(30 * 1000);
 // SDK::InitSdk("DRAGON QUEST XI S.exe", 0x5D83BF8, 0x5D7AE20);

  std::string idc;

  auto fns = SDK::UObject::FindObjects<SDK::UFunction>();

  char buf[1024];

  std::vector<void*> complete;
  for (auto fn : fns)
  {
    if (std::find(complete.begin(), complete.end(), fn->Func) != complete.end())
      continue;

    auto name2 = fn->GetFullName();
    auto name = fn->GetName();

    sprintf_s(buf, "0x%p", fn->Func);
    std::string addr = buf;

    idc += "idc.set_name(" + addr + ", \"" + name + "\")\r\n";
    idc += "idc.add_func(" + addr + ")\r\n";

    complete.push_back(fn->Func);
  }

  {
    std::ofstream out("idc.py");
    out << idc;
  }

  bool inited = false;
  volatile bool begin = false;
  while (true)
  {
    Sleep(5000);

    auto objs = SDK::UObject::FindObjects<SDK::UJackUMGManager>();

    auto objs2 = SDK::UObject::FindObjects<SDK::AHUD>();

    auto objs3 = SDK::UObject::FindObjects<SDK::UGameUserSettings>();

    auto sets = SDK::UObject::FindObjects<URendererSettings>();

    auto stats = UObject::FindObjects<UJackGameplayStatics>();

    auto cheats = UObject::FindObjects<UJackCheatManager>();
    if(cheats.size() > 1)
      cheats.erase(cheats.begin());

    auto m = UObject::FindObjects<AJackGameModeBase>();
    if (m.size() > 1)
      m.erase(m.begin());

    auto p = UObject::FindObjects<UJackPasserbyTable>();

    auto n = UObject::FindObjects<AJackScheduledNPC>();

    volatile bool testFlag = false;
    volatile bool testFlag2 = false;
    volatile bool testFlag3 = false;
    volatile bool testFlag4 = false;
    volatile bool testFlag5 = false;
    volatile bool testFlag6 = false;
    volatile bool testFlag7 = false;
    volatile bool testFlag8 = false;
    volatile bool testFlag9 = false;
    volatile bool testFlag9a = true;

    for (auto chit : cheats)
    {
      if (testFlag8)
      {
        chit->DisplayDebugInfo();
      }
      if (testFlag7) {
        chit->DebugMenuEnabled(true);
      }
      if (testFlag6) {
        chit->SetCharacterFixedTickIntervalDistance(false, 0, 0);
      }
      if (testFlag5) {
        chit->HiddenNPCBy(500);
      }
      if (testFlag9) {
        chit->DisableLoadReductionForNPC(testFlag9a);
      }
    }

    bool testVal = false;

    objs.erase(objs.begin());

    for (auto stat : stats)
    {
      if (testFlag4) {
        auto test = stat->STATIC_IsEnabledLevelDebugFeature();
        auto test2 = stat->STATIC_IsEnabledLevelDebugDisplay();
      }
    }

    for (auto usg : objs) {
      if (testFlag) {
        auto hmm = usg->IsDebugMode();
        auto hmm2 = usg->IsDeluxMode();
      }
      if (testFlag2) {
        usg->OpenWorldMap(SDK::EJackWorldMapOpenReason::EJackWorldMapOpenReason__OpenMapButton, 1);
      }
      if (testFlag3) {
        usg->OpenLocalMap();
      }
    }
  }

  return 0;
}

void Attache()
{
  // Create a new thread which will start at the DoStuff function
  HANDLE hThread = CreateThread(
    NULL,    // Thread attributes
    0,       // Stack size (0 = use default)
    DoStuff, // Thread start address
    NULL,    // Parameter to pass to the thread
    0,       // Creation flags
    NULL);   // Thread id
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

      bool Proxy_Attach();
      Proxy_Attach();

      Attache();
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

