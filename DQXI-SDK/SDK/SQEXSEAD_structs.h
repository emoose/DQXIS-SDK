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

// Enum SQEXSEAD.ESQEXSEADChangeAutoSeEnableNotifyEndBehavior
enum class ESQEXSEADChangeAutoSeEnableNotifyEndBehavior : uint8_t
{
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior__RevertState = 0,
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior__SetInvertedState = 1,
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior__NoAction = 2,
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior__ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_MAX = 3
};


// Enum SQEXSEAD.ESQEXSEADANPlayAutoSeSourceType
enum class ESQEXSEADANPlayAutoSeSourceType : uint8_t
{
	ESQEXSEADANPlayAutoSeSourceType__MotionSoundType = 0,
	ESQEXSEADANPlayAutoSeSourceType__AuxSurfaceTable = 1,
	ESQEXSEADANPlayAutoSeSourceType__SurfaceTableAsset = 2,
	ESQEXSEADANPlayAutoSeSourceType__ESQEXSEADANPlayAutoSeSourceType_MAX = 3
};


// Enum SQEXSEAD.ESQEXSEADAutoSeComponentAssetTableNonSurface
enum class ESQEXSEADAutoSeComponentAssetTableNonSurface : uint8_t
{
	ESQEXSEADAutoSeComponentAssetTableNonSurface__RustleShort = 0,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__RustleLong = 1,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__RustleFootShort = 2,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__RustleFootLong = 3,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__WingFlapUp = 4,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__WingFlapDown = 5,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__SwingKnock = 6,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__SwingRub = 7,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__CrouchDown = 8,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__StandUp = 9,
	ESQEXSEADAutoSeComponentAssetTableNonSurface__MAX = 10
};


// Enum SQEXSEAD.ESQEXSEADAutoSeComponentAssetTablePerSurface
enum class ESQEXSEADAutoSeComponentAssetTablePerSurface : uint8_t
{
	ESQEXSEADAutoSeComponentAssetTablePerSurface__Walk = 0,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__Run = 1,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__Jump = 2,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__LandNormal = 3,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__LandHard = 4,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__FootShuffle = 5,
	ESQEXSEADAutoSeComponentAssetTablePerSurface__MAX = 6
};


// Enum SQEXSEAD.ESQEXSEADAutoSeResult
enum class ESQEXSEADAutoSeResult : uint8_t
{
	ESQEXSEADAutoSeResult__Success = 0,
	ESQEXSEADAutoSeResult__Failure = 1,
	ESQEXSEADAutoSeResult__Error_InvalidArgs = 2,
	ESQEXSEADAutoSeResult__Error_InvalidBoneName = 3,
	ESQEXSEADAutoSeResult__Error_NotAllSocketsValid = 4,
	ESQEXSEADAutoSeResult__Error_FailedToCreateProc = 5,
	ESQEXSEADAutoSeResult__ESQEXSEADAutoSeResult_MAX = 6
};


// Enum SQEXSEAD.ESQEXSEADAutoSePartsType
enum class ESQEXSEADAutoSePartsType : uint8_t
{
	ESQEXSEADAutoSePartsType__Invalid = 0,
	ESQEXSEADAutoSePartsType__Foot_Default = 1,
	ESQEXSEADAutoSePartsType__Arm_Default = 2,
	ESQEXSEADAutoSePartsType__Wing_Default = 3,
	ESQEXSEADAutoSePartsType__Swing_Default = 4,
	ESQEXSEADAutoSePartsType__Body_Default = 5,
	ESQEXSEADAutoSePartsType__ESQEXSEADAutoSePartsType_MAX = 6
};


