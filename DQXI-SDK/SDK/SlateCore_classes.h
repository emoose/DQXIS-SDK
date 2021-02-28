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

// Class SlateCore.FontBulkData
// 0x0098 (0x00D0 - 0x0038)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0038(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0038 - 0x0038)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0038 - 0x0038)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0038 - 0x0038)
class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0040 - 0x0038)
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                              // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0040 - 0x0038)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0038 - 0x0038)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
