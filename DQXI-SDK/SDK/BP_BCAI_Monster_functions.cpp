
#include "../pch.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcTargetGameCharacterWithSecondCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackActionData         InActionData                   (BlueprintVisi, BlueprintReadOnly, Parm)
// class UJackGameCharacter*      OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::CalcTargetGameCharacterWithSecondCheck(const struct FJackActionData& InActionData, class UJackGameCharacter** OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcTargetGameCharacterWithSecondCheck");

	ABP_BCAI_Monster_C_CalcTargetGameCharacterWithSecondCheck_Params params;
	params.InActionData = InActionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcExceptionActionSlotsTurnCommand
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackActionData         OutExecActionData              (Parm, OutParm)
// class UJackGameCharacter*      OutExecTargetGameCharacter     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::CalcExceptionActionSlotsTurnCommand(struct FJackActionData* OutExecActionData, class UJackGameCharacter** OutExecTargetGameCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcExceptionActionSlotsTurnCommand");

	ABP_BCAI_Monster_C_CalcExceptionActionSlotsTurnCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutExecActionData != nullptr)
		*OutExecActionData = params.OutExecActionData;
	if (OutExecTargetGameCharacter != nullptr)
		*OutExecTargetGameCharacter = params.OutExecTargetGameCharacter;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.IsReviveAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FJackActionData         ActionData                     (BlueprintVisi, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bReviveAction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::IsReviveAction(struct FJackActionData* ActionData, bool* bReviveAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.IsReviveAction");

	ABP_BCAI_Monster_C_IsReviveAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionData != nullptr)
		*ActionData = params.ActionData;
	if (bReviveAction != nullptr)
		*bReviveAction = params.bReviveAction;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCanditateTargetGameCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackActionData         InActionData                   (BlueprintVisi, BlueprintReadOnly, Parm)
// TArray<class UJackGameCharacter*> OutCanditateGameCharacters     (Parm, OutParm, ZeroConstructor)

void ABP_BCAI_Monster_C::CalcCanditateTargetGameCharacter(const struct FJackActionData& InActionData, TArray<class UJackGameCharacter*>* OutCanditateGameCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCanditateTargetGameCharacter");

	ABP_BCAI_Monster_C_CalcCanditateTargetGameCharacter_Params params;
	params.InActionData = InActionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCanditateGameCharacters != nullptr)
		*OutCanditateGameCharacters = params.OutCanditateGameCharacters;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildDefaultActionSlots
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Monster_C::BuildDefaultActionSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildDefaultActionSlots");

	ABP_BCAI_Monster_C_BuildDefaultActionSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCandidateSlotIDs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FJackMonsterBattleAI_ActionSlot> ActionSlots                    (BlueprintVisi, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    CandidateSlotIDs               (Parm, OutParm, ZeroConstructor)

void ABP_BCAI_Monster_C::CalcCandidateSlotIDs(TArray<struct FJackMonsterBattleAI_ActionSlot>* ActionSlots, TArray<int>* CandidateSlotIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.CalcCandidateSlotIDs");

	ABP_BCAI_Monster_C_CalcCandidateSlotIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionSlots != nullptr)
		*ActionSlots = params.ActionSlots;
	if (CandidateSlotIDs != nullptr)
		*CandidateSlotIDs = params.CandidateSlotIDs;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.GetActionPatternType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EJackBattleActionPatternType   ActionPatternType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::GetActionPatternType(EJackBattleActionPatternType* ActionPatternType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.GetActionPatternType");

	ABP_BCAI_Monster_C_GetActionPatternType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionPatternType != nullptr)
		*ActionPatternType = params.ActionPatternType;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildCandidateActionSlots
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FJackMonsterBattleAI_ActionSlot> Result                         (Parm, OutParm, ZeroConstructor)
// TArray<int>                    CandidateSlotIDs               (Parm, OutParm, ZeroConstructor)

void ABP_BCAI_Monster_C::BuildCandidateActionSlots(TArray<struct FJackMonsterBattleAI_ActionSlot>* Result, TArray<int>* CandidateSlotIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.BuildCandidateActionSlots");

	ABP_BCAI_Monster_C_BuildCandidateActionSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (CandidateSlotIDs != nullptr)
		*CandidateSlotIDs = params.CandidateSlotIDs;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommand
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackBattleCommandAI_ExecTurnCommandResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FJackBattleCommandAI_ExecTurnCommandResult ABP_BCAI_Monster_C::ExecTurnCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommand");

	ABP_BCAI_Monster_C_ExecTurnCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Monster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.UserConstructionScript");

	ABP_BCAI_Monster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.InitializeMonsterBattleAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InMonsterBattleAIID            (BlueprintVisi, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::InitializeMonsterBattleAI(const struct FName& InMonsterBattleAIID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.InitializeMonsterBattleAI");

	ABP_BCAI_Monster_C_InitializeMonsterBattleAI_Params params;
	params.InMonsterBattleAIID = InMonsterBattleAIID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommandCore
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Monster_C::ExecTurnCommandCore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecTurnCommandCore");

	ABP_BCAI_Monster_C_ExecTurnCommandCore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BCAI_Monster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.ReceiveBeginPlay");

	ABP_BCAI_Monster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecuteUbergraph_BP_BCAI_Monster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisi, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BCAI_Monster_C::ExecuteUbergraph_BP_BCAI_Monster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Monster.BP_BCAI_Monster_C.ExecuteUbergraph_BP_BCAI_Monster");

	ABP_BCAI_Monster_C_ExecuteUbergraph_BP_BCAI_Monster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
