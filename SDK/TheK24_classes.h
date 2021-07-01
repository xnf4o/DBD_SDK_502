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

// Class TheK24.ActivateK24PowerInteraction
// 0x0090 (FullSize[0x0710] - InheritedSize[0x0680])
class UActivateK24PowerInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_9DKE[0x10];                                    // 0x0680(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _interactionViewPitchMax;                                  // 0x0690(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMin;                                  // 0x06B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maximumTimeToTriggerRegularAttack;                        // 0x06E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FX94[0x8];                                     // 0x0708(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ActivateK24PowerInteraction");
		return ptr;
	}



	void SetK24Power(class Uk24Power* k24Power);
};

// Class TheK24.Addon_K24_04
// 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
class UAddon_K24_04 : public UOnEventBaseAddon
{
public:
	float                                              _effectTime;                                               // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                outlineColor;                                              // 0x028C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QMUK[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Addon_K24_04");
		return ptr;
	}



};

// Class TheK24.Addon_K24_19
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class UAddon_K24_19 : public UImposeStatusEffectOnEventAddon
{
public:
	class UClass*                                      _zombieEscapeDoorPointsActor;                              // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Addon_K24_19");
		return ptr;
	}



};

// Class TheK24.BiteTheBullet
// 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
class UBiteTheBullet : public Uperk
{
public:
	class UdbdPlayer*                                  _server_healTarget;                                        // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BiteTheBullet");
		return ptr;
	}



};

// Class TheK24.BiteTheBulletEffect
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class UBiteTheBulletEffect : public UBaseLingeringStatusEffect
{
public:
	unsigned char                                      UnknownData_IS21[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BiteTheBulletEffect");
		return ptr;
	}



};

// Class TheK24.BlastMine
// 0x00D8 (FullSize[0x0480] - InheritedSize[0x03A8])
class UBlastMine : public Uperk
{
public:
	float                                              _firecrackerHeight;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9WV4[0x4];                                     // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x03B0(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              _secondsToActivatePerk;                                    // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _kickChargePercentMin;                                     // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _kickChargePercentMax;                                     // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressPercentRequirementLevels[0x3];                    // 0x03EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              __generatorTrapDurationLevels[0x3];                        // 0x03F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canBeReusedOnTimerExpire;                                 // 0x0404(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canBeReusedAfterTrapActivation;                           // 0x0405(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TAVT[0x2];                                     // 0x0406(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UinteractionDefinition*                      _currentRepairInteractionWithAbility;                      // 0x0408(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Ugenerator*                                  _trappedGenerator;                                         // 0x0410(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressPercent;                                          // 0x0418(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _trapActivated;                                            // 0x041C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _repairTimerDone;                                          // 0x041D(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X0GW[0x2];                                     // 0x041E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UslasherPlayer*                              _kickInteractionPlayerOwner;                               // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*            _kickInteraction;                                          // 0x0428(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Ugenerator*                                  _repairProgressGenerator;                                  // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BXIJ[0x48];                                    // 0x0438(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BlastMine");
		return ptr;
	}



	void TrapDettachedToGenerator_Cosmetic(class Ugenerator* trappedGenerator);
	void TrapAttachedToGenerator_Cosmetic(class Ugenerator* trappedGenerator);
	void ThrowBubbleIndicator_Cosmetic(const struct FTransform& location);
	void Server_OnActionInputPressed(class Ugenerator* generator);
	void OnRep_TrappedGenerator(class Ugenerator* oldGenerator);
	void OnRep_CurrentRepairInteractionWithAbility(class UinteractionDefinition* oldRepairInteraction);
	void OnActivateExplosion(const struct FTransform& firecrackerTransform, class Ugenerator* generator);
	void Client_TrapActivatedLoudNotification(const struct FTransform& location);
	void Authority_OnRepairProgress(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class TheK24.BlastMineTrapComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UBlastMineTrapComponent : public UactorComponent
{
public:
	bool                                               _isTrapActive;                                             // 0x00B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V5WR[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BlastMineTrapComponent");
		return ptr;
	}



	void OnRep_IsTrapActive();
};