// Enum SQEXSEAD.ESQEXSEADAutoSeMotionSoundType
enum class ESQEXSEADAutoSeMotionSoundType : uint8_t
{
	ESQEXSEADAutoSeMotionSoundType__None = 0,
	ESQEXSEADAutoSeMotionSoundType__Walk = 1,
	ESQEXSEADAutoSeMotionSoundType__Run = 2,
	ESQEXSEADAutoSeMotionSoundType__Jump = 3,
	ESQEXSEADAutoSeMotionSoundType__LandNormal = 4,
	ESQEXSEADAutoSeMotionSoundType__LandHard = 5,
	ESQEXSEADAutoSeMotionSoundType__FootShuffle = 6,
	ESQEXSEADAutoSeMotionSoundType__RustleShort = 7,
	ESQEXSEADAutoSeMotionSoundType__RustleLong = 8,
	ESQEXSEADAutoSeMotionSoundType__RustleFootShort = 9,
	ESQEXSEADAutoSeMotionSoundType__RustleFootLong = 10,
	ESQEXSEADAutoSeMotionSoundType__WingFlapUp = 11,
	ESQEXSEADAutoSeMotionSoundType__WingFlapDown = 12,
	ESQEXSEADAutoSeMotionSoundType__SwingKnock = 13,
	ESQEXSEADAutoSeMotionSoundType__SwingRub = 14,
	ESQEXSEADAutoSeMotionSoundType__CrouchDown = 15,
	ESQEXSEADAutoSeMotionSoundType__StandUp = 16,
	ESQEXSEADAutoSeMotionSoundType__ESQEXSEADAutoSeMotionSoundType_MAX = 17
};


// Enum SQEXSEAD.ESQEXSEAD_BGMStopBehaviour
enum class ESQEXSEAD_BGMStopBehaviour : uint8_t
{
	ESQEXSEAD_BGMStopBehaviour__Stop = 0,
	ESQEXSEAD_BGMStopBehaviour__Unreference = 1,
	ESQEXSEAD_BGMStopBehaviour__Reset = 2,
	ESQEXSEAD_BGMStopBehaviour__Ready = 3,
	ESQEXSEAD_BGMStopBehaviour__ESQEXSEAD_MAX = 4
};


// Enum SQEXSEAD.ESQEXSEAD_BGMStoreBehaviour
enum class ESQEXSEAD_BGMStoreBehaviour : uint8_t
{
	ESQEXSEAD_BGMStoreBehaviour__Stop = 0,
	ESQEXSEAD_BGMStoreBehaviour__AutoPlay = 1,
	ESQEXSEAD_BGMStoreBehaviour__Suspend = 2,
	ESQEXSEAD_BGMStoreBehaviour__AutoResume = 3,
	ESQEXSEAD_BGMStoreBehaviour__ESQEXSEAD_MAX = 4
};


// Enum SQEXSEAD.ESQEXSEAD_BGMState
enum class ESQEXSEAD_BGMState : uint8_t
{
	ESQEXSEAD_BGMState__Invalid    = 0,
	ESQEXSEAD_BGMState__NotReady   = 1,
	ESQEXSEAD_BGMState__Ready      = 2,
	ESQEXSEAD_BGMState__AutoPlay   = 3,
	ESQEXSEAD_BGMState__Playing    = 4,
	ESQEXSEAD_BGMState__Stop       = 5,
	ESQEXSEAD_BGMState__Suspended  = 6,
	ESQEXSEAD_BGMState__AutoResume = 7,
	ESQEXSEAD_BGMState__ESQEXSEAD_MAX = 8
};


// Enum SQEXSEAD.ESQEXSEADCategoryVolumeType
enum class ESQEXSEADCategoryVolumeType : uint8_t
{
	ESQEXSEADCategoryVolumeType__GAME = 0,
	ESQEXSEADCategoryVolumeType__CONFIG = 1,
	ESQEXSEADCategoryVolumeType__MAX = 2
};


