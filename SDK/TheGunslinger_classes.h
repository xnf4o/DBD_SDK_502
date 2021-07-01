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

// Class TheGunslinger.ChainPlayerMovementStatusEffect
// 0x0058 (FullSize[0x0378] - InheritedSize[0x0320])
class UChainPlayerMovementStatusEffect : public UstatusEffect
{
public:
	struct FDBDTunableRowHandle                        _baseMovementSpeedMultiplier;                              // 0x0320(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _collisionMovementSpeedMultiplier;                         // 0x0348(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URifleChain*                                 _chain;                                                    // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ChainPlayerMovementStatusEffect");
		return ptr;
	}



	void OnIsChainCollidingChanged(bool isColliding);
};

// Class TheGunslinger.ChainKillerMovementStatusEffect
// 0x0068 (FullSize[0x03E0] - InheritedSize[0x0378])
class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _backwardMovementSpeedMultiplier;                          // 0x0378(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _backwardMovementAngle;                                    // 0x03A0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6OR5[0x18];                                    // 0x03C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ChainKillerMovementStatusEffect");
		return ptr;
	}



};

// Class TheGunslinger.ChainLinkableComponent
// 0x00D0 (FullSize[0x0188] - InheritedSize[0x00B8])
class UChainLinkableComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_O2B4[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _cameraTargetingStrategyClass;                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _movementStatusEffectName;                                 // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _linkedStatusEffectName;                                   // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;                                // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URiflePlayerLinker*                          _chainLink;                                                // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KDKX[0x30];                                    // 0x0100(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isLinkedLingering;                                        // 0x0130(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChainPlayerMovementStatusEffect*            _movementStatusEffect;                                     // 0x0160(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OWSN[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseCameraTargetingStrategy*                _cameraStrategy;                                           // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A1Q4[0x10];                                    // 0x0178(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ChainLinkableComponent");
		return ptr;
	}



};

// Class TheGunslinger.DeadMansSwitch
// 0x0038 (FullSize[0x03E0] - InheritedSize[0x03A8])
class UDeadMansSwitch : public Uperk
{
public:
	unsigned char                                      UnknownData_QOOZ[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _activationDurationByLevels[0x3];                          // 0x03B0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _anySurvivorLetGo;                                         // 0x03BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IMFE[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Ugenerator*>                          _blockedGenerators;                                        // 0x03C0(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D620[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.DeadMansSwitch");
		return ptr;
	}



	void OnRep_BlockedGenerators();
};

// Class TheGunslinger.FireHarpoonRifleInteraction
// 0x04C8 (FullSize[0x0A20] - InheritedSize[0x0558])
class UFireHarpoonRifleInteraction : public UinteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnFireHarpoon;                                             // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHitPlayer;                                               // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHAS[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHarpoonProjectile*                          _harpoon;                                                  // 0x0580(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _collector;                                                // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightDuration;                                     // 0x0590(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightZoom;                                         // 0x05B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightMousePitchScaleMultiplier;                    // 0x05E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightMouseYawScaleMultiplier;                      // 0x0608(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightGamepadPitchScaleMultiplier;                  // 0x0630(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightGamepadYawScaleMultiplier;                    // 0x0658(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimDownSightGamepadPitchCurve;                            // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimDownSightGamepadYawCurve;                              // 0x0688(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightRotationScaleAdjustmentTime;                  // 0x0690(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _aimDownSightMovementSpeedMultiplier;                      // 0x06B8(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireDuration;                                             // 0x0738(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireRotationScaleMultiplier;                              // 0x0760(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireRotationScaleAdjustmentTime;                          // 0x0788(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireMovementSpeedMultiplier;                              // 0x07B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _longRangeShotMinDistance;                                 // 0x07D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_632M[0x8];                                     // 0x0800(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _successMovementSpeedMultiplier;                           // 0x0808(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _missMovementSpeedMultiplier;                              // 0x0830(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _missShotCooldownDuration;                                 // 0x0858(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _nearMissShotMaxDistance;                                  // 0x08D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _successShotDuration;                                      // 0x0900(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IJZX[0xF8];                                    // 0x0928(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.FireHarpoonRifleInteraction");
		return ptr;
	}



	void Server_HandleMissShotScores(TArray<class UdbdPlayer*> nearMissedPlayers);
	void OnHitPlayer__DelegateSignature();
	void OnFireHarpoon__DelegateSignature();
};

