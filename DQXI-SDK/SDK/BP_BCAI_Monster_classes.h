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

// BlueprintGeneratedClass BP_BCAI_Monster.BP_BCAI_Monster_C
// 0x0078 (0x0598 - 0x0520)
class ABP_BCAI_Monster_C : public AJackBattleCommandAI_Monster
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)
	class UBP_COMP_BCAI_Monster_C*                     BP_COMP_BCAI_Monster;                                     // 0x0528(0x0008) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0530(0x0008) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TArray<struct FJackMonsterBattleAI_ActionSlot>     DefaultActionSlots;                                       // 0x0538(0x0010) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance)
	int                                                NextBasisActionSlotID;                                    // 0x0548(0x0004) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	TArray<int>                                        ManulaProbabilityTable;                                   // 0x0550(0x0010) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJackMonsterBattleAI_ActionSlot>     DefaultExceptionActionSlots;                              // 0x0560(0x0010) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJackMonsterBattleAI_ActionSlot>     CandidateActionSlots;                                     // 0x0570(0x0010) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUnUseExceptionActionSlot;                                // 0x0580(0x0001) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	TArray<int>                                        CandidateSlotIDs;                                         // 0x0588(0x0010) (Edit, BlueprintVisi, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BCAI_Monster.BP_BCAI_Monster_C");
		return ptr;
	}


	void CalcTargetGameCharacterWithSecondCheck(const struct FJackActionData& InActionData, class UJackGameCharacter** OutResult);
	void CalcExceptionActionSlotsTurnCommand(struct FJackActionData* OutExecActionData, class UJackGameCharacter** OutExecTargetGameCharacter);
	void IsReviveAction(struct FJackActionData* ActionData, bool* bReviveAction);
	void CalcCanditateTargetGameCharacter(const struct FJackActionData& InActionData, TArray<class UJackGameCharacter*>* OutCanditateGameCharacters);
	void BuildDefaultActionSlots();
	void CalcCandidateSlotIDs(TArray<struct FJackMonsterBattleAI_ActionSlot>* ActionSlots, TArray<int>* CandidateSlotIDs);
	void GetActionPatternType(EJackBattleActionPatternType* ActionPatternType);
	void BuildCandidateActionSlots(TArray<struct FJackMonsterBattleAI_ActionSlot>* Result, TArray<int>* CandidateSlotIDs);
	struct FJackBattleCommandAI_ExecTurnCommandResult ExecTurnCommand();
	void UserConstructionScript();
	void InitializeMonsterBattleAI(const struct FName& InMonsterBattleAIID);
	void ExecTurnCommandCore();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BCAI_Monster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
