#pragma once

// Name: dbd, Version: 502


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DBDBots.AIDisplayDebugInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIDisplayDebugInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AIDisplayDebugInterface");
		return ptr;
	}



};

// Class DBDBots.AIGoalGeneratorInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIGoalGeneratorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AIGoalGeneratorInterface");
		return ptr;
	}



};

// Class DBDBots.AIIntentionValidatorInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIIntentionValidatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AIIntentionValidatorInterface");
		return ptr;
	}



};

// Class DBDBots.AIPathValidatorInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIPathValidatorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AIPathValidatorInterface");
		return ptr;
	}



};

// Class DBDBots.AISkill
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UAISkill : public UObject
{
public:
	struct FGameplayTagContainer                       RunContexts;                                               // 0x0030(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               StopIfPausedByNavLinkProxy;                                // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFLT[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RunTimeLimit;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunCooldownTime;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RunCooldownTimeDeviation;                                  // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SkillNavigationFilterClass;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAISenseConfig*>                      SkillSenseConfigs;                                         // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               DynamicSubtree;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VEGZ[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             _pausedByObjects;                                          // 0x0098(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4BMT[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDAIBTController*                          _aiControllerOwner;                                        // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill");
		return ptr;
	}



};

// Class DBDBots.AISkill_Diversion
// 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
class UAISkill_Diversion : public UAISkill
{
public:
	struct FName                                       perkID;                                                    // 0x00C0(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5G1K[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DiversionFromGoalClasses;                                  // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAIDifficultyLevel                  ThrowOnInteractablesAtDifficultyLevel;                     // 0x00E0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P03U[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxThrowOnInteractableHalfAngle;                           // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMoveToTargetDistance;                                   // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     NavMeshFindLocationExtents;                                // 0x00EC(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlanInterval;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RA2K[0x14];                                    // 0x00FC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Diversion");
		return ptr;
	}



};

