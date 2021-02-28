
#include "../SDK.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OSDKModule.OSDKFutureObject.GetStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EOSDKFutureStatus              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EOSDKFutureStatus UOSDKFutureObject::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKFutureObject.GetStatus");

	UOSDKFutureObject_GetStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKFutureObject.Await
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EOSDKFutureFinishResult        FinishResult                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UOSDKFutureObject::Await(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EOSDKFutureFinishResult* FinishResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKFutureObject.Await");

	UOSDKFutureObject_Await_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FinishResult != nullptr)
		*FinishResult = params.FinishResult;
}


// Function OSDKModule.OSDK.StartGameSimulation
// (Final, Native, Public, BlueprintCallable)

void UOSDK::StartGameSimulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.StartGameSimulation");

	UOSDK_StartGameSimulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDK.PauseGameSimulation
// (Final, Native, Public, BlueprintCallable)

void UOSDK::PauseGameSimulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.PauseGameSimulation");

	UOSDK_PauseGameSimulation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDK.IsNetworkAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOSDK::IsNetworkAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.IsNetworkAvailable");

	UOSDK_IsNetworkAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDK.GetSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOSDK::GetSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.GetSessionId");

	UOSDK_GetSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDK.GetHardwareName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOSDK::GetHardwareName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.GetHardwareName");

	UOSDK_GetHardwareName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDK.CreateWebServiceClientWithUserInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOSDKUserInfo           UserInfo                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FOSDKClientConfig       ClientConfig                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UOSDKWebServiceClient*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserInfo(const struct FOSDKUserInfo& UserInfo, const struct FOSDKClientConfig& ClientConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.CreateWebServiceClientWithUserInfo");

	UOSDK_CreateWebServiceClientWithUserInfo_Params params;
	params.UserInfo = UserInfo;
	params.ClientConfig = ClientConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDK.CreateWebServiceClientWithUserId
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOSDKUserId             UserId                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FOSDKClientConfig       ClientConfig                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UOSDKWebServiceClient*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKWebServiceClient* UOSDK::CreateWebServiceClientWithUserId(const struct FOSDKUserId& UserId, const struct FOSDKClientConfig& ClientConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.CreateWebServiceClientWithUserId");

	UOSDK_CreateWebServiceClientWithUserId_Params params;
	params.UserId = UserId;
	params.ClientConfig = ClientConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDK.BeginNewGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSimulationRunning             (Parm, ZeroConstructor, IsPlainOldData)

void UOSDK::BeginNewGameSession(bool bSimulationRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDK.BeginNewGameSession");

	UOSDK_BeginNewGameSession_Params params;
	params.bSimulationRunning = bSimulationRunning;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKMembershipAccountClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*   WebServiceClient               (Parm, ZeroConstructor, IsPlainOldData)
// class UOSDKMembershipAccountClient* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKMembershipAccountClient* UOSDKMembershipAccountClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKMembershipAccountClient.SetWebServiceClient");

	UOSDKMembershipAccountClient_SetWebServiceClient_Params params;
	params.WebServiceClient = WebServiceClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKMetricsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*   WebServiceClient               (Parm, ZeroConstructor, IsPlainOldData)
// class UOSDKMetricsClient*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKMetricsClient* UOSDKMetricsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKMetricsClient.SetWebServiceClient");

	UOSDKMetricsClient_SetWebServiceClient_Params params;
	params.WebServiceClient = WebServiceClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKPlayerItemsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*   WebServiceClient               (Parm, ZeroConstructor, IsPlainOldData)
// class UOSDKPlayerItemsClient*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKPlayerItemsClient* UOSDKPlayerItemsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKPlayerItemsClient.SetWebServiceClient");

	UOSDKPlayerItemsClient_SetWebServiceClient_Params params;
	params.WebServiceClient = WebServiceClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKPlayerStatsClient.SetWebServiceClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKWebServiceClient*   WebServiceClient               (Parm, ZeroConstructor, IsPlainOldData)
// class UOSDKPlayerStatsClient*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKPlayerStatsClient* UOSDKPlayerStatsClient::SetWebServiceClient(class UOSDKWebServiceClient* WebServiceClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKPlayerStatsClient.SetWebServiceClient");

	UOSDKPlayerStatsClient_SetWebServiceClient_Params params;
	params.WebServiceClient = WebServiceClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.SetUserLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LanguageCode                   (Parm, ZeroConstructor)

void UOSDKWebServiceClient::SetUserLanguage(const struct FString& LanguageCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.SetUserLanguage");

	UOSDKWebServiceClient_SetUserLanguage_Params params;
	params.LanguageCode = LanguageCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.SetUserConsentsToSendingMetrics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           OptIn                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EmitConsentMetric              (Parm, ZeroConstructor, IsPlainOldData)

void UOSDKWebServiceClient::SetUserConsentsToSendingMetrics(bool OptIn, bool EmitConsentMetric)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.SetUserConsentsToSendingMetrics");

	UOSDKWebServiceClient_SetUserConsentsToSendingMetrics_Params params;
	params.OptIn = OptIn;
	params.EmitConsentMetric = EmitConsentMetric;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.SetDefaultHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeaderName                     (Parm, ZeroConstructor)
// struct FString                 HeaderValue                    (Parm, ZeroConstructor)

void UOSDKWebServiceClient::SetDefaultHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.SetDefaultHeader");

	UOSDKWebServiceClient_SetDefaultHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.ResetClient
// (Final, Native, Public, BlueprintCallable)

void UOSDKWebServiceClient::ResetClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.ResetClient");

	UOSDKWebServiceClient_ResetClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.ResetAllLocalStorages
// (Final, Native, Public, BlueprintCallable)

void UOSDKWebServiceClient::ResetAllLocalStorages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.ResetAllLocalStorages");

	UOSDKWebServiceClient_ResetAllLocalStorages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.IsAuthenticated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOSDKWebServiceClient::IsAuthenticated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.IsAuthenticated");

	UOSDKWebServiceClient_IsAuthenticated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetUserInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKUserInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOSDKUserInfo UOSDKWebServiceClient::GetUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetUserInfo");

	UOSDKWebServiceClient_GetUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetUserConsentsToSendingMetrics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOSDKWebServiceClient::GetUserConsentsToSendingMetrics()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetUserConsentsToSendingMetrics");

	UOSDKWebServiceClient_GetUserConsentsToSendingMetrics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetStatsInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOSDKStatsInfo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKStatsInfo* UOSDKWebServiceClient::GetStatsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetStatsInfo");

	UOSDKWebServiceClient_GetStatsInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetServerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKServerInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOSDKServerInfo UOSDKWebServiceClient::GetServerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetServerInfo");

	UOSDKWebServiceClient_GetServerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetSecondaryProfileId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FOSDKProfileId          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOSDKProfileId UOSDKWebServiceClient::GetSecondaryProfileId(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetSecondaryProfileId");

	UOSDKWebServiceClient_GetSecondaryProfileId_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetPrimaryProfileId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOSDKProfileId          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOSDKProfileId UOSDKWebServiceClient::GetPrimaryProfileId()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetPrimaryProfileId");

	UOSDKWebServiceClient_GetPrimaryProfileId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetHTTPClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOSDKHTTPClient         ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FOSDKHTTPClient UOSDKWebServiceClient::GetHTTPClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetHTTPClient");

	UOSDKWebServiceClient_GetHTTPClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FeatureName                    (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> outSettings                    (Parm, OutParm, ZeroConstructor)

void UOSDKWebServiceClient::GetFeatureSettings(const struct FString& FeatureName, TMap<struct FString, struct FString>* outSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetFeatureSettings");

	UOSDKWebServiceClient_GetFeatureSettings_Params params;
	params.FeatureName = FeatureName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outSettings != nullptr)
		*outSettings = params.outSettings;
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FeatureName                    (Parm, ZeroConstructor)
// struct FString                 SettingName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOSDKWebServiceClient::GetFeatureSetting(const struct FString& FeatureName, const struct FString& SettingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetFeatureSetting");

	UOSDKWebServiceClient_GetFeatureSetting_Params params;
	params.FeatureName = FeatureName;
	params.SettingName = SettingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetFeatureNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FeatureName                    (Parm, ZeroConstructor)

void UOSDKWebServiceClient::GetFeatureNames(const struct FString& FeatureName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetFeatureNames");

	UOSDKWebServiceClient_GetFeatureNames_Params params;
	params.FeatureName = FeatureName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OSDKModule.OSDKWebServiceClient.GetClientInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOSDKClientInfo         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOSDKClientInfo UOSDKWebServiceClient::GetClientInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetClientInfo");

	UOSDKWebServiceClient_GetClientInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.GetAndResetStatsInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKStatsInfo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKStatsInfo* UOSDKWebServiceClient::GetAndResetStatsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.GetAndResetStatsInfo");

	UOSDKWebServiceClient_GetAndResetStatsInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OSDKModule.OSDKWebServiceClient.BPRefreshAuthentication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOSDKFutureObject*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOSDKFutureObject* UOSDKWebServiceClient::BPRefreshAuthentication()
{
	static auto fn = UObject::FindObject<UFunction>("Function OSDKModule.OSDKWebServiceClient.BPRefreshAuthentication");

	UOSDKWebServiceClient_BPRefreshAuthentication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
