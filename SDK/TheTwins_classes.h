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

// Class TheTwins.Addon_K22Power_11
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UAddon_K22Power_11 : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_11");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_12
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UAddon_K22Power_12 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _increaseRemoveTwinTime;                                   // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N1OR[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_12");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_15
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_K22Power_15 : public UOnEventBaseAddon
{
public:
	float                                              _brokenDuration;                                           // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MZP6[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_15");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_17
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UAddon_K22Power_17 : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_17");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_18
// 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
class UAddon_K22Power_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	unsigned char                                      UnknownData_0APW[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _lingerDuration;                                           // 0x0288(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_18");
		return ptr;
	}



	void Authority_OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.Addon_K22Power_19
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_K22Power_19 : public UOnEventBaseAddon
{
public:
	float                                              _auraRevealedDuration;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WRF0[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_19");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_20
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_K22Power_20 : public UOnEventBaseAddon
{
public:
	float                                              _undetectableDuration;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0J3M[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_20");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_21
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_K22Power_21 : public UOnEventBaseAddon
{
public:
	float                                              _exposedDuration;                                          // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UVVI[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_21");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_9
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UAddon_K22Power_9 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _increaseDestroyTwinTime;                                  // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2GIG[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_9");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_10
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_K22Power_10 : public UOnEventBaseAddon
{
public:
	float                                              _blindnessDuration;                                        // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RSWZ[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Addon_K22Power_10");
		return ptr;
	}



};

// Class TheTwins.Appraisal
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UAppraisal : public Uperk
{
public:
	float                                              _chestSearchSpeedMultiplier[0x3];                          // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O5ED[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Appraisal");
		return ptr;
	}



};

// Class TheTwins.PossessPlayer
// 0x0030 (FullSize[0x06B0] - InheritedSize[0x0680])
class UPossessPlayer : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _possessThePlayerMaxCharge;                                // 0x0680(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z6WG[0x8];                                     // 0x06A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PossessPlayer");
		return ptr;
	}



	void Cosmetic_OnPossessStart(class UdbdPlayer* player);
	void Cosmetic_OnPossessCancelled(class UdbdPlayer* player);
};

// Class TheTwins.PossessTheConjoinedTwin
// 0x0060 (FullSize[0x0710] - InheritedSize[0x06B0])
class UPossessTheConjoinedTwin : public UPossessPlayer
{
public:
	unsigned char                                      UnknownData_KDCQ[0x60];                                    // 0x06B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PossessTheConjoinedTwin");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
	void OnPowerCollected(class UdbdPlayer* collector);
};

// Class TheTwins.AutoPossessTheConjoinedTwin
// 0x0000 (FullSize[0x0710] - InheritedSize[0x0710])
class UAutoPossessTheConjoinedTwin : public UPossessTheConjoinedTwin
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.AutoPossessTheConjoinedTwin");
		return ptr;
	}



};

// Class TheTwins.BaseTwinInspectLocker
// 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
class UBaseTwinInspectLocker : public UBaseLockerInteraction
{
public:
	struct FDBDTunableRowHandle                        _inspectInteractionTime;                                   // 0x0560(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IWNQ[0x8];                                     // 0x0588(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.BaseTwinInspectLocker");
		return ptr;
	}



};

// Class TheTwins.BeingPossessedInteraction
// 0x0080 (FullSize[0x05D8] - InheritedSize[0x0558])
class UBeingPossessedInteraction : public UinteractionDefinition
{
public:
	struct FTunableStat                                _beingPossessedMaxCharge;                                  // 0x0558(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.BeingPossessedInteraction");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class TheTwins.BrotherBlindFlashlightableLightingStrategy
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UBrotherBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
public:
	unsigned char                                      UnknownData_MO0Y[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.BrotherBlindFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class TheTwins.ChargeTwinJumpInteraction
// 0x0150 (FullSize[0x07D0] - InheritedSize[0x0680])
class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_OSCW[0x48];                                    // 0x0680(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _chargeJumpMaxCharge;                                      // 0x06C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMax;                                  // 0x06F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMin;                                  // 0x0718(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FEVB[0x28];                                    // 0x0740(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _cancelCooldownTime;                                       // 0x0768(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LSSE[0x40];                                    // 0x0790(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ChargeTwinJumpInteraction");
		return ptr;
	}



