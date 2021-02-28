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

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x33698 - 0x33690)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x33690(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x33691(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0018 (0x04B0 - 0x0498)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0498(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
