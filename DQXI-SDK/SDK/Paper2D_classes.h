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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x0220 - 0x0200)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SlotDisplayName;                                          // 0x0208(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0010 (0x07C0 - 0x07B0)
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                   // 0x07B0(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0060 - 0x0038)
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          // 0x0038(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0050(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}


	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x03A0 - 0x0398)
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0050 (0x07B0 - 0x0760)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                           // 0x0760(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0770(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0774(0x0001) (Net)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0774(0x0001) (Net)
	unsigned char                                      bPlaying : 1;                                             // 0x0774(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x0778(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CachedFrameIndex;                                         // 0x077C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0780(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0790(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}


	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x03A0 - 0x0398)
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x0790 - 0x0760)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                        // 0x0760(0x0010) (ZeroConstructor)
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x0770(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0780(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0040 - 0x0038)
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableTerrainSplineEditing;                              // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bResizeSpriteDataToMatchTextures;                         // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0098 (0x00D0 - 0x0038)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	struct FVector2D                                   SourceUV;                                                 // 0x0048(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   SourceDimension;                                          // 0x0050(0x0008) (Edit, IsPlainOldData)
	class UTexture2D*                                  SourceTexture;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0070(0x0008) (IsPlainOldData)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x0078(0x0008) (IsPlainOldData)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0088(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x0090(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0098(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlternateMaterialSplitIndex;                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x00C0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x03A0 - 0x0398)
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0038 - 0x0038)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0038 - 0x0038)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}


	struct FSlateBrush STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x0780 - 0x0760)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                             // 0x0760(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0770(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}


	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x03B0 - 0x0398)
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x03A8(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0060 (0x0790 - 0x0730)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                          // 0x0730(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClosedSpline;                                            // 0x0738(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFilledSpline;                                            // 0x0739(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x073A(0x0006) MISSED OFFSET
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         // 0x0740(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x0748(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOverlapAmount;                                     // 0x074C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TerrainColor;                                             // 0x0750(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	int                                                ReparamStepsPerSegment;                                   // 0x0760(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x0764(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0765(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x0768(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0778(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}


	void SetTerrainColor(const struct FLinearColor& NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0058 - 0x0040)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UPaperSprite*                                InteriorFill;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0040 (0x0860 - 0x0820)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0820(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x00A8 - 0x0038)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0038(0x0018) (BlueprintVisi, BlueprintReadOnly)
	int                                                LayerWidth;                                               // 0x0050(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeight;                                              // 0x0054(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x005C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionOffsetOverride;                                  // 0x0060(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerColor;                                               // 0x0064(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0080(0x0010) (ZeroConstructor)
	class UPaperTileSet*                               TileSet;                                                  // 0x0090(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<int>                                        AllocatedGrid;                                            // 0x0098(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0070 (0x00A8 - 0x0038)
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 // 0x0038(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // 0x003C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0040(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0044(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileX;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileY;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerLayer;                                       // 0x0054(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
	class UMaterialInterface*                          Material;                                                 // 0x0070(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0078(0x0010) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              CollisionThickness;                                       // 0x0088(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x008C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           // 0x008D(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LayerNameIndex;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x03A0 - 0x0398)
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x07B0 - 0x0760)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                MapWidth;                                                 // 0x0760(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MapHeight;                                                // 0x0764(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0768(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x076C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x0770(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0778(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0780(0x0010) (ZeroConstructor, Deprecated)
	struct FLinearColor                                TileMapColor;                                             // 0x0790(0x0010) (Edit, IsPlainOldData)
	int                                                UseSingleLayerIndex;                                      // 0x07A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSingleLayer;                                          // 0x07A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x07A8(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}


	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0080 (0x00B8 - 0x0038)
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 // 0x0038(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	class UTexture2D*                                  TileSheet;                                                // 0x0040(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FIntMargin                                  BorderMargin;                                             // 0x0058(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0068(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	struct FIntPoint                                   DrawingOffset;                                            // 0x0070(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	int                                                WidthInTiles;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeightInTiles;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0088(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0098(0x0010) (ZeroConstructor)
	int                                                TileWidth;                                                // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Margin;                                                   // 0x00B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Spacing;                                                  // 0x00B4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0038 - 0x0038)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}


	struct FPaperTileInfo STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	struct FName STATIC_GetTileUserData(const struct FPaperTileInfo& Tile);
	struct FTransform STATIC_GetTileTransform(const struct FPaperTileInfo& Tile);
	void STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
