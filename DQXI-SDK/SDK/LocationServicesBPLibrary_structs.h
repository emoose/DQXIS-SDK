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

// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers = 0,
	ELocationAccuracy__LA_OneKilometer = 1,
	ELocationAccuracy__LA_HundredMeters = 2,
	ELocationAccuracy__LA_TenMeters = 3,
	ELocationAccuracy__LA_Best     = 4,
	ELocationAccuracy__LA_Navigation = 5,
	ELocationAccuracy__LA_MAX      = 6
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// 0x0018
struct FLocationServicesData
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              Longitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              Latitude;                                                 // 0x0008(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalAccuracy;                                       // 0x000C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              VerticalAccuracy;                                         // 0x0010(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              Altitude;                                                 // 0x0014(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
