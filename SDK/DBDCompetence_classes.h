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

// Class DBDCompetence.TimedStatusEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UTimedStatusEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TimedStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.AbilityStealthUndetectableEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UAbilityStealthUndetectableEffect : public UTimedStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AbilityStealthUndetectableEffect");
		return ptr;
	}



};

// Class DBDCompetence.AdjustableCooldownStatusEffect
// 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
class UAdjustableCooldownStatusEffect : public UstatusEffect
{
public:
	struct FgameplayTag                                CooldownModifierType;                                      // 0x0320(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5BPG[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AdjustableCooldownStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.ExhaustedEffect
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
public:
	float                                              CooldownModifier;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6W4I[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ExhaustedEffect");
		return ptr;
	}



};

// Class DBDCompetence.ActivatableExhaustedEffect
// 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
class UActivatableExhaustedEffect : public UExhaustedEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ActivatableExhaustedEffect");
		return ptr;
	}



	void Authority_Start(float duration);
	void Authority_OnHookCamper(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.ActivateOnEventTimedStatusEffect
// 0x0020 (FullSize[0x0340] - InheritedSize[0x0320])
class UActivateOnEventTimedStatusEffect : public UstatusEffect
{
public:
	struct FGameplayTagContainer                       _eventsToActivateOn;                                       // 0x0320(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ActivateOnEventTimedStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.AllHexTotemsAreActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_IY9M[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AllHexTotemsAreActive");
		return ptr;
	}



};

// Class DBDCompetence.AnyActorPairQueryRangeIsTrue
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_SQ0I[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnyActorPairQueryRangeIsTrue");
		return ptr;
	}



	void OnInRangeChanged(bool inRange);
};