// Class DBDBots.AISkill_Find
// 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
class UAISkill_Find : public UAISkill
{
public:
	class UClass*                                      FindClass;                                                 // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameplayTag                                BlackboardWishListTag;                                     // 0x00C8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchInterval;                                            // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MustBeSeen;                                                // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q35O[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             _currentWishedObjects;                                     // 0x00E0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NFUR[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Find");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class UAISkill_FindInteractable : public UAISkill_Find
{
public:
	struct FString                                     RequiredInteractionId;                                     // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EInputInteractionType               RequiredInteractionInputType;                              // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INIE[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindCollectable
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UAISkill_FindCollectable : public UAISkill_FindInteractable
{
public:
	int                                                CollectUnderItemCount;                                     // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollectOverItemChargeRatio;                                // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindCollectable");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindCollectable_Camper
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindCollectable_Camper");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindCollectable_Hatchet
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UAISkill_FindCollectable_Hatchet : public UAISkill_FindCollectable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindCollectable_Hatchet");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindCollectable_Searchable
// 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
class UAISkill_FindCollectable_Searchable : public UAISkill_FindCollectable
{
public:
	float                                              SearchIntervalAfterOpenSearchable;                         // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpenSearchableRelevancyDuration;                           // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTAT[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USearchable*                                 _relevantSearchable;                                       // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindCollectable_Searchable");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindCollectable_Trap
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UAISkill_FindCollectable_Trap : public UAISkill_FindCollectable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindCollectable_Trap");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable_SolveRBT
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UAISkill_FindInteractable_SolveRBT : public UAISkill_FindInteractable
{
public:
	struct FAITunableParameter                         UrgencyGoalWeight;                                         // 0x0118(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable_SolveRBT");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable_SolveSickness
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable
{
public:
	struct FAITunableParameter                         UrgencyGoalWeight;                                         // 0x0118(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable_SolveSickness");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable_StatusEffect
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UAISkill_FindInteractable_StatusEffect : public UAISkill_FindInteractable
{
public:
	struct FgameplayTag                                RequiredPerkFlag;                                          // 0x0118(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InvertCondition;                                           // 0x0124(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_50S3[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable_StatusEffect");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable_StatusEffect_Plague
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UAISkill_FindInteractable_StatusEffect_Plague : public UAISkill_FindInteractable_StatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable_StatusEffect_Plague");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindInteractable_Waker
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UAISkill_FindInteractable_Waker : public UAISkill_FindInteractable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindInteractable_Waker");
		return ptr;
	}



};

// Class DBDBots.AISkill_FindOrb
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAISkill_FindOrb : public UAISkill_Find
{
public:
	unsigned char                                      UnknownData_NDTE[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_FindOrb");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction
// 0x00B0 (FullSize[0x0170] - InheritedSize[0x00C0])
class UAISkill_Interaction : public UAISkill
{
public:
	DeadByDaylight_EPawnInputPressTypes                InputType;                                                 // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EInteractionSkillInputModes                InputMode;                                                 // 0x00C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EPawnInputPressTypes                CancelInputType;                                           // 0x00C2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EInteractionCancelInputModes               CancelInputMode;                                           // 0x00C3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoLockInput;                                             // 0x00C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5WA[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIRoll                                     StartRoll;                                                 // 0x00C8(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZIN5[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StartInteractionID;                                        // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StopInteractionID;                                         // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHoldInputTime;                                          // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoReleaseHoldInputWhenCharged;                           // 0x0114(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49PA[0x5B];                                    // 0x0115(0x005B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_AttachRBT
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_AttachRBT : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_AttachRBT");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_ForThePeople
// 0x0018 (FullSize[0x0188] - InheritedSize[0x0170])
class UAISkill_Interaction_ForThePeople : public UAISkill_Interaction
{
public:
	unsigned char                                      UnknownData_0367[0x8];                                     // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BlockInteractionId;                                        // 0x0178(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_ForThePeople");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_Kill
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_Kill : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_Kill");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_OrbAbsorb
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_OrbAbsorb : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_OrbAbsorb");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_Reel
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_Reel : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_Reel");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_ReloadClown
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_ReloadClown : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_ReloadClown");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_SendToDeathBed
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_SendToDeathBed : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_SendToDeathBed");
		return ptr;
	}



};

// Class DBDBots.AISkill_Interaction_StaticBlast
// 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
class UAISkill_Interaction_StaticBlast : public UAISkill_Interaction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Interaction_StaticBlast");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionSetTrap
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UAISkill_InteractionSetTrap : public UAISkill_Interaction
{
public:
	class UClass*                                      TrapClass;                                                 // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistanceFromPointOfInterest;                            // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistanceFromAnotherSetTrap;                             // 0x017C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionSetTrap");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionSetTrap_Demogorgon
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UAISkill_InteractionSetTrap_Demogorgon : public UAISkill_InteractionSetTrap
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionSetTrap_Demogorgon");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionSetTrap_DreamPallet
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UAISkill_InteractionSetTrap_DreamPallet : public UAISkill_InteractionSetTrap
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionSetTrap_DreamPallet");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionSetTrap_DreamSnare
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UAISkill_InteractionSetTrap_DreamSnare : public UAISkill_InteractionSetTrap
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionSetTrap_DreamSnare");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionSetTrap_Phantom
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UAISkill_InteractionSetTrap_Phantom : public UAISkill_InteractionSetTrap
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionSetTrap_Phantom");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget
// 0x00B0 (FullSize[0x0220] - InheritedSize[0x0170])
class UAISkill_InteractionTarget : public UAISkill_Interaction
{
public:
	DBDBots_EInteractionTargetRequirements             TargetRequirement;                                         // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoSwapBestStimulusWithBestTarget;                        // 0x0171(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTXD[0x2];                                     // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartMinRange;                                             // 0x0174(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartMaxRange;                                             // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopMinRange;                                              // 0x017C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopMaxRange;                                              // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartMaxHalfAngle;                                         // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopMaxHalfAngle;                                          // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMaxHalfAngle2D;                                          // 0x018C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TestMaxHalfAngleOnPath;                                    // 0x018D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0Z0[0x2];                                     // 0x018E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MaxAngleFilterClass;                                       // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EInteractionTargetInSightModes             InSightMode;                                               // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9R5P[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OutOfSightModeDelay;                                       // 0x019C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMoveAwayTooFastStopDelay;                            // 0x01A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMoveAwayTooFastCooldown;                             // 0x01A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysStrafeAroundTarget;                                  // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4Z2[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIDetectedStimulus>                 _unfilteredTargets;                                        // 0x01B0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAIDetectedStimulus>                 _filteredTargets;                                          // 0x01C0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class Uactor*, struct FTargetMoveAwayToFastInfo> _targetsMoveAwayTooFastInfo;                               // 0x01D0(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Aim
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Aim : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Aim");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_AmbushAttack
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_AmbushAttack : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_AmbushAttack");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_AmbushMode
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_AmbushMode : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_AmbushMode");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Cloak
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Cloak : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Cloak");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Dash
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Dash : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Dash");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashAttack
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_DashAttack : public UAISkill_InteractionTarget_Dash
{
public:
	float                                              DashAttackUnderMaxRange;                                   // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DashAttackUnderMaxHalfAngle;                               // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EAttackType                         ExpectedAttackType;                                        // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IHVH[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashAttack");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UAISkill_InteractionTarget_DashAttack_Cannibal : public UAISkill_InteractionTarget_DashAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UAISkill_InteractionTarget_DashAttack_Chainsaw : public UAISkill_InteractionTarget_DashAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UAISkill_InteractionTarget_DashAttack_Demogorgon : public UAISkill_InteractionTarget_DashAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashHillbilly
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_DashHillbilly : public UAISkill_InteractionTarget_Dash
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashHillbilly");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DashOni
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_DashOni : public UAISkill_InteractionTarget_Dash
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DashOni");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DeadHard
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_DeadHard : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DeadHard");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_DemonMode
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_DemonMode : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_DemonMode");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Fire
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Fire : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Fire");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Frenzy
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Frenzy : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Frenzy");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_LungeAttack
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_LungeAttack : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_LungeAttack");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_PhaseWalk
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_PhaseWalk : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_PhaseWalk");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_ReloadDeathSlinger : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_ShockTherapy
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_ShockTherapy : public UAISkill_InteractionTarget
{
public:
	float                                              TargetToEvadePointMaxDistance;                             // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CastShockTimeBuffer;                                       // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_ShockTherapy");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Stalk
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Stalk : public UAISkill_InteractionTarget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Stalk");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_StalkGhost
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_StalkGhost : public UAISkill_InteractionTarget_Stalk
{
public:
	float                                              CautiousModeUnderTargetRange;                              // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CautiousModeSpeedFactor;                                   // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackFromCautiousDelay;                                     // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HE2I[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_StalkGhost");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_StalkShape
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_StalkShape : public UAISkill_InteractionTarget_Stalk
{
public:
	int                                                StalkRangeLimitedAtEvilTier;                               // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStalkRangeWhenLimitedByEvilTier;                        // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_StalkShape");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_StealthGhost
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_StealthGhost : public UAISkill_InteractionTarget
{
public:
	float                                              CrouchSwapDelay;                                           // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K7NY[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_StealthGhost");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_Throw
// 0x0078 (FullSize[0x0298] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_Throw : public UAISkill_InteractionTarget
{
public:
	DBDBots_EAIThrowPredictionModes                    ThrowPredictionMode;                                       // 0x0220(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K01M[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxAddPitchAngle;                                          // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EAIThrowProjectileModes                    ThrowProjectileMode;                                       // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OVKB[0x3];                                     // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         HoldInputTimeRandDeviation;                                // 0x022C(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         PitchAngleRandDeviation;                                   // 0x023C(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CU0W[0x4C];                                    // 0x024C(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_Throw");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_ThrowClown
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UAISkill_InteractionTarget_ThrowClown : public UAISkill_InteractionTarget_Throw
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_ThrowClown");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_ThrowHatchet
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UAISkill_InteractionTarget_ThrowHatchet : public UAISkill_InteractionTarget_Throw
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_ThrowHatchet");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_ThrowPlague
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UAISkill_InteractionTarget_ThrowPlague : public UAISkill_InteractionTarget_Throw
{
public:
	struct FgameplayTag                                ProjectileDamageSickTargetTag;                             // 0x0298(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ELAP[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_ThrowPlague");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_TormentAttack
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_TormentAttack : public UAISkill_InteractionTarget
{
public:
	int                                                AdvancedAtNbDetectedTargets;                               // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRoll                                     AdvancedStartRoll;                                         // 0x0224(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDXV[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_TormentAttack");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTarget_TormentMode
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class UAISkill_InteractionTarget_TormentMode : public UAISkill_InteractionTarget
{
public:
	float                                              ChasedTargetToEvadePointMaxDistance;                       // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTormentInPatrolAboveChargeRatio;                      // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTormentInChaseAboveChargeRatio;                       // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3K3N[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTarget_TormentMode");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTeleport
// 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
class UAISkill_InteractionTeleport : public UAISkill_Interaction
{
public:
	float                                              BlockTeleportWhenPathGoalUnderRange;                       // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WL3[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTeleport");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTeleportEthereal
// 0x0050 (FullSize[0x01C8] - InheritedSize[0x0178])
class UAISkill_InteractionTeleportEthereal : public UAISkill_InteractionTeleport
{
public:
	float                                              TeleportPlanInterval;                                      // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTeleportAlignHalfAngle;                                 // 0x017C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbortNotWorkingTeleportDelay;                              // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbortAddRunCooldownPenaltyTime;                            // 0x0184(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1NAQ[0x18];                                    // 0x0188(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _onStimulusInstigator;                                     // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UNTS[0x20];                                    // 0x01A8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTeleportEthereal");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Blink
// 0x0010 (FullSize[0x01D8] - InheritedSize[0x01C8])
class UAISkill_InteractionTeleportEthereal_Blink : public UAISkill_InteractionTeleportEthereal
{
public:
	float                                              StartBlinkAtWarpLocationRange;                             // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValidateBlinkWarpRange;                                    // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlinkAboveSavedPathLength;                                 // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlinkIfTargetWillBeInRange;                                // 0x01D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTeleportEthereal_Blink");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon
// 0x0018 (FullSize[0x01E0] - InheritedSize[0x01C8])
class UAISkill_InteractionTeleportEthereal_Demogorgon : public UAISkill_InteractionTeleportEthereal
{
public:
	float                                              MaxRangeFromFirstPortal;                                   // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYI6[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDemogorgonPortal*                           _firstPortal;                                              // 0x01D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemogorgonPortal*                           _secondPortal;                                             // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionTeleportEthereal_Nightmare
// 0x0010 (FullSize[0x01D8] - InheritedSize[0x01C8])
class UAISkill_InteractionTeleportEthereal_Nightmare : public UAISkill_InteractionTeleportEthereal
{
public:
	float                                              TeleportIfPathLengthSavedAboveRange;                       // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_44HM[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _toGenerator;                                              // 0x01D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionTeleportEthereal_Nightmare");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionUseItem
// 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
class UAISkill_InteractionUseItem : public UAISkill_Interaction
{
public:
	DBDSharedTypes_ELoadoutItemType                    itemType;                                                  // 0x0170(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NX2V[0x3];                                     // 0x0170(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_AWH6[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionUseItem");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionUseItem_Firecracker
// 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
class UAISkill_InteractionUseItem_Firecracker : public UAISkill_InteractionUseItem
{
public:
	struct FAITunableParameter                         StartMaxRange;                                             // 0x0178(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetFaceMeMaxAngle;                                      // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKKL[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionUseItem_Firecracker");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionUseItem_Flashlight
// 0x0068 (FullSize[0x01E0] - InheritedSize[0x0178])
class UAISkill_InteractionUseItem_Flashlight : public UAISkill_InteractionUseItem
{
public:
	struct FAIRoll                                     VulnerableTargetStartRoll;                                 // 0x0178(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetFaceMeMaxAngle;                                      // 0x019C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      _targetActor;                                              // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MFZG[0x38];                                    // 0x01A8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionUseItem_Flashlight");
		return ptr;
	}



};

// Class DBDBots.AISkill_InteractionUseItem_Map
// 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
class UAISkill_InteractionUseItem_Map : public UAISkill_InteractionUseItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_InteractionUseItem_Map");
		return ptr;
	}



};

// Class DBDBots.AISkill_SkillCheck
// 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
class UAISkill_SkillCheck : public UAISkill
{
public:
	struct FAIRoll                                     RegularZoneRoll;                                           // 0x00C0(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIRoll                                     BonusZoneRoll;                                             // 0x00E4(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_759K[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_SkillCheck");
		return ptr;
	}



};

// Class DBDBots.AISkill_Strafe
// 0x0068 (FullSize[0x0128] - InheritedSize[0x00C0])
class UAISkill_Strafe : public UAISkill
{
public:
	float                                              StartMaxRange;                                             // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopMaxRange;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IgnoreUnderNavLinkStartRange;                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PauseStrafeOnAnimation;                                    // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HVL[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         StrafeHoldInterval;                                        // 0x00D0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         StrafeHoldDeviation;                                       // 0x00E0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         StrafePauseInterval;                                       // 0x00F0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         StrafePauseDeviation;                                      // 0x0100(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L51E[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Strafe");
		return ptr;
	}



};

// Class DBDBots.AISkill_StrafeChained
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UAISkill_StrafeChained : public UAISkill_Strafe
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_StrafeChained");
		return ptr;
	}



};

// Class DBDBots.AISkill_StrafeDodge
// 0x0028 (FullSize[0x0150] - InheritedSize[0x0128])
class UAISkill_StrafeDodge : public UAISkill_Strafe
{
public:
	struct FAIRoll                                     StartRoll;                                                 // 0x0128(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLPI[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_StrafeDodge");
		return ptr;
	}



};

// Class DBDBots.AISkill_ThroughTorment
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UAISkill_ThroughTorment : public UAISkill
{
public:
	DeadByDaylight_EAITerrorLevel                      ToleratedTerrorPressure;                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3S5Z[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_ThroughTorment");
		return ptr;
	}



};

// Class DBDBots.AISkill_Wiggle
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UAISkill_Wiggle : public UAISkill_SkillCheck
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.AISkill_Wiggle");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_TickableBase
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTDecorator_TickableBase : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_TickableBase");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_CanRunSkill
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTDecorator_CanRunSkill : public UBTDecorator_TickableBase
{
public:
	struct FgameplayTag                                Context;                                                   // 0x0070(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I54L[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_CanRunSkill");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_ExtCompareBBEntries
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UBTDecorator_ExtCompareBBEntries : public UBTDecorator_CompareBBEntries
{
public:
	float                                              tolerance;                                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUH0[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_ExtCompareBBEntries");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_ExtConeCheck
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UBTDecorator_ExtConeCheck : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBConeOrigin;                                              // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBConeDirection;                                           // 0x00A0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBWith;                                                    // 0x00D0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         ConeHalfAngle;                                             // 0x0100(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_ExtConeCheck");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_ExtIsAtLocation
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UBTDecorator_ExtIsAtLocation : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBLoc;                                                     // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         AcceptableRadius;                                          // 0x00A0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_ExtIsAtLocation");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_ExtIsBBEntryOfClass
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UBTDecorator_ExtIsBBEntryOfClass : public UBTDecorator_IsBBEntryOfClass
{
public:
	bool                                               InvertConditition;                                         // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWMK[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_ExtIsBBEntryOfClass");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_ExtTimeLimit
// 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
class UBTDecorator_ExtTimeLimit : public UBTDecorator_TimeLimit
{
public:
	unsigned char                                      UnknownData_QLFT[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         MaxTimeLimit;                                              // 0x0080(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBFilterKey;                                               // 0x0090(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           FilterOperation;                                           // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UIUE[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_ExtTimeLimit");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_HasDynamicSubtree
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTDecorator_HasDynamicSubtree : public UBTDecorator_TickableBase
{
public:
	struct FgameplayTag                                InjectTag;                                                 // 0x0070(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L0U6[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_HasDynamicSubtree");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsCamperState
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UBTDecorator_IsCamperState : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBCamper;                                                  // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  DamageState;                                               // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      DamageOp;                                                  // 0x00A1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              ImmobilizeState;                                           // 0x00A2(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      ImmobilizeOp;                                              // 0x00A3(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EIsCamperStateOnFilter                     OnFilter;                                                  // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      OnOthersFilterOp;                                          // 0x00A5(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASMX[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NbOnOthersCampers;                                         // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_446S[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsCamperState");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsExitOpened
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTDecorator_IsExitOpened : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBExitObj;                                                 // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsExitOpened");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsGameState
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTDecorator_IsGameState : public UBTDecorator_TickableBase
{
public:
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      RemainingObjectiveOp;                                      // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJ8D[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NbRemainingObjectives;                                     // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      SurvivorsLeftOp;                                           // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2OX5[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NbSurvivorsLeft;                                           // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsGameState");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsInteractionAvailable
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase
{
public:
	TArray<struct FString>                             InteractionIDs;                                            // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EIsInteractionAvailableOnFilter            OnFilter;                                                  // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FailIfAnotherOngoingInteraction;                           // 0x0081(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FailIfNotPerformingInteraction;                            // 0x0082(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YK2S[0x5];                                     // 0x0083(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsInteractionAvailable");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsInteractorAvailable
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTDecorator_IsInteractorAvailable : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBInteractorObj;                                           // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsInteractorAvailable");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsLocationInPressureZone
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UBTDecorator_IsLocationInPressureZone : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBAtLocation;                                              // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsLocationInPressureZone");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsNearestThan
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UBTDecorator_IsNearestThan : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBFrom;                                                    // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBThan;                                                    // 0x00A0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              AddDistanceBuffer;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54TH[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsNearestThan");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsObjectFocused
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UBTDecorator_IsObjectFocused : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBObj;                                                     // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	DBDBots_EDecoratorIsObjFocusedFilter               Filter;                                                    // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1P7C[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsObjectFocused");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_IsTunable
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UBTDecorator_IsTunable : public UBTDecorator_TickableBase
{
public:
	TEnumAsByte<DBDBots_ETunableComparison>            Operator;                                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EJ2[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         TunableValue;                                              // 0x0074(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CompareToValue;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_IsTunable");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_Random
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTDecorator_Random : public UBTDecorator_TickableBase
{
public:
	struct FAITunableParameter                         PercentageRatio;                                           // 0x0070(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_Random");
		return ptr;
	}



};

// Class DBDBots.BTDecorator_RandomByDistance
// 0x00E0 (FullSize[0x0150] - InheritedSize[0x0070])
class UBTDecorator_RandomByDistance : public UBTDecorator_TickableBase
{
public:
	struct FBlackboardKeySelector                      BBAroundLoc;                                               // 0x0070(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBRelativeFromTime;                                        // 0x00A0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBRelativeToTime;                                          // 0x00D0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         StartDistance;                                             // 0x0100(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         EndDistance;                                               // 0x0110(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         PercentageAtStartDistance;                                 // 0x0120(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         PercentageAtEndDistance;                                   // 0x0130(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAIRandomByDistancePercentagesAtTime> PercentagesAtTimes;                                        // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTDecorator_RandomByDistance");
		return ptr;
	}



};

// Class DBDBots.BTService_AroundEQS
// 0x0070 (FullSize[0x0178] - InheritedSize[0x0108])
class UBTService_AroundEQS : public UBTService_RunEQS
{
public:
	struct FBlackboardKeySelector                      BBAroundObj;                                               // 0x0108(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBAroundLocation;                                          // 0x0138(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              ValidLocationRefreshInterval;                              // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InvalidLocationRefreshInterval;                            // 0x016C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InvalidateLocationUnderTargetDistance;                     // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQGW[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_AroundEQS");
		return ptr;
	}



};

// Class DBDBots.BTService_OnRelevantBase
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UBTService_OnRelevantBase : public UBTService
{
public:
	DBDBots_EAINodeRelevancyOptions                    When;                                                      // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NZT[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_OnRelevantBase");
		return ptr;
	}



};

// Class DBDBots.BTService_ClearBBEntry
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UBTService_ClearBBEntry : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBToResetKey;                                              // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_ClearBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTService_CopyBBEntry
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
class UBTService_CopyBBEntry : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBFrom;                                                    // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBTo;                                                      // 0x00B0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                               CopyOnlyValidKeyValue;                                     // 0x00E0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GS56[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_CopyBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor
// 0x01A0 (FullSize[0x0218] - InheritedSize[0x0078])
class UBTService_FindInteractor : public UBTService
{
public:
	unsigned char                                      UnknownData_5327[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBSearchAround;                                            // 0x0088(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              SearchInterval;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchHeightAmplifierActivationHeight;                     // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SearchHeightAmplifier;                                     // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R63F[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      filterClass;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RegisterAsDiscoveredWhenFound;                             // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LCT4[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBOnlyFromActor;                                           // 0x00D8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OnlyWithInteractorIDs;                                     // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RejectIfTerrorIsCloserThanSelfMargin;                      // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RejectIfInTerrorRadius;                                    // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RejectIfInPressureZone;                                    // 0x0120(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseLastKnownPositionForTerrorRejects;                      // 0x0121(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RejectIfWasInCooldownAndFocusedOnAnotherObject;            // 0x0122(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SB4W[0x1];                                     // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RejectCooldownContextName;                                 // 0x0124(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AbandonIfInChase;                                          // 0x0130(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RejectIfFocusedByOther;                                    // 0x0131(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RejectIfNotFocusedBySelf;                                  // 0x0132(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreFocusFilterInEndgameCollapse;                        // 0x0133(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RejectIfNotInSight;                                        // 0x0134(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreSightFilterIfDiscovered;                             // 0x0135(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreSightFilterIfInRange;                                // 0x0136(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8EOI[0x1];                                     // 0x0137(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RejectAboveRange;                                          // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreRangeFilterIfDiscovered;                             // 0x013C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreRangeFilterIfInSight;                                // 0x013D(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U83D[0x2];                                     // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBInteractLocation;                                        // 0x0140(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBInteractorObj;                                           // 0x0170(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         CantInterruptGoalInteractionUnderRemainingTime;            // 0x01A0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         GoalBasicWeight;                                           // 0x01B0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         GoalWeightMaxDistance;                                     // 0x01C0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         GoalWeightAtMinDistance;                                   // 0x01D0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         GoalWeightAtEndgameStart;                                  // 0x01E0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         GoalWeightAtEndgameEnd;                                    // 0x01F0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	class Uinteractor*                                 _goalInteractor;                                           // 0x0200(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDAIBTController*                          _aiOwner;                                                  // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1MSD[0x8];                                     // 0x0210(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Camper
// 0x0028 (FullSize[0x0240] - InheritedSize[0x0218])
class UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{
public:
	DBDBots_EFindInteractableCamperFilter              StatusFilter;                                              // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3M1K[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         AllyDangerStateGoalWeight;                                 // 0x021C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         IncapacitatedAlliesGoalWeight;                             // 0x022C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKVF[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Camper");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Exit
// 0x0050 (FullSize[0x0268] - InheritedSize[0x0218])
class UBTService_FindInteractor_Exit : public UBTService_FindInteractor
{
public:
	DBDBots_EFindInteractorExitOptions                 Filter;                                                    // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_EFindInteractorOpenConditions              OpenCondition;                                             // 0x0219(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W554[0x6];                                     // 0x021A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBFinalExitLocation;                                       // 0x0220(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              ClosedDoorOffset;                                          // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpenDoorOffset;                                            // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         OpenedExitGoalWeight;                                      // 0x0258(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Exit");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Generator
// 0x0058 (FullSize[0x0270] - InheritedSize[0x0218])
class UBTService_FindInteractor_Generator : public UBTService_FindInteractor
{
public:
	DBDBots_EFindInteractableGeneratorStatusFilter     StatusFilter;                                              // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UAV[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         MinRepairRatioFilter;                                      // 0x021C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UsePerceptionToGetRepairRatio;                             // 0x022C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMLD[0x3];                                     // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         MaxRepairGoalWeight;                                       // 0x0230(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         InfectedStateGoalWeight;                                   // 0x0240(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         HexRuinGoalWeight;                                         // 0x0250(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       HexRuinPerkId;                                             // 0x0260(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FRD[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Generator");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Locker
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UBTService_FindInteractor_Locker : public UBTService_FindInteractor
{
public:
	DBDBots_EFindInteractableLockerStatusFilter        StatusFilter;                                              // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6QRM[0x7];                                     // 0x0219(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Locker");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_MeatHook
// 0x0068 (FullSize[0x0280] - InheritedSize[0x0218])
class UBTService_FindInteractor_MeatHook : public UBTService_FindInteractor
{
public:
	DBDBots_EFindInteractableMeatHookStatus            StatusFilter;                                              // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWLQ[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         AllyDangerStateGoalWeight;                                 // 0x021C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         BotDangerStateGoalWeight;                                  // 0x022C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         BotInjuredStateGoalWeight;                                 // 0x023C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         HumanAllyHookedGoalWeight;                                 // 0x024C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         MaxHookTimeGoalWeight;                                     // 0x025C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         IncapacitatedAlliesGoalWeight;                             // 0x026C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QKG[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_MeatHook");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Pallet
// 0x0060 (FullSize[0x0278] - InheritedSize[0x0218])
class UBTService_FindInteractor_Pallet : public UBTService_FindInteractor
{
public:
	struct FBlackboardKeySelector                      BBPickSideRelativelyFrom;                                  // 0x0218(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	DBDBots_EFindInteractablePalletIntentions          IntentionFilter;                                           // 0x0248(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JGJG[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RaisePalletPerkId;                                         // 0x024C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         BrokenGeneratorGoalMaxDistance;                            // 0x0258(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         BrokenGeneratorGoalMaxDistanceWeight;                      // 0x0268(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Pallet");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Searchable
// 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
class UBTService_FindInteractor_Searchable : public UBTService_FindInteractor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Searchable");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Totem
// 0x0020 (FullSize[0x0238] - InheritedSize[0x0218])
class UBTService_FindInteractor_Totem : public UBTService_FindInteractor
{
public:
	struct FAITunableParameter                         InactiveGoalWeightMaxDistance;                             // 0x0218(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         InactiveGoalWeightAtMinDistance;                           // 0x0228(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Totem");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_Trap
// 0x0038 (FullSize[0x0250] - InheritedSize[0x0218])
class UBTService_FindInteractor_Trap : public UBTService_FindInteractor
{
public:
	struct FAITunableParameter                         HelpDestroyDemoPortal;                                     // 0x0218(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIRoll                                     SeeStandardTrapRoll;                                       // 0x0228(0x0024) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TrapGroundLocationOffset;                                  // 0x024C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_Trap");
		return ptr;
	}



};

// Class DBDBots.BTService_FindInteractor_WishList
// 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
class UBTService_FindInteractor_WishList : public UBTService_FindInteractor
{
public:
	struct FgameplayTag                                WishListTag;                                               // 0x0218(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T2J7[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_FindInteractor_WishList");
		return ptr;
	}



};

// Class DBDBots.BTService_Flee
// 0x00C0 (FullSize[0x0138] - InheritedSize[0x0078])
class UBTService_Flee : public UBTService
{
public:
	unsigned char                                      UnknownData_YJ9J[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBFleePath;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBShouldFallPallet;                                        // 0x00B0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	class UClass*                                      PathStrategySelectorClass;                                 // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OnEndObjectInFocusCooldown;                                // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         ShouldFallPalletUnderHostileRange;                         // 0x00EC(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClearFleePathBBKeyDelay;                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSJ1[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovePath*                                _activePath;                                               // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             _lostFocusedObjects;                                       // 0x0118(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPathStrategySelector*                       _strategySelector;                                         // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZP9W[0x8];                                     // 0x0130(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_Flee");
		return ptr;
	}



};

// Class DBDBots.BTService_GetPinLocation
// 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
class UBTService_GetPinLocation : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FgameplayTag                                PinTag;                                                    // 0x00B0(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_432J[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_GetPinLocation");
		return ptr;
	}



};

// Class DBDBots.BTService_GetPinObject
// 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
class UBTService_GetPinObject : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FgameplayTag                                PinTag;                                                    // 0x00B0(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UF3N[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_GetPinObject");
		return ptr;
	}



};

// Class DBDBots.BTService_GoalCoordinator
// 0x0058 (FullSize[0x00D0] - InheritedSize[0x0078])
class UBTService_GoalCoordinator : public UBTService
{
public:
	unsigned char                                      UnknownData_1TSS[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UObject*, struct FAIGoalWeightContainer> _managedGoals;                                             // 0x0080(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_GoalCoordinator");
		return ptr;
	}



};

// Class DBDBots.BTService_Patrol
// 0x00E0 (FullSize[0x0158] - InheritedSize[0x0078])
class UBTService_Patrol : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBFilterKey;                                               // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           FilterOperation;                                           // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NAI9[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     NavMeshFindLocationExtents;                                // 0x00AC(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPatrolInvestigationDistance;                            // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PatrolPointsValidityCheckInterval;                         // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBPatrolPointOwner;                                        // 0x00C0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBPatrolLocation;                                          // 0x00F0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBGoToNextPatrolLocation;                                  // 0x0120(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00RL[0x8];                                     // 0x0150(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_Patrol");
		return ptr;
	}



};

// Class DBDBots.BTService_Patrol_Discovery
// 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
class UBTService_Patrol_Discovery : public UBTService_Patrol
{
public:
	bool                                               RejectPatrolPointIfInPressureZone;                         // 0x0158(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBSZ[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxFindRandomLocationOnTileAttempts;                       // 0x015C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstFindOnNbNeighborTiles;                                // 0x0160(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GRM2[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_Patrol_Discovery");
		return ptr;
	}



};

// Class DBDBots.BTService_Patrol_PointOfInterest
// 0x0040 (FullSize[0x0198] - InheritedSize[0x0158])
class UBTService_Patrol_PointOfInterest : public UBTService_Patrol
{
public:
	float                                              OnEnterPatrolRefreshPointsDelay;                           // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QC83[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBMoveAroundPatrolLocation;                                // 0x0160(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              MoveAroundPatrolPointAboveStimulusStrength;                // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O10M[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_Patrol_PointOfInterest");
		return ptr;
	}



};

// Class DBDBots.BTService_PushObjectFocus
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UBTService_PushObjectFocus : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBFocusObj;                                                // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_PushObjectFocus");
		return ptr;
	}



};

// Class DBDBots.BTService_RunSkills
// 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
class UBTService_RunSkills : public UBTService
{
public:
	struct FgameplayTag                                Context;                                                   // 0x0078(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QCC[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BBFilterKey;                                               // 0x0088(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBasicKeyOperation>           FilterOperation;                                           // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGQL[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_RunSkills");
		return ptr;
	}



};

// Class DBDBots.BTService_SetBBEntry
// 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
class UBTService_SetBBEntry : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FString                                     ToSetValue;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         RandomSetChance;                                           // 0x00C0(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_SetBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTService_SetBBEntryTime
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UBTService_SetBBEntryTime : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_SetBBEntryTime");
		return ptr;
	}



};

// Class DBDBots.BTService_SetFocusCooldown
// 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
class UBTService_SetFocusCooldown : public UBTService_OnRelevantBase
{
public:
	struct FBlackboardKeySelector                      BBOnObject;                                                // 0x0080(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x00B0(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InfiniteDuration;                                          // 0x00BC(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIYY[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              duration;                                                  // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KT29[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_SetFocusCooldown");
		return ptr;
	}



};

// Class DBDBots.BTService_SetMovementMode
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UBTService_SetMovementMode : public UBTService
{
public:
	DeadByDaylight_ECharacterMovementTypes             OnEnterMovementMode;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECharacterMovementTypes             OnExitMovementMode;                                        // 0x0079(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5N3B[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_SetMovementMode");
		return ptr;
	}



};

// Class DBDBots.BTService_SetPathSpeedFactor
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UBTService_SetPathSpeedFactor : public UBTService
{
public:
	float                                              SpeedFactor;                                               // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E44Z[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_SetPathSpeedFactor");
		return ptr;
	}



};

// Class DBDBots.BTService_StateMonitor
// 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
class UBTService_StateMonitor : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBIsIntroCompleted;                                        // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBDifficultyLevel;                                         // 0x00A8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StateMonitor");
		return ptr;
	}



};

// Class DBDBots.BTService_StateMonitor_Camper
// 0x01E0 (FullSize[0x02B8] - InheritedSize[0x00D8])
class UBTService_StateMonitor_Camper : public UBTService_StateMonitor
{
public:
	struct FBlackboardKeySelector                      BBDamageState;                                             // 0x00D8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBImmoblizedState;                                         // 0x0108(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBGuidedState;                                             // 0x0138(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBEscapedState;                                            // 0x0168(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsInInjuredBleedout;                                     // 0x0198(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBDyingTimerPercentLeft;                                   // 0x01C8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBItemCharge;                                              // 0x01F8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsChased;                                                // 0x0228(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsChained;                                               // 0x0258(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsInPressureZone;                                        // 0x0288(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StateMonitor_Camper");
		return ptr;
	}



};

// Class DBDBots.BTService_StateMonitor_Slasher
// 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
class UBTService_StateMonitor_Slasher : public UBTService_StateMonitor
{
public:
	struct FBlackboardKeySelector                      BBIsCarrying;                                              // 0x00D8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StateMonitor_Slasher");
		return ptr;
	}



};

// Class DBDBots.BTService_StimuliMonitor
// 0x00E0 (FullSize[0x0158] - InheritedSize[0x0078])
class UBTService_StimuliMonitor : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBStimulusOriginLocation;                                  // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBStimulusNavLocation;                                     // 0x00A8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBStimulusActor;                                           // 0x00D8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBStimulusInSight;                                         // 0x0108(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         StimuliRefreshInterval;                                    // 0x0138(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ExtrapolateLoseSightDuration;                              // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     NavMeshFindLocationExtents;                                // 0x014C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StimuliMonitor");
		return ptr;
	}



};

// Class DBDBots.BTService_StimuliMonitor_Camper
// 0x0068 (FullSize[0x01C0] - InheritedSize[0x0158])
class UBTService_StimuliMonitor_Camper : public UBTService_StimuliMonitor
{
public:
	struct FBlackboardKeySelector                      BBTerrorPressure;                                          // 0x0158(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsFleeing;                                               // 0x0188(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              LastValidTerrorRadiusStimulusMemoryLifeTime;               // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTMD[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StimuliMonitor_Camper");
		return ptr;
	}



};

// Class DBDBots.BTService_StimuliMonitor_Slasher
// 0x0120 (FullSize[0x0278] - InheritedSize[0x0158])
class UBTService_StimuliMonitor_Slasher : public UBTService_StimuliMonitor
{
public:
	struct FBlackboardKeySelector                      BBInvestigateStimulusLocation;                             // 0x0158(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBInvestigateStimulusActor;                                // 0x0188(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBInBehaviorInvestigationStep;                             // 0x01B8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIsBlind;                                                 // 0x01E8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBChasedActor;                                             // 0x0218(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         UseNextStimulusInvestigationAfterChaseDelay;               // 0x0248(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	float                                              IgnorePreviousChasedStimulusActorDelay;                    // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultStimulusToInvestigateMaxAge;                        // 0x025C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KOStimulusToInvestigateMaxAge;                             // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NextStimulusInvestigationMinRange;                         // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CantSeeOverBlindRatio;                                     // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FavorizeStandingTargetInRange;                             // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FavorizeStandingTargetOutRange;                            // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMNF[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTService_StimuliMonitor_Slasher");
		return ptr;
	}



};

// Class DBDBots.BTTask_ClearBBEntry
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UBTTask_ClearBBEntry : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBToResetKey;                                              // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_ClearBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTTask_CopyBBEntry
// 0x0068 (FullSize[0x00E0] - InheritedSize[0x0078])
class UBTTask_CopyBBEntry : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBFrom;                                                    // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBTo;                                                      // 0x00A8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                               CopyOnlyValidKeyValue;                                     // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8H0W[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_CopyBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTTask_ExtMoveDirecltyToward
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UBTTask_ExtMoveDirecltyToward : public UBTTask_MoveDirectlyToward
{
public:
	DeadByDaylight_ECharacterMovementTypes             MovementMode;                                              // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1I7[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_ExtMoveDirecltyToward");
		return ptr;
	}



};

// Class DBDBots.BTTask_ExtMoveTo
// 0x00A0 (FullSize[0x0160] - InheritedSize[0x00C0])
class UBTTask_ExtMoveTo : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                      BBStrafeFocus;                                             // 0x00C0(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	DBDBots_EExtMoveToStrafeFocusOptions               StrafeFocus;                                               // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StrafeFocusPitch;                                          // 0x00F1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQZO[0x2];                                     // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StrafeNearFocusModeUnderDistance;                          // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntermittentOnStrafeFocusInterval;                         // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntermittentOnStrafeFocusDeviation;                        // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntermittentOffStrafeFocusInterval;                        // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntermittentOffStrafeFocusDeviation;                       // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndMoveStrafeFocusPrecisionAngle;                          // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StrafeFocusOwnerOnComponentBBKey;                          // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECharacterMovementTypes             ToGoalMovementMode;                                        // 0x010D(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECharacterMovementTypes             NearGoalMovementMode;                                      // 0x010E(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLSC[0x1];                                     // 0x010F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NearGoalModeUnderDistance;                                 // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalMoveUnderNavLinkDistance;                            // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBIgnoreGroupAvoidance;                                    // 0x0118(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              RepathInterval;                                            // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseAccelerationForPaths;                                   // 0x014C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GLOY[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathReachedPointRadius;                                    // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UseContextualAcceptableRadius;                             // 0x0154(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_ExtMoveTo");
		return ptr;
	}



};

// Class DBDBots.BTTask_ExtWait
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class UBTTask_ExtWait : public UBTTask_Wait
{
public:
	struct FAITunableParameter                         WaitTimeInterval;                                          // 0x0080(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         WaitRandomDeviation;                                       // 0x0090(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_ExtWait");
		return ptr;
	}



};

// Class DBDBots.BTTask_FleeMoveTo
// 0x0018 (FullSize[0x0178] - InheritedSize[0x0160])
class UBTTask_FleeMoveTo : public UBTTask_ExtMoveTo
{
public:
	float                                              InScrambleMovementMinDistance;                             // 0x0160(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutScrambleMovementMinDistance;                            // 0x0164(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InScrambleMovementInterval;                                // 0x0168(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopScrambleMovementInterval;                              // 0x016C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoopScrambleMovementRandomDeviation;                       // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrouchWithinLastEvadeLoopPointRadius;                      // 0x0174(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_FleeMoveTo");
		return ptr;
	}



};

// Class DBDBots.BTTask_InputPress
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UBTTask_InputPress : public UBTTaskNode
{
public:
	DeadByDaylight_EPawnInputPressTypes                input;                                                     // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDBots_ETaskInputPressModes                       InputMode;                                                 // 0x0079(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WIN[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         InputPressLoopInterval;                                    // 0x007C(0x0010) (Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SI8[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_InputPress");
		return ptr;
	}



};

// Class DBDBots.BTTask_Interact
// 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
class UBTTask_Interact : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBInteractorObj;                                           // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	DeadByDaylight_EPawnInputPressTypes                input;                                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1CX[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OnFailFocusCooldownDuration;                               // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PropagateCooldownOnInteractable;                           // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQZI[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FailStartInteractTimeLimit;                                // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_Interact");
		return ptr;
	}



};

