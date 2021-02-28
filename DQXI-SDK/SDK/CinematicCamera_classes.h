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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x03C8 - 0x0398)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0398(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x039C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x03A0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x03A4(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x03A5(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x03B8 - 0x0398)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0398(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x0910 - 0x08D0)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x08D0(0x0030) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0900(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00C0 (0x0920 - 0x0860)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0860(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	struct FCameraLensSettings                         LensSettings;                                             // 0x086C(0x0014) (Edit, BlueprintVisi, IsPlainOldData)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0880(0x0038) (Edit, BlueprintVisi)
	float                                              CurrentFocalLength;                                       // 0x08B8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x08BC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x08C0(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x08C4(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x08D0(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x08E0(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x08F0(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x0900(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0910(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x0914(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0918(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