// Class DBDCompetence.AnyMeansNecessary
// 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
class UAnyMeansNecessary : public Uperk
{
public:
	bool                                               RevealSurvivorOnPalletPullUpStarted;                       // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RevealSurvivorOnPalletPulledUp;                            // 0x03A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AGDL[0x2];                                     // 0x03AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealSurvivorDuration;                                    // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UstatusEffect>                _effect;                                                   // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03B8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CC7H[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnyMeansNecessary");
		return ptr;
	}



	void Authority_OnPalletPullUpStarted(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
	void Authority_OnPalletPulledUp(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.AnySurvivorHasObjectState
// 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_ZWX3[0x50];                                    // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _stateTag;                                                 // 0x0138(0x000C) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G6GF[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnySurvivorHasObjectState");
		return ptr;
	}



	void OnSurvivorRemoved(class UcamperPlayer* Survivor);
	void OnSurvivorAdded(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.Babysitter
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class UBabysitter : public Uperk
{
public:
	float                                              _scratchMarkHidingTime[0x3];                               // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _showAuraTime[0x3];                                        // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownTime[0x3];                                        // 0x03C0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GJZ3[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Babysitter");
		return ptr;
	}



};

// Class DBDCompetence.BabysitterEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UBabysitterEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BabysitterEffect");
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPerkUsableCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_87KK[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseIsPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPlayerPerformingInteraction
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LSVH[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseIsPlayerPerformingInteraction");
		return ptr;
	}



	void UpdateIsTrue(class UinteractionDefinition* interactionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.BaseLingeringStatusEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class UBaseLingeringStatusEffect : public UstatusEffect
{
public:
	float                                              _lingerDuration;                                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R4LW[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseLingeringStatusEffect");
		return ptr;
	}



	void SetLingerDuration(float lingerDuration);
};

// Class DBDCompetence.BetterTogether
// 0x0058 (FullSize[0x0400] - InheritedSize[0x03A8])
class UBetterTogether : public Uperk
{
public:
	bool                                               ShouldRevealKiller;                                        // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShouldRevealSurvivors;                                     // 0x03A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JL2Q[0x2];                                     // 0x03AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealDistance;                                            // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UdbdPlayer*>                          _affectedCampers;                                          // 0x03B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_538S[0x8];                                     // 0x03C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _genToReveal;                                              // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03D0(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3PAQ[0x24];                                    // 0x03DC(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BetterTogether");
		return ptr;
	}



	void OnStartedGeneratorRepair(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.BloodEcho
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UBloodEcho : public Uperk
{
public:
	struct FgameplayTag                                _statusEffectDurationTag;                                  // 0x03A8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BloodEcho");
		return ptr;
	}



};

// Class DBDCompetence.Breakout
// 0x0078 (FullSize[0x0420] - InheritedSize[0x03A8])
class UBreakout : public Uperk
{
public:
	class UslasherPlayer*                              _slasher;                                                  // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _playerOwner;                                              // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffect[0x3];                                         // 0x03B8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wiggleEffect;                                             // 0x03C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorDistanceMax;                                      // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActive;                                             // 0x03CC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R8KM[0x53];                                    // 0x03CD(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Breakout");
		return ptr;
	}



	void OnSlasherSet(class UslasherPlayer* slasher);
	void OnRep_IsPerkActive();
	void Authority_OnRangeChanged(bool inRange);
	void Authority_ImposeWiggleStatusEffect(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.BuckleUp
// 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
class UBuckleUp : public Uperk
{
public:
	struct FLinearColor                                _noRecoveryColor;                                          // 0x03A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _fullRecoveryColor;                                        // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealDuration[0x3];                                      // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S3GI[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BuckleUp");
		return ptr;
	}



};

// Class DBDCompetence.Camaraderie
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class UCamaraderie : public Uperk
{
public:
	unsigned char                                      UnknownData_16JC[0xC];                                     // 0x03A8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _percentUseItem[0x3];                                      // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _pauseTimer[0x3];                                          // 0x03C0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _needItemToTrigger;                                        // 0x03CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_63AT[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Camaraderie");
		return ptr;
	}



	void Authority_EnablePerk();
};

// Class DBDCompetence.CollectableOwnerSubjectProvider
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_RZ05[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CollectableOwnerSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.CorruptIntervention
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class UCorruptIntervention : public Uperk
{
public:
	unsigned char                                      _blockedGeneratorCount[0x3];                               // 0x03A8(0x0003) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KBT5[0x1];                                     // 0x03AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorBlockDuration[0x3];                              // 0x03AC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class Ugenerator*>                          _blockedGenerators;                                        // 0x03C8(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D0KM[0x8];                                     // 0x03D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CorruptIntervention");
		return ptr;
	}



	void Server_ActivatePerk();
	void OnRep_BlockedGenerators();
	void Local_OnIntroCompleted();
};

// Class DBDCompetence.CruelConfinement
// 0x00A0 (FullSize[0x0448] - InheritedSize[0x03A8])
class UCruelConfinement : public Uperk
{
public:
	float                                              _effectiveRadius[0x3];                                     // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _blockDuration[0x3];                                       // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _windowAuraColor;                                          // 0x03C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class Ugenerator*, struct FWindowBlockableList> _blockableLists;                                           // 0x03D0(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JBO9[0x28];                                    // 0x0420(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CruelConfinement");
		return ptr;
	}



};

// Class DBDCompetence.DarkDevotion
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UDarkDevotion : public Uperk
{
public:
	class UTerrorRadiusEmitterComponent*               _obsessionTerrorRadiusEmitter;                             // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionTerrorRadius;                                    // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _simulatedFixedDistance;                                   // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8MC5[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DarkDevotion");
		return ptr;
	}



};

// Class DBDCompetence.DarkSense
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UDarkSense : public Uperk
{
public:
	float                                              _effectDurationOnGeneratorComplete;                        // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _effectDurationOnFinalGeneratorComplete[0x3];              // 0x03AC(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0S3Z[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DarkSense");
		return ptr;
	}



};

// Class DBDCompetence.DBDConditionFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDConditionFactory : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DBDConditionFactory");
		return ptr;
	}



	class UIsPlayerPerformingInteraction* STATIC_IsPlayerPerformingInteraction(const TScriptInterface<class UconditionReceiver>& conditionReceiver, const struct FGameplayTagContainer& interactionSemantics);
	class UDoesPerkHaveToken* STATIC_DoesPerkHaveToken(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class Uperk* perk);
};

// Class DBDCompetence.DeadMansSwitchEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UDeadMansSwitchEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DeadMansSwitchEffect");
		return ptr;
	}



};

// Class DBDCompetence.DeceptionEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class UDeceptionEffect : public UstatusEffect
{
public:
	bool                                               _hideBloodTrailsWhenCamperFakeEnterLocker;                 // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5NRD[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DeceptionEffect");
		return ptr;
	}



};