	void Cosmetic_OnJumpReadyChanged(class UdbdPlayer* twin, bool ready);
};

// Class TheTwins.ConjoinedTwin
// 0x0178 (FullSize[0x11B0] - InheritedSize[0x1038])
class UConjoinedTwin : public UdbdPlayer
{
public:
	class URangeToActorsTrackerComponent*              _restrictedPossessionAreaTracker;                          // 0x1038(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinOutlineUpdateStrategy*                  _twinOutlineUpdateStrategy;                                // 0x1040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkComponent*                                _twinLullabyAudioComponent;                                // 0x1048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKillerBlindingFXComponent*                  _twinBlindingFX;                                           // 0x1050(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCustomizedAudioComponent*                   _customizedAudio;                                          // 0x1058(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDAttackerComponent*                       _attackerComponent;                                        // 0x1060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxWalkSpeed;                                             // 0x1068(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitValidatorComponent*                      _hitValidator;                                             // 0x1090(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitValidatorConfigurator*                   _hitValidationConfigurator;                                // 0x1098(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gravityScale;                                             // 0x10A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimationMontageSlave*                      _animationFollower;                                        // 0x10C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ATIR[0x18];                                    // 0x10D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _revealDurationOnAttached;                                 // 0x10E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinFirstPersonViewComponent*               _firstPersonViewComponent;                                 // 0x1110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashLightableComponent*                    _eyesFlashlightable;                                       // 0x1118(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlindFlashlightTargetFXComponent*           _blindFlashlightTargetFXComponent;                         // 0x1120(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x1128(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BPLZ[0x8];                                     // 0x1130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFastTimer                                  _flashlightBlindEvasionScoreTimer;                         // 0x1138(0x0030) (Transient, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _flashlightEvasionScoreCooldown;                           // 0x1168(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinPossessNegationEffectComponent*         _twinPossessNegationEffectComponent;                       // 0x1190(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3RYZ[0x18];                                    // 0x1198(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ConjoinedTwin");
		return ptr;
	}



	void Server_SendAttackInput(bool pressed);
	void OnFinishedPlayingEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
};

// Class TheTwins.ConjoinedTwinAnimInstance
// 0x00B8 (FullSize[0x05A0] - InheritedSize[0x04E8])
class UConjoinedTwinAnimInstance : public UPlayerAnimInstance
{
public:
	class UConjoinedTwin*                              _owningConjoinedTwin;                                      // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _firstPersonView;                                          // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WK2Q[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _forwardVelocity;                                          // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralVelocity;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               _interactionType;                                          // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInAir;                                                  // 0x04FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x04FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3ECA[0x1];                                     // 0x04FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _idleTime;                                                 // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttacking;                                              // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9W3E[0x3];                                     // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDAttackerComponent*                       _attackerComponent;                                        // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinAttachmentComponent*                    _twinAttachmentComponent;                                  // 0x0510(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinLockerBlockerComponent*                 _twinLockerBlockerComponent;                               // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animYaw;                                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animPitch;                                                // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpectator;                                              // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2Z40[0x3];                                     // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _animDirection;                                            // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animSpeed;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToSister;                                       // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToSurvivor;                                     // 0x0535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToFemaleSurvivor;                               // 0x0536(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChargingTwinJump;                                       // 0x0537(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isPossessing;                                             // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isWakingUpFromPossess;                                    // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDormant;                                                // 0x053A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingAutoPossessedAfterRelease;                         // 0x053B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToLocker;                                       // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EAttackSubstate                     _attackState;                                              // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AZN6[0x62];                                    // 0x053E(0x0062) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ConjoinedTwinAnimInstance");
		return ptr;
	}



	class UConjoinedTwin* GetOwningConjoinedTwin();
};

