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

// Class OSDKModule.OSDKSettings
// 0x0060 (0x0098 - 0x0038)
class UOSDKSettings : public UObject
{
public:
	bool                                               bCreateOSDKOnInit;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableSteam;                                             // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNoSteamInEditorMode;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseProvidedLibcurl;                                      // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DefaultProjectName;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultLoginURL;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultSignUpURL;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultConfigSandbox;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultUserSandbox;                                       // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	EOSHTTPClientLoggingFlags                          OSHTTPClientLoggingFlags;                                 // 0x0090(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKSettings");
		return ptr;
	}

};


// Class OSDKModule.OSDKFutureObject
// 0x0008 (0x0040 - 0x0038)
class UOSDKFutureObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKFutureObject");
		return ptr;
	}


	EOSDKFutureStatus GetStatus();
	void Await(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EOSDKFutureFinishResult* FinishResult);
};


// Class OSDKModule.OSDK
// 0x0008 (0x0048 - 0x0040)
class UOSDK : public UOSDKFutureObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDK");
		return ptr;
	}


	void StartGameSimulation();
	void PauseGameSimulation();
	bool IsNetworkAvailable();
	struct FString GetSessionId();
	struct FString GetHardwareName();
	class UOSDKWebServiceClient* CreateWebServiceClientWithUserInfo(const struct FOSDKUserInfo& UserInfo, const struct FOSDKClientConfig& ClientConfig);
	class UOSDKWebServiceClient* CreateWebServiceClientWithUserId(const struct FOSDKUserId& UserId, const struct FOSDKClientConfig& ClientConfig);
	void BeginNewGameSession(bool bSimulationRunning);
};


// Class OSDKModule.OSDKMembershipAccountClient
// 0x0000 (0x0038 - 0x0038)
class UOSDKMembershipAccountClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKMembershipAccountClient");
		return ptr;
	}


	class UOSDKMembershipAccountClient* SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient);
};


// Class OSDKModule.OSDKMetricsClient
// 0x0000 (0x0038 - 0x0038)
class UOSDKMetricsClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKMetricsClient");
		return ptr;
	}


	class UOSDKMetricsClient* SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient);
};


// Class OSDKModule.OSDKPlayerItemsClient
// 0x0000 (0x0038 - 0x0038)
class UOSDKPlayerItemsClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKPlayerItemsClient");
		return ptr;
	}


	class UOSDKPlayerItemsClient* SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient);
};


// Class OSDKModule.OSDKPlayerStatsClient
// 0x0000 (0x0038 - 0x0038)
class UOSDKPlayerStatsClient : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKPlayerStatsClient");
		return ptr;
	}


	class UOSDKPlayerStatsClient* SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient);
};


// Class OSDKModule.OSDKStatsInfo
// 0x0048 (0x0080 - 0x0038)
class UOSDKStatsInfo : public UObject
{
public:
	int                                                CurrentCountOfQueuedOfRequests;                           // 0x0038(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCountOfActiveRequests;                             // 0x003C(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfRequests;                                          // 0x0040(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfResponseSuccesses;                                 // 0x0044(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfResponseFailures;                                  // 0x0048(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfSerializationMilliseconds;                           // 0x004C(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfRequestMilliseconds;                                 // 0x0050(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfResponseMilliseconds;                                // 0x0054(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfDeserializationMilliseconds;                         // 0x0058(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfSentBytes;                                           // 0x005C(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SumOfReceivedBytes;                                       // 0x0060(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCountOfQueuedMetrics;                              // 0x0064(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfMetrics;                                           // 0x0068(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfDroppedMetrics;                                    // 0x006C(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CountOfMetricFlushes;                                     // 0x0070(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FDateTime                                   LastMetricFlushTime;                                      // 0x0078(0x0008) (BlueprintVisi, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKStatsInfo");
		return ptr;
	}

};


// Class OSDKModule.OSDKWebServiceClient
// 0x0008 (0x0048 - 0x0040)
class UOSDKWebServiceClient : public UOSDKFutureObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OSDKModule.OSDKWebServiceClient");
		return ptr;
	}


	void SetUserLanguage(const struct FString& LanguageCode);
	void SetUserConsentsToSendingMetrics(bool OptIn, bool EmitConsentMetric);
	void SetDefaultHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	void ResetClient();
	void ResetAllLocalStorages();
	bool IsAuthenticated();
	struct FOSDKUserInfo GetUserInfo();
	bool GetUserConsentsToSendingMetrics();
	class UOSDKStatsInfo* GetStatsInfo();
	struct FOSDKServerInfo GetServerInfo();
	struct FOSDKProfileId GetSecondaryProfileId(const struct FString& Name);
	struct FOSDKProfileId GetPrimaryProfileId();
	struct FOSDKHTTPClient GetHTTPClient();
	void GetFeatureSettings(const struct FString& FeatureName, TMap<struct FString, struct FString>* outSettings);
	struct FString GetFeatureSetting(const struct FString& FeatureName, const struct FString& SettingName);
	void GetFeatureNames(const struct FString& FeatureName);
	struct FOSDKClientInfo GetClientInfo();
	class UOSDKStatsInfo* GetAndResetStatsInfo();
	class UOSDKFutureObject* BPRefreshAuthentication();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