// Class DBDCompetence.DecisiveStrike
// 0x00A0 (FullSize[0x0448] - InheritedSize[0x03A8])
class UDecisiveStrike : public Uperk
{
public:
	float                                              _timeAfterUnhook[0x3];                                     // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckDelay;                                          // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckBuffer;                                         // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _killerHearsSkillCheckCue;                                 // 0x03BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B5A5[0x73];                                    // 0x03BD(0x0073) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FgameplayTag>                        _deactivationEvents;                                       // 0x0430(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasBeenAttempted;                                         // 0x0440(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KCH1[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DecisiveStrike");
		return ptr;
	}



	void OnUnhookedTimerEnded();
	void OnSkillCheck(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void OnRep_HasBeenAttempted();
	void OnPickUpEnded(class UdbdPlayer* picker);
	void OnOwnerPickedUp(class UdbdPlayer* picker);
};

// Class DBDCompetence.DelayedHealEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class UDelayedHealEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_EYW8[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DelayedHealEffect");
		return ptr;
	}



	void Authority_OnOwningCamperPickedUp(class UdbdPlayer* picker);
	void Authority_OnOwningCamperHealthChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after);
	void Authority_OnActivationTimerComplete();
};

// Class DBDCompetence.DidGameEventOccurred
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{
public:
	struct FgameplayTag                                EventTag;                                                  // 0x00E8(0x000C) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HFDR[0x2C];                                    // 0x00F4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DidGameEventOccurred");
		return ptr;
	}



};

// Class DBDCompetence.Distortion
// 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
class UDistortion : public Uperk
{
public:
	float                                              _activationDurations[0x3];                                 // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _auraBlockIsActive;                                        // 0x03B4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3Z24[0x13];                                    // 0x03B5(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Distortion");
		return ptr;
	}



	void OnRep_AuraBlockIsActive();
	bool AuraBlockCanBeActive();
};

// Class DBDCompetence.Diversion
// 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
class UDiversion : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Diversion");
		return ptr;
	}



	bool IsOwnerDisabled(class UcamperPlayer* owningPlayer);
	float GetThrowDistance();
	bool CanThrow();
};

// Class DBDCompetence.DoesPerkHaveToken
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{
public:
	TWeakObjectPtr<class Uperk>                        _perk;                                                     // 0x00E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KWSN[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DoesPerkHaveToken");
		return ptr;
	}



	void SetPerk(class Uperk* perk);
	void OnRep_Perk();
};

// Class DBDCompetence.DownedByBasicAttack
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{
public:
	bool                                               _replicatedIsTrue;                                         // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZNPV[0x57];                                    // 0x00E9(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DownedByBasicAttack");
		return ptr;
	}



	void OnRep_ReplicatedIsTrue();
};

// Class DBDCompetence.DyingLight
// 0x0040 (FullSize[0x03E8] - InheritedSize[0x03A8])
class UDyingLight : public Uperk
{
public:
	TArray<float>                                      _actionSpeedPenaltyPerToken;                               // 0x03A8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionActionSpeedBonus;                                // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _obsessionStatusEffectID;                                  // 0x03BC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _nonObsessionStatusEffectID;                               // 0x03C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NRKP[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UstatusEffect*>                       _survivorDebuffs;                                          // 0x03D8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DyingLight");
		return ptr;
	}



	void OnObsessionChanged(class UcamperPlayer* newObsession, class UcamperPlayer* previousObsession);
};

// Class DBDCompetence.EnduranceHighlightEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UEnduranceHighlightEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.EnduranceHighlightEffect");
		return ptr;
	}



};

// Class DBDCompetence.ExposedEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UExposedEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ExposedEffect");
		return ptr;
	}



};

// Class DBDCompetence.Fixated
// 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
class UFixated : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Fixated");
		return ptr;
	}



};

// Class DBDCompetence.FlipFlop
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UFlipFlop : public Uperk
{
public:
	float                                              _recoveryProgressionConversionRatio[0x3];                  // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxWiggleProgression[0x3];                                // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.FlipFlop");
		return ptr;
	}



	void Authority_OnPickedUp(class UdbdPlayer* picker);
};

// Class DBDCompetence.FurtiveChase
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UFurtiveChase : public Uperk
{
public:
	int                                                _maxTokensByLevel[0x3];                                    // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _terrorRadiusSuppressionPerToken;                          // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.FurtiveChase");
		return ptr;
	}



};

// Class DBDCompetence.GateBlockerEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UGateBlockerEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.GateBlockerEffect");
		return ptr;
	}



};

// Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_G0I1[0x4];                                     // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isWigglePercentReached;                                   // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4WQ2[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition");
		return ptr;
	}



	void OnRep_IsWigglePercentReached();
	void Authority_OnOwnerWiggleChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
};

// Class DBDCompetence.HeadOn
// 0x0078 (FullSize[0x0420] - InheritedSize[0x03A8])
class UHeadOn : public Uperk
{
public:
	bool                                               IsPerformingHeadOn;                                        // 0x03A8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExhaustOnlyOnSuccessfulStun;                               // 0x03A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StunKillersEnteringStunZone;                               // 0x03AA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0ZV[0x1];                                     // 0x03AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hideDuration[0x3];                                        // 0x03AC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocker*                                     _locker;                                                   // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_04ES[0x60];                                    // 0x03C0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HeadOn");
		return ptr;
	}



	void OnPawnOverlapExit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void OnPawnOverlapEnter(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
	void OnHeadOnAnimationComplete();
	void Multicast_StunPlayer(class UstunnableComponent* stunnableComponent, class UdbdPlayer* stunner);
	bool CanApplyHeadOnInteraction();
	void Authority_ActivatePerk();
};

// Class DBDCompetence.HexPerk
// 0x0060 (FullSize[0x0408] - InheritedSize[0x03A8])
class UHexPerk : public Uperk
{
public:
	int                                                NumTotemsToBind;                                           // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               _doNotBindToTotemOnInit;                                   // 0x03AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S5N6[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Utotem*>                              _totemActors;                                              // 0x03B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class Utotem*>                              _authorityPrevTotemActors;                                 // 0x03C0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UdbdPlayer*>                          _playersWhoKnowCurse;                                      // 0x03D0(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_550T[0x28];                                    // 0x03E0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexPerk");
		return ptr;
	}



	void ReceiveGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target);
	void OnRep_TotemActors();
	void OnRep_PlayersWhoKnowCurse(TArray<class UdbdPlayer*> oldPlayersWhoKnowCurse);
	void OnHexPerkGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target);
	bool IsCurseRevealedToPlayer(class UdbdPlayer* player);
	TArray<class Utotem*> GetTotems();
	float GetDistanceToOwner(class Uactor* otherActor);
	TArray<class Utotem*> GetBoundTotems();
	void FireCursedStatusOnLocalPlayer();
	void Authority_UnbindFromTotem(class Utotem* aTotemActor, bool isCleansedTotem);
	void Authority_SetCurseRevealedToPlayer(class UdbdPlayer* player, bool revealed);
	void Authority_RevealCurseToAllSurvivors();
	void Authority_Reactivate_BP();
	bool Authority_BindToDullTotems();
};

// Class DBDCompetence.HexHauntedGround
// 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
class UHexHauntedGround : public UHexPerk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexHauntedGround");
		return ptr;
	}



};

// Class DBDCompetence.HexRuin
// 0x0068 (FullSize[0x0470] - InheritedSize[0x0408])
class UHexRuin : public UHexPerk
{
public:
	unsigned char                                      UnknownData_MS7P[0x18];                                    // 0x0408(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class Ugenerator*, struct FFastTimer>         _curseActivationTimers;                                    // 0x0420(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexRuin");
		return ptr;
	}



	void Authority_ConstructActivationTimersMap();
};

// Class DBDCompetence.HighestLevelAndClosestEffectCondition
// 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_6GB2[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UstatusEffect*>                       _effectsLevel1;                                            // 0x00D8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UstatusEffect*>                       _effectsLevel2;                                            // 0x00E8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UstatusEffect*>                       _effectsLevel3;                                            // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HighestLevelAndClosestEffectCondition");
		return ptr;
	}



	void SetCurrentEffectLevel(int level);
	void InitEffectArrays(const struct FName& effectIDLevel1, const struct FName& effectIDLevel2, const struct FName& effectIDLevel3);
};

// Class DBDCompetence.ImAllEars
// 0x0058 (FullSize[0x0400] - InheritedSize[0x03A8])
class UImAllEars : public Uperk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadius;                                          // 0x03C0(0x0001) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MUHF[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _triggerOutsideRadius;                                     // 0x03C4(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X3GP[0x38];                                    // 0x03C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ImAllEars");
		return ptr;
	}



	void Server_OnCamperLoudNoise(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.ImmediateUndetectableEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UImmediateUndetectableEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ImmediateUndetectableEffect");
		return ptr;
	}



};