// Class TheTwins.ConjoinedTwinInteractable
// 0x0020 (FullSize[0x0330] - InheritedSize[0x0310])
class UConjoinedTwinInteractable : public UPlayerInteractable
{
public:
	class UchargeableComponent*                        _possessKillerChargeable;                                  // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UchargeableComponent*                        _chargeTwinJumpChargeable;                                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UchargeableComponent*                        _removeTwinChargeable;                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UchargeableComponent*                        _destroyTwinChargeable;                                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ConjoinedTwinInteractable");
		return ptr;
	}



};

// Class TheTwins.ConjoinedTwinStateMachine
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UConjoinedTwinStateMachine : public UPlayerStateMachine
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ConjoinedTwinStateMachine");
		return ptr;
	}



};

// Class TheTwins.CoupDeGrace
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UCoupDeGrace : public Uperk
{
public:
	float                                              _lungeAttackAddDurationMultiplier[0x3];                    // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KBFI[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.CoupDeGrace");
		return ptr;
	}



};

// Class TheTwins.Deception
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class UDeception : public Uperk
{
public:
	float                                              _noScratchMarksDuration[0x3];                              // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UstatusEffect*                               _statusEffect;                                             // 0x03C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2TQJ[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UManualIconStrategy*                         _iconStrategy;                                             // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VBJ4[0x8];                                     // 0x03D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Deception");
		return ptr;
	}



	void OnOwningPlayerFakedEnteringLockerCosmetic();
};

// Class TheTwins.DestroyTwin
// 0x0070 (FullSize[0x06F0] - InheritedSize[0x0680])
class UDestroyTwin : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_ZJP8[0x40];                                    // 0x0680(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _destroyTwinMaxCharge;                                     // 0x06C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UF1L[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.DestroyTwin");
		return ptr;
	}



};

// Class TheTwins.Hoarder
// 0x0050 (FullSize[0x03F8] - InheritedSize[0x03A8])
class UHoarder : public Uperk
{
public:
	unsigned char                                      UnknownData_O0X1[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USearchable*>                         _chests;                                                   // 0x03B0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _camperInteractItemPickupRevealRange[0x3];                 // 0x03C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _extraChestsSpawned[0x3];                                  // 0x03CC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _bubbleIndicatorLifetime[0x3];                             // 0x03D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _showUniqueChestVisualPerState;                            // 0x03E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LL4D[0x13];                                    // 0x03E5(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Hoarder");
		return ptr;
	}



	void Local_ThrowBubbleIndicator(TheTwins_EPerkInteractionObjectType camperInteractionType, class Uactor* objectActor, class UcamperPlayer* interactingCamperPlayer);
	float GetBubbleIndicatorLifetime();
};

// Class TheTwins.IsTwinRecallReady
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UIsTwinRecallReady : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_GOOF[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.IsTwinRecallReady");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class TheTwins.K22AchievementTagTeam
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22AchievementTagTeam : public UactorComponent
{
public:
	unsigned char                                      UnknownData_B92E[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.K22AchievementTagTeam");
		return ptr;
	}



};

// Class TheTwins.K22Power
// 0x0168 (FullSize[0x0600] - InheritedSize[0x0498])
class UK22Power : public Ucollectable
{
public:
	unsigned char                                      UnknownData_GYTX[0x18];                                    // 0x0498(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _releaseConjoinedTwinChargeable;                           // 0x04B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UchargeableComponent*                        _possessConjoinedTwinChargeable;                           // 0x04B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4UXD[0x18];                                    // 0x04C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConjoinedTwin*                              _conjoinedTwin;                                            // 0x04D8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UConjoinedTwin*                              _conjoinedTwinParadise;                                    // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _powerCharge;                                              // 0x04E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;                      // 0x04F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerMaxCharge;                                           // 0x04F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _conjoinedTwinClass;                                       // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6086[0x18];                                    // 0x0528(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerRechargeRate;                                        // 0x0540(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeBeforeAutoDestroy;                                    // 0x0568(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeBeforeRecallAvailable;                                // 0x0590(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_69V1[0x48];                                    // 0x05B8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.K22Power");
		return ptr;
	}



	void OnRep_ConjoinedTwin();
	void OnPowerChargeEmpty();
	void OnFirstAttachmentToSister();
	class UConjoinedTwin* GetConjoinedTwin();
	void Authority_OnPossessTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
	void Authority_OnDestroyTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
};

