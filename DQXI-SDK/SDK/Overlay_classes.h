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

// Class Overlay.Overlays
// 0x0000 (0x0038 - 0x0038)
class UOverlays : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}

};


// Class Overlay.BasicOverlays
// 0x0010 (0x0048 - 0x0038)
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}

};


// Class Overlay.LocalizedOverlays
// 0x0058 (0x0090 - 0x0038)
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                      // 0x0040(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