// Class TheK24.BlindZombieFlashlightableLightingStrategy
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBlindZombieFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BlindZombieFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class TheK24.BTTask_MoveToAbortIfStuck
// 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData_A5Z0[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _deltaConsideredStuck;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_66G0[0xC];                                     // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _maxTimeStuck;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.BTTask_MoveToAbortIfStuck");
		return ptr;
	}



};

// Class TheK24.ChangeZombieStateBTTask
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UChangeZombieStateBTTask : public UBTTask_BlueprintBase
{
public:
	TheK24_EZombieState                                _zombieState;                                              // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1WC6[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ChangeZombieStateBTTask");
		return ptr;
	}



};

// Class TheK24.CollectSerumInCrateInteraction
// 0x0020 (FullSize[0x05A0] - InheritedSize[0x0580])
class UCollectSerumInCrateInteraction : public UCollectItemInteraction
{
public:
	class USupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x0580(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CEQR[0x18];                                    // 0x0588(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.CollectSerumInCrateInteraction");
		return ptr;
	}



};

// Class TheK24.ContaminationSerumCollectable
// 0x0018 (FullSize[0x04F8] - InheritedSize[0x04E0])
class UContaminationSerumCollectable : public UBaseCamperCollectable
{
public:
	unsigned char                                      UnknownData_XBSR[0x18];                                    // 0x04E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ContaminationSerumCollectable");
		return ptr;
	}



};

// Class TheK24.ContaminationSubAnimInstance
// 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isContaminated;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjectingSerumSelf;                                     // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjectingSerumOther;                                    // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingInjectedWithSerum;                                 // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingHealed;                                            // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFirstContaminationHit;                                  // 0x04F5(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_22JF[0x2A];                                    // 0x04F6(0x002A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ContaminationSubAnimInstance");
		return ptr;
	}



};

// Class TheK24.Counterforce
// 0x0028 (FullSize[0x03D0] - InheritedSize[0x03A8])
class UCounterforce : public Uperk
{
public:
	unsigned char                                      UnknownData_7QB4[0x4];                                     // 0x03A8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _totemAuraVisibleDuration[0x3];                            // 0x03AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startingTotemCleanseSpeedBonus[0x3];                      // 0x03B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _stackableTotemCleanseSpeedBonus[0x3];                     // 0x03C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Counterforce");
		return ptr;
	}



	void Multicast_ShowTotemAura(class Utotem* totem);
};

// Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ZombiePatrolAreaPoint : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint");
		return ptr;
	}



};

// Class TheK24.Eruption
// 0x0048 (FullSize[0x03F0] - InheritedSize[0x03A8])
class UEruption : public Uperk
{
public:
	TArray<class Ugenerator*>                          _server_highlightedGenerators;                             // 0x03A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkEnabled;                                            // 0x03B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HTJW[0x3];                                     // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorRegressPercentage[0x3];                          // 0x03BC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorImposedStatusEffectDuration[0x3];                 // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _screamRevealLocationDuration;                             // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BEDA[0xC];                                     // 0x03E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Eruption");
		return ptr;
	}



	void OnRep_IsPerkEnabled();
	void Multicast_TriggerPerk(TArray<class Ugenerator*> explodingGenerators);
	void Multicast_HighlightGenerator(class Ugenerator* generator);
	void MakeSurvivorScreamCosmetic(class UdbdPlayer* screamingSurvivor);
	float GetScreamRevealLocationDuration();
	void Cosmetic_OnGeneratorHighlightStart(class Ugenerator* highlightedGenerator);
	void Cosmetic_OnGeneratorHighlightEnd(class Ugenerator* highlightedGenerator);
};

// Class TheK24.Flashbang
// 0x0020 (FullSize[0x03C8] - InheritedSize[0x03A8])
class UFlashbang : public Uperk
{
public:
	unsigned char                                      UnknownData_F4YY[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _generatorBeingRepaired;                                   // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorsRepairTargetProgression;                        // 0x03B8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorRepairPercentToCraftFlashbang[0x3];              // 0x03BC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Flashbang");
		return ptr;
	}