// Class TheTwins.K22PowerChargePresentationItemProgressComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VL3P[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.K22PowerChargePresentationItemProgressComponent");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.K22ScoreComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22ScoreComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_MMYY[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.K22ScoreComponent");
		return ptr;
	}



};

// Class TheTwins.KillerBeingPossessedInteraction
// 0x0008 (FullSize[0x05E0] - InheritedSize[0x05D8])
class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction
{
public:
	class UCurveFloat*                                 _wakeUpSpeedCurve;                                         // 0x05D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.KillerBeingPossessedInteraction");
		return ptr;
	}



};

// Class TheTwins.PossessionComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UPossessionComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_6XSQ[0x61];                                    // 0x00B8(0x0061) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _startPossessed;                                           // 0x0119(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OXD1[0x6];                                     // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UaiController*                               _emptyController;                                          // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQ4P[0x18];                                    // 0x0128(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PossessionComponent");
		return ptr;
	}



	void Server_StartPossessionOf(class UdbdPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);
	void Server_NotifyPossessionDone();
	void OnLevelReadyToPlay();
	void Multicast_StartPossessionOf(class UdbdPlayer* playerToPossess);
	void Multicast_NotifyPossessionDone();
	bool IsPossessed();
	bool IsDormant();
	void CosmeticLocal_OnUncontrolled(class UdbdPlayer* player);
	void CosmeticLocal_OnControlled(class UdbdPlayer* player);
	void Cosmetic_OnControlledChanged(class UdbdPlayer* player, bool isControlled);
	void Client_StartStateMachineDriverChangeProcess();
};

// Class TheTwins.KillerPossessionComponent
// 0x0060 (FullSize[0x01A0] - InheritedSize[0x0140])
class UKillerPossessionComponent : public UPossessionComponent
{
public:
	bool                                               _shouldDeactivateCollisionsWithSurvivors;                  // 0x0140(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QV8O[0x37];                                    // 0x0141(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _timeBeforeCollisionsDeactivation;                         // 0x0178(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.KillerPossessionComponent");
		return ptr;
	}



	void OnRep_ShouldDeactivateCollisionsWithSurvivors();
};

// Class TheTwins.PossessNegationEffectComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPossessNegationEffectComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    PlayCantPossessSound;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0EV[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PossessNegationEffectComponent");
		return ptr;
	}



	void PlayCantPossessSound__DelegateSignature();
	void OnLevelReadyToPlay();
};

// Class TheTwins.KillerPossessNegationEffectComponent
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
public:
	unsigned char                                      UnknownData_TV08[0x20];                                    // 0x00D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.KillerPossessNegationEffectComponent");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.Oppression
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UOppression : public Uperk
{
public:
	int                                                _nbGeneratorsAffectedByPerk[0x3];                          // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _perkCooldown[0x3];                                        // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.Oppression");
		return ptr;
	}



};

// Class TheTwins.PossessTheKiller
// 0x0030 (FullSize[0x06E0] - InheritedSize[0x06B0])
class UPossessTheKiller : public UPossessPlayer
{
public:
	unsigned char                                      UnknownData_6N7V[0x30];                                    // 0x06B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PossessTheKiller");
		return ptr;
	}



};

