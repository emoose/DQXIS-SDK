#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
	class IModuleInterface
	{
	public:
		/* 0x00 */ virtual ~IModuleInterface() = 0;
		/* 0x08 */ virtual void StartupModule() = 0;
		/* 0x10 */ virtual void PreUnloadCallback() = 0;
		/* 0x18 */ virtual void PostLoadCallback() = 0;
		/* 0x20 */ virtual void ShutdownModule() = 0;
		/* 0x28 */ virtual bool SupportsDynamicReloading() = 0;
		/* 0x30 */ virtual bool SupportsAutomaticShutdown() = 0;
		/* 0x38 */ virtual bool IsGameModule() const = 0;
	};
	// TODO: add virtual funcs to this interface
	class ITripleModule : public IModuleInterface
	{
	public:
		// func at Vftable+0x1D8 checks CheatManager ptr and retrieves raw pointer to it, which is used in AJackTriplePlayerController::ProcessConsoleExec
		/* 0x08 */ bool Unk8; // some kind if IsInited var?
		/* 0x09 */ unsigned char Unk9[0x3];
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
