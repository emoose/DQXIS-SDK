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

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0038 - 0x0038)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00C8 - 0x0050)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x00A0(0x0028) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0098 - 0x0050)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0088(0x0010) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0088 (0x00D8 - 0x0050)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0050(0x0058) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x00A8(0x0030) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x0350 - 0x0330)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0330(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


// Class AudioMixer.SynthComponent
// 0x0340 (0x0620 - 0x02E0)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x02E0(0x0001)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x02E0(0x0001)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x02E0(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x02E0(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x02E8(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x02F0(0x02C0) (Edit, BlueprintVisi)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x05B0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class USoundClass*                                 SoundClass;                                               // 0x05B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x05C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                SoundSubmix;                                              // 0x05C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x05D0(0x0010) (Edit, BlueprintVisi, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x05E0(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x05E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x05F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x05F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