// Class TheTwins.PowerStruggle
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UPowerStruggle : public Uperk
{
public:
	float                                              _wigglePercentToActivatePerk[0x3];                         // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZY71[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PowerStruggle");
		return ptr;
	}



};

// Class TheTwins.PushTwinOnLockerInteraction
// 0x0060 (FullSize[0x06E0] - InheritedSize[0x0680])
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
{
public:
	class UchargeableComponent*                        _pushTwinOnLockerChargeable;                               // 0x0680(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _pushTwinOnLockerMaxCharge;                                // 0x0688(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YCMX[0x30];                                    // 0x06B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.PushTwinOnLockerInteraction");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
	void OnRep_PushTwinOnLockerChargeable();
	void Authority_OnSurvivorInLockerChanged(class UdbdPlayer* oldSurvivor, class UdbdPlayer* newSurvivor);
};

// Class TheTwins.RecallTwin
// 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
class URecallTwin : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_XYRC[0x8];                                     // 0x0558(0x0008) Fix Super Size
	unsigned char                                      UnknownData_Q30G[0x20];                                    // 0x0560(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.RecallTwin");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.ReleaseConjoinedTwin
// 0x0170 (FullSize[0x07F0] - InheritedSize[0x0680])
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _releaseMaxCharge;                                         // 0x0680(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _releaseExitTime;                                          // 0x06A8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H4LT[0x34];                                    // 0x0728(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _releaseAnimationWentToTheEnd;                             // 0x075C(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GQCQ[0x93];                                    // 0x075D(0x0093) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.ReleaseConjoinedTwin");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
	void OnRep_ReleaseAnimationWentToTheEnd();
	void OnPowerCollected(class UdbdPlayer* collector);
	void OnKillerStunned(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void Cosmetic_OnReleaseTwinInteractionUpdateStart(class UdbdPlayer* Sister, class UConjoinedTwin* Brother);
	void Cosmetic_OnReleaseTwinInteractionUpdate(class UdbdPlayer* Sister, class UConjoinedTwin* Brother, float deltaTime);
	void Cosmetic_OnReleaseChargeComplete(class UdbdPlayer* Sister, class UConjoinedTwin* Brother);
	void Cosmetic_OnReleaseCancelled(class UdbdPlayer* Sister, class UConjoinedTwin* Brother);
};

// Class TheTwins.RemoveTwin
// 0x0090 (FullSize[0x0710] - InheritedSize[0x0680])
class URemoveTwin : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_37OT[0x30];                                    // 0x0680(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _removeTwinMaxCharge;                                      // 0x06B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _removeTwinExitTime;                                       // 0x06D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _brotherRemoveDistanceFromSurvivor;                        // 0x0700(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_71UU[0xC];                                     // 0x0704(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.RemoveTwin");
		return ptr;
	}



	void OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted, class UdbdPlayer* destroyingPlayer);
};

// Class TheTwins.SisterBlindFlashlightableLightingStrategy
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
public:
	unsigned char                                      UnknownData_CGUQ[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.SisterBlindFlashlightableLightingStrategy");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.TheTwinsCheatComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTheTwinsCheatComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TheTwinsCheatComponent");
		return ptr;
	}



	void Multicast_TrySendThePlayerBackInKiller(class UtwinPossessionComponent* twinPossessionComponent);
	void DBD_TwinDestroyTheTwin();
};

// Class TheTwins.TwinAOELingeringStatusEffect
// 0x00A0 (FullSize[0x03C8] - InheritedSize[0x0328])
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FTunableStat                                _shriekingRange;                                           // 0x0328(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_15JE[0x20];                                    // 0x03A8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinAOELingeringStatusEffect");
		return ptr;
	}



	float GetShriekingRange();
	void Authority_OnInRangeChanged(bool inRange);
};