// Class DBDCompetence.OnEventBaseAddon
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UOnEventBaseAddon : public UItemAddon
{
public:
	struct FgameplayTag                                _eventToListenTo;                                          // 0x0278(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WD7K[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OnEventBaseAddon");
		return ptr;
	}



	void OnEventFired(const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.ImposeStatusEffectOnEventAddon
// 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
class UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{
public:
	float                                              _statusEffectTime;                                         // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _statusEffectName;                                         // 0x028C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DBDCompetence_EImposeEffectTo                      _imposeEffectTo;                                           // 0x0298(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VNB3[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ImposeStatusEffectOnEventAddon");
		return ptr;
	}



};

// Class DBDCompetence.InfectiousFright
// 0x0048 (FullSize[0x03F0] - InheritedSize[0x03A8])
class UInfectiousFright : public Uperk
{
public:
	bool                                               _revealPlayerInTerrorRadius;                               // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _perkActivationCount;                                      // 0x03A9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y8F9[0x6];                                     // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _revealedSurvivors;                                        // 0x03B0(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UcamperPlayer*                               _targetSurvivor;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1AWH[0x28];                                    // 0x03C8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InfectiousFright");
		return ptr;
	}



	void RevealSurvivorLocation(class UcamperPlayer* target);
	void OnRep_PerkActivationCount();
};

// Class DBDCompetence.InnerStrength
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class UInnerStrength : public Uperk
{
public:
	float                                              _hideDuration[0x3];                                        // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _perkEnabled;                                              // 0x03B4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TEN6[0x2B];                                    // 0x03B5(0x002B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InnerStrength");
		return ptr;
	}



	void OnRep_PerkEnabled();
	void OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
};

// Class DBDCompetence.Insidious
// 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
class UInsidious : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Insidious");
		return ptr;
	}



};

// Class DBDCompetence.InsidiousEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UInsidiousEffect : public UAbilityStealthUndetectableEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InsidiousEffect");
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsActivationTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_WUYQ[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsActivationTimerActive");
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActiveAndNotPaused
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_VV02[0x20];                                    // 0x00E8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsActivationTimerActiveAndNotPaused");
		return ptr;
	}



};

// Class DBDCompetence.IsClosestEffectCondition
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UIsClosestEffectCondition : public UGameplayModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsClosestEffectCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsCooldownTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsCooldownTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_2VST[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsCooldownTimerActive");
		return ptr;
	}



};

// Class DBDCompetence.IsHexCursed
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsHexCursed : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_5O0D[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsHexCursed");
		return ptr;
	}



};

// Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
// 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{
public:
	TArray<class UstatusEffect*>                       _applicableEffects;                                        // 0x00D0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KTXM[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect");
		return ptr;
	}



	void OnStatusEffectAddedOrRemoved(class UstatusEffect* effect, bool valid);
};

// Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
// 0x00B0 (FullSize[0x01A0] - InheritedSize[0x00F0])
class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_8BD9[0xB0];                                    // 0x00F0(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange");
		return ptr;
	}



};

// Class DBDCompetence.IsLifetimeActive
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UIsLifetimeActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_XDM9[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsLifetimeActive");
		return ptr;
	}



};

// Class DBDCompetence.IsOnHitSprintEffectActive
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOnHitSprintEffectActive");
		return ptr;
	}



};

// Class DBDCompetence.IsOriginatingPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOriginatingPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsOutRangeOfOriginatingPlayer
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class UIsOutRangeOfOriginatingPlayer : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_B3K8[0x28];                                    // 0x00F0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOutRangeOfOriginatingPlayer");
		return ptr;
	}



	void OnInRangeChanged(bool inRange);
};

// Class DBDCompetence.IsOwningPlayerInRangeFromHook
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_JFED[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerInRangeFromHook");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
{
public:
	unsigned char                                      UnknownData_6MST[0x18];                                    // 0x0108(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry");
		return ptr;
	}



};

// Class DBDCompetence.IsOwningPlayerLastSurvivor
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_R1ED[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerLastSurvivor");
		return ptr;
	}



};

// Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller");
		return ptr;
	}



};

// Class DBDCompetence.IsPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsPlayerPerformingItemInteraction
// 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
public:
	unsigned char                                      UnknownData_NXTF[0x20];                                    // 0x0118(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPlayerPerformingItemInteraction");
		return ptr;
	}



	void OnCollectablePickedUp(class UdbdPlayer* player);
	void OnCollectableDropped();
	void OnCollectableChargeStateChange(bool empty);
};

