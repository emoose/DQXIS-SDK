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

// Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName
struct UAtomAsrRack_SetBusVolumeByName_Params
{
	struct FString                                     BusName;                                                  // (Parm, ZeroConstructor)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
struct UAtomAsrRack_SetBusSendLevelByName_Params
{
	struct FString                                     SourceBusName;                                            // (Parm, ZeroConstructor)
	struct FString                                     DestBusName;                                              // (Parm, ZeroConstructor)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
struct UAtomAsrRack_GetDefaultAsrRack_Params
{
	class UAtomAsrRack*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomAsrRack.GetAsrRack
struct UAtomAsrRack_GetAsrRack_Params
{
	int                                                AsrRackId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomAsrRack*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting
struct UAtomAsrRack_DetachDspBusSetting_Params
{
};

// Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting
struct UAtomAsrRack_AttachDspBusSetting_Params
{
	struct FString                                     SettingName;                                              // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
struct UAtomAsrRack_ApplyDspBusSnapshot_Params
{
	struct FString                                     SnapshotName;                                             // (Parm, ZeroConstructor)
	int                                                Milliseconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomCategory.SetVolumeByName
struct UAtomCategory_SetVolumeByName_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomCategory.SetAisacControlByName
struct UAtomCategory_SetAisacControlByName_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	struct FString                                     AisacName;                                                // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomCategory.PauseByName
struct UAtomCategory_PauseByName_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomCategory.IsPausedByName
struct UAtomCategory_IsPausedByName_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomCategory.GetVolumeByName
struct UAtomCategory_GetVolumeByName_Params
{
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.Stop
struct UAtomComponent_Stop_Params
{
};

// Function CriWareRuntime.AtomComponent.SetVolume
struct UAtomComponent_SetVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetSound
struct UAtomComponent_SetSound_Params
{
	class USoundAtomCue*                               NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetSelectorLabel
struct UAtomComponent_SetSelectorLabel_Params
{
	struct FString                                     Selector;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.AtomComponent.SetPitchMultiplier
struct UAtomComponent_SetPitchMultiplier_Params
{
	float                                              NewPitchMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetPitch
struct UAtomComponent_SetPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetNextBlockIndex
struct UAtomComponent_SetNextBlockIndex_Params
{
	int                                                BlockIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
struct UAtomComponent_SetBusSendLevelOffsetByName_Params
{
	struct FString                                     BusName;                                                  // (Parm, ZeroConstructor)
	float                                              LevelOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset
struct UAtomComponent_SetBusSendLevelOffset_Params
{
	int                                                BusId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LevelOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevelByName
struct UAtomComponent_SetBusSendLevelByName_Params
{
	struct FString                                     BusName;                                                  // (Parm, ZeroConstructor)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetBusSendLevel
struct UAtomComponent_SetBusSendLevel_Params
{
	int                                                BusId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.SetAisacByName
struct UAtomComponent_SetAisacByName_Params
{
	struct FString                                     ControlName;                                              // (Parm, ZeroConstructor)
	float                                              ControlValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.Play
struct UAtomComponent_Play_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.Pause
struct UAtomComponent_Pause_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
struct UAtomComponent_OnAudioFinished__DelegateSignature_Params
{
};

// Function CriWareRuntime.AtomComponent.IsPlaying
struct UAtomComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.IsPaused
struct UAtomComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.GetTime
struct UAtomComponent_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.GetStatus
struct UAtomComponent_GetStatus_Params
{
	EAtomComponentStatus                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomComponent.GetSequencePosition
struct UAtomComponent_GetSequencePosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.SpawnSoundAttached
struct UAtomStatics_SpawnSoundAttached_Params
{
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation
struct UAtomStatics_SpawnSoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.SpawnSound2D
struct UAtomStatics_SpawnSound2D_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistAcrossLevelTransition;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.PlaySoundAttached
struct UAtomStatics_PlaySoundAttached_Params
{
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAtomComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.PlaySoundAtLocation
struct UAtomStatics_PlaySoundAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundConcurrency*                           ConcurrencySettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomStatics.PauseAudioOutput
struct UAtomStatics_PauseAudioOutput_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
struct UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAtomTriggerRow                             OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
struct UCriFsLoaderComponent_OnLoadError__DelegateSignature_Params
{
};

// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
struct UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Params
{
};

// Function CriWareRuntime.CriFsLoaderComponent.Load
struct UCriFsLoaderComponent_Load_Params
{
};

// Function CriWareRuntime.CriFsLoaderComponent.GetStatus
struct UCriFsLoaderComponent_GetStatus_Params
{
	ECriFsLoaderStatus                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.CriFsLoaderComponent.GetDataArray
struct UCriFsLoaderComponent_GetDataArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
struct UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Params
{
	struct FString                                     SelectorName;                                             // (Parm, ZeroConstructor)
	struct FString                                     LabelName;                                                // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
struct UCriWareFunctionLibrary_SetGameVariableByName_Params
{
	struct FString                                     GameVariableName;                                         // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.ToIndex
struct UManaComponent_ToIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.StopAndWaitCompletion
struct UManaComponent_StopAndWaitCompletion_Params
{
};

// Function CriWareRuntime.ManaComponent.Stop
struct UManaComponent_Stop_Params
{
};

// Function CriWareRuntime.ManaComponent.SetVolume
struct UManaComponent_SetVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.SetTexture
struct UManaComponent_SetTexture_Params
{
	class UManaTexture*                                Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.SetSubVolume
struct UManaComponent_SetSubVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.SetFile
struct UManaComponent_SetFile_Params
{
	struct FString                                     MovieFilePath;                                            // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.ManaComponent.SetCachedData
struct UManaComponent_SetCachedData_Params
{
	TArray<unsigned char>                              DataArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CriWareRuntime.ManaComponent.SeekToPosition
struct UManaComponent_SeekToPosition_Params
{
	int                                                FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.ResetCachedData
struct UManaComponent_ResetCachedData_Params
{
};

// Function CriWareRuntime.ManaComponent.Previous
struct UManaComponent_Previous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.PreparePlaylistIndex
struct UManaComponent_PreparePlaylistIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.Prepare
struct UManaComponent_Prepare_Params
{
};

// Function CriWareRuntime.ManaComponent.Play
struct UManaComponent_Play_Params
{
};

// Function CriWareRuntime.ManaComponent.Pause
struct UManaComponent_Pause_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
struct UManaComponent_OnSubtitleChanged__DelegateSignature_Params
{
	struct FText                                       Subtitle;                                                 // (Parm)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
struct UManaComponent_OnStatusChanged__DelegateSignature_Params
{
	EManaComponentStatus                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UManaComponent*                              ManaComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
struct UManaComponent_OnRequestData__DelegateSignature_Params
{
	class UManaComponent*                              ManaComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
struct UManaComponent_OnEventPoint__DelegateSignature_Params
{
	struct FManaEventPointInfo                         EventPointInfo;                                           // (Parm)
};

// Function CriWareRuntime.ManaComponent.Next
struct UManaComponent_Next_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.IsReady
struct UManaComponent_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.IsPreparing
struct UManaComponent_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.IsPlaying
struct UManaComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.IsPaused
struct UManaComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.IsLooping
struct UManaComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetVolume
struct UManaComponent_GetVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetVideoFrame
struct UManaComponent_GetVideoFrame_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetTime
struct UManaComponent_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetTexture
struct UManaComponent_GetTexture_Params
{
	class UManaTexture*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetSubVolume
struct UManaComponent_GetSubVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetStatus
struct UManaComponent_GetStatus_Params
{
	EManaComponentStatus                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetSource
struct UManaComponent_GetSource_Params
{
	class UManaMovie*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.GetFrameNumber
struct UManaComponent_GetFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.EnableSubtitles
struct UManaComponent_EnableSubtitles_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.EnableSeamless
struct UManaComponent_EnableSeamless_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaComponent.ClearRenderTexture
struct UManaComponent_ClearRenderTexture_Params
{
};

// Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
struct UManaComponent_ChangeSubtitlesChannel_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.FileManaMovie.SetFilePath
struct UFileManaMovie_SetFilePath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.DataManaMovie.SetDataArray
struct UDataManaMovie_SetDataArray_Params
{
	TArray<unsigned char>                              InDataArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function CriWareRuntime.DataManaMovie.GetDataArray
struct UDataManaMovie_GetDataArray_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CriWareRuntime.ManaPlaylist.RemoveAt
struct UManaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.Remove
struct UManaPlaylist_Remove_Params
{
	class UManaMovie*                                  ManaMovie;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.Num
struct UManaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.IsSeamless
struct UManaPlaylist_IsSeamless_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.IsMixedTypes
struct UManaPlaylist_IsMixedTypes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.IsAlpha
struct UManaPlaylist_IsAlpha_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.Insert
struct UManaPlaylist_Insert_Params
{
	class UManaMovie*                                  ManaMovie;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.GetRandom
struct UManaPlaylist_GetRandom_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UManaMovie*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.GetPrevious
struct UManaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UManaMovie*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.GetNext
struct UManaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UManaMovie*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.Get
struct UManaPlaylist_Get_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UManaMovie*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.ManaPlaylist.Add
struct UManaPlaylist_Add_Params
{
	class UManaMovie*                                  ManaMovie;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.ManaTexture.SetMovieSource
struct UManaTexture_SetMovieSource_Params
{
	class UManaSource*                                 InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature
struct UManaTexture_OnTextureUpdated__DelegateSignature_Params
{
	class UManaTexture*                                ManaTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.SoundAtomCue.GetUserData
struct USoundAtomCue_GetUserData_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CriWareRuntime.SoundAtomCue.GetLength
struct USoundAtomCue_GetLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
struct USoundAtomCueSheet_ReleaseAcb_Params
{
	struct FName                                       AcbName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CriWareRuntime.SoundAtomCueSheet.LoadAcb
struct USoundAtomCueSheet_LoadAcb_Params
{
	struct FName                                       AcbName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCueSheet*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
struct USoundAtomCueSheet_DetachDspBusSetting_Params
{
};

// Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
struct USoundAtomCueSheet_AttachDspBusSetting_Params
{
	struct FString                                     SettingName;                                              // (Parm, ZeroConstructor)
};

// Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
struct USoundAtomCueSheet_ApplyDspBusSnapshot_Params
{
	struct FString                                     SnapshotName;                                             // (Parm, ZeroConstructor)
	int                                                Milliseconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
