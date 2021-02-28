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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0038 - 0x0038)
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}


	bool STATIC_StopLocationServices();
	bool STATIC_StartLocationServices();
	bool STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
	bool STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	class ULocationServicesImpl* STATIC_GetLocationServicesImpl();
	struct FLocationServicesData STATIC_GetLastKnownLocation();
	bool STATIC_AreLocationServicesEnabled();
};


// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0048 - 0x0038)
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