// Class DBDBots.BTTask_RunSkills
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UBTTask_RunSkills : public UBTTaskNode
{
public:
	struct FgameplayTag                                Context;                                                   // 0x0078(0x000C) (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECVQ[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_RunSkills");
		return ptr;
	}



};

// Class DBDBots.BTTask_SetBBEntry
// 0x0040 (FullSize[0x00B8] - InheritedSize[0x0078])
class UBTTask_SetBBEntry : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FString                                     ToSetValue;                                                // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_SetBBEntry");
		return ptr;
	}



};

// Class DBDBots.BTTask_SetBBEntryTime
// 0x0030 (FullSize[0x00A8] - InheritedSize[0x0078])
class UBTTask_SetBBEntryTime : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBToSetKey;                                                // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_SetBBEntryTime");
		return ptr;
	}



};

// Class DBDBots.BTTask_SetFocusCooldown
// 0x0048 (FullSize[0x00C0] - InheritedSize[0x0078])
class UBTTask_SetFocusCooldown : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBOnObject;                                                // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FName                                       ContextName;                                               // 0x00A8(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InfiniteDuration;                                          // 0x00B4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H16M[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              duration;                                                  // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHKO[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_SetFocusCooldown");
		return ptr;
	}



};

// Class DBDBots.BTTask_SetMovementMode
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UBTTask_SetMovementMode : public UBTTaskNode
{
public:
	DeadByDaylight_ECharacterMovementTypes             MovementMode;                                              // 0x0078(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HTOU[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_SetMovementMode");
		return ptr;
	}



};

