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

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x0050 (0x0088 - 0x0038)
class ULightPropagationVolumeBlendable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FLightPropagationVolumeSettings             Settings;                                                 // 0x0040(0x0040) (Edit, BlueprintVisi)
	float                                              BlendWeight;                                              // 0x0080(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
