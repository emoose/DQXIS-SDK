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

// Class AIModule.AIController
// 0x0090 (0x0490 - 0x0400)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0400(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x0438(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bLOSflag : 1;                                             // 0x0438(0x0001)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x0438(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0438(0x0001)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x0438(0x0001)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x0438(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBrainComponent*                             BrainComponent;                                           // 0x0448(0x0008) (BlueprintVisi, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x0458(0x0008) (BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        Blackboard;                                               // 0x0460(0x0008) (BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x0470(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                     // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnUnpossess(class APawn* UnpossessedPawn);
	void OnPossess(class APawn* PossessedPawn);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0078 - 0x0038)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0038 - 0x0038)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	class UNavigationPath* STATIC_GetCurrentPath(class AController* Controller);
	class UBlackboardComponent* STATIC_GetBlackboard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AIDataProvider
// 0x0000 (0x0038 - 0x0038)
class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0050 - 0x0038)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0060 - 0x0050)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInteger : 1;                                             // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}

};


// Class AIModule.AIHotSpotManager
// 0x0000 (0x0038 - 0x0038)
class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

};


// Class AIModule.AIPerceptionComponent
// 0x00D8 (0x0200 - 0x0128)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x0128(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DominantSense;                                            // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x0150(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0158(0x0080) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                      // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0038 - 0x0038)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x0140 - 0x0128)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x0128(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x0130(0x0010) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIPerceptionSystem
// 0x0108 (0x0140 - 0x0038)
class UAIPerceptionSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0090(0x0010) (ZeroConstructor)
	float                                              PerceptionAgingRate;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x00A4(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0038 - 0x0038)
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0048 - 0x0048)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0048 - 0x0048)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

};


// Class AIModule.AISense
// 0x00F8 (0x0130 - 0x0038)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0038(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	EAISenseNotifyType                                 NotifyType;                                               // 0x003C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0040(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0040(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0050(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0030 (0x0160 - 0x0130)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0130(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0138(0x0010) (BlueprintVisi, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0148(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0140 - 0x0130)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0130(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};


// Class AIModule.AISense_Hearing
// 0x0070 (0x01A0 - 0x0130)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0130(0x0010) (ZeroConstructor)
	float                                              SpeedOfSoundSq;                                           // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0144(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0140 - 0x0130)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0130(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00E0 (0x0210 - 0x0130)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0130(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x01E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x01E4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxTimeSlicePerTick;                                      // 0x01E8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x01F0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x01F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SightLimitQueryImportance;                                // 0x01FC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0140 - 0x0130)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0130(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0140 - 0x0130)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0130(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x00B8 - 0x00B8)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x0020 (0x0058 - 0x0038)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0038(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x003C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0040(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0041(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0060 - 0x0058)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0058(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0060 - 0x0058)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0058(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0070 - 0x0058)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0058(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              HearingRange;                                             // 0x0060(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoSHearingRange;                                          // 0x0064(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0068(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x006C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0058 - 0x0058)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0078 - 0x0058)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0058(0x0008) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0060(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0064(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0068(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x006C(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0070(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0058 - 0x0058)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0058 - 0x0058)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseEvent
// 0x0000 (0x0038 - 0x0038)
class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0068 - 0x0038)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0038(0x0030) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0068 - 0x0038)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0038(0x0030) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0038 - 0x0038)
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

};


// Class AIModule.AISystem
// 0x00B8 (0x0108 - 0x0050)
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0050(0x0008) (Edit, Config, GlobalConfig)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0058(0x0008) (Edit, Config, GlobalConfig)
	float                                              AcceptanceRadius;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x0064(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0068(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x006C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAcceptPartialPaths;                                      // 0x006D(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowStrafing;                                           // 0x006E(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableBTAITasks;                                         // 0x006F(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0070(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0071(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x0072(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x0090(0x0010) (ZeroConstructor, Transient)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.AITask
// 0x0008 (0x0080 - 0x0078)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0078(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

};


// Class AIModule.AITask_LockLogic
// 0x0000 (0x0080 - 0x0080)
class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}

};


// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0120 - 0x0080)
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                           // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAIMoveRequest                              MoveRequest;                                              // 0x00A0(0x0040)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};


// Class AIModule.AITask_RunEQS
// 0x00E0 (0x0160 - 0x0080)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0080(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}


	class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};


// Class AIModule.BehaviorTree
// 0x0038 (0x0070 - 0x0038)
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

};


// Class AIModule.BrainComponent
// 0x0060 (0x0188 - 0x0128)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAIController*                               AIOwner;                                                  // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0140(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic(const struct FString& Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0138 (0x02C0 - 0x0188)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0188(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x01A8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x108];                                     // 0x01B8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0060 - 0x0038)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0050(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0038 - 0x0038)
class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

};


// Class AIModule.BlackboardComponent
// 0x00F8 (0x0220 - 0x0128)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0138(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x0158(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0168(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};


// Class AIModule.BlackboardData
// 0x0020 (0x0060 - 0x0040)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0048(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0058(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0040 - 0x0038)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0048 - 0x0040)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0060 - 0x0040)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EnumName;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0058(0x0001) (Edit, DisableEditOnInstance, EditConst)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0058 - 0x0040)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnum*                                       EnumType;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0048 - 0x0040)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0050 - 0x0040)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0040 - 0x0040)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

};


// Class AIModule.BTNode
// 0x0030 (0x0068 - 0x0038)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0070 - 0x0068)
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

};


// Class AIModule.BTCompositeNode
// 0x0078 (0x00E0 - 0x0068)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UBTService*>                          Services;                                                 // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0088(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x00E0 - 0x00E0)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x00E0 - 0x00E0)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0000 (0x00E0 - 0x00E0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0078 - 0x0070)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0070(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x00A0 - 0x0078)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00B0 - 0x0078)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00A8(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x00A8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x00A8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00D8 - 0x0078)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0078(0x0028) (Edit)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x00A8(0x0020) (Edit)
	struct FString                                     CachedDescription;                                        // 0x00C8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00D0 - 0x0078)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0080(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x00A8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00D0 - 0x00A0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor)
	unsigned char                                      OperationType;                                            // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00D0 - 0x00D0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x0100 - 0x0078)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0080(0x0028) (Edit)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x00A8(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00D0(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0080 - 0x0078)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00D8 - 0x0078)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0078(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x00A0(0x0028) (Edit)
	unsigned char                                      bUseSelf : 1;                                             // 0x00C8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0078 - 0x0078)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00E0 - 0x00A0)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x00A8(0x0030) (Edit)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00DC(0x0001)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00DC(0x0001) (Edit)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x00A8 - 0x00A0)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00D8 - 0x0078)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0080(0x0028) (Edit)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00A8(0x0028) (Edit)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00D0(0x0001)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00D0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0088 - 0x0078)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInfiniteLoop;                                            // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0078 - 0x0078)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0088 - 0x0078)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0078(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivatesCooldown;                                       // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0086(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0080 - 0x0078)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0038 - 0x0038)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0088 - 0x0078)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0078(0x0008) (Edit)
	float                                              CooldownDuration;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTService
// 0x0010 (0x0080 - 0x0070)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0078(0x0001) (Edit)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x00A8 - 0x0080)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0080(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x00A8 - 0x0080)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00A0(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x00A0(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00B0 - 0x00A8)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

};


// Class AIModule.BTService_RunEQS
// 0x0088 (0x0130 - 0x00A8)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00A8(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}

};


