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

// Enum JackAnimNodeRuntime.EJackFacePoseEvaluator
enum class EJackFacePoseEvaluator : uint8_t
{
	EJackFacePoseEvaluator__Upper  = 0,
	EJackFacePoseEvaluator__Lower  = 1,
	EJackFacePoseEvaluator__MAX    = 2
};


// Enum JackAnimNodeRuntime.EJackLookAtBasePose
enum class EJackLookAtBasePose : uint8_t
{
	EJackLookAtBasePose__Default   = 0,
	EJackLookAtBasePose__ReferencePose = 1,
	EJackLookAtBasePose__ReferencePoseWithKeepLocation = 2,
	EJackLookAtBasePose__FowardVectorOffset = 3,
	EJackLookAtBasePose__EJackLookAtBasePose_MAX = 4
};


// Enum JackAnimNodeRuntime.EJackConvertedAxis
enum class EJackConvertedAxis : uint8_t
{
	EJackConvertedAxis__PLUS_X     = 0,
	EJackConvertedAxis__PLUS_Y     = 1,
	EJackConvertedAxis__PLUS_Z     = 2,
	EJackConvertedAxis__MINUS_X    = 3,
	EJackConvertedAxis__MINUS_Y    = 4,
	EJackConvertedAxis__MINUS_Z    = 5,
	EJackConvertedAxis__EJackConvertedAxis_MAX = 6
};


// Enum JackAnimNodeRuntime.EJackWindEffectDecayRate
enum class EJackWindEffectDecayRate : uint8_t
{
	EJackWindEffectDecayRate__NoDecay = 0,
	EJackWindEffectDecayRate__Linear = 1,
	EJackWindEffectDecayRate__Square = 2,
	EJackWindEffectDecayRate__EJackWindEffectDecayRate_MAX = 3
};


// Enum JackAnimNodeRuntime.EJackAnimDynamicsSphericalLimitType
enum class EJackAnimDynamicsSphericalLimitType : uint8_t
{
	EJackAnimDynamicsSphericalLimitType__Inner = 0,
	EJackAnimDynamicsSphericalLimitType__Outer = 1,
	EJackAnimDynamicsSphericalLimitType__EJackAnimDynamicsSphericalLimitType_MAX = 2
};


// Enum JackAnimNodeRuntime.FJackAnimDynamicsEvaluateStatus
enum class EFJackAnimDynamicsEvaluateStatus : uint8_t
{
	FJackAnimDynamicsEvaluateStatus__Never = 0,
	FJackAnimDynamicsEvaluateStatus__Pending = 1,
	FJackAnimDynamicsEvaluateStatus__Ran = 2,
	FJackAnimDynamicsEvaluateStatus__FJackAnimDynamicsEvaluateStatus_MAX = 3
};


// Enum JackAnimNodeRuntime.EJackAnimPhysSimSpaceType
enum class EJackAnimPhysSimSpaceType : uint8_t
{
	EJackAnimPhysSimSpaceType__Component = 0,
	EJackAnimPhysSimSpaceType__Actor = 1,
	EJackAnimPhysSimSpaceType__World = 2,
	EJackAnimPhysSimSpaceType__RootRelative = 3,
	EJackAnimPhysSimSpaceType__BoneRelative = 4,
	EJackAnimPhysSimSpaceType__EJackAnimPhysSimSpaceType_MAX = 5
};


// Enum JackAnimNodeRuntime.EJackAnimPhysLinearConstraintType
enum class EJackAnimPhysLinearConstraintType : uint8_t
{
	EJackAnimPhysLinearConstraintType__Free = 0,
	EJackAnimPhysLinearConstraintType__Limited = 1,
	EJackAnimPhysLinearConstraintType__EJackAnimPhysLinearConstraintType_MAX = 2
};


// Enum JackAnimNodeRuntime.EJackAnimPhysAngularConstraintType
enum class EJackAnimPhysAngularConstraintType : uint8_t
{
	EJackAnimPhysAngularConstraintType__Angular = 0,
	EJackAnimPhysAngularConstraintType__Cone = 1,
	EJackAnimPhysAngularConstraintType__EJackAnimPhysAngularConstraintType_MAX = 2
};


// Enum JackAnimNodeRuntime.EJackAnimExpressionType
enum class EJackAnimExpressionType : uint8_t
{
	EJackAnimExpressionType__MaxOrMinRot = 0,
	EJackAnimExpressionType__AverageRot = 1,
	EJackAnimExpressionType__TransSyncRot = 2,
	EJackAnimExpressionType__Lerp2BonesAndClamp = 3,
	EJackAnimExpressionType__RotCancel = 4,
	EJackAnimExpressionType__ModifyBone = 5,
	EJackAnimExpressionType__EJackAnimExpressionType_MAX = 6
};


// Enum JackAnimNodeRuntime.EJackGetTransformMode
enum class EJackGetTransformMode : uint8_t
{
	EJackGetTransformMode__Default = 0,
	EJackGetTransformMode__Delta   = 1,
	EJackGetTransformMode__EJackGetTransformMode_MAX = 2
};