	void OnRep_GeneratorsRepairProgress();
	void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();
	void Client_OnGeneratorRepairProgressionTargetAchieved();
	void Authority_OnRepairProgressApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class TheK24.Hysteria
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UHysteria : public Uperk
{
public:
	float                                              _obliviousEffectDuration[0x3];                             // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Hysteria");
		return ptr;
	}



};

// Class TheK24.IncreaseZombiesSpeedStatusEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class UIncreaseZombiesSpeedStatusEffect : public UstatusEffect
{
public:
	float                                              _zombieSpeedAdditive;                                      // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QYC6[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.IncreaseZombiesSpeedStatusEffect");
		return ptr;
	}



};

// Class TheK24.InjectSerumInteraction
// 0x00C0 (FullSize[0x0740] - InheritedSize[0x0680])
class UInjectSerumInteraction : public UChargeableInteractionDefinition
{
public:
	struct FTunableStat                                _injectSerumKillerInstinctTime;                            // 0x0680(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C7GL[0x8];                                     // 0x0700(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _scoreEvent;                                               // 0x0708(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_93M5[0x4];                                     // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _serumApplyHeal;                                           // 0x0718(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.InjectSerumInteraction");
		return ptr;
	}



	void OnSurvivorCured_Cosmetic();
	void OnKillerSet(class UslasherPlayer* Killer);
	class UcamperPlayer* GetInjectionTarget();
	void Authority_CureSurvivor(class UcamperPlayer* camperPlayer);
};

// Class TheK24.K24AnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UK24AnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_ZYSX[0x4];                                     // 0x05A8(0x0004) Fix Super Size
	int                                                _powerLevel;                                               // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QCGX[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24AnimInstance");
		return ptr;
	}



	void OnKillerPowerLevelChanged(int powerLevel);
};

// Class TheK24.K24CharacterFXComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UK24CharacterFXComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerLevelChangedFx;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Local_OnKillerHitZombie;                                   // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Local_OnKillerContaminatedSurvivor;                        // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OBAV[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24CharacterFXComponent");
		return ptr;
	}



	void Local_OnKillerPowerLevelChanged(int powerLevel);
};

// Class TheK24.K24CheatComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UK24CheatComponent : public UactorComponent
{
public:
	class UClass*                                      _zombieManagementClass;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZombiesManagement*                          _zombiesManagement;                                        // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24CheatComponent");
		return ptr;
	}



	void DBD_TeleportZombiesTo(float x, float y, float z);
	void DBD_K24ZombieFall(float Zvalue);
	void DBD_K24StopAllZombies();
	void DBD_K24StartAllZombies();
	void DBD_K24SpawnZombieOnKiller();
	void DBD_K24SetPowerLevelPoints(float Value);
	void DBD_K24SetContaminationOnSurvivor(bool Value);
	void DBD_K24ComeToMeMyZombies();
};

// Class TheK24.K24PounceAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UK24PounceAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24PounceAttack");
		return ptr;
	}



	void Server_HitZombie(class UZombieCharacter* Zombie, float targetLocationTimestamp);
};

