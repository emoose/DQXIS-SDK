
#include "../SDK.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BCAI_Konran.BP_BCAI_Konran_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BCAI_Konran_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BCAI_Konran.BP_BCAI_Konran_C.UserConstructionScript");

	ABP_BCAI_Konran_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
