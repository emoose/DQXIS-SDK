#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Overlay.OverlayItem
// 0x0028
struct FOverlayItem
{
	struct FTimespan                                   StartTime;                                                // 0x0000(0x0008) (Edit, BlueprintVisi)
	struct FTimespan                                   EndTime;                                                  // 0x0008(0x0008) (Edit, BlueprintVisi)
	struct FString                                     Text;                                                     // 0x0010(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (Edit, BlueprintVisi, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