// Class TheGunslinger.ForThePeople
// 0x0050 (FullSize[0x03F8] - InheritedSize[0x03A8])
class UForThePeople : public Uperk
{
public:
	unsigned char                                      UnknownData_YD4M[0xC];                                     // 0x03A8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _brokenEffectDurations[0x3];                               // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x03C0(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B0UB[0x8];                                     // 0x03F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ForThePeople");
		return ptr;
	}



	void Server_OnActionInputPressed();
	void OnHealingAbilityUsed(class UcamperPlayer* healingSurvivor, class UcamperPlayer* healedSurvivor);
	void Multicast_OnHealAbilityUsed(class UcamperPlayer* healingSurvivor, class UcamperPlayer* healedSurvivor);
};

// Class TheGunslinger.Gearhead
// 0x00A8 (FullSize[0x0450] - InheritedSize[0x03A8])
class UGearhead : public Uperk
{
public:
	float                                              _perkActivationDuration[0x3];                              // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _greatSkillCheck;                                          // 0x03B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _basicAttack;                                              // 0x03B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_88JH[0x2];                                     // 0x03B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minimumAuraRevealDuration;                                // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _attacksNeededToActivate;                                  // 0x03BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numAttacksBeforeActivation;                               // 0x03C0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V5UK[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class Ugenerator*, struct FFastTimer>         _timersBeforeUnreveal;                                     // 0x03C8(0x0050) (NativeAccessSpecifierPrivate)
	TArray<class Ugenerator*>                          _markedGenerators;                                         // 0x0418(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Ugenerator*>                          _revealedGenerators;                                       // 0x0428(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Ugenerator*>                          _local_revealedGenerators;                                 // 0x0438(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0QGB[0x8];                                     // 0x0448(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.Gearhead");
		return ptr;
	}



	void OnRep_RevealedGenerators();
};

// Class TheGunslinger.GunslingerAnimInstance
// 0x0178 (FullSize[0x0720] - InheritedSize[0x05A8])
class UGunslingerAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_5ULL[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	float                                              _fireAnimPlayRate;                                         // 0x05B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _missShotCooldownAnimPlayRate;                             // 0x05B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _successShotAnimPlayRate;                                  // 0x05B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T36G[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _fireAnim;                                                 // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _missShotCooldownAnim;                                     // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _successShotAnim;                                          // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _fireAnimDuration;                                         // 0x05D8(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _missShotCooldownAnimDuration;                             // 0x0600(0x0080) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _successShotAnimDuration;                                  // 0x0680(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7UGU[0x78];                                    // 0x06A8(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.GunslingerAnimInstance");
		return ptr;
	}



};

// Class TheGunslinger.GunslingerCameraTargetingStrategy
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{
public:
	struct FName                                       _cameraSocketName;                                         // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _survivorHarpoonSocketName;                                // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.GunslingerCameraTargetingStrategy");
		return ptr;
	}



};

// Class TheGunslinger.GunslingerEffectsComponent
// 0x0098 (FullSize[0x0150] - InheritedSize[0x00B8])
class UGunslingerEffectsComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnIsAimingChanged;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PlayOutOfAmmoSound;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _minimumTimeBetweenBroadcast;                              // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YGGD[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHarpoonRifle*                               _rifle;                                                    // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1PBM[0x68];                                    // 0x00E8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.GunslingerEffectsComponent");
		return ptr;
	}



	void PlayOutOfAmmoSound__DelegateSignature();
	void OnItemUsedStateChanged(bool isPressed);
	void OnIsAimingChanged__DelegateSignature(bool IsAiming);
	void Multicast_PlayOutOfAmmoSound();
};

// Class TheGunslinger.GunslingerUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGunslingerUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.GunslingerUtilities");
		return ptr;
	}



	class UHarpoonRifle* STATIC_GetHarpoonRifle(class UdbdPlayer* player);
};

