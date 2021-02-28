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

// Class JackAnimNodeRuntime.JackAnimNodeRuntimeModule
// 0x0000 (0x0038 - 0x0038)
class UJackAnimNodeRuntimeModule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JackAnimNodeRuntime.JackAnimNodeRuntimeModule");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