// Class AIModule.BTTaskNode
// 0x0018 (0x0080 - 0x0068)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0030 (0x00B0 - 0x0080)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0090(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00A8(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0088 - 0x0080)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                 // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0088 - 0x0080)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x00A8 - 0x0080)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0080(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00C0 - 0x00A8)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00BC(0x0001)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00BC(0x0001) (Edit)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00BC(0x0001) (Edit)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00BC(0x0001) (Edit)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00BC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        // 0x00BC(0x0001) (Edit)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         // 0x00BC(0x0001) (Edit)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00BC(0x0001) (Edit, DisableEditOnTemplate, EditConst)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            // 0x00BD(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x00C8 - 0x00C0)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x00C0(0x0001)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x00C0(0x0001)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                         // 0x00C0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0080 - 0x0080)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0080 (0x0100 - 0x0080)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0088(0x0001) (Edit)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0088(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x00A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0088 - 0x0080)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0088 - 0x0080)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00B0 - 0x00A8)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0088 - 0x0080)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x00E8 (0x0190 - 0x00A8)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00C0(0x0010) (Edit, ZeroConstructor, EditConst)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00D8(0x0028) (Edit, EditConst)
	bool                                               bUseBBKey;                                                // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0108(0x0048) (Edit)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0150(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0090 - 0x0080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0080(0x0008) (Edit)
	bool                                               bAddToExistingDuration;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0088 - 0x0080)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00B0 - 0x0088)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0088(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0038 - 0x0038)
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

};


// Class AIModule.PathFollowingComponent
// 0x02B8 (0x03E0 - 0x0128)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0128(0x0128) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x178];                                     // 0x0268(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.CrowdFollowingComponent
// 0x0050 (0x0430 - 0x03E0)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x03E0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x03F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x03F8(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x03FC(0x0004) (Deprecated, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0400(0x0004) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0404(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.CrowdManager
// 0x00C8 (0x0100 - 0x0038)
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAgents;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxAgentRadius;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedAgents;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAvoidedWalls;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NavmeshCheckInterval;                                     // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOptimizationInterval;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SeparationDirClamp;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PathOffsetRadiusMultiplier;                               // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00 : 4;                                        // 0x0080(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x0080(0x0001) (Edit, Config)
	unsigned char                                      UnknownData01[0x7F];                                      // 0x0081(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0490 - 0x0490)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x0018 (0x0058 - 0x0040)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0098 - 0x0080)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0080(0x0008) (Edit)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0040 - 0x0038)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0040 - 0x0038)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0060 - 0x0040)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ItemType;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00D0 - 0x0060)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0068(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0098(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      SearchCenter;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0090 - 0x0060)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0060(0x0018) (Edit)
	class UClass*                                      Context;                                                  // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GeneratedItemType;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (0x0080 - 0x0060)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0060(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bAllowDifferentItemTypes : 1;                             // 0x0070(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bHasMatchingItemType : 1;                                 // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class UClass*                                      ForcedItemType;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0090 - 0x0060)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0060(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0160 - 0x0090)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      CenterActor;                                              // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0158(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0068 - 0x0060)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01B8 - 0x0090)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0120(0x0030) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               ArcDirection;                                             // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0170(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bUseSpiralPattern;                                        // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDefineArc : 1;                                           // 0x01B0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01F8 - 0x0090)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00F0(0x0030) (Edit, DisableEditOnInstance)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0128(0x0020) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0148(0x0030) (Edit, DisableEditOnInstance)
	float                                              AngleRadians;                                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0188(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0190(0x0030) (Edit)
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit)
	unsigned char                                      bDefineArc : 1;                                           // 0x01F0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00F8 - 0x0090)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      GenerateAround;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0160 - 0x00F8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      NavigationFilter;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0130(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0088 - 0x0038)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0040(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0044(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0068(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OptionIndex;                                              // 0x0070(0x0004) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                     // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0040 - 0x0038)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0040 - 0x0040)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0040 - 0x0040)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0040 - 0x0040)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0040 - 0x0040)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0040 - 0x0040)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0x0110 (0x0148 - 0x0038)
class UEnvQueryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0038(0x0078) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00C0(0x0010) (ZeroConstructor, Transient)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00E0(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0138(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x013C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	double                                             QueryCountWarningInterval;                                // 0x0140(0x0008) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0050 - 0x0038)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0040(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x0190 (0x01D0 - 0x0040)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0059(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x005A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0060(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0090(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00C0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00F0(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00F2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00F3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00F8(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0128(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0158(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0188(0x0030) (Edit, DisableEditOnInstance)
	bool                                               bDefineReferenceValue;                                    // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01B9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01C8(0x0001)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x01E0 - 0x01D0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class UClass*                                      DistanceTo;                                               // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0218 - 0x01D0)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01D0(0x0020) (Edit, DisableEditOnInstance)
	struct FEnvDirection                               LineB;                                                    // 0x01F0(0x0020) (Edit, DisableEditOnInstance)
	EEnvTestDot                                        TestMode;                                                 // 0x0210(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsoluteValue;                                           // 0x0211(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0212(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0240 - 0x01D0)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01D0(0x0048) (Edit)
	bool                                               bUpdatedToUseQuery;                                       // 0x0218(0x0001) (ZeroConstructor, IsPlainOldData)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0219(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x021A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0220(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (0x01F0 - 0x01D0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                              // 0x01D0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (0x0248 - 0x01D0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01E0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0210(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      FilterClass;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0278 - 0x0248)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0248(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x0200 - 0x01D0)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01D0(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01D0 - 0x01D0)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0298 - 0x01D0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01D0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x0200(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0230(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0260(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0038 - 0x0038)
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0040 (0x0770 - 0x0730)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0730(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0070 (0x0820 - 0x07B0)
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET
	class UEnvQuery*                                   QueryTemplate;                                            // 0x07B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x07C0(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x07D0(0x0010) (Edit, ZeroConstructor)
	float                                              TimeLimitPerStep;                                         // 0x07E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StepToDebugDraw;                                          // 0x07E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x07E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07E9(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x07EC(0x0001) (Edit)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x07EC(0x0001) (Edit)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x07EC(0x0001) (Edit)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x07EC(0x0001) (Edit)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x07EC(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x07F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2F];                                      // 0x07F1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0038 - 0x0038)
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

};


// Class AIModule.GridPathAIController
// 0x0000 (0x0490 - 0x0490)
class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x0410 - 0x03E0)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0058 - 0x0058)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}

};


// Class AIModule.NavLocalGridManager
// 0x0030 (0x0068 - 0x0038)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}


	bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.PawnAction
// 0x00A8 (0x00E0 - 0x0038)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnAction*                                 ParentAction;                                             // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrainComponent*                             BrainComp;                                                // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0060(0x0068) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x00C8(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x00C8(0x0001) (Edit, BlueprintVisi, DisableEditOnInstance)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x00C8(0x0001) (Edit, BlueprintVisi, DisableEditOnInstance)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x00C8(0x0001) (Edit, BlueprintVisi, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x17];                                      // 0x00C9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x00E0 - 0x00E0)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x0130 - 0x00E0)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x00E0(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // 0x00E8(0x000C) (Edit, BlueprintVisi, IsPlainOldData)
	float                                              AcceptableRadius;                                         // 0x00F4(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x00F8(0x0008) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x0100(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x0100(0x0001)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x0100(0x0001)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x0100(0x0001)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x0100(0x0001)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x0100(0x0001)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x0100(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0101(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x0100 - 0x00E0)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00F0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0030 (0x0110 - 0x00E0)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x00E0(0x0010) (ZeroConstructor)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00F0(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00F0 - 0x00E0)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x0160 - 0x0128)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x0128(0x0008) (BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x0130(0x0010) (ZeroConstructor)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x0140(0x0010) (ZeroConstructor)
	class UPawnAction*                                 CurrentAction;                                            // 0x0150(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x0170 - 0x0128)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x0128(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              LOSHearingThreshold;                                      // 0x012C(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SightRadius;                                              // 0x0130(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	float                                              SensingInterval;                                          // 0x0134(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaxSoundAge;                                       // 0x0138(0x0004) (Edit, BlueprintVisi, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x013C(0x0001) (Edit, BlueprintVisi, BlueprintReadOnly)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x013C(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bSeePawns : 1;                                            // 0x013C(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      bHearNoises : 1;                                          // 0x013C(0x0001) (Edit, BlueprintVisi)
	unsigned char                                      UnknownData00[0xB];                                       // 0x013D(0x000B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeePawn;                                                // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHearNoise;                                              // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              PeripheralVisionAngle;                                    // 0x0168(0x0004) (Edit, BlueprintVisi, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0038 - 0x0038)
class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