// Enum SQEXSEAD.ESQEXSEADCategoryVolumeLayers
enum class ESQEXSEADCategoryVolumeLayers : uint8_t
{
	ESQEXSEADCategoryVolumeLayers__Debug = 0,
	ESQEXSEADCategoryVolumeLayers__Game = 1,
	ESQEXSEADCategoryVolumeLayers__Config = 2,
	ESQEXSEADCategoryVolumeLayers__CutScene = 3,
	ESQEXSEADCategoryVolumeLayers___MAX = 4,
	ESQEXSEADCategoryVolumeLayers__ESQEXSEADCategoryVolumeLayers_MAX = 5
};


// Enum SQEXSEAD.ESQEXSEADLayoutType
enum class ESQEXSEADLayoutType : uint8_t
{
	ESQEXSEADLayoutType__Point     = 0,
	ESQEXSEADLayoutType__Line      = 1,
	ESQEXSEADLayoutType__Box       = 2,
	ESQEXSEADLayoutType__Polyline  = 3,
	ESQEXSEADLayoutType__Quadrilateral = 4,
	ESQEXSEADLayoutType__TriangleStrip = 5,
	ESQEXSEADLayoutType__TriangleFan = 6,
	ESQEXSEADLayoutType__ESQEXSEADLayoutType_MAX = 7
};


// Enum SQEXSEAD.ESQEXSEADLayoutObstructionType
enum class ESQEXSEADLayoutObstructionType : uint8_t
{
	ESQEXSEADLayoutObstructionType__Board = 0,
	ESQEXSEADLayoutObstructionType__Box = 1,
	ESQEXSEADLayoutObstructionType__ESQEXSEADLayoutObstructionType_MAX = 2
};


// Enum SQEXSEAD.ESQEXSEADAudioStartTimings
enum class ESQEXSEADAudioStartTimings : uint8_t
{
	ESQEXSEADAudioStartTimings__None = 0,
	ESQEXSEADAudioStartTimings__OnBeginPlay = 1,
	ESQEXSEADAudioStartTimings__OnZeroOneValueVariable = 2,
	ESQEXSEADAudioStartTimings__ESQEXSEADAudioStartTimings_MAX = 3
};


