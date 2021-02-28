#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BCAI_Konran.BP_BCAI_Konran_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_BCAI_Konran_C : public AJackBattleCommandAI_Konran
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisi, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BCAI_Konran.BP_BCAI_Konran_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
