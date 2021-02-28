#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x000C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0034
struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0018(0x0010) (Edit, BlueprintVisi)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x002C(0x0008) (Edit, BlueprintVisi, IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ProcIndexBuffer;                                          // 0x0010(0x0010) (ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0020(0x001C) (IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSectionVisible;                                          // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