// Class TheTwins.TwinAttachmentComponent
// 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
class UTwinAttachmentComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_BKG6[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UdbdPlayer*                                  _attachedPlayer;                                           // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T4UN[0x58];                                    // 0x0108(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _gateBlockerStatusEffect;                                  // 0x0160(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ERTX[0x12];                                    // 0x0168(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _hasBeenDetachedBySurvivorDamageChanged;                   // 0x017A(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OYX2[0x5];                                     // 0x017B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _cantEscapeByGateLingerDuration;                           // 0x0180(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UdbdPlayer*, struct FFastTimer>         _escapeBlockerLingerTimers;                                // 0x01A8(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinAttachmentComponent");
		return ptr;
	}



	void OnRep_AttachedPlayer(class UdbdPlayer* oldAttachedPlayer);
	void OnMoriMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted);
	void OnLevelReadyToPlay();
	void OnImmobilizedStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
	void OnAttachedSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState);
	void Multicast_QuickDestroyTwin();
	bool IsAttachedToSurvivor();
	bool IsAttachedToSister();
	void Cosmetic_OnTwinDetachedFromSurvivor(class UdbdPlayer* Survivor, class UdbdPlayer* Brother);
	void Cosmetic_OnTwinDetachedFromSister(class UdbdPlayer* Sister, class UdbdPlayer* Brother);
	void Cosmetic_OnTwinAttachedToSurvivor(class UdbdPlayer* Survivor, class UdbdPlayer* Brother);
	void Cosmetic_OnTwinAttachedToSister(class UdbdPlayer* Sister, class UdbdPlayer* Brother, bool isFirstAttachment);
	void Authority_OnRemoveTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
};

// Class TheTwins.TwinBaseAddon
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UTwinBaseAddon : public UItemAddon
{
public:
	struct FName                                       _statusEffectID;                                           // 0x0278(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _customParam;                                              // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinBaseAddon");
		return ptr;
	}



	void Authority_OnTwinSet(class UConjoinedTwin* twin);
};

// Class TheTwins.TwinBaseKillerInstinctEffect
// 0x0148 (FullSize[0x0468] - InheritedSize[0x0320])
class UTwinBaseKillerInstinctEffect : public UstatusEffect
{
public:
	struct FTunableStat                                _lullabyRange;                                             // 0x0320(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _lingerDuration;                                           // 0x03A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KZCB[0xA0];                                    // 0x03C8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinBaseKillerInstinctEffect");
		return ptr;
	}



	float GetLullabyRange();
	void Authority_OnInRangeChanged(bool inRange);
};

// Class TheTwins.TwinBeingPossessedInteraction
// 0x0008 (FullSize[0x05E0] - InheritedSize[0x05D8])
class UTwinBeingPossessedInteraction : public UBeingPossessedInteraction
{
public:
	unsigned char                                      UnknownData_OM7U[0x8];                                     // 0x05D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinBeingPossessedInteraction");
		return ptr;
	}



};

// Class TheTwins.TwinCharacterMovementComponent
// 0x0014 (FullSize[0x08E0] - InheritedSize[0x08CC])
class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData_A98G[0x4];                                     // 0x08CC(0x0004) Fix Super Size
	unsigned char                                      UnknownData_UVDK[0x10];                                    // 0x08D0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinCharacterMovementComponent");
		return ptr;
	}



};

// Class TheTwins.TwinDestructionComponent
// 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
class UTwinDestructionComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_AG43[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _huskClass;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                                  _dyingTransform;                                           // 0x00F0(0x0030) (Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_92WP[0x18];                                    // 0x0120(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _diedFromSurvivorRemovingTwin;                             // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N2TG[0x57];                                    // 0x0139(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _dyingFromSurvivorTranslation;                             // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3YMK[0xC];                                     // 0x0194(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinDestructionComponent");
		return ptr;
	}



	void OnTwinQuickDestroy(class UConjoinedTwin* owningTwin);
	void OnDyingMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted);
	void Cosmetic_OnTwinDestroyedFromSurvivorRemove(class UConjoinedTwin* owningTwin);
	void Cosmetic_OnTwinDestroyedFromKick(class UConjoinedTwin* owningTwin);
	void Authority_OnTwinQuickDestroyOver();
};