// Class TheGunslinger.HarpoonChainPositioner
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UHarpoonChainPositioner : public UactorComponent
{
public:
	class UClass*                                      _harpoonPropClass;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _survivorAttachSocket;                                     // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _animationSocket;                                          // 0x00CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _reelBackToRifleSpeed;                                     // 0x00D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _harpoonMinimumSnapBackDistance;                           // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YQ6C[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHarpoonProp*                                _harpoonProp;                                              // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonProjectile*                          _harpoonProjectile;                                        // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _collector;                                                // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GUST[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URifleChain*                                 _chain;                                                    // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NFCR[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonChainPositioner");
		return ptr;
	}



	void OnOwnerCollected(class UdbdPlayer* collector);
	void OnHarpoonTravelingChanged(bool isTravelling);
	void OnHarpoonLoadedOnRifle();
	void OnCurrentHarpoonChanged(class Uactor* currentHarpoon);
	class UHarpoonProp* GetHarpoonProp();
	class Uactor* GetCurrentHarpoon();
	void AttachToRifle();
	void AttachToAnimSocket();
};

// Class TheGunslinger.HarpoonedSurvivorSubAnimInstance
// 0x0090 (FullSize[0x0580] - InheritedSize[0x04F0])
class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _linkedMaxSpeed;                                           // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeBeforeHarpoonHitReset;                                // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _hitHarpoonedEnterEvent;                                   // 0x04F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _chainBreakEnterEvent;                                     // 0x0504(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChainLinked;                                            // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingReeled;                                            // 0x0511(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasLinkInput;                                             // 0x0512(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G1Q2[0x1];                                     // 0x0513(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _linkInputX;                                               // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _linkInputY;                                               // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _chainBreakTrigger;                                        // 0x051C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _triggerHarpoonHit;                                        // 0x051D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XUUH[0x2];                                     // 0x051E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _harpoonHitTurnAnimNormalizedStartTime;                    // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _harpoonHitAnimTurnRight;                                  // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x0525(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VTOK[0x5A];                                    // 0x0526(0x005A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonedSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheGunslinger.HarpoonLauncher
// 0x0058 (FullSize[0x01D8] - InheritedSize[0x0180])
class UHarpoonLauncher : public UKillerProjectileLauncher
{
public:
	struct FDBDTunableRowHandle                        _launchSpeed;                                              // 0x0180(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _launchDistanceFromCamera;                                 // 0x01A8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _launchZOffset;                                            // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_966A[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonLauncher");
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProjectile
// 0x00D0 (FullSize[0x03D0] - InheritedSize[0x0300])
class UHarpoonProjectile : public UKillerProjectile
{
public:
	unsigned char                                      UnknownData_AV4K[0x78];                                    // 0x0300(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _launchDistanceFromCamera;                                 // 0x0378(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonProjectileMovementComponent*         _movement;                                                 // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _environmentCollider;                                      // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _targetCollider;                                           // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _skeletalMesh;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPoolableActorComponent*                     _poolableActorComponent;                                   // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0FPY[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonProjectile");
		return ptr;
	}



	void OnHarpoonStop(const struct FhitResult& result);
};