// Class DBDBots.BTTask_SetRandomNavPoint
// 0x0078 (FullSize[0x00F0] - InheritedSize[0x0078])
class UBTTask_SetRandomNavPoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBFromLocation;                                            // 0x0078(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBToLocation;                                              // 0x00A8(0x0030) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	float                                              MinAroundRadius;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAroundRadius;                                           // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNbAttempts;                                             // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMUF[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      filterClass;                                               // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_SetRandomNavPoint");
		return ptr;
	}



};

// Class DBDBots.BTTask_StealthMoveTo
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class UBTTask_StealthMoveTo : public UBTTask_ExtMoveTo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.BTTask_StealthMoveTo");
		return ptr;
	}



};

// Class DBDBots.DBDAIBTController
// 0x00E0 (FullSize[0x05D8] - InheritedSize[0x04F8])
class UDBDAIBTController : public UDBDAIController
{
public:
	class UBehaviorTree*                               BehaviorTree;                                              // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAISkill*>                            BaseSkills;                                                // 0x0500(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAISkill*>                            RoleSkills;                                                // 0x0510(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAISkillPerk>                        PerkSkills;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDAIPerceptionComponent*                   _dbdPerception;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDBlackboardComponent*                     _dbdBlackboard;                                            // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDPathFollowingComponent*                  _dbdPathFollowing;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDBehaviorTreeComponent*                   _dbdBehaviorTree;                                          // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDNavMeshExplorerComponent*                _navMeshExplorer;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDAIStateComponent*                        _aiState;                                                  // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDAIGoalComponent*                         _aiGoal;                                                   // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3ULM[0x10];                                    // 0x0568(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FgameplayTag, class UBehaviorTree*>    _setDynamicSubtrees;                                       // 0x0578(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<class UAISkill*>                            _aiSkills;                                                 // 0x05C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDAIBTController");
		return ptr;
	}



	void OnPawnBump(class Uactor* selfActor, class Uactor* otherActor, const struct Fvector& normalImpulse, const struct FhitResult& hit);
	void Authority_FinishedPlaying();
};

