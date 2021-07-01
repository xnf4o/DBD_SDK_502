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

// Class TheBlight.ActivateBlightPower
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UActivateBlightPower : public UChargeableInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.ActivateBlightPower");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_14
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UAddon_TheBlight_14 : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IBXE[0xC];                                     // 0x027C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_14");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_15
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_TheBlight_15 : public UOnEventBaseAddon
{
public:
	float                                              _palletPulldownBlockRange;                                 // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _palletPulldownBlockSeconds;                               // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_15");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_18
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UAddon_TheBlight_18 : public UOnEventBaseAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hinderedSeconds;                                          // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_18");
		return ptr;
	}



	void SpawnParticleOnSurvivor(class UcamperPlayer* camperPlayer);
	void Multicast_SpawnParticleOnSurvivors(TArray<class UcamperPlayer*> survivors);
};

// Class TheBlight.Addon_TheBlight_19
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class UAddon_TheBlight_19 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_19");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_20
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UAddon_TheBlight_20 : public UItemAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorRevealTime;                                       // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_20");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_21
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UAddon_TheBlight_21 : public UItemAddon
{
public:
	class UstatusEffect*                               _forceKoStatusEffect;                                      // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_21");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RG30[0xC];                                     // 0x027C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_SoulChemical
// 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
class UAddon_TheBlight_SoulChemical : public UItemAddon
{
public:
	float                                              _triggerDistance;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_ESkillCheckCustomType               _skillCheckType;                                           // 0x027C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_80KP[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x0280(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       _blightPowerStateTag;                                      // 0x02A0(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OT0S[0x20];                                    // 0x02C0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_SoulChemical");
		return ptr;
	}



};

// Class TheBlight.BlightAnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UBlightAnimInstance : public UKillerAnimInstance
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheBlight_EWallGrabState                           _powerState;                                               // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KD1R[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _stateTimeRemaining;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lookAngle;                                                // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GPUS[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightAnimInstance");
		return ptr;
	}



};

// Class TheBlight.BlightAttackPicker
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBlightAttackPicker : public USlasherAttackPickerComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightAttackPicker");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UBlightDashAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttack");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackOpenSubstate
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackOpenSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackMissSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackObstructSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightPower
// 0x0158 (FullSize[0x05F0] - InheritedSize[0x0498])
class UBlightPower : public Ucollectable
{
public:
	class UPowerChargeComponent*                       _blightPowerCharge;                                        // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _blightPowerToggle;                                        // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _blightPowerActivateChargeable;                            // 0x04A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x04B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerActivateMaxCharge;                             // 0x04B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _blightPowerMaxCharge;                                     // 0x04E0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerDechargeRate;                                  // 0x0560(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerRechargeRate;                                  // 0x0588(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_USX7[0x40];                                    // 0x05B0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPower");
		return ptr;
	}



	void OnPowerStateChanged(TheBlight_EWallGrabState PreviousState, TheBlight_EWallGrabState NewState);
};

// Class TheBlight.BlightPowerEstimatedCollisionIndicator
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UBlightPowerEstimatedCollisionIndicator : public Uactor
{
public:
	unsigned char                                      UnknownData_5ULG[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerEstimatedCollisionIndicator");
		return ptr;
	}



	void OnShowIndicator_Cosmetic();
	void OnHideIndicator_Cosmetic();
};

// Class TheBlight.BlightPowerState
// 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
class UBlightPowerState : public UObject
{
public:
	unsigned char                                      UnknownData_QP0W[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _stateSpeedCurve;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _stateDuration;                                            // 0x0048(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraPitchRecenterTime;                                  // 0x00C8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRadius;                                  // 0x00F0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionHeight;                                  // 0x0118(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRange;                                   // 0x0140(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _playerCanCancelEarly;                                     // 0x0168(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HJJ1[0xF];                                     // 0x0169(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _displayCollisionIndicator;                                // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZ2A[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerState");
		return ptr;
	}



	float GetStateDuration();
};