// Class TheGunslinger.HarpoonProjectileMovementComponent
// 0x0050 (FullSize[0x02A0] - InheritedSize[0x0250])
class UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData_ZGIK[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxTravelDistance;                                        // 0x0260(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_II0K[0x18];                                    // 0x0288(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonProjectileMovementComponent");
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProp
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UHarpoonProp : public Uactor
{
public:
	unsigned char                                      UnknownData_U4TQ[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UskeletalMeshComponent*                      _skeletalMesh;                                             // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonProp");
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProviderComponent
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UHarpoonProviderComponent : public USingleProjectileProviderComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonProviderComponent");
		return ptr;
	}



};

// Class TheGunslinger.HarpoonRifle
// 0x00C0 (FullSize[0x0558] - InheritedSize[0x0498])
class UHarpoonRifle : public Ucollectable
{
public:
	unsigned char                                      UnknownData_2E0F[0x18];                                    // 0x0498(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _survivorLinkableClass;                                    // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _killerLinkableClass;                                      // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _chainClass;                                               // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _rifleMuzzleSocket;                                        // 0x04C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _rifleHarpoonLoadingSocket;                                // 0x04D4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _crowActiveRange;                                          // 0x04E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonLauncher*                            _launcher;                                                 // 0x0508(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonProviderComponent*                   _harpoonProvider;                                          // 0x0510(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URifleChain*                                 _chain;                                                    // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URifleChainTensionComponent*                 _chainTensionComponent;                                    // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _chainTensionChargeable;                                   // 0x0528(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URiflePlayerLinker*                          _playerLinker;                                             // 0x0530(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonChainPositioner*                     _harpoonChainPositioner;                                   // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFireHarpoonRifleInteraction*                _fireInteraction;                                          // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTriggerableActivatorComponent*              _crowsActivatorComponent;                                  // 0x0548(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CI71[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonRifle");
		return ptr;
	}



	class URifleChain* GetChain();
	void Authority_OnFireHarpoon();
};

// Class TheGunslinger.HarpoonRifleAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UHarpoonRifleAnimInstance : public UanimInstance
{
public:
	class URifleChain*                                 _chain;                                                    // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _chainUnwindingSpeed;                                      // 0x0278(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B27T[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HarpoonRifleAnimInstance");
		return ptr;
	}



};

// Class TheGunslinger.HellshireIronAddon
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UHellshireIronAddon : public UItemAddon
{
public:
	bool                                               _useTimedDuration;                                         // 0x0278(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LNG8[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealDuration;                                           // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GSQ4[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HellshireIronAddon");
		return ptr;
	}



};

// Class TheGunslinger.HexRetribution
// 0x0020 (FullSize[0x0428] - InheritedSize[0x0408])
class UHexRetribution : public UHexPerk
{
public:
	float                                              _obliviousDurationByLevels[0x3];                           // 0x0408(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _auraRevealDuration;                                       // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UstatusEffect>>        _obliviousEffects;                                         // 0x0418(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HexRetribution");
		return ptr;
	}



};

// Class TheGunslinger.HoneyLocustThornsAddon
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class UHoneyLocustThornsAddon : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.HoneyLocustThornsAddon");
		return ptr;
	}



};

// Class TheGunslinger.GunslingerHarpoon
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGunslingerHarpoon : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.GunslingerHarpoon");
		return ptr;
	}



};

// Class TheGunslinger.IridescentCoinAddon
// 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
class UIridescentCoinAddon : public UItemAddon
{
public:
	class UstatusEffect*                               _exposedStatusEffect;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJAA[0x28];                                    // 0x0280(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.IridescentCoinAddon");
		return ptr;
	}



};

// Class TheGunslinger.KillerChainLinkableComponent
// 0x0010 (FullSize[0x0198] - InheritedSize[0x0188])
class UKillerChainLinkableComponent : public UChainLinkableComponent
{
public:
	unsigned char                                      UnknownData_LRL4[0x10];                                    // 0x0188(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.KillerChainLinkableComponent");
		return ptr;
	}



};

// Class TheGunslinger.OffTheRecord
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UOffTheRecord : public Uperk
{
public:
	float                                              _activationDurationLevels[0x3];                            // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MPU4[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.OffTheRecord");
		return ptr;
	}



};

// Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UPlayerReelInputAccelerationConstraintStrategy : public UBaseInputAccelerationConstraintStrategy
{
public:
	unsigned char                                      UnknownData_HMHT[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy");
		return ptr;
	}



};

// Class TheGunslinger.PrisonChainAddon
// 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
class UPrisonChainAddon : public UItemAddon
{
public:
	struct FDBDTunableRowHandle                        _maxTensionCharge;                                         // 0x0278(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _tensionChargeModifier;                                    // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XNTT[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.PrisonChainAddon");
		return ptr;
	}



};

