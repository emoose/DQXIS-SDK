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

// Class MediaCompositing.MediaPlane
// 0x0008 (0x03A0 - 0x0398)
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MediaPlane");
		return ptr;
	}

};


// Class MediaCompositing.MediaPlaneComponent
// 0x00D0 (0x0800 - 0x0730)
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                    // 0x0730(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0768(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MediaPlaneComponent");
		return ptr;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};


// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (0x0730 - 0x0730)
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MediaPlaneFrustumComponent");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0020 (0x0140 - 0x0120)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	struct FString                                     Proxy;                                                    // 0x0120(0x0010) (Edit, ZeroConstructor)
	class UMediaSource*                                MediaSource;                                              // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0000 (0x00F0 - 0x00F0)
class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