// Class DBDBots.DBDAIBTUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDAIBTUtilities : public UDBDAIUtilities
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDAIBTUtilities");
		return ptr;
	}



};

// Class DBDBots.DBDAIGoalComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class UDBDAIGoalComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_29X3[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UObject*, struct FAIGoal>               _activeGoals;                                              // 0x00C0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<class UObject*, struct FAIGoalWeightContainer> _foundWeightedGoals;                                       // 0x0110(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDAIGoalComponent");
		return ptr;
	}



};

// Class DBDBots.DBDAIPerceptionComponent
// 0x01A8 (FullSize[0x0330] - InheritedSize[0x0188])
class UDBDAIPerceptionComponent : public UAiPerceptionComponent
{
public:
	unsigned char                                      UnknownData_VJA8[0x20];                                    // 0x0188(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, class UObject*>                _objOverridingSenses;                                      // 0x01A8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<class UAISenseConfig*>                      _originalSenseConfigs;                                     // 0x01F8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAIDetectedStimulus>                 _detectedHostileStimuli;                                   // 0x0208(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAIDetectedStimulus                         _bestDetectedHostileStimulus;                              // 0x0218(0x005C) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAIDetectedStimulus                         _lastBestDetectedHostileStimulusInMemory;                  // 0x0274(0x005C) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MQBL[0x60];                                    // 0x02D0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDAIPerceptionComponent");
		return ptr;
	}



};

