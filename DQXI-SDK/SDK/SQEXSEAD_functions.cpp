
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

// Function SQEXSEAD.SQEXSEADBGMSlotController.Unreference
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADBGMSlotController::Unreference()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.Unreference");

	USQEXSEADBGMSlotController_Unreference_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.Stop
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADBGMSlotController::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.Stop");

	USQEXSEADBGMSlotController_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetVolume(float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetVolume");

	USQEXSEADBGMSlotController_SetVolume_Params params;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSuspendFadeOutTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetSuspendFadeOutTime(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetSuspendFadeOutTime");

	USQEXSEADBGMSlotController_SetSuspendFadeOutTime_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetStoreBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESQEXSEAD_BGMStoreBehaviour    StoreBehaviour                 (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetStoreBehaviour");

	USQEXSEADBGMSlotController_SetStoreBehaviour_Params params;
	params.StoreBehaviour = StoreBehaviour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetStopFadeOutTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetStopFadeOutTime(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetStopFadeOutTime");

	USQEXSEADBGMSlotController_SetStopFadeOutTime_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSeekTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SeekTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetSeekTime(float SeekTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetSeekTime");

	USQEXSEADBGMSlotController_SetSeekTime_Params params;
	params.SeekTime = SeekTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetSection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetSection");

	USQEXSEADBGMSlotController_SetSection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetResumeFadeInTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetResumeFadeInTime(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetResumeFadeInTime");

	USQEXSEADBGMSlotController_SetResumeFadeInTime_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetRestartSameBGM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRestart                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetRestartSameBGM(bool bRestart)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetRestartSameBGM");

	USQEXSEADBGMSlotController_SetRestartSameBGM_Params params;
	params.bRestart = bRestart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetPriority(int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetPriority");

	USQEXSEADBGMSlotController_SetPriority_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPlayFadeInTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetPlayFadeInTime(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetPlayFadeInTime");

	USQEXSEADBGMSlotController_SetPlayFadeInTime_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void USQEXSEADBGMSlotController::SetPath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetPath");

	USQEXSEADBGMSlotController_SetPath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSQEXSEAD_BGMOptions    NewOptions                     (Parm, IsPlainOldData)

void USQEXSEADBGMSlotController::SetOptions(const struct FSQEXSEAD_BGMOptions& NewOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetOptions");

	USQEXSEADBGMSlotController_SetOptions_Params params;
	params.NewOptions = NewOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.SetMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::SetMode(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.SetMode");

	USQEXSEADBGMSlotController_SetMode_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.Set
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADBGMSlotController::Set(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.Set");

	USQEXSEADBGMSlotController_Set_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.Reset
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADBGMSlotController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.Reset");

	USQEXSEADBGMSlotController_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.Play
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADBGMSlotController::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.Play");

	USQEXSEADBGMSlotController_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADBGMSlotController.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USQEXSEADBGMSlotController::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADBGMSlotController.IsPlaying");

	USQEXSEADBGMSlotController_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnFracture
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitDirection                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USQEXSEADCollisionEventSeComponent::OnFracture(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnFracture");

	USQEXSEADCollisionEventSeComponent_OnFracture_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADCollisionEventSeComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnEndOverlap");

	USQEXSEADCollisionEventSeComponent_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnComponentHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USQEXSEADCollisionEventSeComponent::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnComponentHit");

	USQEXSEADCollisionEventSeComponent_OnComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USQEXSEADCollisionEventSeComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADCollisionEventSeComponent.OnBeginOverlap");

	USQEXSEADCollisionEventSeComponent_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.Stop
// (Final, Native, Public, BlueprintCallable)

void ASQEXSEADMusicActor::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.Stop");

	ASQEXSEADMusicActor_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.SetNextSectionIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::SetNextSectionIndex(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.SetNextSectionIndex");

	ASQEXSEADMusicActor_SetNextSectionIndex_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.SetNextSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)

void ASQEXSEADMusicActor::SetNextSection(const struct FString& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.SetNextSection");

	ASQEXSEADMusicActor_SetNextSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.SetModeIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            modeIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::SetModeIndex(int modeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.SetModeIndex");

	ASQEXSEADMusicActor_SetModeIndex_Params params;
	params.modeIndex = modeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.SetMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 modeName                       (Parm, ZeroConstructor)

void ASQEXSEADMusicActor::SetMode(const struct FString& modeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.SetMode");

	ASQEXSEADMusicActor_SetMode_Params params;
	params.modeName = modeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::Play(float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.Play");

	ASQEXSEADMusicActor_Play_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.FadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeOutDuration                (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeVolumeLevel                (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::FadeOut(float FadeOutDuration, float FadeVolumeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.FadeOut");

	ASQEXSEADMusicActor_FadeOut_Params params;
	params.FadeOutDuration = FadeOutDuration;
	params.FadeVolumeLevel = FadeVolumeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.FadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FadeInDuration                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeVolumeLevel                (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::FadeIn(float FadeInDuration, float FadeVolumeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.FadeIn");

	ASQEXSEADMusicActor_FadeIn_Params params;
	params.FadeInDuration = FadeInDuration;
	params.FadeVolumeLevel = FadeVolumeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.BlendModeIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            modeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::BlendModeIndex(int modeIndex, float Rate, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.BlendModeIndex");

	ASQEXSEADMusicActor_BlendModeIndex_Params params;
	params.modeIndex = modeIndex;
	params.Rate = Rate;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.BlendMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 modeName                       (Parm, ZeroConstructor)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::BlendMode(const struct FString& modeName, float Rate, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.BlendMode");

	ASQEXSEADMusicActor_BlendMode_Params params;
	params.modeName = modeName;
	params.Rate = Rate;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADMusicActor.AdjustVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AdjustVolumeDuration           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AdjustVolumeLevel              (Parm, ZeroConstructor, IsPlainOldData)

void ASQEXSEADMusicActor::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADMusicActor.AdjustVolume");

	ASQEXSEADMusicActor_AdjustVolume_Params params;
	params.AdjustVolumeDuration = AdjustVolumeDuration;
	params.AdjustVolumeLevel = AdjustVolumeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADPhysObjSeComponent.StopCalculation
// (Final, Native, Public)
// Parameters:
// float                          StopInnerSoundsFadeTime        (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADPhysObjSeComponent::StopCalculation(float StopInnerSoundsFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADPhysObjSeComponent.StopCalculation");

	USQEXSEADPhysObjSeComponent_StopCalculation_Params params;
	params.StopInnerSoundsFadeTime = StopInnerSoundsFadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADPhysObjSeComponent.OnComponentHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USQEXSEADPhysObjSeComponent::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADPhysObjSeComponent.OnComponentHit");

	USQEXSEADPhysObjSeComponent_OnComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.ZeroOneCtrl_SetValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_ZeroOneCtrl_SetValue(class UAudioComponent* AudioComponent, int Slot, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.ZeroOneCtrl_SetValue");

	USQEXSEADStatics_ZeroOneCtrl_SetValue_Params params;
	params.AudioComponent = AudioComponent;
	params.Slot = Slot;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SuspendBGM_OptionalFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_SuspendBGM_OptionalFade(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SuspendBGM_OptionalFade");

	USQEXSEADStatics_SuspendBGM_OptionalFade_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SuspendBGM
// (Final, Native, Static, Public, BlueprintCallable)

void USQEXSEADStatics::STATIC_SuspendBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SuspendBGM");

	USQEXSEADStatics_SuspendBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.StopAllCategorySounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_StopAllCategorySounds(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.StopAllCategorySounds");

	USQEXSEADStatics_StopAllCategorySounds_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.StopAllBGM_OptionalFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_StopAllBGM_OptionalFade(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.StopAllBGM_OptionalFade");

	USQEXSEADStatics_StopAllBGM_OptionalFade_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.StopAllBGM
// (Final, Native, Static, Public, BlueprintCallable)

void USQEXSEADStatics::STATIC_StopAllBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.StopAllBGM");

	USQEXSEADStatics_StopAllBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SetIsInCutScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIsCutScene                    (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_SetIsInCutScene(bool bIsCutScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SetIsInCutScene");

	USQEXSEADStatics_SetIsInCutScene_Params params;
	params.bIsCutScene = bIsCutScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SetExternalParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_SetExternalParameter(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SetExternalParameter");

	USQEXSEADStatics_SetExternalParameter_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SetEnableBGMAutoResume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_SetEnableBGMAutoResume(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SetEnableBGMAutoResume");

	USQEXSEADStatics_SetEnableBGMAutoResume_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.SetEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   PresetName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_SetEffectPreset(const struct FName& PresetName, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.SetEffectPreset");

	USQEXSEADStatics_SetEffectPreset_Params params;
	params.PresetName = PresetName;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.Sead_SetMasterVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_Sead_SetMasterVolume(float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.Sead_SetMasterVolume");

	USQEXSEADStatics_Sead_SetMasterVolume_Params params;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.Sead_GetMasterVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USQEXSEADStatics::STATIC_Sead_GetMasterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.Sead_GetMasterVolume");

	USQEXSEADStatics_Sead_GetMasterVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.ResumeBGM_OptionalFade
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_ResumeBGM_OptionalFade(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.ResumeBGM_OptionalFade");

	USQEXSEADStatics_ResumeBGM_OptionalFade_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.ResumeBGM
// (Final, Native, Static, Public, BlueprintCallable)

void USQEXSEADStatics::STATIC_ResumeBGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.ResumeBGM");

	USQEXSEADStatics_ResumeBGM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.ResetEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          resetFadeTime                  (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_ResetEffectPreset(float resetFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.ResetEffectPreset");

	USQEXSEADStatics_ResetEffectPreset_Params params;
	params.resetFadeTime = resetFadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.ResetAllCategoryTemporarySettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          resetFadeTime                  (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_ResetAllCategoryTemporarySettings(float resetFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.ResetAllCategoryTemporarySettings");

	USQEXSEADStatics_ResetAllCategoryTemporarySettings_Params params;
	params.resetFadeTime = resetFadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.PlaySoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* USQEXSEADStatics::STATIC_PlaySoundAttached(class USoundBase* Sound, int SoundIndex, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.PlaySoundAttached");

	USQEXSEADStatics_PlaySoundAttached_Params params;
	params.Sound = Sound;
	params.SoundIndex = SoundIndex;
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


// Function SQEXSEAD.SQEXSEADStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* USQEXSEADStatics::STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, int SoundIndex, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.PlaySoundAtLocation");

	USQEXSEADStatics_PlaySoundAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.SoundIndex = SoundIndex;
	params.Location = Location;
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


// Function SQEXSEAD.SQEXSEADStatics.PlaySound2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            SoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* USQEXSEADStatics::STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, int SoundIndex, float VolumeMultiplier, float PitchMultiplier, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.PlaySound2D");

	USQEXSEADStatics_PlaySound2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.SoundIndex = SoundIndex;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.IsPlayingBGM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USQEXSEADStatics::STATIC_IsPlayingBGM(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.IsPlayingBGM");

	USQEXSEADStatics_IsPlayingBGM_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.IsInCutScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USQEXSEADStatics::STATIC_IsInCutScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.IsInCutScene");

	USQEXSEADStatics_IsInCutScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.GetNumAudibleSoundsAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USQEXSEADStatics::STATIC_GetNumAudibleSoundsAtLocation(class UObject* WorldContextObject, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.GetNumAudibleSoundsAtLocation");

	USQEXSEADStatics_GetNumAudibleSoundsAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.GetBGMSlotController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class USQEXSEADBGMSlotController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USQEXSEADBGMSlotController* USQEXSEADStatics::STATIC_GetBGMSlotController(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.GetBGMSlotController");

	USQEXSEADStatics_GetBGMSlotController_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.CreateBGMSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FSQEXSEAD_BGMOptions    Options                        (Parm, IsPlainOldData)
// class USQEXSEADBGMSlotController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USQEXSEADBGMSlotController* USQEXSEADStatics::STATIC_CreateBGMSlot(const struct FName& Name, const struct FSQEXSEAD_BGMOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CreateBGMSlot");

	USQEXSEADStatics_CreateBGMSlot_Params params;
	params.Name = Name;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Suspend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_Suspend(const struct FName& CategoryName, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Suspend");

	USQEXSEADStatics_CategoryCtrl_Suspend_Params params;
	params.CategoryName = CategoryName;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Stop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_Stop(const struct FName& CategoryName, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Stop");

	USQEXSEADStatics_CategoryCtrl_Stop_Params params;
	params.CategoryName = CategoryName;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_SetVolume(const struct FName& CategoryName, float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetVolume");

	USQEXSEADStatics_CategoryCtrl_SetVolume_Params params;
	params.CategoryName = CategoryName;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetPitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_SetPitch(const struct FName& CategoryName, float Pitch, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetPitch");

	USQEXSEADStatics_CategoryCtrl_SetPitch_Params params;
	params.CategoryName = CategoryName;
	params.Pitch = Pitch;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetLayerVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// ESQEXSEADCategoryVolumeLayers  Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_SetLayerVolume(const struct FName& CategoryName, ESQEXSEADCategoryVolumeLayers Layer, float Volume, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_SetLayerVolume");

	USQEXSEADStatics_CategoryCtrl_SetLayerVolume_Params params;
	params.CategoryName = CategoryName;
	params.Layer = Layer;
	params.Volume = Volume;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Resume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_Resume(const struct FName& CategoryName, float FadeInTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_Resume");

	USQEXSEADStatics_CategoryCtrl_Resume_Params params;
	params.CategoryName = CategoryName;
	params.FadeInTime = FadeInTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_GetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USQEXSEADStatics::STATIC_CategoryCtrl_GetVolume(const struct FName& CategoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_GetVolume");

	USQEXSEADStatics_CategoryCtrl_GetVolume_Params params;
	params.CategoryName = CategoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_DebugMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bToBeMuted                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CategoryCtrl_DebugMute(const struct FName& CategoryName, bool bToBeMuted, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CategoryCtrl_DebugMute");

	USQEXSEADStatics_CategoryCtrl_DebugMute_Params params;
	params.CategoryName = CategoryName;
	params.bToBeMuted = bToBeMuted;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.CallEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_CallEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.CallEvent");

	USQEXSEADStatics_CallEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADStatics.AutoSeCtrl_SetEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADStatics::STATIC_AutoSeCtrl_SetEnable(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADStatics.AutoSeCtrl_SetEnable");

	USQEXSEADStatics_AutoSeCtrl_SetEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADZeroOneSeComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Stop");

	USQEXSEADZeroOneSeComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.SetZeroOneValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void USQEXSEADZeroOneSeComponent::SetZeroOneValue(int Slot, float Value, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADZeroOneSeComponent.SetZeroOneValue");

	USQEXSEADZeroOneSeComponent_SetZeroOneValue_Params params;
	params.Slot = Slot;
	params.Value = Value;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Play
// (Final, Native, Public, BlueprintCallable)

void USQEXSEADZeroOneSeComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function SQEXSEAD.SQEXSEADZeroOneSeComponent.Play");

	USQEXSEADZeroOneSeComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
