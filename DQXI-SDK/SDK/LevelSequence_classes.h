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

// Class LevelSequence.LevelSequence
// 0x0100 (0x0440 - 0x0340)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0348(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x0398(0x0050)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x03E8(0x0050) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0038 - 0x0038)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0018 (0x0050 - 0x0038)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0040(0x0008) (Edit)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0070 (0x0408 - 0x0398)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x03A0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x03A8(0x0028) (Edit, BlueprintVisi, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x03D0(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x03D8(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x03E0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x03F0(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x03F8(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0060 (0x0230 - 0x01D0)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x01D0(0x0058) (BlueprintVisi, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x0228(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequencePlayer
// 0x00A0 (0x08A0 - 0x0800)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              // 0x0800(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0810(0x0030) MISSED OFFSET
	TArray<class UObject*>                             AdditionalEventReceivers;                                 // 0x0840(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0850(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