// Class DBDBots.DBDAIStateComponent
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class UDBDAIStateComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_03R9[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UnsafeStateAtHookedCount;                                  // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DireStateAtHookedCount;                                    // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MidObjectiveStateProgressionRatio;                         // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3RM[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDBots_EAIObjectiveState, struct FDangerStateGameStateMapContainer> GameStateTable;                                            // 0x00D0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<DeadByDaylight_EAIDifficultyLevel, struct FGameStatePressureZoneLevelMapContainer> PressureZoneLevelTable;                                    // 0x0120(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<DBDBots_EAIPressureZoneLevel, float>          PressureZoneHighToMedRangeLerpRatios;                      // 0x0170(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              DefaultChasedPhaseOutDuration;                             // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InjuredChasedPhaseOutDuration;                             // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2SH[0x8];                                     // 0x01C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDAIStateComponent");
		return ptr;
	}



};

// Class DBDBots.DBDBehaviorTreeComponent
// 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
class UDBDBehaviorTreeComponent : public UBehaviorTreeComponent
{
public:
	unsigned char                                      UnknownData_ZNEL[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FRelevantNodeMemory>    _lastRelevantNodeMemories;                                 // 0x0280(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             _createdObjects;                                           // 0x02D0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDBehaviorTreeComponent");
		return ptr;
	}



};