// Class TheK24.k24Power
// 0x0408 (FullSize[0x08A0] - InheritedSize[0x0498])
class Uk24Power : public Ucollectable
{
public:
	unsigned char                                      UnknownData_W793[0x88];                                    // 0x0498(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerWalkSpeed;                                           // 0x0520(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _normalWalkSpeed;                                          // 0x0548(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerMouseYawScale;                                       // 0x0570(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerYawAdjustTime;                                       // 0x0598(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerGamePadYawScale;                                     // 0x05C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _activateK24PowerCharge;                                   // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _activateK24PowerSecondsToCharge;                          // 0x05F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _activatePowerChargeSpeedCurve;                            // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _activatePowerChargeLvl3SpeedCurve;                        // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4UZX[0x8];                                     // 0x0628(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UinteractionDefinition*                      _k24PowerCooldownInteraction;                              // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel1;                                         // 0x0638(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel2;                                         // 0x0660(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel3;                                         // 0x0688(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _contaminationComponentBP;                                 // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GRSZ[0x8];                                     // 0x06B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _powerChargeSurvivorContaminatedPoint;                     // 0x06C0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _powerChargeZombieKilledPoint;                             // 0x0740(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _powerChargeSurvivorHitPoint;                              // 0x07C0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _powerLevelPoints;                                         // 0x0840(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U39Y[0x4];                                     // 0x0844(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerLevelPointsToLevel2;                                 // 0x0848(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerLevelPointsToLevel3;                                 // 0x0870(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6YX1[0x8];                                     // 0x0898(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.k24Power");
		return ptr;
	}



	void WhipAttackStart_Cosmetic();
	void WhipAttackMove_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& whipEndLocation, bool isFirstRayCast);
	void WhipAttackHit_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& impactPointLocation, const struct Fvector& whipEndLocation, bool isFirstHit, const struct Fvector& impactNormal, const struct FName& phyMaterial, bool hitACharacter);
	void WhipAttackEnd_Cosmetic();
	void Server_PowerDestroyPallet(class Upallet* pallet);
	void Server_PowerDestroyBreakable(class UBreakableBase* breakable);
	void Server_KillAZombie(class UZombieCharacter* Zombie, DBDSharedTypes_EAttackType AttackType);
	void PowerHitStateEnd_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& whipEndLocation);
	void PowerCooldownEnd_Cosmetic();
	void OnRep_PowerLevelPoints();
	void OnPowerStop_Cosmetic();
	void OnPowerStartCharge_Cosmetic();
	void OnPowerLevelChanged_Cosmetic(int powerLevel);
	void Multicast_PowerDestroyPallet(class Upallet* pallet);
	void Multicast_PowerDestroyBreakable(class UBreakableBase* breakable);
	bool isInPower();
	float GetWhipLength();
	int GetPowerLevel();
	void Authority_OnSurvivorContaminated(TheK24_EContaminator contaminator);
};

// Class TheK24.K24PowerAnimInstance
// 0x0030 (FullSize[0x02A0] - InheritedSize[0x0270])
class UK24PowerAnimInstance : public UanimInstance
{
public:
	class Uk24Power*                                   _k24Power;                                                 // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UslasherPlayer*                              _owningKiller;                                             // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInPowerMode;                                            // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChargingPower;                                          // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isK24PowerAttacking;                                      // 0x0282(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isRequestingPowerAttack;                                  // 0x0283(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _tentacleLength;                                           // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFirstPersonView;                                        // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EAttackSubstate                     _attackSubState;                                           // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIntroCompleted;                                         // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isLevelReadyToPlay;                                       // 0x028B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _powerLevel;                                               // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _forwardVelocity;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralVelocity;                                          // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isKilling;                                                // 0x0298(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GIXS[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24PowerAnimInstance");
		return ptr;
	}



	void OnLevelReadyToPlay();
	void OnKillerPowerLevelChanged(int powerLevel);
	void OnIntroCompleted();
};

// Class TheK24.k24PowerCooldownInteraction
// 0x0048 (FullSize[0x05A0] - InheritedSize[0x0558])
class Uk24PowerCooldownInteraction : public UinteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _k24PowerCooldownTime;                                     // 0x0558(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _cooldownSpeedCurve;                                       // 0x0580(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _cooldownLvl3SpeedCurve;                                   // 0x0588(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _playedCooldownSpeedCurve;                                 // 0x0590(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A2J3[0x8];                                     // 0x0598(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.k24PowerCooldownInteraction");
		return ptr;
	}



	void SetK24Power(class Uk24Power* k24Power);
};

// Class TheK24.K24PowerPresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData_1IYU[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24PowerPresentationItemProgressComponent");
		return ptr;
	}



	void SetK24Power(class Uk24Power* k24Power);
};

// Class TheK24.K24SlashAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UK24SlashAttack : public UK24PounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24SlashAttack");
		return ptr;
	}



};

