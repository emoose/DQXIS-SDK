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

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x07D0 - 0x07D0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0408 (0x07A0 - 0x0398)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x03A0(0x0010) (IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x03B0(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                StaticLightingLOD;                                        // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x03F0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0400(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0410(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0420(0x0060) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0488(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0488(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x0488(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	struct FLightingChannels                           LightingChannels;                                         // 0x048C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x0490(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0490(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0494(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0498(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x04B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x04B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x04B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x04C0(0x0220) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x06E0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x06E0(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06E1(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x06E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x06EC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNeverStreamHeightmapTextures : 1;                        // 0x06F0(0x0001) (Edit)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x06F0(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06F1(0x0003) MISSED OFFSET
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x06F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x06F5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xAA];                                      // 0x06F6(0x00AA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x07A0 - 0x07A0)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0180 (0x08B0 - 0x0730)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                             // 0x0730(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0734(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0738(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x073C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0740(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0748(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0750(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0758(0x0010) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0768(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0778(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0790(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x07A4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x07B0(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x07C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x07C8(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x07E4(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0800(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0810(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0820(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0824(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0828(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x082C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0830(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0834(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0838(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x083C(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x084C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0860(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0868(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0870(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0878(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0880(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0398 - 0x0398)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x03E8 - 0x0398)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0398(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0730 - 0x0730)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0030 (0x0068 - 0x0038)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0048(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0058(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x005C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0060(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0061(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0810 - 0x0730)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                      // 0x0730(0x0010) (ZeroConstructor)
	int                                                SectionBaseX;                                             // 0x0740(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x0744(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x074C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0754(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0758(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0768(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0778(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x0794(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x07C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x07D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0210 - 0x0038)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0038(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0054(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0070(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x007C(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x007C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0120(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0058 (0x0090 - 0x0038)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0060 - 0x0038)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x004C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01D8 - 0x01D0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01D0(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01D0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (0x0830 - 0x0810)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                 // 0x0810(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0820(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x03A0 - 0x0398)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0800 - 0x07D0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x07D0(0x0010) (IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x07E0(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x07F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x07F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0760 - 0x0730)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                            // 0x0730(0x0010) (ZeroConstructor)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0740(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0750(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x00A8 - 0x0038)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0038(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0044(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00C0 - 0x0038)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0038(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0068(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0080(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0090(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00B0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x07C0 - 0x07A0)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0070(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0080(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0088 - 0x0070)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0090 - 0x0070)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x007C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x0100 - 0x0070)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0070(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x00A8(0x0038)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00E8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00EC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x0108 - 0x0070)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0070(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x00A8(0x0038)
	struct FName                                       ParameterName;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00EC(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00F8(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0080 - 0x0070)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
