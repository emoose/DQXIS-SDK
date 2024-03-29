
#include "../pch.h"
#include <Windows.h>

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{

TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
bool UObject::AllowFunctionCalls = false;

UInputComponent::BindAction_Fn UInputComponent::BindAction_Ptr = nullptr;
FName::Ctor_Fn FName::Ctor_Ptr = nullptr;
FString::Printf__VA_Fn FString::Printf = nullptr;

FWeakObjectPtr::OperatorEquals_Fn FWeakObjectPtr::OperatorEquals = nullptr;

// TODO: operator|, operator|=, operator^...
// or we can just use https://github.com/grisumbras/enum-flags maybe
EInternalObjectFlags operator&(EInternalObjectFlags lhs, EInternalObjectFlags rhs)
{
	return static_cast<EInternalObjectFlags> (
		static_cast<std::underlying_type<EInternalObjectFlags>::type>(lhs) &
		static_cast<std::underlying_type<EInternalObjectFlags>::type>(rhs)
		);
}

//---------------------------------------------------------------------------
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