// Class TheTwins.TwinFirstPersonViewComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UTwinFirstPersonViewComponent : public UFirstPersonViewComponent
{
public:
	unsigned char                                      UnknownData_LCT1[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinFirstPersonViewComponent");
		return ptr;
	}



};

// Class TheTwins.TwinHuskAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UTwinHuskAnimInstance : public UanimInstance
{
public:
	bool                                               _isDeadFromSurvivorBack;                                   // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_INFI[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Upawn*                                       _owningPawn;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinHuskStateComponent*                     _twinHuskStateComponent;                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ANLL[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinHuskAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinHuskStateComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTwinHuskStateComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_KOVD[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinHuskStateComponent");
		return ptr;
	}



	bool IsDeadFromSurvivorBack();
};

// Class TheTwins.TwinInspectEmptyLocker
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class UTwinInspectEmptyLocker : public UBaseTwinInspectLocker
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinInspectEmptyLocker");
		return ptr;
	}



};

// Class TheTwins.TwinInspectOccupiedLocker
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class UTwinInspectOccupiedLocker : public UBaseTwinInspectLocker
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinInspectOccupiedLocker");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttack
// 0x00F0 (FullSize[0x0450] - InheritedSize[0x0360])
class UTwinJumpAttack : public UPounceAttack
{
public:
	struct FDBDTunableRowHandle                        _jumpVelocity;                                             // 0x0360(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _jumpAngleCurve;                                           // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F0T2[0x30];                                    // 0x0390(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _upDownObstructionAnglePrecision;                          // 0x03C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _leftRightObstructionAnglePrecision;                       // 0x03E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _authorizedLandingHeight;                                  // 0x0410(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9X7G[0x9];                                     // 0x0438(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _shouldTwinHaveJumpObjectType;                             // 0x0441(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N7EC[0xE];                                     // 0x0442(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAttack");
		return ptr;
	}



	void Server_StopJump();
	void Server_OnJumpStartTwin();
	void OnRep_ShouldTwinHaveJumpObjectType();
	void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);
	void Multicast_DestroyTwinOnWrongLanding();
	void Multicast_AttachToSurvivor(class UdbdPlayer* survivorToAttachTo);
	void Cosmetic_OnJumpStarted(class UConjoinedTwin* owningTwin);
	void Cosmetic_OnJumpObstructed(class UConjoinedTwin* owningTwin, class UphysicalMaterial* physicalMaterial, const struct Fvector& position, const struct Fvector& normal);
	void Cosmetic_OnJumpLanded(class UConjoinedTwin* owningTwin);
	void Cosmetic_OnJumpCooldownChanged(bool IsInJumpCooldown, class UConjoinedTwin* owningTwin);
	void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class UConjoinedTwin* twin);
	void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);
};

// Class TheTwins.TwinJumpAttackOpenSubstate
// 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_409Q[0xA0];                                    // 0x0130(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAttackOpenSubstate");
		return ptr;
	}



	void Local_OnTwinOverlapEnter(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& hit);
	void Local_OnTwinCapsuleHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit);
};

// Class TheTwins.TwinJumpAttackSuccessSubstate
// 0x0050 (FullSize[0x0168] - InheritedSize[0x0118])
class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	struct FDBDTunableRowHandle                        _jumpSucceedAttachedCooldownTime;                          // 0x0118(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _jumpSucceedNotAttachedCooldownTime;                       // 0x0140(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UTwinJumpAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAttackMissSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UTwinJumpAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAttackObstructSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAudioMutedEffect
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UTwinJumpAudioMutedEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpAudioMutedEffect");
		return ptr;
	}



	void Cosmetic_OnTwinUnmuted();
	void Cosmetic_OnTwinMuted();
};

