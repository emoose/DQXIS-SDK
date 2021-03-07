#pragma once

#include "../pch.h"

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OSDKModule.OSDKFutureObject.GetStatus
struct UOSDKFutureObject_GetStatus_Params
{
	EOSDKFutureStatus                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKFutureObject.Await
struct UOSDKFutureObject_Await_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EOSDKFutureFinishResult                            FinishResult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function OSDKModule.OSDK.StartGameSimulation
struct UOSDK_StartGameSimulation_Params
{
};

// Function OSDKModule.OSDK.PauseGameSimulation
struct UOSDK_PauseGameSimulation_Params
{
};

// Function OSDKModule.OSDK.IsNetworkAvailable
struct UOSDK_IsNetworkAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDK.GetSessionId
struct UOSDK_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OSDKModule.OSDK.GetHardwareName
struct UOSDK_GetHardwareName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OSDKModule.OSDK.CreateWebServiceClientWithUserInfo
struct UOSDK_CreateWebServiceClientWithUserInfo_Params
{
	struct FOSDKUserInfo                               UserInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FOSDKClientConfig                           ClientConfig;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UOSDKWebServiceClient*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDK.CreateWebServiceClientWithUserId
struct UOSDK_CreateWebServiceClientWithUserId_Params
{
	struct FOSDKUserId                                 UserId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FOSDKClientConfig                           ClientConfig;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UOSDKWebServiceClient*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDK.BeginNewGameSession
struct UOSDK_BeginNewGameSession_Params
{
	bool                                               bSimulationRunning;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OSDKModule.OSDKMembershipAccountClient.SetWebServiceClient
struct UOSDKMembershipAccountClient_SetWebServiceClient_Params
{
	class UOSDKWebServiceClient*                       WebServiceClient;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOSDKMembershipAccountClient*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKMetricsClient.SetWebServiceClient
struct UOSDKMetricsClient_SetWebServiceClient_Params
{
	class UOSDKWebServiceClient*                       WebServiceClient;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOSDKMetricsClient*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKPlayerItemsClient.SetWebServiceClient
struct UOSDKPlayerItemsClient_SetWebServiceClient_Params
{
	class UOSDKWebServiceClient*                       WebServiceClient;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOSDKPlayerItemsClient*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKPlayerStatsClient.SetWebServiceClient
struct UOSDKPlayerStatsClient_SetWebServiceClient_Params
{
	class UOSDKWebServiceClient*                       WebServiceClient;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UOSDKPlayerStatsClient*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.SetUserLanguage
struct UOSDKWebServiceClient_SetUserLanguage_Params
{
	struct FString                                     LanguageCode;                                             // (Parm, ZeroConstructor)
};

// Function OSDKModule.OSDKWebServiceClient.SetUserConsentsToSendingMetrics
struct UOSDKWebServiceClient_SetUserConsentsToSendingMetrics_Params
{
	bool                                               OptIn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EmitConsentMetric;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.SetDefaultHeader
struct UOSDKWebServiceClient_SetDefaultHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeaderValue;                                              // (Parm, ZeroConstructor)
};

// Function OSDKModule.OSDKWebServiceClient.ResetClient
struct UOSDKWebServiceClient_ResetClient_Params
{
};

// Function OSDKModule.OSDKWebServiceClient.ResetAllLocalStorages
struct UOSDKWebServiceClient_ResetAllLocalStorages_Params
{
};

// Function OSDKModule.OSDKWebServiceClient.IsAuthenticated
struct UOSDKWebServiceClient_IsAuthenticated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.GetUserInfo
struct UOSDKWebServiceClient_GetUserInfo_Params
{
	struct FOSDKUserInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetUserConsentsToSendingMetrics
struct UOSDKWebServiceClient_GetUserConsentsToSendingMetrics_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.GetStatsInfo
struct UOSDKWebServiceClient_GetStatsInfo_Params
{
	class UOSDKStatsInfo*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.GetServerInfo
struct UOSDKWebServiceClient_GetServerInfo_Params
{
	struct FOSDKServerInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetSecondaryProfileId
struct UOSDKWebServiceClient_GetSecondaryProfileId_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FOSDKProfileId                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetPrimaryProfileId
struct UOSDKWebServiceClient_GetPrimaryProfileId_Params
{
	struct FOSDKProfileId                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetHTTPClient
struct UOSDKWebServiceClient_GetHTTPClient_Params
{
	struct FOSDKHTTPClient                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.GetFeatureSettings
struct UOSDKWebServiceClient_GetFeatureSettings_Params
{
	struct FString                                     FeatureName;                                              // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               outSettings;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function OSDKModule.OSDKWebServiceClient.GetFeatureSetting
struct UOSDKWebServiceClient_GetFeatureSetting_Params
{
	struct FString                                     FeatureName;                                              // (Parm, ZeroConstructor)
	struct FString                                     SettingName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetFeatureNames
struct UOSDKWebServiceClient_GetFeatureNames_Params
{
	struct FString                                     FeatureName;                                              // (Parm, ZeroConstructor)
};

// Function OSDKModule.OSDKWebServiceClient.GetClientInfo
struct UOSDKWebServiceClient_GetClientInfo_Params
{
	struct FOSDKClientInfo                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OSDKModule.OSDKWebServiceClient.GetAndResetStatsInfo
struct UOSDKWebServiceClient_GetAndResetStatsInfo_Params
{
	class UOSDKStatsInfo*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OSDKModule.OSDKWebServiceClient.BPRefreshAuthentication
struct UOSDKWebServiceClient_BPRefreshAuthentication_Params
{
	class UOSDKFutureObject*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
