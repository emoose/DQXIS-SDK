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

// Class ApexDestruction.DestructibleActor
// 0x0020 (0x03B8 - 0x0398)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bAffectNavigation : 1;                                    // 0x03A0(0x0001) (Edit, BlueprintVisi, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorFracture;                                          // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x0AF0 - 0x0A10)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x0A10(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0A18(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, EditFixedSize, ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x0A28(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A29(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x0A2C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0A30(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      // 0x0A40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x0A50(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00C8 - 0x0038)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x003C(0x0024) (Edit, Transient)
	int                                                RandomSeed;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0068(0x0010) (ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x03B8 - 0x0318)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x0318(0x0088) (Edit)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x03A0(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
