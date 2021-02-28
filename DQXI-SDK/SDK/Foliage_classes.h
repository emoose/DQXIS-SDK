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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x09E0 - 0x09C0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x09C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0038 - 0x0038)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};


// Class Foliage.FoliageType
// 0x0408 (0x0440 - 0x0038)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0038(0x0010) (IsPlainOldData)
	float                                              Density;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0058(0x0008) (Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0060(0x0008) (Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0068(0x0008) (Edit)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0070(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x00A0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x00A8(0x0001) (Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x00AC(0x0008) (Edit)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00BC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00C4(0x0008) (Edit)
	struct FFloatInterval                              Height;                                                   // 0x00CC(0x0008) (Edit)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x00E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x00F0(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x00F4(0x000C) (Edit, IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0104(0x0020) (IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0124(0x000C) (IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0130(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0134(0x0008) (Edit)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x013C(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x013D(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData08[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x0140(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0144(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0xB];                                       // 0x0145(0x000B) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0150(0x0220) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0371(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0374(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0378(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x037C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x03A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x03A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x03B0(0x0008) (Edit)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x03B8(0x0078) (Edit)
	int                                                ChangeCount;                                              // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0434(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0435(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0435(0x0001) (Edit)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0436(0x0002) MISSED OFFSET
	float                                              LODDistanceScale;                                         // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x043C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0460 - 0x0440)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0448(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x03E8 - 0x0398)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0398(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0408 - 0x03A8)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x03B0(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x03BC(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x03C8(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x03D4(0x000C) (Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x03E0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x03E4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x03E8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x03EC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x03F0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x03F4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x03F8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x03FC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x07E0 - 0x07D0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x03D8 - 0x03D0)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x0150 - 0x0128)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0128(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x0130(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x0140(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0080 - 0x0038)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0038(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x003C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0040(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0044(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	bool                                               bNeedsSimulation;                                         // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0061(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0168 - 0x0038)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0040(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00F0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x03D8 - 0x03D0)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x03D0(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