// Class DBDBots.DBDBlackboardComponent
// 0x0238 (FullSize[0x03F0] - InheritedSize[0x01B8])
class UDBDBlackboardComponent : public UBlackboardComponent
{
public:
	unsigned char                                      UnknownData_OAIT[0x8];                                     // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UObject*, struct FMindFocusObjectEntry> _mindFocusEntries;                                         // 0x01C0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FgameplayTag, struct Fvector>          _pinLocations;                                             // 0x0210(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FgameplayTag, class UObject*>          _pinObjects;                                               // 0x0260(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<class UObject*, float>                        _lostMindFocusEntries;                                     // 0x02B0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FgameplayTag, struct FWeightedWishedObjectMapContainer> _objectWishListMap;                                        // 0x0300(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      _discoveredObjects[0x50];                                  // 0x0350(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _intentionValidators[0x50];                                // 0x03A0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDBlackboardComponent");
		return ptr;
	}



};

// Class DBDBots.DBDNavLinkCustomComponent
// 0x0070 (FullSize[0x0208] - InheritedSize[0x0198])
class UDBDNavLinkCustomComponent : public UNavLinkCustomComponent
{
public:
	struct Fvector                                     BaseLinkRelativeStart;                                     // 0x0198(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     BaseLinkRelativeEnd;                                       // 0x01A4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENavLinkDirection>              BaseLinkDirection;                                         // 0x01B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJ6J[0x3];                                     // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoSnapSmartLinkPointsUpHeight;                           // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoSnapSmartLinkPointsDownHeight;                         // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              AutoSnapCollisionChannel;                                  // 0x01BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3TI[0x3];                                     // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoSmartLinkDirectionMaxHeight;                           // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableSmartLinkOnPathObstruction;                         // 0x01C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OC9F[0x3];                                     // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathObstructionTestDistance;                               // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathObstructionTestShapeRadius;                            // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathObstructionTestHeightOffset;                           // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              PathObstructionCollisionChannel;                           // 0x01D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisableOtherSmartLinkInProximityOnEnable;                  // 0x01D5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableOtherSmartLinkInProximityOnDisable;                  // 0x01D6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STLD[0x1];                                     // 0x01D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OtherSmartLinkInProximitySearchDistance;                   // 0x01D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowDebugInfo;                                             // 0x01DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43I2[0x1B];                                    // 0x01DD(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UNavLinkProxy*>                       _navLinkProxyInProximity;                                  // 0x01F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDNavLinkCustomComponent");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDBots.DBDNavMeshExplorerComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UDBDNavMeshExplorerComponent : public UactorComponent
{
public:
	float                                              ExploreAtAgentMoveDistance;                                // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExploreAtInterval;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         ExplorationBoxHalfExtent;                                  // 0x00C0(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	int                                                FullyAutoExploredAtGameTime;                               // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NRQ3[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDPathFollowingComponent*                  _pathFollowingComponent;                                   // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T7DC[0x60];                                    // 0x00E0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDNavMeshExplorerComponent");
		return ptr;
	}



};

// Class DBDBots.DBDPathFollowingComponent
// 0x0218 (FullSize[0x0478] - InheritedSize[0x0260])
class UDBDPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              UnblockPathDeviationRadius;                                // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnblockPathTimeLimit;                                      // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M0LP[0x120];                                   // 0x0268(0x0120) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _onNavLinkProxies[0x50];                                   // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_UTEO[0xA0];                                    // 0x03D8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.DBDPathFollowingComponent");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_CenterOfMap
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_CenterOfMap : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_CenterOfMap");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_EscapeDoors
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_EscapeDoors : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_EscapeDoors");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_Generators
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_Generators : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_Generators");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_Hooks
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_Hooks : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_Hooks");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_Lockers
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_Lockers : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_Lockers");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_PinActor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_PinActor : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_PinActor");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_PinLocation
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_PinLocation : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_PinLocation");
		return ptr;
	}



};

// Class DBDBots.EnvQueryContext_TerrorRadius
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_TerrorRadius : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryContext_TerrorRadius");
		return ptr;
	}



};

// Class DBDBots.EnvQueryTest_LineOfSight
// 0x00E8 (FullSize[0x0320] - InheritedSize[0x0238])
class UEnvQueryTest_LineOfSight : public UEnvQueryTest
{
public:
	class UClass*                                      QuerierContext;                                            // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ToContext;                                                 // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                          // 0x0248(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    Invert;                                                    // 0x0288(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALGJ[0x58];                                    // 0x02C8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.EnvQueryTest_LineOfSight");
		return ptr;
	}



};

// Class DBDBots.NavArea_Blink
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Blink : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavArea_Blink");
		return ptr;
	}



};

// Class DBDBots.NavArea_Breakable
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Breakable : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavArea_Breakable");
		return ptr;
	}



};

