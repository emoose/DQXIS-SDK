#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
	// TODO: add virtual funcs to this interface
	class ITripleModule
	{
	public:
		/* 0x00 */ void* Vftable; // func at 0x1D8 checks CheatManager ptr and retrieves raw pointer to it, which is used in AJackTriplePlayerController::ProcessConsoleExec
		/* 0x08 */ int Unk8;
		/* 0x0C */ TWeakObjectPtr<class UObject> UnkPtrC;
		/* 0x14 */ TWeakObjectPtr<class UObject> UnkPtr14;
		/* 0x1C */ TWeakObjectPtr<class UTripleCheatManager> CheatManager; // most likely cheat manager
	};

	class FTripleModule : public ITripleModule
	{

	};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