// Class TheK24.K24WhipAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UK24WhipAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_81W4[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttack");
		return ptr;
	}



	void Server_ContaminatePlayer(class UcamperPlayer* target, float targetLocationTimestamp);
	void Client_ContaminationResult(class UdbdPlayer* target, bool isValid);
};

// Class TheK24.K24WhipAttackOpenSubstate
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UK24WhipAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	class UCurveFloat*                                 _lvl3SpeedCurve;                                           // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttackOpenSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackHittingSubstate
// 0x00C0 (FullSize[0x0260] - InheritedSize[0x01A0])
class UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:
	struct FDBDTunableRowHandle                        _attackSphereTraceRadius;                                  // 0x01A0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerAttackBreakObjectLevel;                              // 0x01C8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerCanBreakObjectAfterAPlayerDamage;                    // 0x01F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _whipMovementFromOffset;                                   // 0x0218(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _whipMovementToOffset;                                     // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _whipMovementCurve;                                        // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lvl3SpeedCurve;                                           // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _whipGroundDetectionOffset;                                // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FUMQ[0x1C];                                    // 0x0244(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttackHittingSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UK24WhipAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UK24WhipAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttackMissSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UK24WhipAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.K24WhipAttackObstructSubstate");
		return ptr;
	}



};

// Class TheK24.LethalPursuer
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class ULethalPursuer : public Uperk
{
public:
	float                                              _survivorRevealDuration[0x3];                              // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X5KJ[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.LethalPursuer");
		return ptr;
	}



	void Server_ActivatePerk();
	void Local_OnIntroCompleted();
};

// Class TheK24.OpenSupplyCrateInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class UOpenSupplyCrateInteraction : public UChargeableInteractionDefinition
{
public:
	class USupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x0680(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _interactionWasComplete;                                   // 0x0688(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_37GC[0x7];                                     // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                     // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_43Z5[0x8];                                     // 0x0698(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.OpenSupplyCrateInteraction");
		return ptr;
	}



};

// Class TheK24.Resurgence
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UResurgence : public Uperk
{
public:
	float                                              _healRegainPercentage[0x3];                                // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1TQ3[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.Resurgence");
		return ptr;
	}



};

// Class TheK24.RookieSpirit
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class URookieSpirit : public Uperk
{
public:
	int                                                _numberOfGreatSkillChecksOnGeneratorRepair;                // 0x03A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numberOfGeneratorRepairGreatSkillChecksRequired[0x3];     // 0x03AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.RookieSpirit");
		return ptr;
	}



	void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
	void HandleGeneratorIsDamagedChanged(class Ugenerator* generator, class UdbdPlayer* player);
};

// Class TheK24.SerumOutlineUpdateStrategy
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class USerumOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.SerumOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.SupplyCrateAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class USupplyCrateAnimInstance : public USleepingAnimInstance
{
public:
	class USupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOpen;                                                   // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingPriedOpen;                                         // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAutoClosing;                                            // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M9HL[0x5];                                     // 0x028B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.SupplyCrateAnimInstance");
		return ptr;
	}



};

// Class TheK24.SupplyCrateInteractable
// 0x0118 (FullSize[0x0428] - InheritedSize[0x0310])
class USupplyCrateInteractable : public Uinteractable
{
public:
	unsigned char                                      UnknownData_9F2M[0x38];                                    // 0x0310(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _chargeableComponent;                                      // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _contamainationSerumCollectable;                           // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _openInteractionSecondsToCharge;                           // 0x0358(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Ucollectable*                                _itemInSupplyCrate;                                        // 0x0380(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _itemSpawnPoint;                                           // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _itemDropPoint;                                            // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isOpen;                                                   // 0x0398(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isAutoClosing;                                            // 0x0399(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RN04[0x3E];                                    // 0x039A(0x003E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _crateSelfClosingTime;                                     // 0x03D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _crateAutoCloseAnimationTime;                              // 0x0400(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.SupplyCrateInteractable");
		return ptr;
	}



	void OnRep_IsOpen();
	void OnRep_IsAutoClosing();
};

