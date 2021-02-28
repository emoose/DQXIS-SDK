#pragma once

#include "../SDK.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SQEXSEAD.SQEXSEADBGMSlotController.Unreference
struct USQEXSEADBGMSlotController_Unreference_Params
{
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.Stop
struct USQEXSEADBGMSlotController_Stop_Params
{
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetVolume
struct USQEXSEADBGMSlotController_SetVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSuspendFadeOutTime
struct USQEXSEADBGMSlotController_SetSuspendFadeOutTime_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetStoreBehaviour
struct USQEXSEADBGMSlotController_SetStoreBehaviour_Params
{
	ESQEXSEAD_BGMStoreBehaviour                        StoreBehaviour;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetStopFadeOutTime
struct USQEXSEADBGMSlotController_SetStopFadeOutTime_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSeekTime
struct USQEXSEADBGMSlotController_SetSeekTime_Params
{
	float                                              SeekTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSection
struct USQEXSEADBGMSlotController_SetSection_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetResumeFadeInTime
struct USQEXSEADBGMSlotController_SetResumeFadeInTime_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetRestartSameBGM
struct USQEXSEADBGMSlotController_SetRestartSameBGM_Params
{
	bool                                               bRestart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPriority
struct USQEXSEADBGMSlotController_SetPriority_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPlayFadeInTime
struct USQEXSEADBGMSlotController_SetPlayFadeInTime_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPath
struct USQEXSEADBGMSlotController_SetPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetOptions
struct USQEXSEADBGMSlotController_SetOptions_Params
{
	struct FSQEXSEAD_BGMOptions                        NewOptions;                                               // (Parm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.SetMode
struct USQEXSEADBGMSlotController_SetMode_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.Set
struct USQEXSEADBGMSlotController_Set_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.Reset
struct USQEXSEADBGMSlotController_Reset_Params
{
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.Play
struct USQEXSEADBGMSlotController_Play_Params
{
};

// Function SQEXSEAD.SQEXSEADBGMSlotController.IsPlaying
struct USQEXSEADBGMSlotController_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnFracture
struct USQEXSEADCollisionEventSeComponent_OnFracture_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnEndOverlap
struct USQEXSEADCollisionEventSeComponent_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnComponentHit
struct USQEXSEADCollisionEventSeComponent_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnBeginOverlap
struct USQEXSEADCollisionEventSeComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.Stop
struct ASQEXSEADMusicActor_Stop_Params
{
};

// Function SQEXSEAD.SQEXSEADMusicActor.SetNextSectionIndex
struct ASQEXSEADMusicActor_SetNextSectionIndex_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.SetNextSection
struct ASQEXSEADMusicActor_SetNextSection_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
};

// Function SQEXSEAD.SQEXSEADMusicActor.SetModeIndex
struct ASQEXSEADMusicActor_SetModeIndex_Params
{
	int                                                modeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.SetMode
struct ASQEXSEADMusicActor_SetMode_Params
{
	struct FString                                     modeName;                                                 // (Parm, ZeroConstructor)
};

// Function SQEXSEAD.SQEXSEADMusicActor.Play
struct ASQEXSEADMusicActor_Play_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.FadeOut
struct ASQEXSEADMusicActor_FadeOut_Params
{
	float                                              FadeOutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.FadeIn
struct ASQEXSEADMusicActor_FadeIn_Params
{
	float                                              FadeInDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeVolumeLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.BlendModeIndex
struct ASQEXSEADMusicActor_BlendModeIndex_Params
{
	int                                                modeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.BlendMode
struct ASQEXSEADMusicActor_BlendMode_Params
{
	struct FString                                     modeName;                                                 // (Parm, ZeroConstructor)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADMusicActor.AdjustVolume
struct ASQEXSEADMusicActor_AdjustVolume_Params
{
	float                                              AdjustVolumeDuration;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustVolumeLevel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADPhysObjSeComponent.StopCalculation
struct USQEXSEADPhysObjSeComponent_StopCalculation_Params
{
	float                                              StopInnerSoundsFadeTime;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADPhysObjSeComponent.OnComponentHit
struct USQEXSEADPhysObjSeComponent_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.ZeroOneCtrl_SetValue
struct USQEXSEADStatics_ZeroOneCtrl_SetValue_Params
{
	class UAudioComponent*                             AudioComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.SuspendBGM_OptionalFade
struct USQEXSEADStatics_SuspendBGM_OptionalFade_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.SuspendBGM
struct USQEXSEADStatics_SuspendBGM_Params
{
};

// Function SQEXSEAD.SQEXSEADStatics.StopAllCategorySounds
struct USQEXSEADStatics_StopAllCategorySounds_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.StopAllBGM_OptionalFade
struct USQEXSEADStatics_StopAllBGM_OptionalFade_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.StopAllBGM
struct USQEXSEADStatics_StopAllBGM_Params
{
};

// Function SQEXSEAD.SQEXSEADStatics.SetIsInCutScene
struct USQEXSEADStatics_SetIsInCutScene_Params
{
	bool                                               bIsCutScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.SetExternalParameter
struct USQEXSEADStatics_SetExternalParameter_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.SetEnableBGMAutoResume
struct USQEXSEADStatics_SetEnableBGMAutoResume_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.SetEffectPreset
struct USQEXSEADStatics_SetEffectPreset_Params
{
	struct FName                                       PresetName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.Sead_SetMasterVolume
struct USQEXSEADStatics_Sead_SetMasterVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.Sead_GetMasterVolume
struct USQEXSEADStatics_Sead_GetMasterVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.ResumeBGM_OptionalFade
struct USQEXSEADStatics_ResumeBGM_OptionalFade_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.ResumeBGM
struct USQEXSEADStatics_ResumeBGM_Params
{
};

// Function SQEXSEAD.SQEXSEADStatics.ResetEffectPreset
struct USQEXSEADStatics_ResetEffectPreset_Params
{
	float                                              resetFadeTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.ResetAllCategoryTemporarySettings
struct USQEXSEADStatics_ResetAllCategoryTemporarySettings_Params
{
	float                                              resetFadeTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.PlaySoundAttached
struct USQEXSEADStatics_PlaySoundAttached_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.PlaySoundAtLocation
struct USQEXSEADStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.PlaySound2D
struct USQEXSEADStatics_PlaySound2D_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.IsPlayingBGM
struct USQEXSEADStatics_IsPlayingBGM_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.IsInCutScene
struct USQEXSEADStatics_IsInCutScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.GetNumAudibleSoundsAtLocation
struct USQEXSEADStatics_GetNumAudibleSoundsAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.GetBGMSlotController
struct USQEXSEADStatics_GetBGMSlotController_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USQEXSEADBGMSlotController*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CreateBGMSlot
struct USQEXSEADStatics_CreateBGMSlot_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSQEXSEAD_BGMOptions                        Options;                                                  // (Parm, IsPlainOldData)
	class USQEXSEADBGMSlotController*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Suspend
struct USQEXSEADStatics_CategoryCtrl_Suspend_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Stop
struct USQEXSEADStatics_CategoryCtrl_Stop_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetVolume
struct USQEXSEADStatics_CategoryCtrl_SetVolume_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetPitch
struct USQEXSEADStatics_CategoryCtrl_SetPitch_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetLayerVolume
struct USQEXSEADStatics_CategoryCtrl_SetLayerVolume_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ESQEXSEADCategoryVolumeLayers                      Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Resume
struct USQEXSEADStatics_CategoryCtrl_Resume_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_GetVolume
struct USQEXSEADStatics_CategoryCtrl_GetVolume_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_DebugMute
struct USQEXSEADStatics_CategoryCtrl_DebugMute_Params
{
	struct FName                                       CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bToBeMuted;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.CallEvent
struct USQEXSEADStatics_CallEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADStatics.AutoSeCtrl_SetEnable
struct USQEXSEADStatics_AutoSeCtrl_SetEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Stop
struct USQEXSEADZeroOneSeComponent_Stop_Params
{
};

// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.SetZeroOneValue
struct USQEXSEADZeroOneSeComponent_SetZeroOneValue_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Play
struct USQEXSEADZeroOneSeComponent_Play_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
