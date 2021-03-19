#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
	// TODO: hook constructor for Triple module and make it set CheatManager
	struct TripleModuleInterface
	{
		void* Vftable; // 0x0, func at 0x1D8 checks CheatManager ptr and retrieves raw pointer to it, which is used in AJackTriplePlayerController::ProcessConsoleExec
		void* Unk8;    // 0x8;
		void* Unk10;   // 0x10
		int Unk18;     // 0x18
		TWeakObjectPtr<class UTripleCheatManager> CheatManager; // 0x1C, most likely cheat manager
	};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
