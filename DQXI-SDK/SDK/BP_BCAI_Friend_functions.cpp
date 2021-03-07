
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

// Function BP_BCAI_Friend.BP_BCAI_Friend_C.ExecTurnCommand
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FJackBattleCommandAI_ExecTurnCommandResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FJackBattleCommandAI_ExecTurnCommandResult ABP_BCAI_Friend_C::ExecTurnCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Friend.BP_BCAI_Friend_C.ExecTurnCommand");

	ABP_BCAI_Friend_C_ExecTurnCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BCAI_Friend.BP_BCAI_Friend_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Friend_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Friend.BP_BCAI_Friend_C.UserConstructionScript");

	ABP_BCAI_Friend_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
