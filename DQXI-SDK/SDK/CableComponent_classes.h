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

// Class CableComponent.CableComponent
// 0x0080 (0x07E0 - 0x0760)
class UCableComponent : public UMeshComponent
{
public:
	bool                                               bAttachStart;                                             // 0x0760(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachEnd;                                               // 0x0761(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	struct FComponentReference                         AttachEndTo;                                              // 0x0768(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x0780(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0788(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              CableLength;                                              // 0x0794(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x0798(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x079C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x07A0(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x07A4(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x07A5(0x0001) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07A6(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x07A8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x07AC(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x07B8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x07BC(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x07C0(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x07C4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              RepeatLength;                                             // 0x07C8(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x07CC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


// Class CableComponent.CableActor
// 0x0008 (0x03A0 - 0x0398)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0398(0x0008) (Edit, BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
