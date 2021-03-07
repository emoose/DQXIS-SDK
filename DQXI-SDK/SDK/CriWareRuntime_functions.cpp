
#include "../pch.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomAsrRack::SetBusVolumeByName(const struct FString& BusName, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName");

	UAtomAsrRack_SetBusVolumeByName_Params params;
	params.BusName = BusName;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SourceBusName                  (Parm, ZeroConstructor)
// struct FString                 DestBusName                    (Parm, ZeroConstructor)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UAtomAsrRack::SetBusSendLevelByName(const struct FString& SourceBusName, const struct FString& DestBusName, float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName");

	UAtomAsrRack_SetBusSendLevelByName_Params params;
	params.SourceBusName = SourceBusName;
	params.DestBusName = DestBusName;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtomAsrRack*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAtomAsrRack* UAtomAsrRack::STATIC_GetDefaultAsrRack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack");

	UAtomAsrRack_GetDefaultAsrRack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomAsrRack.GetAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AsrRackId                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAtomAsrRack*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAtomAsrRack* UAtomAsrRack::STATIC_GetAsrRack(int AsrRackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.GetAsrRack");

	UAtomAsrRack_GetAsrRack_Params params;
	params.AsrRackId = AsrRackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting
// (Final, Native, Public, BlueprintCallable)

void UAtomAsrRack::DetachDspBusSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting");

	UAtomAsrRack_DetachDspBusSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SettingName                    (Parm, ZeroConstructor)

void UAtomAsrRack::AttachDspBusSetting(const struct FString& SettingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting");

	UAtomAsrRack_AttachDspBusSetting_Params params;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SnapshotName                   (Parm, ZeroConstructor)
// int                            Milliseconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAtomAsrRack::ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot");

	UAtomAsrRack_ApplyDspBusSnapshot_Params params;
	params.SnapshotName = SnapshotName;
	params.Milliseconds = Milliseconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomCategory.SetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomCategory::STATIC_SetVolumeByName(const struct FString& CategoryName, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomCategory.SetVolumeByName");

	UAtomCategory_SetVolumeByName_Params params;
	params.CategoryName = CategoryName;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomCategory.SetAisacControlByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// struct FString                 AisacName                      (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAtomCategory::STATIC_SetAisacControlByName(const struct FString& CategoryName, const struct FString& AisacName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomCategory.SetAisacControlByName");

	UAtomCategory_SetAisacControlByName_Params params;
	params.CategoryName = CategoryName;
	params.AisacName = AisacName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomCategory.PauseByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomCategory::STATIC_PauseByName(const struct FString& CategoryName, bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomCategory.PauseByName");

	UAtomCategory_PauseByName_Params params;
	params.CategoryName = CategoryName;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomCategory.IsPausedByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAtomCategory::STATIC_IsPausedByName(const struct FString& CategoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomCategory.IsPausedByName");

	UAtomCategory_IsPausedByName_Params params;
	params.CategoryName = CategoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomCategory.GetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAtomCategory::STATIC_GetVolumeByName(const struct FString& CategoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomCategory.GetVolumeByName");

	UAtomCategory_GetVolumeByName_Params params;
	params.CategoryName = CategoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UAtomComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.Stop");

	UAtomComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetVolume");

	UAtomComponent_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*           NewSound                       (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetSound(class USoundAtomCue* NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetSound");

	UAtomComponent_SetSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetSelectorLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Selector                       (Parm, ZeroConstructor)
// struct FString                 Label                          (Parm, ZeroConstructor)

void UAtomComponent::SetSelectorLabel(const struct FString& Selector, const struct FString& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetSelectorLabel");

	UAtomComponent_SetSelectorLabel_Params params;
	params.Selector = Selector;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetPitchMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPitchMultiplier             (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetPitchMultiplier");

	UAtomComponent_SetPitchMultiplier_Params params;
	params.NewPitchMultiplier = NewPitchMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetPitch");

	UAtomComponent_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetNextBlockIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BlockIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetNextBlockIndex(int BlockIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetNextBlockIndex");

	UAtomComponent_SetNextBlockIndex_Params params;
	params.BlockIndex = BlockIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor)
// float                          LevelOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetBusSendLevelOffsetByName(const struct FString& BusName, float LevelOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName");

	UAtomComponent_SetBusSendLevelOffsetByName_Params params;
	params.BusName = BusName;
	params.LevelOffset = LevelOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BusId                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          LevelOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetBusSendLevelOffset(int BusId, float LevelOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset");

	UAtomComponent_SetBusSendLevelOffset_Params params;
	params.BusId = BusId;
	params.LevelOffset = LevelOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetBusSendLevelByName(const struct FString& BusName, float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetBusSendLevelByName");

	UAtomComponent_SetBusSendLevelByName_Params params;
	params.BusName = BusName;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetBusSendLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            BusId                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetBusSendLevel(int BusId, float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetBusSendLevel");

	UAtomComponent_SetBusSendLevel_Params params;
	params.BusId = BusId;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.SetAisacByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ControlName                    (Parm, ZeroConstructor)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::SetAisacByName(const struct FString& ControlName, float ControlValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.SetAisacByName");

	UAtomComponent_SetAisacByName_Params params;
	params.ControlName = ControlName;
	params.ControlValue = ControlValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::Play(float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.Play");

	UAtomComponent_Play_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomComponent::Pause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.Pause");

	UAtomComponent_Pause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAtomComponent::OnAudioFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature");

	UAtomComponent_OnAudioFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAtomComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.IsPlaying");

	UAtomComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomComponent.IsPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAtomComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.IsPaused");

	UAtomComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomComponent.GetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAtomComponent::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.GetTime");

	UAtomComponent_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EAtomComponentStatus           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAtomComponentStatus UAtomComponent::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.GetStatus");

	UAtomComponent_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomComponent.GetSequencePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAtomComponent::GetSequencePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomComponent.GetSequencePosition");

	UAtomComponent_GetSequencePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomStatics.SpawnSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAtomComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAtomComponent* UAtomStatics::STATIC_SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.SpawnSoundAttached");

	UAtomStatics_SpawnSoundAttached_Params params;
	params.Sound = Sound;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAtomComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAtomComponent* UAtomStatics::STATIC_SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation");

	UAtomStatics_SpawnSoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomStatics.SpawnSound2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistAcrossLevelTransition  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAtomComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAtomComponent* UAtomStatics::STATIC_SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.SpawnSound2D");

	UAtomStatics_SpawnSound2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomStatics.PlaySoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class UAtomComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAtomComponent* UAtomStatics::STATIC_PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.PlaySoundAttached");

	UAtomStatics_PlaySoundAttached_Params params;
	params.Sound = Sound;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.AtomStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCue*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData)

void UAtomStatics::STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.PlaySoundAtLocation");

	UAtomStatics_PlaySoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.Location = Location;
	params.Rotation = Rotation;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomStatics.PauseAudioOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void UAtomStatics::STATIC_PauseAudioOutput(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomStatics.PauseAudioOutput");

	UAtomStatics_PauseAudioOutput_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FAtomTriggerRow         OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAtomTriggerTableFunctionLibrary::STATIC_GetDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, struct FAtomTriggerRow* OutRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName");

	UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Params params;
	params.Table = Table;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
// (Public, Delegate)

void UCriFsLoaderComponent::OnLoadError__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature");

	UCriFsLoaderComponent_OnLoadError__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
// (Public, Delegate)

void UCriFsLoaderComponent::OnLoadCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature");

	UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.CriFsLoaderComponent.Load
// (Final, Native, Public, BlueprintCallable)

void UCriFsLoaderComponent::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.CriFsLoaderComponent.Load");

	UCriFsLoaderComponent_Load_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.CriFsLoaderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECriFsLoaderStatus             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECriFsLoaderStatus UCriFsLoaderComponent::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.CriFsLoaderComponent.GetStatus");

	UCriFsLoaderComponent_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.CriFsLoaderComponent.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UCriFsLoaderComponent::GetDataArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.CriFsLoaderComponent.GetDataArray");

	UCriFsLoaderComponent_GetDataArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SelectorName                   (Parm, ZeroConstructor)
// struct FString                 LabelName                      (Parm, ZeroConstructor)

void UCriWareFunctionLibrary::STATIC_SetGlobalLabelToSelectorByName(const struct FString& SelectorName, const struct FString& LabelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName");

	UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Params params;
	params.SelectorName = SelectorName;
	params.LabelName = LabelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameVariableName               (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCriWareFunctionLibrary::STATIC_SetGameVariableByName(const struct FString& GameVariableName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName");

	UCriWareFunctionLibrary_SetGameVariableByName_Params params;
	params.GameVariableName = GameVariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.ToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::ToIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.ToIndex");

	UManaComponent_ToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.StopAndWaitCompletion
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::StopAndWaitCompletion()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.StopAndWaitCompletion");

	UManaComponent_StopAndWaitCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Stop");

	UManaComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SetVolume");

	UManaComponent_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaTexture*            Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::SetTexture(class UManaTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SetTexture");

	UManaComponent_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SetSubVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::SetSubVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SetSubVolume");

	UManaComponent_SetSubVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SetFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MovieFilePath                  (Parm, ZeroConstructor)

void UManaComponent::SetFile(const struct FString& MovieFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SetFile");

	UManaComponent_SetFile_Params params;
	params.MovieFilePath = MovieFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SetCachedData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          DataArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UManaComponent::SetCachedData(TArray<unsigned char> DataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SetCachedData");

	UManaComponent_SetCachedData_Params params;
	params.DataArray = DataArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.SeekToPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameNumber                    (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::SeekToPosition(int FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.SeekToPosition");

	UManaComponent_SeekToPosition_Params params;
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.ResetCachedData
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::ResetCachedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.ResetCachedData");

	UManaComponent_ResetCachedData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Previous");

	UManaComponent_Previous_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.PreparePlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::PreparePlaylistIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.PreparePlaylistIndex");

	UManaComponent_PreparePlaylistIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Prepare
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Prepare");

	UManaComponent_Prepare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Play
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Play");

	UManaComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::Pause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Pause");

	UManaComponent_Pause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FText                   Subtitle                       (Parm)

void UManaComponent::OnSubtitleChanged__DelegateSignature(const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature");

	UManaComponent_OnSubtitleChanged__DelegateSignature_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// EManaComponentStatus           Status                         (Parm, ZeroConstructor, IsPlainOldData)
// class UManaComponent*          ManaComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UManaComponent::OnStatusChanged__DelegateSignature(EManaComponentStatus Status, class UManaComponent* ManaComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature");

	UManaComponent_OnStatusChanged__DelegateSignature_Params params;
	params.Status = Status;
	params.ManaComponent = ManaComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UManaComponent*          ManaComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UManaComponent::OnRequestData__DelegateSignature(class UManaComponent* ManaComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature");

	UManaComponent_OnRequestData__DelegateSignature_Params params;
	params.ManaComponent = ManaComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FManaEventPointInfo     EventPointInfo                 (Parm)

void UManaComponent::OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature");

	UManaComponent_OnEventPoint__DelegateSignature_Params params;
	params.EventPointInfo = EventPointInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.Next");

	UManaComponent_Next_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.IsReady");

	UManaComponent_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.IsPreparing");

	UManaComponent_IsPreparing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.IsPlaying");

	UManaComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.IsPaused");

	UManaComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.IsLooping");

	UManaComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UManaComponent::GetVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetVolume");

	UManaComponent_GetVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetVideoFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UManaComponent::GetVideoFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetVideoFrame");

	UManaComponent_GetVideoFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UManaComponent::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetTime");

	UManaComponent_GetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaTexture*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaTexture* UManaComponent::GetTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetTexture");

	UManaComponent_GetTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetSubVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UManaComponent::GetSubVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetSubVolume");

	UManaComponent_GetSubVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EManaComponentStatus           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EManaComponentStatus UManaComponent::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetStatus");

	UManaComponent_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaMovie* UManaComponent::GetSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetSource");

	UManaComponent_GetSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.GetFrameNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UManaComponent::GetFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.GetFrameNumber");

	UManaComponent_GetFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaComponent.EnableSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::EnableSubtitles(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.EnableSubtitles");

	UManaComponent_EnableSubtitles_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.EnableSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::EnableSeamless(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.EnableSeamless");

	UManaComponent_EnableSeamless_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.ClearRenderTexture
// (Final, Native, Public, BlueprintCallable)

void UManaComponent::ClearRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.ClearRenderTexture");

	UManaComponent_ClearRenderTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UManaComponent::ChangeSubtitlesChannel(int Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel");

	UManaComponent_ChangeSubtitlesChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.FileManaMovie.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UFileManaMovie::SetFilePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.FileManaMovie.SetFilePath");

	UFileManaMovie_SetFilePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.DataManaMovie.SetDataArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          InDataArray                    (Parm, OutParm, ZeroConstructor)

void UDataManaMovie::SetDataArray(TArray<unsigned char>* InDataArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.DataManaMovie.SetDataArray");

	UDataManaMovie_SetDataArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDataArray != nullptr)
		*InDataArray = params.InDataArray;
}


// Function CriWareRuntime.DataManaMovie.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UDataManaMovie::GetDataArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.DataManaMovie.GetDataArray");

	UDataManaMovie_GetDataArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UManaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.RemoveAt");

	UManaPlaylist_RemoveAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              ManaMovie                      (Parm, ZeroConstructor, IsPlainOldData)

void UManaPlaylist::Remove(class UManaMovie* ManaMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.Remove");

	UManaPlaylist_Remove_Params params;
	params.ManaMovie = ManaMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UManaPlaylist::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.Num");

	UManaPlaylist_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.IsSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaPlaylist::IsSeamless()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.IsSeamless");

	UManaPlaylist_IsSeamless_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.IsMixedTypes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaPlaylist::IsMixedTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.IsMixedTypes");

	UManaPlaylist_IsMixedTypes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.IsAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManaPlaylist::IsAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.IsAlpha");

	UManaPlaylist_IsAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              ManaMovie                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UManaPlaylist::Insert(class UManaMovie* ManaMovie, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.Insert");

	UManaPlaylist_Insert_Params params;
	params.ManaMovie = ManaMovie;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaPlaylist.GetRandom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UManaMovie*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaMovie* UManaPlaylist::GetRandom(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.GetRandom");

	UManaPlaylist_GetRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UManaMovie*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaMovie* UManaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.GetPrevious");

	UManaPlaylist_GetPrevious_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UManaMovie*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaMovie* UManaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.GetNext");

	UManaPlaylist_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UManaMovie*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManaMovie* UManaPlaylist::Get(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.Get");

	UManaPlaylist_Get_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.ManaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*              ManaMovie                      (Parm, ZeroConstructor, IsPlainOldData)

void UManaPlaylist::Add(class UManaMovie* ManaMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaPlaylist.Add");

	UManaPlaylist_Add_Params params;
	params.ManaMovie = ManaMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.ManaTexture.SetMovieSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UManaSource*             InSource                       (Parm, ZeroConstructor, IsPlainOldData)

void UManaTexture::SetMovieSource(class UManaSource* InSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.ManaTexture.SetMovieSource");

	UManaTexture_SetMovieSource_Params params;
	params.InSource = InSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UManaTexture*            ManaTexture                    (Parm, ZeroConstructor, IsPlainOldData)

void UManaTexture::OnTextureUpdated__DelegateSignature(class UManaTexture* ManaTexture)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature");

	UManaTexture_OnTextureUpdated__DelegateSignature_Params params;
	params.ManaTexture = ManaTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.SoundAtomCue.GetUserData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USoundAtomCue::GetUserData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCue.GetUserData");

	USoundAtomCue_GetUserData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.SoundAtomCue.GetLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USoundAtomCue::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCue.GetLength");

	USoundAtomCue_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   AcbName                        (Parm, ZeroConstructor, IsPlainOldData)

void USoundAtomCueSheet::STATIC_ReleaseAcb(const struct FName& AcbName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb");

	USoundAtomCueSheet_ReleaseAcb_Params params;
	params.AcbName = AcbName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.SoundAtomCueSheet.LoadAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   AcbName                        (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAtomCueSheet*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundAtomCueSheet* USoundAtomCueSheet::STATIC_LoadAcb(const struct FName& AcbName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCueSheet.LoadAcb");

	USoundAtomCueSheet_LoadAcb_Params params;
	params.AcbName = AcbName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)

void USoundAtomCueSheet::STATIC_DetachDspBusSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting");

	USoundAtomCueSheet_DetachDspBusSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SettingName                    (Parm, ZeroConstructor)

void USoundAtomCueSheet::STATIC_AttachDspBusSetting(const struct FString& SettingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting");

	USoundAtomCueSheet_AttachDspBusSetting_Params params;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SnapshotName                   (Parm, ZeroConstructor)
// int                            Milliseconds                   (Parm, ZeroConstructor, IsPlainOldData)

void USoundAtomCueSheet::STATIC_ApplyDspBusSnapshot(const struct FString& SnapshotName, int Milliseconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot");

	USoundAtomCueSheet_ApplyDspBusSnapshot_Params params;
	params.SnapshotName = SnapshotName;
	params.Milliseconds = Milliseconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