// Class TheGunslinger.RedHerring
// 0x00A0 (FullSize[0x0448] - InheritedSize[0x03A8])
class URedHerring : public Uperk
{
public:
	unsigned char                                      UnknownData_HBPH[0x60];                                    // 0x03A8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _markedGenerator;                                          // 0x0408(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _secondsToActivatePerk;                                    // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _loudNoiseTriggeredNotifyTime;                             // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _cooldownLevels[0x3];                                      // 0x0418(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_604U[0x24];                                    // 0x0424(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.RedHerring");
		return ptr;
	}



	void OnRep_MarkedGenerator(class Ugenerator* oldMarkedGenerator);
	void OnLoudNoiseTriggered();
};

// Class TheGunslinger.ReelChainInteraction
// 0x0038 (FullSize[0x0590] - InheritedSize[0x0558])
class UReelChainInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_WNBV[0x8];                                     // 0x0558(0x0008) Fix Super Size
	float                                              _minimumFrontVelocity;                                     // 0x0560(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BGDB[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UdbdPlayer*                                  _linkedPlayer;                                             // 0x0568(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y538[0x20];                                    // 0x0570(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ReelChainInteraction");
		return ptr;
	}



};

// Class TheGunslinger.ReloadHarpoonRifleInteraction
// 0x00B0 (FullSize[0x0730] - InheritedSize[0x0680])
class UReloadHarpoonRifleInteraction : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _reloadTime;                                               // 0x0680(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _movementSpeedMultiplier;                                  // 0x06A8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _rotationScaleMultiplier;                                  // 0x06D0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _rotationScaleAdjustmentTime;                              // 0x06F8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2A58[0x10];                                    // 0x0720(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.ReloadHarpoonRifleInteraction");
		return ptr;
	}



};

// Class TheGunslinger.RifleChain
// 0x01E8 (FullSize[0x0418] - InheritedSize[0x0230])
class URifleChain : public Uactor
{
public:
	struct FScriptMulticastDelegate                    OnProjectileSet;                                           // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsCollidingChanged;                                      // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAkComponent*                                _chainCenterAkComponent;                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _collisionLoopStartEvent;                                  // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _collisionLoopEndEvent;                                    // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAkSoundLoop>                        _collisionSoundLoops;                                      // 0x0268(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sphereTraceRadius;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _timeBetweenTrace;                                         // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class UGunslingerHarpoon>         _harpoon;                                                  // 0x0280(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z1F6[0x188];                                   // 0x0290(0x0188) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.RifleChain");
		return ptr;
	}



	void UpdateChainMesh(class UInstancedStaticMeshComponent* mesh, class UsplineComponent* Spline, float Alpha);
	int SpawnChainPoints(const struct Fvector& start, const struct Fvector& stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class UsplineComponent* Spline);
	void OnUnattachFromPlayer(class UdbdPlayer* player);
	void OnReelBackToRifle();
	void OnProjectileSet__DelegateSignature(class Uactor* projectile);
	void OnLaunch();
	void OnIsCollidingChanged__DelegateSignature(bool isColliding);
	void OnAttachToPlayer(class UdbdPlayer* player);
	bool isColliding();
	float GetUnwindingSpeed();
	class URiflePlayerLinker* GetRiflePlayerLinker();
	TArray<struct FhitResult> GetFirstAndLastCollisionHits();
	class URifleChainTensionComponent* GetChainTensionComponent();
	struct Fvector GetChainStart();
	struct Fvector GetChainEnd();
};

// Class TheGunslinger.RifleChainTensionComponent
// 0x01E8 (FullSize[0x02A0] - InheritedSize[0x00B8])
class URifleChainTensionComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_GF6D[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnIsBuildingTensionChanged;                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1SO3[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isBuildingTension;                                        // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G22E[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvivorChainLinkableComponent*             _targetlinkable;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N830[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxTensionCharge;                                         // 0x0108(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseTensionRate;                                          // 0x0130(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _collisionTensionRate;                                     // 0x0158(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _survivorPullingTensionRate;                               // 0x0180(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNonTunableStat                             _currentTensionRate;                                       // 0x0200(0x0060) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_EProgressModifier                   _progressModifierForSurvivors;                             // 0x0260(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2HJR[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       _chargeProgressDescriptionText;                            // 0x0268(0x0018) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UZTY[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URifleChain*                                 _chain;                                                    // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YUUE[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.RifleChainTensionComponent");
		return ptr;
	}



	void OnTensionChargeableCompletionChanged(bool Completed, TArray<class Uactor*> instigatorsForCompletion);
	void OnRep_IsBuildingTension();
	void OnIsBuildingTensionChanged__DelegateSignature(bool isBuildingTension);
	bool isBuildingTension();
	float GetProgress();
};