// Class TheK24.SupplyCrateOutlineUpdateStrategy
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class USupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.SupplyCrateOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.SurvivorContaminationComponent
// 0x0128 (FullSize[0x01E0] - InheritedSize[0x00B8])
class USurvivorContaminationComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_EE0Y[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isContaminated;                                           // 0x00D0(0x0030) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _injectSerumChargeable;                                    // 0x0100(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _injectSerumSecondsToCharge;                               // 0x0108(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _contaminationHinderedSeconds;                             // 0x0130(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _contaminationHinderedValue;                               // 0x01B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DP7M[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.SurvivorContaminationComponent");
		return ptr;
	}



	void Server_SetContaminatedValue(bool Value, TheK24_EContaminator contaminator);
	void OnRep_IsContaminated();
	void OnRep_InjectionSerumInteraction();
	void OnPlayerInteractableSet();
	void OnContaminationCured_Cosmetic();
	void OnContaminated_SFX_Stinger_Cosmetic();
	void OnContaminated_Cosmetic(TheK24_EContaminator contaminator);
	void Multicast_OnContaminated_Cosmetic(TheK24_EContaminator contaminator);
	bool IsContaminated();
};

// Class TheK24.TheK24Utilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTheK24Utilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.TheK24Utilities");
		return ptr;
	}



};

// Class TheK24.ZombieAcquirePatrolAreaBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieAcquirePatrolAreaBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAcquirePatrolAreaBTService");
		return ptr;
	}



};

// Class TheK24.ZombieAcquireTargetBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieAcquireTargetBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAcquireTargetBTService");
		return ptr;
	}



};

// Class TheK24.ZombieAIController
// 0x02E0 (FullSize[0x0620] - InheritedSize[0x0340])
class UZombieAIController : public UaiController
{
public:
	unsigned char                                      UnknownData_ME0G[0x18];                                    // 0x0340(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               _zombieBehaviorTree;                                       // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAiPerceptionComponent*                      _aiPerceptionComponent;                                    // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N6YQ[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _survivorInVision;                                         // 0x0370(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UcamperPlayer*                               _chaseTargetSurvivor;                                      // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _goToLocation;                                             // 0x0388(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NK6D[0xC];                                     // 0x0394(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _survivorsInAttackDetector;                                // 0x03A0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackHitTime;                                      // 0x03B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackOpenTime;                                     // 0x03D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAnimSpawnTime;                                      // 0x0400(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAnimDyingTime;                                      // 0x0428(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieSightRadius;                                        // 0x0450(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieLoseSightRadius;                                    // 0x04D0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieVisionHalfAngle;                                    // 0x0550(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieFallSmashTime;                                      // 0x05D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackCooldownTime;                                 // 0x05F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAIController");
		return ptr;
	}



	void OnSlasherSet(class UslasherPlayer* slasher);
	void Authority_OnTargetPerceptionUpdated(class Uactor* actor, const struct FAIStimulus& stimulus);
};

// Class TheK24.ZombieAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UZombieAnimInstance : public UanimInstance
{
public:
	float                                              _speed;                                                    // 0x0270(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK24_EZombieState                                _zombieState;                                              // 0x0274(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7C2Z[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UZombieCharacter*                            _zombieCharacter;                                          // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFalling;                                                // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK24_EZombieGender                               _zombieGender;                                             // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EV95[0xE];                                     // 0x0282(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAnimInstance");
		return ptr;
	}



};

// Class TheK24.ZombieAttackSurvivorBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieAttackSurvivorBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAttackSurvivorBTTask");
		return ptr;
	}



};

// Class TheK24.ZombieAttractedByGeneratorBTService
// 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase
{
public:
	float                                              _genRepairingHearingRange;                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VLHP[0x2C];                                    // 0x00A4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieAttractedByGeneratorBTService");
		return ptr;
	}



	void OnInRangeChanged(bool inRange, class Ugenerator* generator);
};

// Class TheK24.ZombieBlindableComponent
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UZombieBlindableComponent : public UBlindableBaseComponent
{
public:
	class UGameplayTagContainerComponent*              _ownerObjectState;                                         // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieBlindableComponent");
		return ptr;
	}



};