// Enum JackAnimNodeRuntime.EJackDynamicBonePartsSlot
enum class EJackDynamicBonePartsSlot : uint8_t
{
	EJackDynamicBonePartsSlot__UPPER_BODY = 0,
	EJackDynamicBonePartsSlot__LOWER_BODY = 1,
	EJackDynamicBonePartsSlot__BODY_EXTRA = 2,
	EJackDynamicBonePartsSlot__HAIR = 3,
	EJackDynamicBonePartsSlot__HAIR_EXTRA = 4,
	EJackDynamicBonePartsSlot__MANTLE = 5,
	EJackDynamicBonePartsSlot__OTHER = 6,
	EJackDynamicBonePartsSlot__MAX = 7
};


// Enum JackAnimNodeRuntime.EJackBoneAxis
enum class EJackBoneAxis : uint8_t
{
	EJackBoneAxis__X               = 0,
	EJackBoneAxis__Y               = 1,
	EJackBoneAxis__Z               = 2,
	EJackBoneAxis__EJackBoneAxis_MAX = 3
};


// Enum JackAnimNodeRuntime.EJackNeedsToEvalDynamicsWeightCurve
enum class EJackNeedsToEvalDynamicsWeightCurve : uint8_t
{
	EJackNeedsToEvalDynamicsWeightCurve__NotReflected = 0,
	EJackNeedsToEvalDynamicsWeightCurve__NotNeedToEvalCurve = 1,
	EJackNeedsToEvalDynamicsWeightCurve__NeedToEvalCurve = 2,
	EJackNeedsToEvalDynamicsWeightCurve__EJackNeedsToEvalDynamicsWeightCurve_MAX = 3
};


// Enum JackAnimNodeRuntime.EJackMantleDynamicBoneState
enum class EJackMantleDynamicBoneState : uint8_t
{
	EJackMantleDynamicBoneState__Default = 0,
	EJackMantleDynamicBoneState__Sim_CapeMantle = 1,
	EJackMantleDynamicBoneState__Sim_MantleC = 2,
	EJackMantleDynamicBoneState__Sim_MantleC_N013 = 3,
	EJackMantleDynamicBoneState__Sim_MantleB = 4,
	EJackMantleDynamicBoneState__Sim_CapeMantle_N002 = 5,
	EJackMantleDynamicBoneState__Sim_MantleC_N002 = 6,
	EJackMantleDynamicBoneState__Sim_MantleC_N014 = 7,
	EJackMantleDynamicBoneState__Sim_MantleC_P004 = 8,
	EJackMantleDynamicBoneState__Sim_MantleC_P008 = 9,
	EJackMantleDynamicBoneState__Sim_MantleC_P007 = 10,
	EJackMantleDynamicBoneState__Sim_MantleC_P002 = 11,
	EJackMantleDynamicBoneState__EJackMantleDynamicBoneState_MAX = 12
};


// Enum JackAnimNodeRuntime.EJackHairDynamicBoneState
enum class EJackHairDynamicBoneState : uint8_t
{
	EJackHairDynamicBoneState__Default = 0,
	EJackHairDynamicBoneState__Pose_P008Hair = 1,
	EJackHairDynamicBoneState__Pose_P004Hair = 2,
	EJackHairDynamicBoneState__Pose_N101Hair = 3,
	EJackHairDynamicBoneState__Pose_N001Hair = 4,
	EJackHairDynamicBoneState__Pose_P003Hair = 5,
	EJackHairDynamicBoneState__Sim_P004ShortHair = 6,
	EJackHairDynamicBoneState__Sim_ShortHairUpMidLow = 7,
	EJackHairDynamicBoneState__Sim_C_RearHairH = 8,
	EJackHairDynamicBoneState__Sim_C_RearHairA = 9,
	EJackHairDynamicBoneState__Sim_PlayerHair = 10,
	EJackHairDynamicBoneState__Sim_LR_RearHairA = 11,
	EJackHairDynamicBoneState__Pose_LR_RearHairD1 = 12,
	EJackHairDynamicBoneState__Pose_C_RearHairB1 = 13,
	EJackHairDynamicBoneState__Pose_LR_SideHairI1 = 14,
	EJackHairDynamicBoneState__Pose_C_RearHairG1 = 15,
	EJackHairDynamicBoneState__Pose_LR_SideHairJ1 = 16,
	EJackHairDynamicBoneState__Pose_RearHairILL = 17,
	EJackHairDynamicBoneState__Pose_RearHairKPP = 18,
	EJackHairDynamicBoneState__Pose_SideHairF1 = 19,
	EJackHairDynamicBoneState__Pose_C_RearHairL1 = 20,
	EJackHairDynamicBoneState__Pose_LR_SideHairK1 = 21,
	EJackHairDynamicBoneState__Pose_R_FrontHairE1 = 22,
	EJackHairDynamicBoneState__Pose_ChestHairA1 = 23,
	EJackHairDynamicBoneState__Pose_NeckHoodA1 = 24,
	EJackHairDynamicBoneState__Pose_HeadVeilB1 = 25,
	EJackHairDynamicBoneState__Pose_C_RearHairN1 = 26,
	EJackHairDynamicBoneState__Pose_C_RearHairQ1 = 27,
	EJackHairDynamicBoneState__Sim_BeardD1 = 28,
	EJackHairDynamicBoneState__Pose_HeadVeilC1 = 29,
	EJackHairDynamicBoneState__Pose_RearHairP1 = 30,
	EJackHairDynamicBoneState__Sim_C_BeardB = 31,
	EJackHairDynamicBoneState__Sim_N104Hair = 32,
	EJackHairDynamicBoneState__Sim_C_HairTailA1 = 33,
	EJackHairDynamicBoneState__Sim_C_HairTailB1 = 34,
	EJackHairDynamicBoneState__Pose_LR_SideHairL1 = 35,
	EJackHairDynamicBoneState__EJackHairDynamicBoneState_MAX = 36
};


