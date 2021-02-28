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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0038 - 0x0038)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	void STATIC_SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsSpectatorScreenModeControllable();
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_IsHeadMountedDisplayConnected();
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	TEnumAsByte<EHMDWornState> STATIC_GetHMDWornState();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x0060 (0x0790 - 0x0730)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x0730(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0734(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x0738(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0739(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x073C(0x0001) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x53];                                      // 0x073D(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	bool IsTracked();
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0038 - 0x0038)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x01B8 - 0x0128)
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                           // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
