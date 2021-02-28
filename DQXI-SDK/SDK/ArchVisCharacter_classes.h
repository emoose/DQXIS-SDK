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

// Class ArchVisCharacter.ArchVisCharacter
// 0x0070 (0x0820 - 0x07B0)
class AArchVisCharacter : public ACharacter
{
public:
	struct FString                                     LookUpAxisName;                                           // 0x07B0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LookUpAtRateAxisName;                                     // 0x07C0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TurnAxisName;                                             // 0x07D0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TurnAtRateAxisName;                                       // 0x07E0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MoveForwardAxisName;                                      // 0x07F0(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     MoveRightAxisName;                                        // 0x0800(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              MouseSensitivityScale_Pitch;                              // 0x0810(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivityScale_Yaw;                                // 0x0814(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0818(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}

};


// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0050 (0x07C0 - 0x0770)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0770(0x0004) MISSED OFFSET
	struct FRotator                                    RotationalDeceleration;                                   // 0x0774(0x000C) (Edit, BlueprintVisi, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MaxRotationalVelocity;                                    // 0x0780(0x000C) (Edit, BlueprintVisi, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPitch;                                                 // 0x078C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0790(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingFriction;                                          // 0x0794(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingSpeed;                                             // 0x0798(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingAcceleration;                                      // 0x079C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x07A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