// Enum JackAnimNodeRuntime.EJackLowerDynamicBoneState
enum class EJackLowerDynamicBoneState : uint8_t
{
	EJackLowerDynamicBoneState__Default = 0,
	EJackLowerDynamicBoneState__RtEx_Skirt_Length1 = 1,
	EJackLowerDynamicBoneState__RtEx_Skirt_Length2 = 2,
	EJackLowerDynamicBoneState__RtEx_Skirt_Length3 = 3,
	EJackLowerDynamicBoneState__RtEx_Skirt_Length4 = 4,
	EJackLowerDynamicBoneState__RtEx_SBSkirt = 5,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length2 = 6,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length3 = 7,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length3_N008 = 8,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length3_N010 = 9,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length3_N013 = 10,
	EJackLowerDynamicBoneState__RtEx_HipsArmor = 11,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_N001 = 12,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_N004 = 13,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtK1 = 14,
	EJackLowerDynamicBoneState__RtEx_P004Skirt = 15,
	EJackLowerDynamicBoneState__RtEx_HrSkirtA = 16,
	EJackLowerDynamicBoneState__Sim_KtAcce = 17,
	EJackLowerDynamicBoneState__RtEx_HipsSideArmor = 18,
	EJackLowerDynamicBoneState__RtEx_P001Skirt = 19,
	EJackLowerDynamicBoneState__Sim_LR_LoinclothA1 = 20,
	EJackLowerDynamicBoneState__Sim_TailSkirtA1 = 21,
	EJackLowerDynamicBoneState__Sim_LR_NpcPantsI3 = 22,
	EJackLowerDynamicBoneState__RtEx_FBSkirtA1 = 23,
	EJackLowerDynamicBoneState__RtEx_NmSkirtB1 = 24,
	EJackLowerDynamicBoneState__RtEx_NmSkirtA1 = 25,
	EJackLowerDynamicBoneState__RtEx_SlideSkirt = 26,
	EJackLowerDynamicBoneState__RtEx_FBSkirtB1 = 27,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtQ1 = 28,
	EJackLowerDynamicBoneState__RtEx_NorthSkirtS1 = 29,
	EJackLowerDynamicBoneState__Sim_DancerSkirt = 30,
	EJackLowerDynamicBoneState__RtEx_P002_Skirt = 31,
	EJackLowerDynamicBoneState__RtEx_N008_SamaCoat = 32,
	EJackLowerDynamicBoneState__RtEx_FtSkirt_Length2_N013 = 33,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtK1Long_P001 = 34,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_P001 = 35,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtK1Short_P001 = 36,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_P004 = 37,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtK1Short_P008 = 38,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_P008 = 39,
	EJackLowerDynamicBoneState__RtEx_FBSkirtA1_P006 = 40,
	EJackLowerDynamicBoneState__RtEx_RCSkirt_Length3 = 41,
	EJackLowerDynamicBoneState__RtEx_RCSkirt_Length4 = 42,
	EJackLowerDynamicBoneState__RtEx_SouthSkirtK1Long_P006 = 43,
	EJackLowerDynamicBoneState__RtEx_NmSkirtD1 = 44,
	EJackLowerDynamicBoneState__RtEx_P002_DelayLegPants = 45,
	EJackLowerDynamicBoneState__RtEx_BunnySkirt_P006 = 46,
	EJackLowerDynamicBoneState__RtEx_SwimSkirt_P006 = 47,
	EJackLowerDynamicBoneState__RtEx_PrinSkirt_P006 = 48,
	EJackLowerDynamicBoneState__RtEx_HipsArmor_P002 = 49,
	EJackLowerDynamicBoneState__RtEx_Bt_NimaSkirt = 50,
	EJackLowerDynamicBoneState__EJackLowerDynamicBoneState_MAX = 51
};


// Enum JackAnimNodeRuntime.EJackUpperDynamicBoneState
enum class EJackUpperDynamicBoneState : uint8_t
{
	EJackUpperDynamicBoneState__Default = 0,
	EJackUpperDynamicBoneState__Sim_CollarA = 1,
	EJackUpperDynamicBoneState__Sim_RearHood = 2,
	EJackUpperDynamicBoneState__RtEx_LR_ShoulderClothA1 = 3,
	EJackUpperDynamicBoneState__Sim_NPC_ParadeFar = 4,
	EJackUpperDynamicBoneState__Sim_P001_ParadeFeather = 5,
	EJackUpperDynamicBoneState__Sim_P005_ParadeFeatherBlack = 6,
	EJackUpperDynamicBoneState__Sim_CollarA_N008 = 7,
	EJackUpperDynamicBoneState__Sim_CollarE_P007 = 8,
	EJackUpperDynamicBoneState__EJackUpperDynamicBoneState_MAX = 9
};


