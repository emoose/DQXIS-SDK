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

// Class SQEXSEAD.SQEXSEADAutoSeComponentCallback
// 0x0000 (0x0038 - 0x0038)
class USQEXSEADAutoSeComponentCallback : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeComponentCallback");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAutoSeComponentCallbackDefault
// 0x0060 (0x0098 - 0x0038)
class USQEXSEADAutoSeComponentCallbackDefault : public USQEXSEADAutoSeComponentCallback
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeComponentCallbackDefault");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackSound
// 0x0030 (0x00E0 - 0x00B0)
class USQEXSEADInterpTrackSound : public UInterpTrackVectorBase
{
public:
	unsigned char                                      bTreatAsNonWorldSound : 1;                                // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FSQEXSEADSoundTrackKey>              Sounds;                                                   // 0x00B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00C8(0x0001) (Edit)
	unsigned char                                      bContinueSoundOnMatineeEnd : 1;                           // 0x00C8(0x0001) (Edit)
	unsigned char                                      bSuppressSubtitles : 1;                                   // 0x00C8(0x0001) (Edit)
	unsigned char                                      bTreatAsDialogue : 1;                                     // 0x00C8(0x0001) (Edit)
	unsigned char                                      bAttach : 1;                                              // 0x00C8(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FName                                       AttachGroupName;                                          // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstSound
// 0x0028 (0x0060 - 0x0038)
class USQEXSEADInterpTrackInstSound : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UAudioComponent*                             PlayAudioComp;                                            // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AActor*                                      AttachTargetActor;                                        // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXKlangBinary
// 0x0010 (0x0050 - 0x0040)
class USQEXKlangBinary : public UDataAsset
{
public:
	TArray<unsigned char>                              DataArray;                                                // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXKlangBinary");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAnimNotify_PlayAutoSe
// 0x0028 (0x0070 - 0x0048)
class USQEXSEADAnimNotify_PlayAutoSe : public UAnimNotify
{
public:
	struct FSQEXSEADAnimNotifyPlayAutoSeParams         PlaySettings;                                             // 0x0048(0x0028) (Edit, BlueprintVisi, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAnimNotify_PlayAutoSe");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAnimNotifyState_PlayAutoSe
// 0x0080 (0x00C0 - 0x0040)
class USQEXSEADAnimNotifyState_PlayAutoSe : public UAnimNotifyState
{
public:
	struct FSQEXSEADAnimNotifyPlayAutoSeParams         PlaySettings;                                             // 0x0040(0x0028) (Edit, BlueprintVisi, BlueprintReadOnly)
	float                                              FadeOutDuration;                                          // 0x0068(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x006C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAnimNotifyState_PlayAutoSe");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAnimNotifyState_ChangeAutoSeEnable
// 0x0058 (0x0098 - 0x0040)
class USQEXSEADAnimNotifyState_ChangeAutoSeEnable : public UAnimNotifyState
{
public:
	unsigned char                                      bEnableSetting : 1;                                       // 0x0040(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior       NotifyEndBehavior;                                        // 0x0041(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableContinuousDisabling : 1;                           // 0x0042(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x55];                                      // 0x0043(0x0055) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAnimNotifyState_ChangeAutoSeEnable");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAnimNotify_PlaySound
// 0x0030 (0x0078 - 0x0048)
class USQEXSEADAnimNotify_PlaySound : public UAnimNotify
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0048(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // 0x0050(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0054(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0058(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x005C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0060(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0068(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayInGame : 1;                                          // 0x0070(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bPlayInCutScene : 1;                                      // 0x0070(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAnimNotify_PlaySound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAnimNotifyState_AttachSound
// 0x0098 (0x00D8 - 0x0040)
class USQEXSEADAnimNotifyState_AttachSound : public UAnimNotifyState
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0040(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // 0x0048(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x004C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0050(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartWaitTime;                                            // 0x0054(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0058(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x005C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0060(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0068(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LoopEndSound;                                             // 0x0070(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LoopEndSoundVolumeMultiplier;                             // 0x0078(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LoopEndSoundPitchMultiplier;                              // 0x007C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayInGame : 1;                                          // 0x0080(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bPlayInCutScene : 1;                                      // 0x0080(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0081(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAnimNotifyState_AttachSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAssetHolder
// 0x0010 (0x0048 - 0x0038)
class USQEXSEADAssetHolder : public UObject
{
public:
	TArray<class UObject*>                             HoldAssets;                                               // 0x0038(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAssetHolder");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAttachSeComponent
// 0x0030 (0x0158 - 0x0128)
class USQEXSEADAttachSeComponent : public UActorComponent
{
public:
	class USoundBase*                                  SoundAsset;                                               // 0x0128(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x0130(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0134(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0138(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0140(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             MyAudioComponent;                                         // 0x0148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              MyMeshComponent;                                          // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAttachSeComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAudioComponent
// 0x0010 (0x0750 - 0x0740)
class USQEXSEADAudioComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAudioComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAudioVolume
// 0x0088 (0x0458 - 0x03D0)
class ASQEXSEADAudioVolume : public AVolume
{
public:
	class USQEXSEADVolumeComponent*                    VolumeComponent;                                          // 0x03D0(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x03D8(0x0001) (Edit, BlueprintVisi, Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	int                                                EffectPresetNumber;                                       // 0x03DC(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              EffectFadeTime;                                           // 0x03E0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              ObstructionVolume;                                        // 0x03E4(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              ObstructionLPF;                                           // 0x03E8(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              InternalObstructionVolume;                                // 0x03EC(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              InternalObstructionLPF;                                   // 0x03F0(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              ObstructionFadeTime;                                      // 0x03F4(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	float                                              ReverbFadeTime;                                           // 0x03F8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x03FC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseObstructionParamsSeparatePriority : 1;                // 0x0400(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              ObstructionParamsSeparatePriority;                        // 0x0404(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TArray<class USoundBase*>                          AudioVolumeSounds;                                        // 0x0408(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	float                                              SoundFadeInTime;                                          // 0x0418(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	int                                                SoundFadeInCurveNumber;                                   // 0x041C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SoundFadeoutTime;                                         // 0x0420(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	int                                                SoundFadeOutCurveNumber;                                  // 0x0424(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	int                                                GroupingID;                                               // 0x0428(0x0004) (Edit, BlueprintVisi, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	TArray<class ASQEXSEADAudioVolume*>                GroupedAudioVolumes;                                      // 0x0430(0x0010) (Edit, ZeroConstructor, EditConst)
	class USoundAttenuation*                           OverridingAttenuationSettings;                            // 0x0440(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0448(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAudioVolume");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAutoSeComponentAssetTable
// 0x0C30 (0x0C70 - 0x0040)
class USQEXSEADAutoSeComponentAssetTable : public UDataAsset
{
public:
	struct FSQEXSEADAutoSeComponentAssetTablePerSurface PerSurfaceInfos[0x3F];                                    // 0x0040(0x0030) (Edit)
	struct FSQEXSEADAutoSeComponentAssetTableNonSurface NonSurfaceInfos;                                          // 0x0C10(0x0050) (Edit)
	struct FSQEXSEADSurfaceAssetReferenceTableData     AuxSurfaceAssetTable;                                     // 0x0C60(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeComponentAssetTable");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAutoSeComponentSetting
// 0x0058 (0x0098 - 0x0040)
class USQEXSEADAutoSeComponentSetting : public UDataAsset
{
public:
	struct FSQEXSEADAutoSeComponentInitParams          InitParams;                                               // 0x0040(0x0058) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeComponentSetting");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAutoSeDetectionSetting
// 0x0080 (0x00C0 - 0x0040)
class USQEXSEADAutoSeDetectionSetting : public UDataAsset
{
public:
	struct FSQEXSEADAutoSeAnalyzerSetting              AnalyzerSetting;                                          // 0x0040(0x0018) (Edit, BlueprintVisi, BlueprintReadOnly)
	bool                                               bUseAnalyzerSettingForMotionOnlyMode;                     // 0x0058(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FSQEXSEADAutoSeAnalyzerSetting              AnalyzerSettingForMotionOnlyMode;                         // 0x005C(0x0018) (Edit, BlueprintVisi, BlueprintReadOnly)
	struct FSQEXSEADAutoSeDetectorSettingFootStep      DetectorSettingFootStep;                                  // 0x0074(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly)
	struct FSQEXSEADAutoSeDetectorSettingRustle        DetectorSettingRustle;                                    // 0x0084(0x0028) (Edit, BlueprintVisi, BlueprintReadOnly)
	struct FSQEXSEADAutoSeDetectorSettingSwing         DetectorSettingSwing;                                     // 0x00AC(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeDetectionSetting");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADAutoSeComponent
// 0x00A8 (0x01D0 - 0x0128)
class USQEXSEADAutoSeComponent : public UActorComponent
{
public:
	class USQEXSEADAutoSeComponentCallback*            AutoSeCallback;                                           // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USQEXSEADAutoSeComponentSetting*             SettingData;                                              // 0x0130(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USQEXSEADAutoSeComponentAssetTable*          AssetTable;                                               // 0x0138(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USQEXSEADAutoSeDetectionSetting*             DetectionSetting;                                         // 0x0140(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      CachedMeshReference;                                      // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPawnMovementComponent*                      CachedMovementComponent;                                  // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0160(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADAutoSeComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEAD_BGM
// 0x0028 (0x0060 - 0x0038)
class USQEXSEAD_BGM : public UObject
{
public:
	class USQEXSEADSound*                              Sound_;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEAD_BGM");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADBGMManager
// 0x0110 (0x0148 - 0x0038)
class USQEXSEADBGMManager : public UObject
{
public:
	TArray<class USQEXSEADBGMSlot*>                    Slots_;                                                   // 0x0038(0x0010) (ZeroConstructor)
	TArray<class USQEXSEADBGMSlotController*>          Controllers_;                                             // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0058(0x00E0) MISSED OFFSET
	TArray<struct FSQEXSEAD_BGMSlotSetting>            SlotSettings_;                                            // 0x0138(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADBGMManager");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADBGMSlot
// 0x0068 (0x00A0 - 0x0038)
class USQEXSEADBGMSlot : public UObject
{
public:
	ESQEXSEAD_BGMState                                 State;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0039(0x0037) MISSED OFFSET
	struct FSQEXSEAD_BGMOptions                        DefaultOptions_;                                          // 0x0070(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class USQEXSEAD_BGM*                               BGM_;                                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class USQEXSEAD_BGM*                               PrevBGM_;                                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADBGMSlot");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADBGMSlotController
// 0x0008 (0x0040 - 0x0038)
class USQEXSEADBGMSlotController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADBGMSlotController");
		return ptr;
	}


	void Unreference();
	void Stop();
	void SetVolume(float Volume, float FadeTime);
	void SetSuspendFadeOutTime(float FadeTime);
	void SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour);
	void SetStopFadeOutTime(float FadeTime);
	void SetSeekTime(float SeekTime);
	void SetSection(int Index);
	void SetResumeFadeInTime(float FadeTime);
	void SetRestartSameBGM(bool bRestart);
	void SetPriority(int Priority);
	void SetPlayFadeInTime(float FadeTime);
	void SetPath(const struct FString& Path);
	void SetOptions(const struct FSQEXSEAD_BGMOptions& NewOptions);
	void SetMode(int Index);
	void Set(class USoundBase* Sound);
	void Reset();
	void Play();
	bool IsPlaying();
};


// Class SQEXSEAD.SQEXSEADCollisionEventSeComponent
// 0x0040 (0x0168 - 0x0128)
class USQEXSEADCollisionEventSeComponent : public UActorComponent
{
public:
	class USoundBase*                                  OnHitSoundAsset;                                          // 0x0128(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OnPawnHitSoundAsset;                                      // 0x0130(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OnBeginOverlapSoundAsset;                                 // 0x0138(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OnEndOverlapSoundAsset;                                   // 0x0140(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPawnOverlapOnly : 1;                                     // 0x0148(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	class USoundBase*                                  OnFractureSoundAsset;                                     // 0x0150(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              MyMeshComponent;                                          // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDestructibleComponent*                      MyDestructibleComponent;                                  // 0x0160(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADCollisionEventSeComponent");
		return ptr;
	}


	void OnFracture(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class SQEXSEAD.SQEXSEADSurfaceNameTable
// 0x01F8 (0x0238 - 0x0040)
class USQEXSEADSurfaceNameTable : public UDataAsset
{
public:
	struct FName                                       Names[0x3F];                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADSurfaceNameTable");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADSurfaceAssetReferenceTable
// 0x0010 (0x0050 - 0x0040)
class USQEXSEADSurfaceAssetReferenceTable : public UDataAsset
{
public:
	struct FSQEXSEADSurfaceAssetReferenceTableData     TableData;                                                // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADSurfaceAssetReferenceTable");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackAutoSeControl
// 0x0018 (0x00A8 - 0x0090)
class USQEXSEADInterpTrackAutoSeControl : public UInterpTrack
{
public:
	TArray<struct FSQEXSEADAutoSeControlTrackKey>      Keys;                                                     // 0x0090(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FName                                       OverrideGroupName;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackAutoSeControl");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackCategoryVolumeFade
// 0x0008 (0x00B8 - 0x00B0)
class USQEXSEADInterpTrackCategoryVolumeFade : public UInterpTrackFloatBase
{
public:
	struct FName                                       CategoryName;                                             // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackCategoryVolumeFade");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackCategoryVolumeKey
// 0x0010 (0x00A0 - 0x0090)
class USQEXSEADInterpTrackCategoryVolumeKey : public UInterpTrack
{
public:
	TArray<struct FSQEXSEADCategoryVolumeKeyTrackKey>  VolumeKeys;                                               // 0x0090(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackCategoryVolumeKey");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackEvent
// 0x0018 (0x00A8 - 0x0090)
class USQEXSEADInterpTrackEvent : public UInterpTrack
{
public:
	TArray<struct FSQEXSEADEventTrackKey>              EventTrack;                                               // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bFireEventsWhenForwards : 1;                              // 0x00A0(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenBackwards : 1;                             // 0x00A0(0x0001) (Edit)
	unsigned char                                      bFireEventsWhenJumpingForwards : 1;                       // 0x00A0(0x0001) (Edit)
	unsigned char                                      bUseCustomEventName : 1;                                  // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackEvent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackExternalParameter
// 0x0008 (0x00B8 - 0x00B0)
class USQEXSEADInterpTrackExternalParameter : public UInterpTrackFloatBase
{
public:
	struct FName                                       ExternalParameterName;                                    // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackExternalParameter");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstAutoSeControl
// 0x0018 (0x0050 - 0x0038)
class USQEXSEADInterpTrackInstAutoSeControl : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstAutoSeControl");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstCategoryVolumeFade
// 0x0008 (0x0050 - 0x0048)
class USQEXSEADInterpTrackInstCategoryVolumeFade : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
	float                                              ResetVolume;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstCategoryVolumeFade");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstCategoryVolumeKey
// 0x0008 (0x0040 - 0x0038)
class USQEXSEADInterpTrackInstCategoryVolumeKey : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstCategoryVolumeKey");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstEvent
// 0x0008 (0x0040 - 0x0038)
class USQEXSEADInterpTrackInstEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstEvent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADInterpTrackInstExternalParameter
// 0x0008 (0x0050 - 0x0048)
class USQEXSEADInterpTrackInstExternalParameter : public UInterpTrackInstProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
	float                                              ResetValue;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADInterpTrackInstExternalParameter");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADLayoutAudioComponent
// 0x0000 (0x0750 - 0x0750)
class USQEXSEADLayoutAudioComponent : public USQEXSEADAudioComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADLayoutAudioComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADLayoutComponent
// 0x0070 (0x07A0 - 0x0730)
class USQEXSEADLayoutComponent : public UPrimitiveComponent
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0730(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FSQEXSEADLayoutInfo                         LayoutInfo;                                               // 0x0738(0x0040) (Edit)
	unsigned char                                      bIgnoreObstruction : 1;                                   // 0x0778(0x0001) (Edit)
	unsigned char                                      bOverrideInteriorFactor : 1;                              // 0x0778(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	float                                              InteriorFactor;                                           // 0x077C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0780(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0784(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0788(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADLayoutComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADLayoutObstruction
// 0x0008 (0x03A0 - 0x0398)
class ASQEXSEADLayoutObstruction : public AActor
{
public:
	class USQEXSEADLayoutObstructionComponent*         ObstructionComponent;                                     // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADLayoutObstruction");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADLayoutObstructionComponent
// 0x0030 (0x0310 - 0x02E0)
class USQEXSEADLayoutObstructionComponent : public USceneComponent
{
public:
	struct FSQEXSEADLayoutObstructionInfo              ObstructionInfo;                                          // 0x02E0(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADLayoutObstructionComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADLayoutSound
// 0x0008 (0x03A0 - 0x0398)
class ASQEXSEADLayoutSound : public AActor
{
public:
	class USQEXSEADLayoutComponent*                    LayoutComponent;                                          // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADLayoutSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADMediaSound
// 0x0000 (0x0298 - 0x0298)
class USQEXSEADMediaSound : public USoundWave
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADMediaSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADSound
// 0x0388 (0x0620 - 0x0298)
class USQEXSEADSound : public USoundWave
{
public:
	bool                                               bUseKohrogiAttenuation;                                   // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class USQEXSEADSoundBank*                          ReferenceBank;                                            // 0x02A0(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SoundIndex;                                               // 0x02A8(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideStopFadeTime;                                    // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              StopFadeTime;                                             // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUISound;                                               // 0x02B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	float                                              PauseFadeTime;                                            // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAudioVolumeAttenuation;                            // 0x02BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSEADTracingOcclusion;                              // 0x02BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SEADOcclusionTraceChannel;                                // 0x02BE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x361];                                     // 0x02BF(0x0361) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADMusic
// 0x0000 (0x0620 - 0x0620)
class USQEXSEADMusic : public USQEXSEADSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADMusic");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADMusicActor
// 0x0010 (0x03A8 - 0x0398)
class ASQEXSEADMusicActor : public AActor
{
public:
	unsigned char                                      bAutoPlay : 1;                                            // 0x0398(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x03A0(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADMusicActor");
		return ptr;
	}


	void Stop();
	void SetNextSectionIndex(int SectionIndex);
	void SetNextSection(const struct FString& SectionName);
	void SetModeIndex(int modeIndex);
	void SetMode(const struct FString& modeName);
	void Play(float StartTime);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void BlendModeIndex(int modeIndex, float Rate, float FadeTime);
	void BlendMode(const struct FString& modeName, float Rate, float FadeTime);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};


// Class SQEXSEAD.SQEXSEADPhysObjSeComponentSetting
// 0x0028 (0x0068 - 0x0040)
class USQEXSEADPhysObjSeComponentSetting : public UDataAsset
{
public:
	class USoundBase*                                  HitSE;                                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSwithHitSE : 1;                                    // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class USoundBase*                                  VelocitySE;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitImpulseThreshold;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitDistanceThreshold;                                     // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityThreshold;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityAudioFadeOutTime;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADPhysObjSeComponentSetting");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADPhysObjSeComponent
// 0x0038 (0x0160 - 0x0128)
class USQEXSEADPhysObjSeComponent : public UActorComponent
{
public:
	class USQEXSEADPhysObjSeComponentSetting*          Setting;                                                  // 0x0128(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             MyRootComponent;                                          // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VelocityAudioComponent;                                   // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0140(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADPhysObjSeComponent");
		return ptr;
	}


	void StopCalculation(float StopInnerSoundsFadeTime);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class SQEXSEAD.SQEXSEADSoundBank
// 0x0368 (0x03A0 - 0x0038)
class USQEXSEADSoundBank : public UObject
{
public:
	class UAssetImportData*                            AssetImportData;                                          // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x360];                                     // 0x0040(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADSoundBank");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADSoundReferenceEnumSet
// 0x0010 (0x0050 - 0x0040)
class USQEXSEADSoundReferenceEnumSet : public UDataAsset
{
public:
	TArray<struct FSQEXSEADSoundReference>             References;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADSoundReferenceEnumSet");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADStatics
// 0x0000 (0x0038 - 0x0038)
class USQEXSEADStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADStatics");
		return ptr;
	}


	void STATIC_ZeroOneCtrl_SetValue(class UAudioComponent* AudioComponent, int Slot, float Value);
	void STATIC_SuspendBGM_OptionalFade(float FadeTime);
	void STATIC_SuspendBGM();
	void STATIC_StopAllCategorySounds(float FadeTime);
	void STATIC_StopAllBGM_OptionalFade(float FadeTime);
	void STATIC_StopAllBGM();
	void STATIC_SetIsInCutScene(bool bIsCutScene);
	void STATIC_SetExternalParameter(const struct FName& ParamName, float Value);
	void STATIC_SetEnableBGMAutoResume(bool bIsEnabled);
	void STATIC_SetEffectPreset(const struct FName& PresetName, float FadeTime);
	void STATIC_Sead_SetMasterVolume(float Volume, float FadeTime);
	float STATIC_Sead_GetMasterVolume();
	void STATIC_ResumeBGM_OptionalFade(float FadeTime);
	void STATIC_ResumeBGM();
	void STATIC_ResetEffectPreset(float resetFadeTime);
	void STATIC_ResetAllCategoryTemporarySettings(float resetFadeTime);
	class UAudioComponent* STATIC_PlaySoundAttached(class USoundBase* Sound, int SoundIndex, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, int SoundIndex, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAudioComponent* STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, int SoundIndex, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	bool STATIC_IsPlayingBGM(class USoundBase* Sound);
	bool STATIC_IsInCutScene();
	int STATIC_GetNumAudibleSoundsAtLocation(class UObject* WorldContextObject, const struct FVector& Location);
	class USQEXSEADBGMSlotController* STATIC_GetBGMSlotController(const struct FName& Name);
	class USQEXSEADBGMSlotController* STATIC_CreateBGMSlot(const struct FName& Name, const struct FSQEXSEAD_BGMOptions& Options);
	void STATIC_CategoryCtrl_Suspend(const struct FName& CategoryName, float FadeOutTime);
	void STATIC_CategoryCtrl_Stop(const struct FName& CategoryName, float FadeOutTime);
	void STATIC_CategoryCtrl_SetVolume(const struct FName& CategoryName, float Volume, float FadeTime);
	void STATIC_CategoryCtrl_SetPitch(const struct FName& CategoryName, float Pitch, float FadeTime);
	void STATIC_CategoryCtrl_SetLayerVolume(const struct FName& CategoryName, ESQEXSEADCategoryVolumeLayers Layer, float Volume, float FadeTime);
	void STATIC_CategoryCtrl_Resume(const struct FName& CategoryName, float FadeInTime);
	float STATIC_CategoryCtrl_GetVolume(const struct FName& CategoryName);
	void STATIC_CategoryCtrl_DebugMute(const struct FName& CategoryName, bool bToBeMuted, float FadeTime);
	void STATIC_CallEvent(const struct FName& EventName);
	void STATIC_AutoSeCtrl_SetEnable(bool Enable);
};


// Class SQEXSEAD.SQEXSEADVolumeComponent
// 0x0010 (0x02F0 - 0x02E0)
class USQEXSEADVolumeComponent : public USceneComponent
{
public:
	struct FSQEXSEADVolumeInfo                         VolumeInfo;                                               // 0x02E0(0x0001) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADVolumeComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADWhizSeComponent
// 0x0030 (0x0310 - 0x02E0)
class USQEXSEADWhizSeComponent : public USceneComponent
{
public:
	class USoundBase*                                  SoundAsset;                                               // 0x02E0(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ApproachJudgmentDistance;                                 // 0x02E8(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ApproachJudgmentVelocity;                                 // 0x02EC(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x02F0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bOnlyOnce : 1;                                            // 0x02F0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bUseRelativeVelocity : 1;                                 // 0x02F0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	class UAudioComponent*                             MyAudioComponent;                                         // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMeshComponent*                              MyMeshComponent;                                          // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADWhizSeComponent");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADWhizSound
// 0x0008 (0x03A0 - 0x0398)
class ASQEXSEADWhizSound : public AActor
{
public:
	class USQEXSEADWhizSeComponent*                    WhizComponent;                                            // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADWhizSound");
		return ptr;
	}

};


// Class SQEXSEAD.SQEXSEADZeroOneSeComponent
// 0x0048 (0x0170 - 0x0128)
class USQEXSEADZeroOneSeComponent : public UActorComponent
{
public:
	class USoundBase*                                  SoundAsset;                                               // 0x0128(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // 0x0130(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0134(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESQEXSEADAudioStartTimings>            AudioStartTiming;                                         // 0x0138(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0140(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnable_Slot0 : 1;                                        // 0x0148(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	TEnumAsByte<ESQEXSEADZeroOneProperties>            PropertyType_Slot0;                                       // 0x014C(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	unsigned char                                      bEnable_Slot1 : 1;                                        // 0x0150(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	TEnumAsByte<ESQEXSEADZeroOneProperties>            PropertyType_Slot1;                                       // 0x0154(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	class USQEXSEADAudioComponent*                     MyAudioComponent;                                         // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SQEXSEAD.SQEXSEADZeroOneSeComponent");
		return ptr;
	}


	void Stop();
	void SetZeroOneValue(int Slot, float Value, float FadeTime);
	void Play();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
