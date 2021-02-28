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

// Class MovieSceneCapture.MovieSceneCapture
// 0x0218 (0x0250 - 0x0038)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	struct FCaptureProtocolID                          CaptureType;                                              // 0x0048(0x0008) (Edit, Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0058(0x0048) (Edit, Config)
	bool                                               bUseSeparateProcess;                                      // 0x00A0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x00A1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x00B8(0x0010) (Edit, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x188];                                     // 0x00C8(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x0250 - 0x0250)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0038 - 0x0038)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0028 (0x0060 - 0x0038)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0038(0x0010) (Edit, Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0058(0x0008) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0040 - 0x0038)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0038 - 0x0038)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0048 - 0x0040)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0038 - 0x0038)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0270 - 0x0250)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0250(0x0004) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x0254(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0264(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0038 - 0x0038)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0058 - 0x0040)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VideoCodec;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