// Class TheGunslinger.RiflePlayerLinker
// 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
class URiflePlayerLinker : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLinkedPlayerSet;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  _linkedPlayer;                                             // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _linkedPlayerDuringAttack;                                 // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _linkOwner;                                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _desiredLinkLength;                                        // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TZW1[0x3C];                                    // 0x00E4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _elasticLength;                                            // 0x0120(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minimumLinkLength;                                        // 0x0148(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _breakFreeCloseRangeMaxDistance;                           // 0x0170(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7JXE[0x4];                                     // 0x0198(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _movementLinkReductionThreshold;                           // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _movementAccelerationTreshold;                             // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GM5B[0x6C];                                    // 0x01A4(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.RiflePlayerLinker");
		return ptr;
	}



	void Server_OnClientConfirmTensionBreakChain(class UdbdPlayer* player);
	void OnLinkedPlayerSet__DelegateSignature(class UdbdPlayer* linkedPlayer);
	void Multicast_Unlink();
	void Multicast_Link(class UdbdPlayer* linkedPlayer);
	class UdbdPlayer* GetLinkOwner();
	class UdbdPlayer* GetLinkedPlayer();
	void Client_OnAuthorityTensionBreakChain(class UdbdPlayer* player);
};

// Class TheGunslinger.RustedSpikeAddon
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class URustedSpikeAddon : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.RustedSpikeAddon");
		return ptr;
	}



};

// Class TheGunslinger.SurvivorChainLinkableComponent
// 0x00E0 (FullSize[0x0268] - InheritedSize[0x0188])
class USurvivorChainLinkableComponent : public UChainLinkableComponent
{
public:
	struct FDBDTunableRowHandle                        _pullbackAngle;                                            // 0x0188(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W8R4[0x8];                                     // 0x01B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _immobilizationDuration;                                   // 0x01B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       _linkableInteractionTags;                                  // 0x01E0(0x0020) (Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       _cancelableInteractionTags;                                // 0x0200(0x0020) (Edit, NativeAccessSpecifierPrivate)
	class UClass*                                      _velocityAdditiveStrategyClass;                            // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _immobilizationEffectName;                                 // 0x0228(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VFIW[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize10                       _linkedMoveInput;                                          // 0x0238(0x000C) (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FASH[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _immobilizationEffect;                                     // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USurvivorReelVelocityAdditiveStrategy*       _velocityAdditiveStrategy;                                 // 0x0250(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9L5W[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.SurvivorChainLinkableComponent");
		return ptr;
	}



	void OnRep_VelocityAdditiveStrategy();
};

// Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class USurvivorReelVelocityAdditiveStrategy : public UBaseCharacterVelocityAdditiveStrategy
{
public:
	struct FTunableStat                                _reelSpeed;                                                // 0x00B8(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minimumLinkLengthDelta;                                   // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maximumVelocityAdditive;                                  // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isBeingReeled;                                            // 0x0140(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isBeingPulled;                                            // 0x0170(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BCPF[0x30];                                    // 0x01A0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy");
		return ptr;
	}



	void OnKillerSet(class UslasherPlayer* Killer);
};

// Class TheGunslinger.TestDBDGameInstance
// 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
class UTestDBDGameInstance : public UDBDGameInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.TestDBDGameInstance");
		return ptr;
	}



};

// Class TheGunslinger.TestOffTheRecord
// 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
class UTestOffTheRecord : public UOffTheRecord
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.TestOffTheRecord");
		return ptr;
	}



};

// Class TheGunslinger.TestRedHerring
// 0x0000 (FullSize[0x0448] - InheritedSize[0x0448])
class UTestRedHerring : public URedHerring
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGunslinger.TestRedHerring");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