// Class DBDCompetence.IsPlayerPerformingInteraction
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GNLG[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPlayerPerformingInteraction");
		return ptr;
	}



	void UpdateIsTrue(class UinteractionDefinition* interactionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.KillerIsLowOnAmmo
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
{
public:
	int                                                _ammoThreshold;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9UKE[0x14];                                    // 0x00EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KillerIsLowOnAmmo");
		return ptr;
	}



};

// Class DBDCompetence.KillerSubjectProvider
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UKillerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_1ERV[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KillerSubjectProvider");
		return ptr;
	}



	void RegisterWhenKillerSet(class UslasherPlayer* Killer);
};

// Class DBDCompetence.KindredPerk
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class UKindredPerk : public Uperk
{
public:
	unsigned char                                      UnknownData_3RZO[0x10];                                    // 0x03A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      _killerAuraRevealRange;                                    // 0x03B8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3PNI[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KindredPerk");
		return ptr;
	}



};

// Class DBDCompetence.LingeringStateTagStatusEffect
// 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FgameplayTag                                _ownerStateTag;                                            // 0x0328(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CR2U[0x2C];                                    // 0x0334(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.LingeringStateTagStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.LuckyBreak
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class ULuckyBreak : public Uperk
{
public:
	float                                              _activationTime[0x3];                                      // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_77W7[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.LuckyBreak");
		return ptr;
	}



	void OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState currentDamageState);
	void ActivationTimerEnded();
};

// Class DBDCompetence.Mindbreaker
// 0x0040 (FullSize[0x03E8] - InheritedSize[0x03A8])
class UMindbreaker : public Uperk
{
public:
	float                                              _effectDurationAfterRepair[0x3];                           // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorRepairThreshold[0x3];                            // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SMUE[0x28];                                    // 0x03C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Mindbreaker");
		return ptr;
	}



};

// Class DBDCompetence.Nemesis
// 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
class UNemesis : public Uperk
{
public:
	unsigned char                                      UnknownData_BPWJ[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealToKillerTime[0x3];                                  // 0x03B0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obliviousTime[0x3];                                       // 0x03BC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Nemesis");
		return ptr;
	}



};

// Class DBDCompetence.NoOneLeftBehind
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UNoOneLeftBehind : public Uperk
{
public:
	TArray<float>                                      _speedBoostEffect;                                         // 0x03A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.NoOneLeftBehind");
		return ptr;
	}



	float GetSpeedBoostEffect();
};

// Class DBDCompetence.ObliviousEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UObliviousEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ObliviousEffect");
		return ptr;
	}



};

// Class DBDCompetence.ObsessionTargetSubjectProvider
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_F1WS[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ObsessionTargetSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.OwningPlayerInTotemRange
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_6GBZ[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningPlayerInTotemRange");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.OwningPlayerInDullTotemRange
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningPlayerInDullTotemRange");
		return ptr;
	}



};

// Class DBDCompetence.OwningSlasherHasBeenStill
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
{
public:
	float                                              _secondsOfStillnessRequired;                               // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_02UB[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningSlasherHasBeenStill");
		return ptr;
	}



	void Authority_SetSecondsOfStillnessRequired(float secondsRequired);
};

// Class DBDCompetence.PharmacyPerk
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UPharmacyPerk : public Uperk
{
public:
	TArray<float>                                      _searchSpeeds;                                             // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PharmacyPerk");
		return ptr;
	}



};

// Class DBDCompetence.PlayerIsInExitArea
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_MTY6[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PlayerIsInExitArea");
		return ptr;
	}



	void PlayerExitExitArea();
	void PlayerEnterExitArea();
};

// Class DBDCompetence.Poised
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class UPoised : public Uperk
{
public:
	float                                              _activationTime[0x3];                                      // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7VNN[0x1C];                                    // 0x03B4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Poised");
		return ptr;
	}



};

// Class DBDCompetence.PreventKOEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class UPreventKOEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_ISOL[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PreventKOEffect");
		return ptr;
	}



};

// Class DBDCompetence.QKPerk3ExhaustedEffect
// 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
class UQKPerk3ExhaustedEffect : public UExhaustedEffect
{
public:
	unsigned char                                      UnknownData_1S6A[0x28];                                    // 0x0338(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.QKPerk3ExhaustedEffect");
		return ptr;
	}



};

