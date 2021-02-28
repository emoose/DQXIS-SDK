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

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00B0 - 0x0038)
class UUdpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     UnicastEndpoint;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     MulticastEndpoint;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      MulticastTimeToLive;                                      // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TArray<struct FString>                             StaticEndpoints;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               EnableTunnel;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     TunnelUnicastEndpoint;                                    // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TunnelMulticastEndpoint;                                  // 0x0090(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             RemoteTunnelEndpoints;                                    // 0x00A0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