// Class TheBlight.BlightPowerStateAdjusting
// 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
class UBlightPowerStateAdjusting : public UBlightPowerState
{
public:
	bool                                               _adjustRotationOnCollision;                                // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _bounceAwayFromCollision;                                  // 0x0181(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x0182(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x0183(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_233U[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxDistanceForSurvivorFacing;                             // 0x0188(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z3CD[0x10];                                    // 0x01B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateAdjusting");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateDash
// 0x00C0 (FullSize[0x0240] - InheritedSize[0x0180])
class UBlightPowerStateDash : public UBlightPowerState
{
public:
	struct FTunableStat                                _vectorInterpToSpeed;                                      // 0x0180(0x0080) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _noDashTimeLimitSpeedCurve;                                // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToMaxTurnRateCurveMouse;                         // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7MQQ[0x20];                                    // 0x0220(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateAttack
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class UBlightPowerStateAttack : public UBlightPowerStateDash
{
public:
	unsigned char                                      UnknownData_CRDP[0x28];                                    // 0x0240(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateAttack");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateComponent
// 0x0258 (FullSize[0x0310] - InheritedSize[0x00B8])
class UBlightPowerStateComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_6985[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPowerCollided;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              _blightPowerStateClasses;                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRadius;                              // 0x00F0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionHeight;                              // 0x0118(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRange;                               // 0x0140(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _blightLethalDashDodgeRadius;                              // 0x0168(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UinteractionDefinition*                      _powerInteractionDefinition;                               // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RQVQ[0x18];                                    // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _stateTimer;                                               // 0x01B0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBlightPowerState*>                   _blightPowerStates;                                        // 0x01B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerState*                           _currentBlightPowerState;                                  // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _dashTokens;                                               // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q8MY[0x7];                                     // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _maximumDashTokens;                                        // 0x01D8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tokenChargeRate;                                          // 0x0258(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RM5W[0x38];                                    // 0x02D8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateComponent");
		return ptr;
	}



	void Server_SetWallGrabState(TheBlight_EWallGrabState NewState);
	void ResetDashTokens();
	void OnRep_StateTimer();
	void OnRep_DashTokens();
	void OnLevelReadyToPlay();
	void Multicast_SetWallGrabState(TheBlight_EWallGrabState NewState);
	float GetStateTimeRemaining();
	class UTimerObject* GetStateTimer();
	float GetStateTimeElapsed();
	class UBlightPowerState* GetPowerStateByEnum(TheBlight_EWallGrabState stateEnum);
	TheBlight_EWallGrabState GetPowerState();
	float GetLookAngleDegrees();
	unsigned char GetDashTokensRemaining();
	class UBlightPowerState* GetCurrentPowerState();
	bool CanDash();
};

// Class TheBlight.BlightPowerStateCooldown
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UBlightPowerStateCooldown : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateCooldown");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateHolding
// 0x0038 (FullSize[0x01B8] - InheritedSize[0x0180])
class UBlightPowerStateHolding : public UBlightPowerState
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x0180(0x0030) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x01B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NJVS[0x3];                                     // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _dashSpeedForProjection;                                   // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateHolding");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlightPowerStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateInterface");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateLethalDash
// 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x0240(0x0030) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GYRH[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateNonLethalDash
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{
public:
	bool                                               _smashBreakables;                                          // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XZTW[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateNonLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateReady
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UBlightPowerStateReady : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateReady");
		return ptr;
	}



};

// Class TheBlight.BuiltToLast
// 0x0040 (FullSize[0x03E8] - InheritedSize[0x03A8])
class UBuiltToLast : public Uperk
{
public:
	float                                              _refillPercentage[0x3];                                    // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _depletionToRefillWaitDuration[0x3];                       // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkTriggeredThisTrial;                                 // 0x03C0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F85U[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ucollectable*                                _heldItem;                                                 // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YSYQ[0x18];                                    // 0x03D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BuiltToLast");
		return ptr;
	}



	void OnBuiltToLastTrigger_Cosmetic();
};

// Class TheBlight.DesperateMeasures
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UDesperateMeasures : public Uperk
{
public:
	float                                              _healAndUnhookMultiplier[0x3];                             // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _nbInjuredHookedOrDyingSurvivors;                          // 0x03B4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.DesperateMeasures");
		return ptr;
	}



};

// Class TheBlight.DragonsGrip
// 0x0060 (FullSize[0x0408] - InheritedSize[0x03A8])
class UDragonsGrip : public Uperk
{
public:
	class Ugenerator*                                  _kickedGenerator;                                          // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _activationDuration[0x3];                                  // 0x03B0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03BC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exposedEffectDuration[0x3];                               // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onlyExposeFirstSurvivor;                                  // 0x03D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_49MH[0xB];                                     // 0x03D5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _loudNoiseRange;                                           // 0x03E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.DragonsGrip");
		return ptr;
	}



	void OnRevealSurvivor(class UdbdPlayer* instigator);
	void Multicast_OnRevealSurvivor(class UdbdPlayer* Survivor);
};

// Class TheBlight.HexBloodFavor
// 0x0030 (FullSize[0x0438] - InheritedSize[0x0408])
class UHexBloodFavor : public UHexPerk
{
public:
	float                                              _palletInRange[0x3];                                       // 0x0408(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _palletPulldownBlockTime[0x3];                             // 0x0414(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x0420(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _basicAttack;                                              // 0x042C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UVZT[0xB];                                     // 0x042D(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.HexBloodFavor");
		return ptr;
	}



};

// Class TheBlight.HexUndying
// 0x0068 (FullSize[0x0470] - InheritedSize[0x0408])
class UHexUndying : public UHexPerk
{
public:
	unsigned char                                      UnknownData_CKQF[0x58];                                    // 0x0408(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _amountOfTokenRemove;                                      // 0x0460(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealAuraDistanceFromTotem[0x3];                         // 0x0464(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.HexUndying");
		return ptr;
	}



	void Authority_UpdateHexPerkStatusView(class UgameplayModifierContainer* gameplayModifierContainer, bool isApplicable);
	void Authority_OnSurvivorAdded(class UcamperPlayer* Survivor);
	void Authority_OnCamperCleansedHexPerk(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class TheBlight.Visionary
// 0x0018 (FullSize[0x03C0] - InheritedSize[0x03A8])
class UVisionary : public Uperk
{
public:
	float                                              _auraVisibilityRange[0x3];                                 // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Visionary");
		return ptr;
	}



};

// Class TheBlight.WallGrabInteractionDefinition
// 0x0048 (FullSize[0x05A0] - InheritedSize[0x0558])
class UWallGrabInteractionDefinition : public UinteractionDefinition
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x0558(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _wallDashAccelerationMultiplier;                           // 0x0560(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerEstimatedCollisionIndicator*     _blightPowerCollisionIndicator;                            // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _collisionIndicatorActorClass;                             // 0x0590(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EXAA[0x8];                                     // 0x0598(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.WallGrabInteractionDefinition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