// Class TheTwins.TwinJumpTargetVisibleEffect
// 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
class UTwinJumpTargetVisibleEffect : public UstatusEffect
{
public:
	class UClass*                                      _twinJumpTargetObject;                                     // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uactor*                                      _twinJumpTarget;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USelectiveVisibilityComponent*               _jumpTargetVisibility;                                     // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinJumpTargetVisibleEffect");
		return ptr;
	}



	void OnJumpTargetTick(const struct Fvector& location);
	void OnHideTargetPosition();
};

// Class TheTwins.TwinLockerBlockerComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UTwinLockerBlockerComponent : public UactorComponent
{
public:
	TArray<class UClass*>                              _interactionClasses;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SVUN[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              _interactionsToDisableOnLockerClasses;                     // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DGMV[0x40];                                    // 0x00E8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinLockerBlockerComponent");
		return ptr;
	}



	void OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor);
	void OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float rate);
	void OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted);
	bool IsTwinAttachedToLocker();
	void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);
	void Authority_OnLevelReadyToPlay();
};

// Class TheTwins.TwinLullabyRangeAdditiveEffect
// 0x0150 (FullSize[0x0470] - InheritedSize[0x0320])
class UTwinLullabyRangeAdditiveEffect : public UstatusEffect
{
public:
	struct FDBDTunableRowHandle                        _defaultTwinLullabyDormantRange;                           // 0x0320(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _twinLullabyDormantRange;                                  // 0x0348(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _twinLullabyAttachedRange;                                 // 0x03C8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GS6I[0x28];                                    // 0x0448(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinLullabyRangeAdditiveEffect");
		return ptr;
	}



};

// Class TheTwins.TwinOutlineUpdateStrategy
// 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _visibleColorForKiller;                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CERZ[0x40];                                    // 0x00D0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheTwins.TwinPlacerComponent
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTwinPlacerComponent : public UObjectPlacerComponent
{
public:
	unsigned char                                      UnknownData_FLFU[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinPlacerComponent");
		return ptr;
	}



};

// Class TheTwins.twinPossessionComponent
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UtwinPossessionComponent : public UPossessionComponent
{
public:
	unsigned char                                      UnknownData_VXF7[0x20];                                    // 0x0140(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.twinPossessionComponent");
		return ptr;
	}



};

// Class TheTwins.TwinPossessNegationEffectComponent
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UTwinPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
public:
	unsigned char                                      UnknownData_327U[0x20];                                    // 0x00D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinPossessNegationEffectComponent");
		return ptr;
	}



};

// Class TheTwins.TwinsAnimInstance
// 0x0098 (FullSize[0x0640] - InheritedSize[0x05A8])
class UTwinsAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_KOTB[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_WJZT[0x90];                                    // 0x05B0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinsAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinsSurvivorSubAnimInstance
// 0x0040 (FullSize[0x0530] - InheritedSize[0x04F0])
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isRemovingTwin;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YBDN[0x3F];                                    // 0x04F1(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinsSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinStateHelperComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UTwinStateHelperComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_XR5Y[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinStateHelperComponent");
		return ptr;
	}



};

// Class TheTwins.TwinStunnableComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UTwinStunnableComponent : public UstunnableComponent
{
public:
	unsigned char                                      UnknownData_RDJC[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinStunnableComponent");
		return ptr;
	}



};

// Class TheTwins.TwinSubjectProvider
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UTwinSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_VMKZ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTwins.TwinSubjectProvider");
		return ptr;
	}



	void OnTwinSet(class UConjoinedTwin* twin);
	void ListenToTwinSet(class UslasherPlayer* Killer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