// Class DBDCompetence.ResiliencePerk
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UResiliencePerk : public Uperk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7NCY[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ResiliencePerk");
		return ptr;
	}



};

// Class DBDCompetence.saboteur
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class Usaboteur : public Uperk
{
public:
	float                                              _coolDownDuration[0x3];                                    // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealHookDistance[0x3];                                  // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMeatHookOutlineUpdateStrategy*>      _revealedMeatHooksOultineStrategy;                         // 0x03C0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.saboteur");
		return ptr;
	}



};

// Class DBDCompetence.SecondsToRateModifierBaseAddon
// 0x0110 (FullSize[0x0388] - InheritedSize[0x0278])
class USecondsToRateModifierBaseAddon : public UItemAddon
{
public:
	struct FTunableStat                                _chargeRate;                                               // 0x0278(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _maxCharge;                                                // 0x02F8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _secondsToAdd;                                             // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FgameplayTag                                _rateModifierTagToCompute;                                 // 0x037C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SecondsToRateModifierBaseAddon");
		return ptr;
	}



};

// Class DBDCompetence.SecondWind
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class USecondWind : public Uperk
{
public:
	unsigned char                                      UnknownData_RQZB[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDCompetence_ESecondWindState                     _currentState;                                             // 0x03B0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GHUE[0x3];                                     // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _amountHealed;                                             // 0x03B4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WKEJ[0x4];                                     // 0x03B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _numberOfHealStateToHealToActivate[0x3];                   // 0x03BC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationOfHeal[0x3];                                      // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyBrokenEffect;                                        // 0x03D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5GLY[0xB];                                     // 0x03D5(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SecondWind");
		return ptr;
	}



};

// Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_8TRY[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon");
		return ptr;
	}



};

// Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                                 // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon");
		return ptr;
	}



};

// Class DBDCompetence.SingleGateBlockerEffect
// 0x0050 (FullSize[0x0370] - InheritedSize[0x0320])
class USingleGateBlockerEffect : public UGateBlockerEffect
{
public:
	float                                              _distanceThreshold;                                        // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FWDL[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEscapeDoor*                                 _gate;                                                     // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInRange;                                                // 0x0330(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6Y60[0x3F];                                    // 0x0331(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SingleGateBlockerEffect");
		return ptr;
	}



};

// Class DBDCompetence.SmallGame
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class USmallGame : public Uperk
{
public:
	float                                              _detectionConeAngle[0x3];                                  // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _detectionConeAngleReductionRate[0x3];                     // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _totemDetected;                                            // 0x03C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8ZJ7[0xF];                                     // 0x03C1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SmallGame");
		return ptr;
	}



	void VFXTotemFound();
	void SearchForTotems();
	void Multicast_TotemFound();
	float GetDetectionConeAngle();
	void Authority_SetTotemDetected(bool Value);
};

// Class DBDCompetence.SoleSurvivor
// 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
class USoleSurvivor : public Uperk
{
public:
	float                                              _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3];       // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DQME[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _otherSurvivors;                                           // 0x03B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O35T[0x10];                                    // 0x03C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SoleSurvivor");
		return ptr;
	}



	void Authority_OnSurvivorAdded(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.Solidarity
// 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
class USolidarity : public Uperk
{
public:
	bool                                               _allowMedkit;                                              // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PT9S[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _healerHPSlot;                                             // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _targetHPSlot;                                             // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*            _healOtherInteraction;                                     // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5YS3[0x10];                                    // 0x03C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Solidarity");
		return ptr;
	}



	void Authority_OnSkillCheckResponse(bool Success, bool bonus, class UdbdPlayer* player, bool triggerLoudNoise, bool HadInput, DBDSharedTypes_ESkillCheckCustomType type, float chargeChange);
	void Authority_OnHealthChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class DBDCompetence.spiesfromtheshadows
// 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
class Uspiesfromtheshadows : public Uperk
{
public:
	float                                              _cooldownDurationSecs;                                     // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DW72[0x4];                                     // 0x03AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.spiesfromtheshadows");
		return ptr;
	}



	void StartCooldownIfInRange(const struct Fvector& loudNoiseLocation);
	void Server_TriggerCooldown();
};

// Class DBDCompetence.SpineChillPerk
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class USpineChillPerk : public Uperk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GJGA[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SpineChillPerk");
		return ptr;
	}



};