// Class DBDBots.NavArea_Vault
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Vault : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavArea_Vault");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_Player
// 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
class UNavigationQueryFilter_Player : public UNavigationQueryFilter
{
public:
	int                                                MaxSearchNodes;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGBV[0x1C];                                    // 0x0054(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_Player");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_Camper
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UNavigationQueryFilter_Camper : public UNavigationQueryFilter_Player
{
public:
	float                                              SlasherAreaBoundsLimit;                                    // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlasherAreaPenetrationCost;                                // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlasherInSightCost;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlasherInSightTestFrequency;                               // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlasherAreaExcludeUnderRange;                              // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlasherInExcludeAreaCost;                                  // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_Camper");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_Camper_Cheap
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UNavigationQueryFilter_Camper_Cheap : public UNavigationQueryFilter_Camper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_Camper_Cheap");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_CamperStealth
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UNavigationQueryFilter_CamperStealth : public UNavigationQueryFilter_Camper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_CamperStealth");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_Slasher
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UNavigationQueryFilter_Slasher : public UNavigationQueryFilter_Player
{
public:
	TMap<struct FString, float>                        DefaultInteractionsTimeCost;                               // 0x0070(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FString, float>                        FrenzyInteractionsTimeCost;                                // 0x00C0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_Slasher");
		return ptr;
	}



};

// Class DBDBots.NavigationQueryFilter_Slasher_Limited
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNavigationQueryFilter_Slasher_Limited : public UNavigationQueryFilter_Player
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavigationQueryFilter_Slasher_Limited");
		return ptr;
	}



};

// Class DBDBots.NavLinkProxy_Base
// 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
class UNavLinkProxy_Base : public UNavLinkProxy
{
public:
	float                                              WaitLinkOffset;                                            // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveOnEndPointTimeLimit;                                   // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NbMaxLinkUsers;                                            // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U05G[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UdbdPlayer*, struct FMoveLinkPlayerInfo> _players;                                                  // 0x0290(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<class UdbdPlayer*>                          _linkUsedByPlayers;                                        // 0x02E0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavLinkProxy_Base");
		return ptr;
	}



	void OnSmartLinkReachedCallback(class Uactor* MovingActor, const struct Fvector& DestinationPoint);
	void AutoAdjustSmartLinkPoints();
};

// Class DBDBots.NavLinkProxy_DirectMove
// 0x0068 (FullSize[0x0358] - InheritedSize[0x02F0])
class UNavLinkProxy_DirectMove : public UNavLinkProxy_Base
{
public:
	TArray<struct Fvector>                             CustomPathPoints;                                          // 0x02F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveToPathPointTimeLimit;                                  // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8FRT[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UdbdPlayer*, class UNavMovePath*>       _playersOnPath;                                            // 0x0308(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavLinkProxy_DirectMove");
		return ptr;
	}



	void OnDisplayDebugInfo();
};

// Class DBDBots.NavLinkProxy_Interaction
// 0x00A8 (FullSize[0x0398] - InheritedSize[0x02F0])
class UNavLinkProxy_Interaction : public UNavLinkProxy_Base
{
public:
	TMap<DBDSharedTypes_EPlayerRole, struct FNavLinkInteractPlayerSetup> PlayerSetups;                                              // 0x02F0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              InteractionStartTimeLimit;                                 // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH4D[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UdbdPlayer*, float>                     _playersInteractionInputAtTime;                            // 0x0348(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavLinkProxy_Interaction");
		return ptr;
	}



};

// Class DBDBots.NavMovePath
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UNavMovePath : public UObject
{
public:
	unsigned char                                      UnknownData_NAJK[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.NavMovePath");
		return ptr;
	}



};

// Class DBDBots.PathBuilder
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UPathBuilder : public UObject
{
public:
	unsigned char                                      UnknownData_J25I[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathReachedPointRadius;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_EAITerrorLevel                      ToleratedTerrorPressure;                                   // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverridePreviousPathStrategy;                              // 0x003D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ABER[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovePath*                                _path;                                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDAIBTController*                          _aiOwner;                                                  // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathBuilder");
		return ptr;
	}



};

// Class DBDBots.PathBuilder_EQS
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UPathBuilder_EQS : public UPathBuilder
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x0050(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                NbMaxEQSRequests;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MergeToSinglePathPoint;                                    // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8J8W[0x23];                                    // 0x00A5(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPathBuilder_EQS*                            _pendingEQSRequestBuilder;                                 // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathBuilder_EQS");
		return ptr;
	}



};

// Class DBDBots.PathBuilder_EvadeLoop
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UPathBuilder_EvadeLoop : public UPathBuilder
{
public:
	float                                              AddDistanceToRequiredEvadeGap;                             // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForceEvadePointUnderDistance;                              // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChaserCrossingEvadeTimePenalty;                            // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwapPathReachTimeBuffer;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BreakPalletInteractionId;                                  // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OnPathRadius;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxEvadeInteractableWeightDistance;                        // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightAtMaxDistance;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MaxWeightAtNearestDistanceIfHostileHasRangedAbility;       // 0x007C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84H7[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeightAtMaxSafety;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxNearAllyPenaltyPathPointDistance;                       // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightWhenNearAlly;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2YS[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovePath*                                _originalEvadeLoopWorkPath;                                // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMovePath*                                _querierWorkPathA;                                         // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMovePath*                                _querierWorkPathB;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMovePath*                                _chaserWorkPath;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDNavEvadeLoopComponent*                   _pickedEvadeLoopComponent;                                 // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y0PE[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathBuilder_EvadeLoop");
		return ptr;
	}



};

// Class DBDBots.PathBuilder_LastGoal
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UPathBuilder_LastGoal : public UPathBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathBuilder_LastGoal");
		return ptr;
	}



};

// Class DBDBots.PathStrategy
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UPathStrategy : public UObject
{
public:
	unsigned char                                      UnknownData_TPT1[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPathBuilder*>                        DefaultPathBuilders;                                       // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RefreshPartialPathDelay;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartNextBranchBuildDelay;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDAIBTController*                          _aiOwner;                                                  // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPathBuilder*>                        _pathBuilders;                                             // 0x0060(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J7TR[0x48];                                    // 0x0070(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategy");
		return ptr;
	}



};

// Class DBDBots.PathStrategy_Flee
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UPathStrategy_Flee : public UPathStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategy_Flee");
		return ptr;
	}



};

// Class DBDBots.PathStrategy_FleeLoop
// 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
class UPathStrategy_FleeLoop : public UPathStrategy_Flee
{
public:
	TMap<DeadByDaylight_EAIDifficultyLevel, struct FGameStateEvadeLoopStrategyMapContainer> GameStateFleeLoopStrategyTable;                            // 0x00B8(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<DBDBots_EAIFleeLoopStrategy, class UPathBuilder_EvadeLoop*> FleeLoopStrategyPathBuilders;                              // 0x0108(0x0050) (Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              CanBranchUnderEndPathDistance;                             // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XEQC[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDBots_EAIFleeLoopStrategy, struct FAIRoll>  BranchRolls;                                               // 0x0160(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              RejectLoopBranchUnderEndPointsDistance;                    // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RejectBranchPointNearerHostileSourceDistance;              // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RejectBranchUnderNavLinkDistance;                          // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AddDistanceToRequiredBranchEvadeGap;                       // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XV4J[0x50];                                    // 0x01C0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategy_FleeLoop");
		return ptr;
	}



};

// Class DBDBots.PathStrategy_FleeLOS
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UPathStrategy_FleeLOS : public UPathStrategy_Flee
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategy_FleeLOS");
		return ptr;
	}



};

// Class DBDBots.PathStrategySelector
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UPathStrategySelector : public UObject
{
public:
	unsigned char                                      UnknownData_6S38[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDAIBTController*                          _aiOwner;                                                  // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPathStrategy*>                       _activePathStrategies;                                     // 0x0040(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPathStrategy*>                       _nextPathStrategies;                                       // 0x0050(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UE7O[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategySelector");
		return ptr;
	}



};

// Class DBDBots.PathStrategySelector_Flee
// 0x00A8 (FullSize[0x0110] - InheritedSize[0x0068])
class UPathStrategySelector_Flee : public UPathStrategySelector
{
public:
	TMap<DBDBots_EAIFleePathStrategy, class UPathStrategy*> FleePathStrategies;                                        // 0x0068(0x0050) (Edit, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OIOC[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDBots_EAIFleePathStrategy, class UPathStrategy*> _activeFleePathStrategiesMap;                              // 0x00C0(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDBots.PathStrategySelector_Flee");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