// Class TheK24.ZombieBlindingFXComponent
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UZombieBlindingFXComponent : public UKillerBlindingFXComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieBlindingFXComponent");
		return ptr;
	}



};

// Class TheK24.ZombieCharacter
// 0x0320 (FullSize[0x07F0] - InheritedSize[0x04D0])
class UZombieCharacter : public Ucharacter
{
public:
	unsigned char                                      UnknownData_K69C[0x10];                                    // 0x04D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _zombieWalkSpeed;                                          // 0x04E0(0x0080) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CAI5[0x8];                                     // 0x0560(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            _zombieAttackDetector;                                     // 0x0570(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _attackDamageZone;                                         // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK24_EZombieState                                _zombieState;                                              // 0x0580(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NVFI[0x3F];                                    // 0x0581(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _zombieRespawnTimeKilledBySlasher;                         // 0x05C0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieRespawnTimeKilledBySurvivor;                        // 0x0640(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7VWF[0x10];                                    // 0x06C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  _respawnPositionBehindGate;                                // 0x06D0(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TheK24_EZombieGender                               _zombieGender;                                             // 0x0700(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0CN6[0x7];                                     // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               _femaleSkeletalMesh;                                       // 0x0708(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _audioSwitchState;                                         // 0x0710(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZombieBlindableComponent*                   _blindableComponent;                                       // 0x0720(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _blindingChargeableComponent;                              // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x0730(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashLightableComponent*                    _flashLightableComponent;                                  // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J7Z2[0x38];                                    // 0x0740(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _zombieStunBaseTime;                                       // 0x0778(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayTagContainerComponent*              _objectState;                                              // 0x07A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YJTZ[0x8];                                     // 0x07A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterPositionRecorderComponent*         _positionRecorder;                                         // 0x07B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeMovementComponent*             _authoritativeMovementComponent;                           // 0x07B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOtherCharactersVerticalCollisionsHandler*   _otherCharactersVerticalCollisionsHandler;                 // 0x07C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Uactor*>                              _ignoreActors;                                             // 0x07C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QDKF[0x4];                                     // 0x07D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _zombieStunnedCapsuleRadius;                               // 0x07DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minFallHeight;                                            // 0x07E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y8OZ[0x8];                                     // 0x07E4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _afterInAirAttackCooldown;                                 // 0x07EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieCharacter");
		return ptr;
	}



	void ZombieKilledByKiller_Cosmetic(DBDSharedTypes_EAttackType AttackType);
	void SetCharacterActive_Cosmetic(bool Value);
	void OnZombieStateChanged_Cosmetic(TheK24_EZombieState zombieState);
	void OnSlasherSet(class UslasherPlayer* slasher);
	void OnRep_ZombieState(TheK24_EZombieState PreviousState);
	void OnRep_ZombieGender();
	void OnFemaleGenderSet_Cosmetic();
	void OnEndOverlapZombieAttackDetector(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void OnBeginOverlapZombieAttackDetector(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
	void Multicast_ZombieKilledByKillerCosmetic(DBDSharedTypes_EAttackType AttackType);
	TheK24_EZombieGender GetZombieGender();
	class UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler();
	class UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();
	struct FString GetAudioSwitchState();
	void Authority_OnZombieStateChanged(TheK24_EZombieState zombieState);
	void Authority_OnFlashlightRemoved(class UFlashlightComponent* FlashLight);
	void Authority_OnFlashlightAdded(class UFlashlightComponent* FlashLight);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
	void Authority_DeactivateZombieAndStartRespawnTimer();
};

// Class TheK24.ZombieChaseStateBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieChaseStateBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieChaseStateBTService");
		return ptr;
	}



};

// Class TheK24.ZombieChaseSurvivorTargetBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieChaseSurvivorTargetBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieChaseSurvivorTargetBTTask");
		return ptr;
	}



};

