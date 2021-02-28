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

// Enum CriWareRuntime.EAtomComponentStatus
enum class EAtomComponentStatus : uint8_t
{
	EAtomComponentStatus__Stop     = 0,
	EAtomComponentStatus__Prep     = 1,
	EAtomComponentStatus__Playing  = 2,
	EAtomComponentStatus__PlayEnd  = 3,
	EAtomComponentStatus__Error    = 4,
	EAtomComponentStatus__EAtomComponentStatus_MAX = 5
};


// Enum CriWareRuntime.ECriFsLoaderStatus
enum class ECriFsLoaderStatus : uint8_t
{
	ECriFsLoaderStatus__Stop       = 0,
	ECriFsLoaderStatus__Loading    = 1,
	ECriFsLoaderStatus__Complete   = 2,
	ECriFsLoaderStatus__Error      = 3,
	ECriFsLoaderStatus__ECriFsLoaderStatus_MAX = 4
};


// Enum CriWareRuntime.EManaMovieType
enum class EManaMovieType : uint8_t
{
	EManaMovieType__SofdecPrime    = 0,
	EManaMovieType__H264           = 1,
	EManaMovieType__Num            = 2,
	EManaMovieType__Unknown        = 3,
	EManaMovieType__EManaMovieType_MAX = 4
};


// Enum CriWareRuntime.EManaComponentStatus
enum class EManaComponentStatus : uint8_t
{
	EManaComponentStatus__Stop     = 0,
	EManaComponentStatus__DecHdr   = 1,
	EManaComponentStatus__WaitPrep = 2,
	EManaComponentStatus__Prep     = 3,
	EManaComponentStatus__Ready    = 4,
	EManaComponentStatus__Playing  = 5,
	EManaComponentStatus__PlayEnd  = 6,
	EManaComponentStatus__Error    = 7,
	EManaComponentStatus__StopProcessing = 8,
	EManaComponentStatus__EManaComponentStatus_MAX = 9
};


// Enum CriWareRuntime.EManaFrameAction
enum class EManaFrameAction : uint8_t
{
	EManaFrameAction__Default      = 0,
	EManaFrameAction__Hold         = 1,
	EManaFrameAction__Clear        = 2,
	EManaFrameAction__EManaFrameAction_MAX = 3
};


// Enum CriWareRuntime.EManaSubtitlesEncoding
enum class EManaSubtitlesEncoding : uint8_t
{
	EManaSubtitlesEncoding__Default = 0,
	EManaSubtitlesEncoding__ANSI   = 1,
	EManaSubtitlesEncoding__Utf8   = 2,
	EManaSubtitlesEncoding__Utf16  = 3,
	EManaSubtitlesEncoding__EManaSubtitlesEncoding_MAX = 4
};


// Enum CriWareRuntime.EAtomSoundRendererType
enum class EAtomSoundRendererType : uint8_t
{
	EAtomSoundRendererType__Any    = 0,
	EAtomSoundRendererType__Native = 1,
	EAtomSoundRendererType__Asr    = 2,
	EAtomSoundRendererType__Hardware2 = 3,
	EAtomSoundRendererType__Hardware3 = 4,
	EAtomSoundRendererType__Hardware4 = 5,
	EAtomSoundRendererType__Pad    = 6,
	EAtomSoundRendererType__EAtomSoundRendererType_MAX = 7
};


// Enum CriWareRuntime.EEngineIniFileType
enum class EEngineIniFileType : uint8_t
{
	EEngineIniFileType__EngBaseEngineIni = 0,
	EEngineIniFileType__EngWindowsEngineIni = 1,
	EEngineIniFileType__ProjDefaultEngineIni = 2,
	EEngineIniFileType__ProjWindowsEngineIni = 3,
	EEngineIniFileType__EEngineIniFileType_MAX = 4
};


// Enum CriWareRuntime.EManaComponentTextureType
enum class EManaComponentTextureType : uint8_t
{
	EManaComponentTextureType__Texture_Y = 0,
	EManaComponentTextureType__Texture_U = 1,
	EManaComponentTextureType__Texture_V = 2,
	EManaComponentTextureType__Texture_A = 3,
	EManaComponentTextureType__Texture_UV = 4,
	EManaComponentTextureType__Texture_MAX = 5
};


// Enum CriWareRuntime.EManaSoundType
enum class EManaSoundType : uint8_t
{
	EManaSoundType__Adx            = 0,
	EManaSoundType__HCA            = 1,
	EManaSoundType__Num            = 2,
	EManaSoundType__Unknown        = 3,
	EManaSoundType__EManaSoundType_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CriWareRuntime.AtomAisacControlParam
// 0x0018
struct FAtomAisacControlParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomSelectorParam
// 0x0020
struct FAtomSelectorParam
{
	struct FString                                     Selector;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Label;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomTriggerRow
// 0x0018 (0x0020 - 0x0008)
struct FAtomTriggerRow : public FTableRowBase
{
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       Bone;                                                     // 0x0010(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Cue;                                                      // 0x0018(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
// 0x0008
struct FAtomAsrRackConfigUI
{
	TEnumAsByte<EAtomSoundRendererType>                SoundRendererTypeUI;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ElementID;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfig
// 0x0004
struct FAtomAsrRackConfig
{
	int                                                SoundRendererType;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.ManaEventPointInfo
// 0x0028
struct FManaEventPointInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Time;                                                     // 0x0010(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Type;                                                     // 0x0014(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Parameter;                                                // 0x0018(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
// 0x001C
struct FManaVideoTrackInfo
{
	struct FIntPoint                                   TextureDimensions;                                        // 0x0000(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FIntPoint                                   DisplayDimensions;                                        // 0x0008(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              FrameRate;                                                // 0x0010(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalFrames;                                              // 0x0014(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsAlpha;                                                 // 0x0018(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EManaMovieType                                     Type;                                                     // 0x0019(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
// 0x0010
struct FManaAudioTrackInfo
{
	int                                                NumChannels;                                              // 0x0000(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SamplingRate;                                             // 0x0004(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                TotalSamples;                                             // 0x0008(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsAmbisonics;                                            // 0x000C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EManaSoundType                                     Type;                                                     // 0x000D(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomTrackKeyframe
// 0x0010
struct FAtomTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundAtomCue*                               Cue;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomCueIdTrackKeyframe
// 0x0008
struct FAtomCueIdTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CueId;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomCueNameTrackKeyframe
// 0x0018
struct FAtomCueNameTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     CueName;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.AtomSelectorTrackKeyframe
// 0x0018
struct FAtomSelectorTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SelectorLabel;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
// 0x0108
struct FMovieSceneAtomSectionTemplateData
{
	class USoundAtomCue*                               Sound;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AtomStartOffset;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 AtomRange;                                                // 0x000C(0x0010)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FRichCurve                                  AtomPitchMultiplierCurve;                                 // 0x0020(0x0070)
	struct FRichCurve                                  AtomVolumeCurve;                                          // 0x0090(0x0070)
	int                                                RowIndex;                                                 // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
// 0x0108 (0x0128 - 0x0020)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAtomSectionTemplateData          AtomData;                                                 // 0x0020(0x0108)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
