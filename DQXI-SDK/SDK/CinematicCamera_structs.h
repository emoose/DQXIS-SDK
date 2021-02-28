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

// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0030
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisi, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LookAtTrackingInterpSpeed;                                // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	class AActor*                                      ActorToTrack;                                             // 0x0018(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0020(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	unsigned char                                      bAllowRoll : 1;                                           // 0x002C(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SensorAspectRatio;                                        // 0x0008(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0014
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                           // 0x0000(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxFocalLength;                                           // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MinFStop;                                                 // 0x0008(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MaxFStop;                                                 // 0x000C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFocusDistance;                                     // 0x0010(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0018
struct FCameraTrackingFocusSettings
{
	class AActor*                                      ActorToTrack;                                             // 0x0000(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeOffset;                                           // 0x0008(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                         // 0x0014(0x0001) (Edit, BlueprintVisi, Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0038
struct FCameraFocusSettings
{
	ECameraFocusMethod                                 FocusMethod;                                              // 0x0000(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ManualFocusDistance;                                      // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                    // 0x0008(0x0018) (Edit, BlueprintVisi)
	unsigned char                                      bDrawDebugFocusPlane : 1;                                 // 0x0020(0x0001) (Edit, Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FColor                                      DebugFocusPlaneColor;                                     // 0x0024(0x0004) (Edit, IsPlainOldData)
	unsigned char                                      bSmoothFocusChanges : 1;                                  // 0x0028(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              FocusSmoothingInterpSpeed;                                // 0x002C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              FocusOffset;                                              // 0x0030(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FCameraLensSettings                         LensSettings;                                             // 0x0010(0x0014) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
