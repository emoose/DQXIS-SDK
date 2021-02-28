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

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0068 - 0x0038)
class UTcpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     ListenEndpoint;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             ConnectToEndpoints;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	int                                                ConnectionRetryDelay;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