// Enum SQEXSEAD.ESQEXSEADZeroOneProperties
enum class ESQEXSEADZeroOneProperties : uint8_t
{
	ESQEXSEADZeroOneProperties__None = 0,
	ESQEXSEADZeroOneProperties__Velocity = 1,
	ESQEXSEADZeroOneProperties__RotationalVelocity = 2,
	ESQEXSEADZeroOneProperties__ESQEXSEADZeroOneProperties_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SQEXSEAD.SQEXSEADSoundTrackKey
// 0x0028
struct FSQEXSEADSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AssetPathName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAnimNotifyPlayAutoSeParams
// 0x0028
struct FSQEXSEADAnimNotifyPlayAutoSeParams
{
	TEnumAsByte<ESQEXSEADANPlayAutoSeSourceType>       SourceType;                                               // 0x0000(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESQEXSEADAutoSeMotionSoundType>        MotionSoundType;                                          // 0x0001(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class USQEXSEADSurfaceAssetReferenceTable*         SurfaceAssetPathTable;                                    // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurfaceAssetTableRecordName;                              // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESQEXSEADAutoSePartsType>              AutoSePartsType;                                          // 0x0018(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoSePartsIndex;                                         // 0x0019(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCheckIsGrounded : 1;                                     // 0x001A(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bAttachToParts : 1;                                       // 0x001A(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              SoundVolume;                                              // 0x001C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SoundPitchMultiplier;                                     // 0x0020(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentAssetTablePerSurface
// 0x0030
struct FSQEXSEADAutoSeComponentAssetTablePerSurface
{
	struct FSoftObjectPath                             SoundAssetPaths[0x6];                                     // 0x0000(0x0008) (Edit)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentAssetTableNonSurface
// 0x0050
struct FSQEXSEADAutoSeComponentAssetTableNonSurface
{
	struct FSoftObjectPath                             SoundAssetPaths[0xA];                                     // 0x0000(0x0008) (Edit)
};

// ScriptStruct SQEXSEAD.SQEXSEADSurfaceAssetReferenceRecord
// 0x0200
struct FSQEXSEADSurfaceAssetReferenceRecord
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             AssetRefs[0x3F];                                          // 0x0008(0x0008) (Edit)
};

// ScriptStruct SQEXSEAD.SQEXSEADSurfaceAssetReferenceTableData
// 0x0010
struct FSQEXSEADSurfaceAssetReferenceTableData
{
	TArray<struct FSQEXSEADSurfaceAssetReferenceRecord> Records;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentFootInitParams
// 0x0028
struct FSQEXSEADAutoSeComponentFootInitParams
{
	struct FName                                       FemurName;                                                // 0x0000(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TibiaName;                                                // 0x0008(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootName;                                                 // 0x0010(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HeelName;                                                 // 0x0018(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToeName;                                                  // 0x0020(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentArmInitParams
// 0x0010
struct FSQEXSEADAutoSeComponentArmInitParams
{
	struct FName                                       ShoulderName;                                             // 0x0000(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ElbowName;                                                // 0x0008(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentWingInitParams
// 0x0010
struct FSQEXSEADAutoSeComponentWingInitParams
{
	struct FName                                       WingRootName;                                             // 0x0000(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WingEdgeName;                                             // 0x0008(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentSwingInitParams
// 0x0010
struct FSQEXSEADAutoSeComponentSwingInitParams
{
	TArray<struct FName>                               ChainNodeNames;                                           // 0x0000(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentBodyInitParams
// 0x0010
struct FSQEXSEADAutoSeComponentBodyInitParams
{
	struct FName                                       BaseName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaistName;                                                // 0x0008(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeComponentInitParams
// 0x0058
struct FSQEXSEADAutoSeComponentInitParams
{
	TArray<struct FSQEXSEADAutoSeComponentFootInitParams> Feet;                                                     // 0x0000(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSQEXSEADAutoSeComponentArmInitParams> Arms;                                                     // 0x0010(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSQEXSEADAutoSeComponentWingInitParams> Wings;                                                    // 0x0020(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSQEXSEADAutoSeComponentSwingInitParams> Swings;                                                   // 0x0030(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FSQEXSEADAutoSeComponentBodyInitParams      Body;                                                     // 0x0040(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly)
	float                                              AutoCalcHeelRatio;                                        // 0x0050(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeAnalyzerSetting
// 0x0018
struct FSQEXSEADAutoSeAnalyzerSetting
{
	bool                                               bOverrideAssumeFootMotionlessMoveLenInWorld;              // 0x0000(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AssumeFootMotionlessMoveLenInWorld;                       // 0x0004(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAssumeBodyRunngingVelocity;                      // 0x0008(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              AssumeBodyRunngingVelocity;                               // 0x000C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoCalcFootGroundedThresholdRatio;              // 0x0010(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              AutoCalcFootGroundedThresholdRatio;                       // 0x0014(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeDetectorSettingFootStep
// 0x0010
struct FSQEXSEADAutoSeDetectorSettingFootStep
{
	bool                                               bOverrideFootShuffleAssumeBodyStopVelocityThreshold;      // 0x0000(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FootShuffleAssumeBodyStopVelocityThreshold;               // 0x0004(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideFootShuffleDetectFootAccelThreshold;             // 0x0008(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              FootShuffleDetectFootAccelThreshold;                      // 0x000C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeDetectorSettingRustle
// 0x0028
struct FSQEXSEADAutoSeDetectorSettingRustle
{
	bool                                               bOverrideElbowRustleVolumeRangesWalk;                     // 0x0000(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin;      // 0x0004(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax;      // 0x0008(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleVolumeRangeWalkMin;                            // 0x000C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleVolumeRangeWalkMax;                            // 0x0010(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideElbowRustleVolumeRangesRun;                      // 0x0014(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin;       // 0x0018(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax;       // 0x001C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleVolumeRangeRunMin;                             // 0x0020(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElbowRustleVolumeRangeRunMax;                             // 0x0024(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeDetectorSettingSwing
// 0x0010
struct FSQEXSEADAutoSeDetectorSettingSwing
{
	bool                                               bOverrideKnockDetectVelocityThreshold;                    // 0x0000(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              KnockDetectVelocityThreshold;                             // 0x0004(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideRubDetectVelocityThreshold;                      // 0x0008(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              RubDetectVelocityThreshold;                               // 0x000C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEAD_BGMOptions
// 0x001C
struct FSQEXSEAD_BGMOptions
{
	int                                                Priority;                                                 // 0x0000(0x0004) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	ESQEXSEAD_BGMStoreBehaviour                        StoreBehaviour;                                           // 0x0004(0x0001) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	ESQEXSEAD_BGMStopBehaviour                         StopBehaviour;                                            // 0x0005(0x0001) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              PlayFadeInTime;                                           // 0x0008(0x0004) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              ResumeFadeInTime;                                         // 0x000C(0x0004) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SuspendFadeOutTime;                                       // 0x0010(0x0004) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              StopFadeOutTime;                                          // 0x0014(0x0004) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bRestartSameBGM;                                          // 0x0018(0x0001) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEAD_BGMSlotSetting
// 0x0028
struct FSQEXSEAD_BGMSlotSetting
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSQEXSEAD_BGMOptions                        SlotOption;                                               // 0x0008(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADAutoSeControlTrackKey
// 0x0014
struct FSQEXSEADAutoSeControlTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseGlobalEnable : 1;                                     // 0x0004(0x0001) (Edit)
	unsigned char                                      bGlobalEnable : 1;                                        // 0x0004(0x0001) (Edit)
	unsigned char                                      bUseEnable : 1;                                           // 0x0004(0x0001) (Edit)
	unsigned char                                      bEnable : 1;                                              // 0x0004(0x0001) (Edit)
	unsigned char                                      bUseVolumeScale : 1;                                      // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDisableAnimNotifyPlayAutoSE : 1;                      // 0x000C(0x0001) (Edit)
	unsigned char                                      bDisableAnimNotifyPlayAutoSE : 1;                         // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseEnableForceOverridePhysicalSurface : 1;               // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableForceOverridePhysicalSurface : 1;                  // 0x000C(0x0001) (Edit)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForForceOverride;                          // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAssumeFootMotionlessMoveLength;                       // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	float                                              AssumeFootMotionlessMoveLength;                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADCategoryVolumeKeyTrackKey
// 0x0020
struct FSQEXSEADCategoryVolumeKeyTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Category;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADEventTrackKey
// 0x0010
struct FSQEXSEADEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADLayoutInfo
// 0x0040
struct FSQEXSEADLayoutInfo
{
	TEnumAsByte<ESQEXSEADLayoutType>                   LayoutType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InnerRadius;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionLPF;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolume;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LayoutPointLocations;                                     // 0x0018(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADLayoutObstructionInfo
// 0x0028
struct FSQEXSEADLayoutObstructionInfo
{
	TEnumAsByte<ESQEXSEADLayoutObstructionType>        ObstructionType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector>                             ObstructionPointLocations;                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<class AStaticMeshActor*>                    LinkedMeshActorList;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct SQEXSEAD.SQEXSEADSoundReference
// 0x0018
struct FSQEXSEADSoundReference
{
	class USoundBase*                                  Sound;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SQEXSEAD.SQEXSEADVolumeInfo
// 0x0001
struct FSQEXSEADVolumeInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADSoundAttachedInfo
// 0x0010
struct FSQEXSEADSoundAttachedInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEAD_BGMLocalOptions
// 0x0008
struct FSQEXSEAD_BGMLocalOptions
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADCategoryInfo
// 0x0010
struct FSQEXSEADCategoryInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct SQEXSEAD.SQEXSEADSystemPerformanceInfo
// 0x0020
struct FSQEXSEADSystemPerformanceInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
