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

// Class WmfMediaFactory.WmfMediaSettings
// 0x0008 (0x0040 - 0x0038)
class UWmfMediaSettings : public UObject
{
public:
	bool                                               AllowNonStandardCodecs;                                   // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               LowLatency;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               NativeAudioOut;                                           // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WmfMediaFactory.WmfMediaSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