// Class DBDCompetence.SprintBurst
// 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
class USprintBurst : public Uperk
{
public:
	float                                              _exhaustionDuration[0x3];                                  // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sprintDuration;                                           // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NUCJ[0x8];                                     // 0x03C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SprintBurst");
		return ptr;
	}



	void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);
};

// Class DBDCompetence.StatsSystemUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatsSystemUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.StatsSystemUtilities");
		return ptr;
	}



	void STATIC_InitStatBP(struct FTunableStat* theStat, const TScriptInterface<class UmodifierProvider>& modifierProvider);
	float STATIC_GetStatValueBP(const struct FTunableStat& theStat);
};

// Class DBDCompetence.StatusEffectOriginatorSubjectProvider
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.StatusEffectOriginatorSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.Surge
// 0x0040 (FullSize[0x03E8] - InheritedSize[0x03A8])
class USurge : public Uperk
{
public:
	float                                              _zoneRadius[0x3];                                          // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _instantRegression[0x3];                                   // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03C0(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasCooldown;                                              // 0x03CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadiusInsteadOfFixedDistance;                    // 0x03CD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_24B6[0x1A];                                    // 0x03CE(0x001A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Surge");
		return ptr;
	}



	void Client_TriggerEffects(TArray<class Ugenerator*> Generators);
};

// Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
{
public:
	class UActorPairQueryEvaluatorComponent*           _actorPairQueryEvaluatorComponent;                         // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue");
		return ptr;
	}



};

// Class DBDCompetence.TestCollectable
// 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
class UTestCollectable : public Ucollectable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestCollectable");
		return ptr;
	}



};

// Class DBDCompetence.TestDBDGameState
// 0x0000 (FullSize[0x0788] - InheritedSize[0x0788])
class UTestDBDGameState : public UDBDGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestDBDGameState");
		return ptr;
	}



};

// Class DBDCompetence.TestStatusEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UTestStatusEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.TheMettleOfMan
// 0x0048 (FullSize[0x03F0] - InheritedSize[0x03A8])
class UTheMettleOfMan : public Uperk
{
public:
	int                                                _tokenNeededToActivate[0x3];                               // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealOutsideRange[0x3];                                  // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _mustBeInjured;                                            // 0x03C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TX8D[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numTokenSoFar;                                            // 0x03C4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DBDCompetence_ETheMettleOfManPhase                 _currentPhase;                                             // 0x03C8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R8F0[0xF];                                     // 0x03C9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _revealToKillerEffect;                                     // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JQ90[0x10];                                    // 0x03E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TheMettleOfMan");
		return ptr;
	}



	void OnRep_NumTokenSoFar();
	void OnRep_CurrentPhase();
};

// Class DBDCompetence.ThrillingTremors
// 0x0060 (FullSize[0x0408] - InheritedSize[0x03A8])
class UThrillingTremors : public Uperk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03B4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _disableWhenSurvivorPutDownOrUnhooked;                     // 0x03C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SOQW[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03C4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FDZS[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Ugenerator*>                          _blockedGenerators;                                        // 0x03D8(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Ugenerator*>                          _revealedGenerators;                                       // 0x03E8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PEZV[0x10];                                    // 0x03F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ThrillingTremors");
		return ptr;
	}



	void OnRep_BlockedGenerators();
};

// Class DBDCompetence.TimedObliviousEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UTimedObliviousEffect : public UObliviousEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TimedObliviousEffect");
		return ptr;
	}



};

// Class DBDCompetence.WeddingRing
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UWeddingRing : public UItemAddon
{
public:
	unsigned char                                      UnknownData_1D1J[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.WeddingRing");
		return ptr;
	}



};

// Class DBDCompetence.YamaokaFamilyCrest
// 0x0038 (FullSize[0x02B0] - InheritedSize[0x0278])
class UYamaokaFamilyCrest : public UItemAddon
{
public:
	float                                              _revealDuration;                                           // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealRange;                                              // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UcamperPlayer*>                       _survivorsToReveal;                                        // 0x0280(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _addonActivationCount;                                     // 0x0290(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9FW6[0x1F];                                    // 0x0291(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.YamaokaFamilyCrest");
		return ptr;
	}



	void RevealSurvivor(class UcamperPlayer* survivorToReveal);
	void OnRep_AddonActivationCount();
};

// Class DBDCompetence.ZanshinTactics
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UZanshinTactics : public Uperk
{
public:
	float                                              _coolDownDuration[0x3];                                    // 0x03A8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SMS0[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ZanshinTactics");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
