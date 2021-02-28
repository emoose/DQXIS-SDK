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

// BlueprintGeneratedClass BP_BCAI_Friend.BP_BCAI_Friend_C
// 0x0010 (0x04A8 - 0x0498)
class ABP_BCAI_Friend_C : public AJackBattleCommandAI_Friend
{
public:
	class UBP_COMP_BCAI_Friend_C*                      BP_COMP_BCAI_Friend;                                      // 0x0498(0x0008) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisi, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BCAI_Friend.BP_BCAI_Friend_C");
		return ptr;
	}


	struct FJackBattleCommandAI_ExecTurnCommandResult ExecTurnCommand();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