// Enum JackAnimNodeRuntime.EJackOverrideUseConvertVelocityToExternalForce
enum class EJackOverrideUseConvertVelocityToExternalForce : uint8_t
{
	EJackOverrideUseConvertVelocityToExternalForce__NotOverride = 0,
	EJackOverrideUseConvertVelocityToExternalForce__ForceFalse = 1,
	EJackOverrideUseConvertVelocityToExternalForce__ForceTrue = 2,
	EJackOverrideUseConvertVelocityToExternalForce__EJackOverrideUseConvertVelocityToExternalForce_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JackAnimNodeRuntime.JackLookAtClamp
// 0x0020
struct FJackLookAtClamp
{
	float                                              YawLeft;                                                  // 0x0000(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              YawRight;                                                 // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              PitchUp;                                                  // 0x0008(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              PitchDown;                                                // 0x000C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              YawLeftRate;                                              // 0x0010(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              YawRightRate;                                             // 0x0014(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              PitchUpRate;                                              // 0x0018(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              PitchDownRate;                                            // 0x001C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JackAnimNodeRuntime.JackAnimDynamicsConstraintSetup
// 0x005C
struct FJackAnimDynamicsConstraintSetup
{
	EJackAnimPhysLinearConstraintType                  LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EJackAnimPhysLinearConstraintType                  LinearYLimitType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EJackAnimPhysLinearConstraintType                  LinearZLimitType;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (Edit, IsPlainOldData)
	EJackAnimPhysAngularConstraintType                 AngularConstraintType;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAnimPhysTwistAxis                                 TwistAxis;                                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularXAngle;                                            // 0x0024(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularYAngle;                                            // 0x0028(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularZAngle;                                            // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0030(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x003C(0x000C) (Edit, IsPlainOldData)
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     AngularTarget;                                            // 0x004C(0x000C) (Edit, IsPlainOldData)
	bool                                               bLinearFullyLocked;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimDynamicsPlanarLimit
// 0x0060
struct FJackAnimDynamicsPlanarLimit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       DrivingBoneName;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  PlaneTransform;                                           // 0x0020(0x0030) (Edit, IsPlainOldData)
	bool                                               bUseFinitePlane;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   PlaneExtend;                                              // 0x0054(0x0008) (Edit, IsPlainOldData)
	bool                                               bSkipDrivingBoneValidation;                               // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimDynamicsSphericalLimit
// 0x0038
struct FJackAnimDynamicsSphericalLimit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       DrivingBoneName;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SphereLocalOffset;                                        // 0x0020(0x000C) (Edit, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EJackAnimDynamicsSphericalLimitType                LimitType;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipDrivingBoneValidation;                               // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimDynamicsProperties
// 0x02C8
struct FJackAnimDynamicsProperties
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x18];                                      // 0x0000(0x0018) UNKNOWN PROPERTY: SoftObjectProperty JackAnimNodeRuntime.JackAnimDynamicsProperties.MasterPose
	unsigned char                                      UnknownData02[0x10];                                      // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty JackAnimNodeRuntime.JackAnimDynamicsProperties.ExcludeMasterPose
	EJackAnimPhysSimSpaceType                          SimulationSpace;                                          // 0x0030(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0038(0x0018) (Edit, BlueprintVisi)
	bool                                               bChain;                                                   // 0x0050(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FBoneReference                              BoundBone;                                                // 0x0058(0x0018) (Edit, BlueprintVisi)
	struct FBoneReference                              ChainEnd;                                                 // 0x0070(0x0018) (Edit, BlueprintVisi)
	struct FVector                                     BoxExtents;                                               // 0x0088(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x0094(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              GravityScale;                                             // 0x00A0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
	bool                                               bEnableWind;                                              // 0x00B0(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              WindScale;                                                // 0x00B4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackWindEffectDecayRate                           WindEffectDecayRate;                                      // 0x00B8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseWindEffectDecay;                                  // 0x00B9(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	float                                              WindEffectMaxClamp;                                       // 0x00BC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              WindEffectThreshold;                                      // 0x00C0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVehicleFakeForce;                                     // 0x00C4(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseKeepBoneLength;                                       // 0x00C5(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLinearDamping;                                   // 0x00C6(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00C7(0x0001) MISSED OFFSET
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAngularDamping;                                  // 0x00CC(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              AngularDampingOverride;                                   // 0x00D0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAngularBias;                                     // 0x00D4(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              AngularBiasOverride;                                      // 0x00D8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xC];                                       // 0x00DC(0x000C) MISSED OFFSET
	struct FJackAnimDynamicsConstraintSetup            ConstraintSetup;                                          // 0x00E8(0x005C) (Edit, BlueprintVisi)
	bool                                               bUsePlanarLimit;                                          // 0x0144(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	TArray<struct FJackAnimDynamicsPlanarLimit>        PlanarLimits;                                             // 0x0148(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	bool                                               bUseSphericalLimits;                                      // 0x0158(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	TArray<struct FJackAnimDynamicsSphericalLimit>     SphericalLimits;                                          // 0x0160(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	EAnimPhysCollisionType                             CollisionType;                                            // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              SphereCollisionRadius;                                    // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0178(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseBoneSpaceGravityMode;                                 // 0x0184(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	struct FVector                                     BoneSpaceGravityDirection;                                // 0x0188(0x000C) (Edit, IsPlainOldData)
	bool                                               bUseConvertVelocityToExternalForce;                       // 0x0194(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              VelocityMulRatio;                                         // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinClampVelocity;                                         // 0x019C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MaxClampVelocity;                                         // 0x01A8(0x000C) (Edit, IsPlainOldData)
	EJackAnimPhysSimSpaceType                          ExternalForceSpace;                                       // 0x01B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	struct FBoneReference                              ExternalForceRelativeBone;                                // 0x01B8(0x0018) (Edit)
	unsigned char                                      UnknownData18[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
	struct FName                                       ModifyGroupName;                                          // 0x01D8(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0xE8];                                      // 0x01E0(0x00E8) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_DynamicBoneControlWeight
// 0x0008
struct FJackAnimExp_DynamicBoneControlWeight
{
	float                                              ExpressionDynamicControlWeight;                           // 0x0000(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              AnimDynamicsDynamicControlWeight;                         // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_DynamicBoneCacheState
// 0x00B8
struct FJackAnimExp_DynamicBoneCacheState
{
	EJackUpperDynamicBoneState                         UpperState;                                               // 0x0000(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackLowerDynamicBoneState                         LowerState;                                               // 0x0001(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackHairDynamicBoneState                          HairState;                                                // 0x0002(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackMantleDynamicBoneState                        MantleState;                                              // 0x0003(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FJackAnimExp_DynamicBoneControlWeight       UpperDynamicBoneControlWeight;                            // 0x0004(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       LowerDynamicBoneControlWeight;                            // 0x000C(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       BodyExDynamicBoneControlWeight;                           // 0x0014(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       HairDynamicBoneControlWeight;                             // 0x001C(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       HairExDynamicBoneControlWeight;                           // 0x0024(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       MantleDynamicBoneControlWeight;                           // 0x002C(0x0008) (Edit, BlueprintVisi)
	struct FJackAnimExp_DynamicBoneControlWeight       OtherDynamicBoneControlWeight;                            // 0x0034(0x0008) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0x70];                                      // 0x003C(0x0070) MISSED OFFSET
	bool                                               bIsSkipDynamics;                                          // 0x00AC(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00AD(0x000B) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackAnimDynamics
// 0x02D8 (0x0348 - 0x0070)
struct FAnimNode_JackAnimDynamics : public FAnimNode_SkeletalControlBase
{
	class UDataTable*                                  AnimDynamicsTable;                                        // 0x0070(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicsTableMap;                                     // 0x0078(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FName                                       DynamicsTableName;                                        // 0x0080(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TArray<struct FJackAnimDynamicsProperties>         AnimDynamicsProps;                                        // 0x0088(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	EJackDynamicBonePartsSlot                          DynamicBoneSlot;                                          // 0x00A8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackUpperDynamicBoneState                         UpperDynamicBoneState;                                    // 0x00A9(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackLowerDynamicBoneState                         LowerDynamicBoneState;                                    // 0x00AA(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackHairDynamicBoneState                          HairDynamicBoneState;                                     // 0x00AB(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackMantleDynamicBoneState                        MantleDynamicBoneState;                                   // 0x00AC(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              ModeChangeRate;                                           // 0x00B0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreSkipDynamicsFlag;                                  // 0x00B4(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bExecInitPropsAtInitialization;                           // 0x00B5(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x12];                                      // 0x00B6(0x0012) MISSED OFFSET
	struct FJackAnimExp_DynamicBoneCacheState          DynamicBoneCache;                                         // 0x00C8(0x00B8) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData04[0x1C8];                                     // 0x0180(0x01C8) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_BaseProperties
// 0x0030
struct FJackAnimExp_BaseProperties
{
	struct FName                                       TargetBone;                                               // 0x0000(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneA;                                                    // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneB;                                                    // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       RelatedBoneName;                                          // 0x0018(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MulRatio;                                                 // 0x0020(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_MaxOrMinRot
// 0x0038 (0x0040 - 0x0008)
struct FJackDataTableAnimExp_MaxOrMinRot : public FTableRowBase
{
	struct FJackAnimExp_BaseProperties                 BaseProperties;                                           // 0x0008(0x0030) (Edit, BlueprintVisi)
	bool                                               bPositiveRangeClamp;                                      // 0x0038(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackBoneAxis                                      ClampTargetAxis;                                          // 0x0039(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bExceptionClamp;                                          // 0x003A(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     CalcSpace;                                                // 0x003B(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_MaxOrMinRot
// 0x0040
struct FJackAnimExpNodeProps_MaxOrMinRot
{
	struct FJackDataTableAnimExp_MaxOrMinRot           MaxOrMinRot_Props;                                        // 0x0000(0x0040) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_CollideSkirtMode
// 0x0020
struct FJackAnimExpNodeProps_CollideSkirtMode
{
	struct FName                                       UpLegBone;                                                // 0x0000(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       LegBone;                                                  // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MarginRate;                                               // 0x0010(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              ExpValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           EasingFunc;                                               // 0x0018(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_FixRefPoseClamp
// 0x0003
struct FJackAnimExpNodeProps_FixRefPoseClamp
{
	bool                                               bFixX;                                                    // 0x0000(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bFixY;                                                    // 0x0001(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bFixZ;                                                    // 0x0002(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_AverageRot
// 0x0080 (0x0088 - 0x0008)
struct FJackDataTableAnimExp_AverageRot : public FTableRowBase
{
	struct FJackAnimExp_BaseProperties                 BaseProperties;                                           // 0x0008(0x0030) (Edit, BlueprintVisi)
	bool                                               bCopyBoneARot;                                            // 0x0038(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCollideSkirtMode;                                     // 0x0039(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FJackAnimExpNodeProps_CollideSkirtMode      CollideSkirtModeProps;                                    // 0x0040(0x0020) (Edit, BlueprintVisi)
	bool                                               bClampRot;                                                // 0x0060(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bFixRefPoseClamp;                                         // 0x0061(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FJackAnimExpNodeProps_FixRefPoseClamp       FixAxis;                                                  // 0x0062(0x0003) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FVector                                     ClampValueMin;                                            // 0x0068(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     ClampValueMax;                                            // 0x0074(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     CalcSpace;                                                // 0x0080(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_AverageRot
// 0x0088
struct FJackAnimExpNodeProps_AverageRot
{
	struct FJackDataTableAnimExp_AverageRot            AverageRot_Props;                                         // 0x0000(0x0088) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_TransSyncRot
// 0x0068 (0x0070 - 0x0008)
struct FJackDataTableAnimExp_TransSyncRot : public FTableRowBase
{
	struct FJackAnimExp_BaseProperties                 BaseProperties;                                           // 0x0008(0x0030) (Edit, BlueprintVisi)
	bool                                               bUseTransSync2BoneRotDelta;                               // 0x0038(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackBoneAxis                                      RotAxis;                                                  // 0x0039(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector                                     OffsetLocation;                                           // 0x003C(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector2D                                   ClampSinMinMax;                                           // 0x0048(0x0008) (Edit, BlueprintVisi, IsPlainOldData)
	struct FName                                       SyncBoneName;                                             // 0x0050(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       RefPoseParentBoneName;                                    // 0x0058(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              BaseLength;                                               // 0x0060(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	float                                              LerpRatio;                                                // 0x0068(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     CalcSpace;                                                // 0x006C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_TransSyncRot
// 0x0070
struct FJackAnimExpNodeProps_TransSyncRot
{
	struct FJackDataTableAnimExp_TransSyncRot          TransSyncRot_Props;                                       // 0x0000(0x0070) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_Lerp2BonesAndClamp
// 0x0050 (0x0058 - 0x0008)
struct FJackDataTableAnimExp_Lerp2BonesAndClamp : public FTableRowBase
{
	struct FJackAnimExp_BaseProperties                 BaseProperties;                                           // 0x0008(0x0030) (Edit, BlueprintVisi)
	struct FVector                                     MinRot;                                                   // 0x0038(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     MaxRot;                                                   // 0x0044(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              LerpAlpha;                                                // 0x0050(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     CalcSpace;                                                // 0x0054(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_Lerp2BonesAndClamp
// 0x0058
struct FJackAnimExpNodeProps_Lerp2BonesAndClamp
{
	struct FJackDataTableAnimExp_Lerp2BonesAndClamp    Lerp2BonesAndClamp_Props;                                 // 0x0000(0x0058) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_RotCancel
// 0x0028 (0x0030 - 0x0008)
struct FJackDataTableAnimExp_RotCancel : public FTableRowBase
{
	struct FName                                       TargetBone;                                               // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       RelatedBoneName;                                          // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       SynchroCancelBoneName;                                    // 0x0018(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Ratio;                                                    // 0x0020(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     CalcSpace;                                                // 0x002C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_RotCancel
// 0x0030
struct FJackAnimExpNodeProps_RotCancel
{
	struct FJackDataTableAnimExp_RotCancel             RotCancel_Props;                                          // 0x0000(0x0030) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_ModifyBone
// 0x0038 (0x0040 - 0x0008)
struct FJackDataTableAnimExp_ModifyBone : public FTableRowBase
{
	struct FName                                       TargetBone;                                               // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0034(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0035(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0036(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x0037(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0038(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0039(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExpNodeProps_ModifyBone
// 0x0040
struct FJackAnimExpNodeProps_ModifyBone
{
	struct FJackDataTableAnimExp_ModifyBone            ModifyBone_Props;                                         // 0x0000(0x0040) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackAnimExpression
// 0x0250 (0x02C0 - 0x0070)
struct FAnimNode_JackAnimExpression : public FAnimNode_SkeletalControlBase
{
	bool                                               bDebugDynamicBone;                                        // 0x0070(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              ModeChangeRate;                                           // 0x0074(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackDynamicBonePartsSlot                          DynamicBoneSlot;                                          // 0x0078(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackUpperDynamicBoneState                         UpperDynamicBoneState;                                    // 0x0079(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackLowerDynamicBoneState                         LowerDynamicBoneState;                                    // 0x007A(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackHairDynamicBoneState                          HairDynamicBoneState;                                     // 0x007B(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackMantleDynamicBoneState                        MantleDynamicBoneState;                                   // 0x007C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMaxOrMinRot;                                          // 0x007D(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_MaxOrMinRot>   MaxOrMinRotSettings;                                      // 0x0080(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  MaxOrMinRotDataTable;                                     // 0x0090(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAverageRot;                                           // 0x0098(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_AverageRot>    AverageRotSettings;                                       // 0x00A0(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  AverageRotDataTable;                                      // 0x00B0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTransSyncRot;                                         // 0x00B8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_TransSyncRot>  TransSyncRotSettings;                                     // 0x00C0(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  TransSyncRotDataTable;                                    // 0x00D0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLerp2BonesAndClamp;                                   // 0x00D8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_Lerp2BonesAndClamp> Lerp2BonesAndClampSettings;                               // 0x00E0(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  Lerp2BonesAndClampDataTable;                              // 0x00F0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRotCancel;                                            // 0x00F8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_RotCancel>     RotCancelSettings;                                        // 0x0100(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  RotCancelDataTable;                                       // 0x0110(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bUseModifyBone;                                           // 0x0118(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	TArray<struct FJackAnimExpNodeProps_ModifyBone>    ModifyBoneSettings;                                       // 0x0120(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	class UDataTable*                                  ModifyBoneDataTable;                                      // 0x0130(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FJackAnimExp_DynamicBoneCacheState          DynamicBoneCache;                                         // 0x0138(0x00B8) (Edit, BlueprintVisi)
	bool                                               bIgnoreSkipDynamicsFlag;                                  // 0x01F0(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bExecInitPropsAtInitialization;                           // 0x01F1(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xCE];                                      // 0x01F2(0x00CE) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackBlendSpaceFilterBones
// 0x0010
struct FJackBlendSpaceFilterBones
{
	struct FName                                       StartBone;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBone;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackBlendSpaceEvaluator
// 0x0318 (0x0370 - 0x0058)
struct FAnimNode_JackBlendSpaceEvaluator : public FAnimNode_AssetPlayerBase
{
	struct FPoseLink                                   BasePose;                                                 // 0x0058(0x0018) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	TArray<struct FJackBlendSpaceFilterBones>          TargetBonesList;                                          // 0x0078(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0088(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0089(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackDynamicBonePartsSlot                          DynamicBoneSlot;                                          // 0x008A(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackUpperDynamicBoneState                         UpperDynamicBoneState;                                    // 0x008B(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackLowerDynamicBoneState                         LowerDynamicBoneState;                                    // 0x008C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackHairDynamicBoneState                          HairDynamicBoneState;                                     // 0x008D(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackMantleDynamicBoneState                        MantleDynamicBoneState;                                   // 0x008E(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	struct FName                                       BaseBoneName;                                             // 0x0090(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndBoneName;                                              // 0x0098(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       BaseAngleBoneName;                                        // 0x00A0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackConvertedAxis                                 BaseBoneVirtualFrontAxis;                                 // 0x00A8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackConvertedAxis                                 BS_X_Axis;                                                // 0x00A9(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackConvertedAxis                                 BS_Y_Axis;                                                // 0x00AA(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackConvertedAxis                                 BS_Z_Axis;                                                // 0x00AB(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             LowerBlendSpace;                                          // 0x00B0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UpperBlendSpace;                                          // 0x00B8(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FJackAnimExp_DynamicBoneCacheState          DynamicBoneCache;                                         // 0x00C0(0x00B8) (Edit, BlueprintVisi)
	bool                                               bIgnoreSkipDynamicsFlag;                                  // 0x0178(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bExecInitPropsAtInitialization;                           // 0x0179(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7E];                                      // 0x017A(0x007E) MISSED OFFSET
	float                                              StartPosition;                                            // 0x01F8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	struct FBlendFilter                                BlendFilter;                                              // 0x0200(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x0290(0x0010) (ZeroConstructor)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC8];                                      // 0x02A8(0x00C8) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackFacePoseEvaluator
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_JackFacePoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<EJackFacePoseEvaluator>                Category;                                                 // 0x0030(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputAdditiveOnly;                                      // 0x0031(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackEvaluateFacePose_Params
// 0x0010
struct FJackEvaluateFacePose_Params
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackFootPlacementIK
// 0x00A0 (0x0110 - 0x0070)
struct FAnimNode_JackFootPlacementIK : public FAnimNode_SkeletalControlBase
{
	bool                                               bActive;                                                  // 0x0070(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FBoneReference                              IKBone;                                                   // 0x0078(0x0018) (Edit, BlueprintVisi)
	struct FVector                                     EffectorLocation;                                         // 0x0090(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x009C(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x00A8(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x00B0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStretching : 1;                                     // 0x00B8(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FVector2D                                   StretchLimits;                                            // 0x00BC(0x0008) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              HitZOffset;                                               // 0x00C4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x00C8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowUnderZ;                                             // 0x00CC(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x00CD(0x000B) MISSED OFFSET
	struct FName                                       EffectorSocketName;                                       // 0x00D8(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x00E0(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FRotator                                    MinRotation;                                              // 0x00EC(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FRotator                                    MaxRotation;                                              // 0x00F8(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0104(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0105(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xA];                                       // 0x0106(0x000A) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackGetInterruptFootIK_Params
// 0x0030
struct FJackGetInterruptFootIK_Params
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackLayeredBoneBlend
// 0x00A0 (0x00D0 - 0x0030)
struct FAnimNode_JackLayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisi)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0048(0x0010) (Edit, BlueprintVisi, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0058(0x0010) (Edit, BlueprintVisi, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     SubLayerSetup;                                            // 0x0068(0x0010) (Edit, BlueprintVisi, EditFixedSize, ZeroConstructor)
	bool                                               bUseSubLayerSetup;                                        // 0x0078(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x007C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	TArray<float>                                      BlendWeights;                                             // 0x0088(0x0010) (Edit, BlueprintVisi, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0098(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0099(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRelevantPoses;                                        // 0x009B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.AnimNode_JackLookAt
// 0x0100 (0x0170 - 0x0070)
struct FAnimNode_JackLookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0070(0x0018) (Edit, BlueprintVisi)
	struct FBoneReference                              LookAtBone;                                               // 0x0088(0x0018) (Edit, BlueprintVisi)
	struct FVector                                     LookAtLocation;                                           // 0x00A0(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x00AC(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FJackLookAtClamp                            LookAtClamp;                                              // 0x00B0(0x0020) (Edit, BlueprintVisi)
	struct FRotator                                    LookAtOffset;                                             // 0x00D0(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              RollControlRateByYawControl;                              // 0x00DC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJackLookAtBasePose>                   LookAtBasePose;                                           // 0x00E0(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x00E1(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              InterpolationTime;                                        // 0x00E4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x00E8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x63];                                      // 0x00ED(0x0063) MISSED OFFSET
	struct FBoneReference                              CalcLookAtBone;                                           // 0x0150(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAxisOption>                           CalcLookAtBoneAxis;                                       // 0x0168(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimDynamicsTableProperties
// 0x02E8 (0x02F0 - 0x0008)
struct FJackDataTableAnimDynamicsTableProperties : public FTableRowBase
{
	struct FName                                       BoundBoneName;                                            // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChainEndName;                                             // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       RelativeBoneName;                                         // 0x0018(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExternalForceRelativeBoneName;                            // 0x0020(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FJackAnimDynamicsProperties                 AnimDynamicsSettings;                                     // 0x0028(0x02C8) (Edit, BlueprintVisi)
};

// ScriptStruct JackAnimNodeRuntime.JackAnimDynamicsVirtualPlaneCollision
// 0x0028
struct FJackAnimDynamicsVirtualPlaneCollision
{
	float                                              SideLength;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       RelatedBoundBoneName;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_SortedAnimExpParams
// 0x0210
struct FJackAnimExp_SortedAnimExpParams
{
	unsigned char                                      UnknownData00[0x210];                                     // 0x0000(0x0210) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_Utility
// 0x0001
struct FJackAnimExp_Utility
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_HasAnyDynamicsProps
// 0x0007
struct FJackAnimExp_HasAnyDynamicsProps
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0000(0x0007) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_WindRandomizePreset
// 0x0028 (0x0030 - 0x0008)
struct FJackDataTableAnimExp_WindRandomizePreset : public FTableRowBase
{
	float                                              BaseWindSpeed;                                            // 0x0008(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              WindDirectionRandomConeHalfAngleRange;                    // 0x000C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MinRandomizeMulRatio;                                     // 0x0010(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomizeMulRatio;                                     // 0x0014(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MinRandomEffectInterval;                                  // 0x0018(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomEffectInterval;                                  // 0x001C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct JackAnimNodeRuntime.JackAnimExp_DynamicsExpressionTables
// 0x0010
struct FJackAnimExp_DynamicsExpressionTables
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DynamicsTable;                                            // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct JackAnimNodeRuntime.JackDataTableAnimExp_DynamicBoneStateDef
// 0x0040 (0x0048 - 0x0008)
struct FJackDataTableAnimExp_DynamicBoneStateDef : public FTableRowBase
{
	struct FName                                       IncludeBoneName;                                          // 0x0008(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExcludeBoneName;                                          // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) UNKNOWN PROPERTY: SoftObjectProperty JackAnimNodeRuntime.JackDataTableAnimExp_DynamicBoneStateDef.MasterPose
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty JackAnimNodeRuntime.JackDataTableAnimExp_DynamicBoneStateDef.ExcludeMasterPose
	EJackUpperDynamicBoneState                         UpperState;                                               // 0x0040(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackLowerDynamicBoneState                         LowerState;                                               // 0x0041(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackHairDynamicBoneState                          HairState;                                                // 0x0042(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EJackMantleDynamicBoneState                        MantleState;                                              // 0x0043(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
