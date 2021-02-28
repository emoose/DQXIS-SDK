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

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (0x0058 - 0x0038)
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return ptr;
	}


	bool Mount(int PakOrder, const struct FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};


// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (0x0098 - 0x0058)
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0058(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return ptr;
	}


	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};


// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (0x0038 - 0x0038)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return ptr;
	}


	void STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	bool STATIC_HasActiveWiFiConnection();
	TArray<struct FString> STATIC_GetSupportedPlatformNames();
	class UMobileInstalledContent* STATIC_GetInstalledContent(const struct FString& InstallDirectory);
	struct FString STATIC_GetActiveDeviceProfileName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
