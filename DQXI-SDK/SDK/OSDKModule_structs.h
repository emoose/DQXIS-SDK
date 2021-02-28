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

// Enum OSDKModule.EOSDKFutureFinishResult
enum class EOSDKFutureFinishResult : uint8_t
{
	EOSDKFutureFinishResult__Ready = 0,
	EOSDKFutureFinishResult__Cancelled = 1,
	EOSDKFutureFinishResult__Failed = 2,
	EOSDKFutureFinishResult__EOSDKFutureFinishResult_MAX = 3
};


// Enum OSDKModule.EOSDKFutureStatus
enum class EOSDKFutureStatus : uint8_t
{
	EOSDKFutureStatus__Invalid     = 0,
	EOSDKFutureStatus__Pending     = 1,
	EOSDKFutureStatus__Ready       = 2,
	EOSDKFutureStatus__Cancelled   = 3,
	EOSDKFutureStatus__Failed      = 4,
	EOSDKFutureStatus__EOSDKFutureStatus_MAX = 5
};


// Enum OSDKModule.EOSDKCommunity
enum class EOSDKCommunity : uint8_t
{
	EOSDKCommunity__steam          = 0,
	EOSDKCommunity__live           = 1,
	EOSDKCommunity__psn            = 2,
	EOSDKCommunity__membership     = 3,
	EOSDKCommunity__oculus         = 4,
	EOSDKCommunity__facebook       = 5,
	EOSDKCommunity__web            = 6,
	EOSDKCommunity__feral          = 7,
	EOSDKCommunity__os             = 8,
	EOSDKCommunity__unittest       = 9,
	EOSDKCommunity__gamecenter     = 10,
	EOSDKCommunity__google         = 11,
	EOSDKCommunity__microsoft      = 12,
	EOSDKCommunity__corporate      = 13,
	EOSDKCommunity__amazon         = 14,
	EOSDKCommunity__noauth         = 15,
	EOSDKCommunity__unknown        = 16,
	EOSDKCommunity__EOSDKCommunity_MAX = 17
};


// Enum OSDKModule.EOSHTTPClientLoggingFlags
enum class EOSHTTPClientLoggingFlags : uint8_t
{
	EOSHTTPClientLoggingFlags__DISABLED = 0,
	EOSHTTPClientLoggingFlags__REQUEST = 1,
	EOSHTTPClientLoggingFlags__REQUEST_SOME_HEADERS = 2,
	EOSHTTPClientLoggingFlags__REQUEST_ALL_HEADERS = 3,
	EOSHTTPClientLoggingFlags__REQUEST_BODY = 4,
	EOSHTTPClientLoggingFlags__REQUEST_ANY = 5,
	EOSHTTPClientLoggingFlags__RESPONSE = 6,
	EOSHTTPClientLoggingFlags__RESPONSE_SOME_HEADERS = 7,
	EOSHTTPClientLoggingFlags__RESPONSE_ALL_HEADERS = 8,
	EOSHTTPClientLoggingFlags__RESPONSE_BODY = 9,
	EOSHTTPClientLoggingFlags__RESPONSE_ANY = 10,
	EOSHTTPClientLoggingFlags__DEFAULT = 11,
	EOSHTTPClientLoggingFlags__EOSHTTPClientLoggingFlags_MAX = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OSDKModule.OSDKUserId
// 0x0020
struct FOSDKUserId
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     Provider;                                                 // 0x0010(0x0010) (BlueprintVisi, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKUserInfo
// 0x0050
struct FOSDKUserInfo
{
	struct FOSDKUserId                                 UserId;                                                   // 0x0000(0x0020) (BlueprintVisi)
	struct FString                                     Gamertag;                                                 // 0x0020(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     Language;                                                 // 0x0030(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     Country;                                                  // 0x0040(0x0010) (BlueprintVisi, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKClientConfig
// 0x0050
struct FOSDKClientConfig
{
	struct FString                                     ProjectName;                                              // 0x0000(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     LoginUrl;                                                 // 0x0010(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     SignupURL;                                                // 0x0020(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     ConfigSandbox;                                            // 0x0030(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     UserSandbox;                                              // 0x0040(0x0010) (BlueprintVisi, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKServerInfo
// 0x0048
struct FOSDKServerInfo
{
	float                                              PingTime;                                                 // 0x0000(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeDifference;                                           // 0x0004(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HostName;                                                 // 0x0008(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Environment;                                              // 0x0018(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ServerVersion;                                            // 0x0028(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     APIVersion;                                               // 0x0038(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKProfileId
// 0x0028
struct FOSDKProfileId
{
	EOSDKCommunity                                     Community;                                                // 0x0000(0x0001) (BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     UserId;                                                   // 0x0008(0x0010) (BlueprintVisi, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (BlueprintVisi, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKHTTPClient
// 0x0001
struct FOSDKHTTPClient
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct OSDKModule.OSDKNetworkInfo
// 0x0020
struct FOSDKNetworkInfo
{
	struct FString                                     BaseURL;                                                  // 0x0000(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PublicIP;                                                 // 0x0010(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKSandboxInfo
// 0x0020
struct FOSDKSandboxInfo
{
	struct FString                                     User;                                                     // 0x0000(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Config;                                                   // 0x0010(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKGeolocationInfo
// 0x0048
struct FOSDKGeolocationInfo
{
	struct FString                                     Country;                                                  // 0x0000(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     City;                                                     // 0x0010(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0020(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	float                                              Latitude;                                                 // 0x0030(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Longitutde;                                               // 0x0034(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Timezone;                                                 // 0x0038(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKAuthenticationInfo
// 0x0040
struct FOSDKAuthenticationInfo
{
	struct FString                                     ProjectName;                                              // 0x0000(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoginUrl;                                                 // 0x0010(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     SignupURL;                                                // 0x0020(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TokenExpiration;                                          // 0x0030(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OSDKModule.OSDKClientInfo
// 0x00C8
struct FOSDKClientInfo
{
	struct FOSDKNetworkInfo                            Network;                                                  // 0x0000(0x0020) (BlueprintVisi, BlueprintReadOnly)
	struct FOSDKSandboxInfo                            Sandbox;                                                  // 0x0020(0x0020) (BlueprintVisi, BlueprintReadOnly)
	struct FOSDKGeolocationInfo                        Geolocation;                                              // 0x0040(0x0048) (BlueprintVisi, BlueprintReadOnly)
	struct FOSDKAuthenticationInfo                     Authentication;                                           // 0x0088(0x0040) (BlueprintVisi, BlueprintReadOnly)
};

// ScriptStruct OSDKModule.OSDKGameInfo
// 0x0040
struct FOSDKGameInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     version;                                                  // 0x0010(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BuildId;                                                  // 0x0020(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OsdkVersion;                                              // 0x0030(0x0010) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
