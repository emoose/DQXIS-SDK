#pragma once

#include "../pch.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcTargetGameCharacterWithSecondCheck
struct ABP_BCAI_Monster_C_CalcTargetGameCharacterWithSecondCheck_Params
{
	struct FJackActionData                             InActionData;                                             // (BlueprintVisi, BlueprintReadOnly, Parm)
	class UJackGameCharacter*                          OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcExceptionActionSlotsTurnCommand
struct ABP_BCAI_Monster_C_CalcExceptionActionSlotsTurnCommand_Params
{
	struct FJackActionData                             OutExecActionData;                                        // (Parm, OutParm)
	class UJackGameCharacter*                          OutExecTargetGameCharacter;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.IsReviveAction
struct ABP_BCAI_Monster_C_IsReviveAction_Params
{
	struct FJackActionData                             ActionData;                                               // (BlueprintVisi, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bReviveAction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCanditateTargetGameCharacter
struct ABP_BCAI_Monster_C_CalcCanditateTargetGameCharacter_Params
{
	struct FJackActionData                             InActionData;                                             // (BlueprintVisi, BlueprintReadOnly, Parm)
	TArray<class UJackGameCharacter*>                  OutCanditateGameCharacters;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildDefaultActionSlots
struct ABP_BCAI_Monster_C_BuildDefaultActionSlots_Params
{
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCandidateSlotIDs
struct ABP_BCAI_Monster_C_CalcCandidateSlotIDs_Params
{
	TArray<struct FJackMonsterBattleAI_ActionSlot>     ActionSlots;                                              // (BlueprintVisi, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        CandidateSlotIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.GetActionPatternType
struct ABP_BCAI_Monster_C_GetActionPatternType_Params
{
	EJackBattleActionPatternType                       ActionPatternType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildCandidateActionSlots
struct ABP_BCAI_Monster_C_BuildCandidateActionSlots_Params
{
	TArray<struct FJackMonsterBattleAI_ActionSlot>     Result;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        CandidateSlotIDs;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommand
struct ABP_BCAI_Monster_C_ExecTurnCommand_Params
{
	struct FJackBattleCommandAI_ExecTurnCommandResult  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.UserConstructionScript
struct ABP_BCAI_Monster_C_UserConstructionScript_Params
{
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.InitializeMonsterBattleAI
struct ABP_BCAI_Monster_C_InitializeMonsterBattleAI_Params
{
	struct FName                                       InMonsterBattleAIID;                                      // (BlueprintVisi, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommandCore
struct ABP_BCAI_Monster_C_ExecTurnCommandCore_Params
{
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ReceiveBeginPlay
struct ABP_BCAI_Monster_C_ReceiveBeginPlay_Params
{
};

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecuteUbergraph_BP_BCAI_Monster
struct ABP_BCAI_Monster_C_ExecuteUbergraph_BP_BCAI_Monster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisi, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