// Class TheK24.ZombieCustomizationComponent
// 0x0008 (FullSize[0x0218] - InheritedSize[0x0210])
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
{
public:
	TWeakObjectPtr<class UcamperPlayer>                _survivorSource;                                           // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieCustomizationComponent");
		return ptr;
	}



	void Multicast_SetZombieCustomization(class UcamperPlayer* Survivor);
};

// Class TheK24.ZombieEscapeDoorPointsActor
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UZombieEscapeDoorPointsActor : public Uactor
{
public:
	TArray<class UArrowComponent*>                     _availablePoints;                                          // 0x0230(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieEscapeDoorPointsActor");
		return ptr;
	}



};

// Class TheK24.ZombieEvaluateEnterChaseBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieEvaluateEnterChaseBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieEvaluateEnterChaseBTService");
		return ptr;
	}



};

// Class TheK24.ZombieEvaluteEnterAttackBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieEvaluteEnterAttackBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieEvaluteEnterAttackBTService");
		return ptr;
	}



};

// Class TheK24.ZombieFallDetectorComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UZombieFallDetectorComponent : public UactorComponent
{
public:
	struct FDBDTunableRowHandle                        _zombieDistanceConsideredSmashFall;                        // 0x00B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8F68[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieFallDetectorComponent");
		return ptr;
	}



	void Authority_OnMovementModeChange(class Ucharacter* character, TEnumAsByte<Engine_EMovementMode> prevMovementMode, unsigned char previousCustomMode);
};

// Class TheK24.ZombieOutlineUpdateStrategy
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:
	class UZombieCharacter*                            _zombieCharacter;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.ZombieResurrector
// 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
class UZombieResurrector : public UactorComponent
{
public:
	unsigned char                                      UnknownData_53TW[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerLevelToSpawnZombie;                                  // 0x00D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IW6H[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UZombieCharacter*>                    _delayedSpawnZombies;                                      // 0x0108(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4XVG[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieResurrector");
		return ptr;
	}



	void Authority_OnKillerPowerLevelChanged(int powerLevel);
};

// Class TheK24.ZombieRotateTowardsTargetBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieRotateTowardsTargetBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieRotateTowardsTargetBTTask");
		return ptr;
	}



};

// Class TheK24.ZombiesInterestEventManager
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UZombiesInterestEventManager : public UactorComponent
{
public:
	unsigned char                                      UnknownData_FCS0[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FgameplayTag>                        _zombieInterestEvents;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_554E[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombiesInterestEventManager");
		return ptr;
	}



	void Authority_OnLoudNoiseTriggered(class Uactor* originator, class Uactor* instigatingActor, const struct Fvector& location, bool shouldTrack, float* audibleRange, bool isQuickAction);
};

// Class TheK24.ZombiesManagement
// 0x00B8 (FullSize[0x02E8] - InheritedSize[0x0230])
class UZombiesManagement : public Uactor
{
public:
	unsigned char                                      UnknownData_RIRW[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativeActorPoolComponent*            _zombiePool;                                               // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZombiesPatrolAreaManager*                   _zombiesPatrolAreaManager;                                 // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UZombieCharacter*>                    _spawnedZombiesArray;                                      // 0x0248(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_03JN[0x30];                                    // 0x0258(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _firstZombieSpawnTime;                                     // 0x0288(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _numberOfZombieToSpawnAtStart;                             // 0x02B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UZombieEscapeDoorPointsActor*>        _zombieEscapeDoorPoints;                                   // 0x02D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombiesManagement");
		return ptr;
	}



	void Authority_OnIntroComplete();
};

// Class TheK24.ZombiesPatrolAreaManager
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UZombiesPatrolAreaManager : public UactorComponent
{
public:
	TArray<class UMeatHook*>                           _availablePatrolAreas;                                     // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMeatHook*>                           _usedPatrolAreas;                                          // 0x00C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maxDistanceBetweenMeatHookAndPlayers;                     // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RTIP[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombiesPatrolAreaManager");
		return ptr;
	}



};

// Class TheK24.ZombieStunnableComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UZombieStunnableComponent : public UstunnableComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK24.ZombieStunnableComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
