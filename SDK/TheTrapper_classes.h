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

// Class TheTrapper.beartrap
// 0x00A0 (FullSize[0x0540] - InheritedSize[0x04A0])
class Ubeartrap : public UBaseTrap
{
public:
	class UBoxPlayerOverlapComponent*                  _interactionVolume;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpherePlayerOverlapComponent*               _pickTrapZone;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onIsTrapSetChanged;                                       // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UdbdPlayer*                                  _ownerPlayer;                                              // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uinteractor*                                 _collectInteractor;                                        // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDNavModifierComponent*                    _dangerNavModifierComponent;                               // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isTrapperOutOfSafetyZone;                                 // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VMC6[0x3];                                     // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _maximumAttemptsForSelfUntrap;                             // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _selfUntrapAttemptsRemaining;                              // 0x04E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXNK[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         _safetyZone;                                               // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _trapZone;                                                 // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UinteractionDefinition*                      _trapSurvivor;                                             // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UinteractionDefinition*                      _trapKiller;                                               // 0x0500(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _trappedPlayer;                                            // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimationMontageSlave*                      _animationMontageSlave;                                    // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uinteractor*                                 _mainInteractor;                                           // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TUFJ[0x20];                                    // 0x0520(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.beartrap");
		return ptr;
	}



	void TrySetTrappedPlayer(class UdbdPlayer* player);
	void SetTrappedPlayerSinceMoved(bool didTrap);
	void SetTrappedPlayer(class UdbdPlayer* trappedPlayer);
	void PlayMontage(class UAnimMontage* montage);
	void OnTrappedSurvivorEndGameSacrificed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnSlasherSet(class UslasherPlayer* slasher);
	void OnSafetyZoneEndOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void OnPlayerLeft(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnDamageStateChanged(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	bool IsTrapperOutOfSafetyZone();
	void InitializeTrapZone(class UprimitiveComponent* primitive);
	void InitializeTrapSurvivorInteraction(class UinteractionDefinition* interaction);
	void InitializeTrapKillerInteraction(class UinteractionDefinition* interaction);
	void InitializeSafetyZone(class UprimitiveComponent* primitive);
	void InitializeMainInteractor(class Uinteractor* interactor);
	bool HasTrappedPlayerSinceMoved();
	bool HasTrappedPlayer();
	class UdbdPlayer* GetTrappedPlayer();
	class UBearTrapAnimInstance* GetAnimInstance();
	void DetachTrappedPlayer();
	bool CanTrap();
};

// Class TheTrapper.BearTrapAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UBearTrapAnimInstance : public USleepingAnimInstance
{
public:
	bool                                               _isBroken;                                                 // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingCollected;                                         // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _containsSurvivor;                                         // 0x0282(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isTrapSet;                                                // 0x0283(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasJustDisarmed;                                          // 0x0284(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QCKE[0xB];                                     // 0x0285(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.BearTrapAnimInstance");
		return ptr;
	}



	void SetWasJustDisarmed(bool wasJustDisarmed);
	void SetIsTrapSet(bool isTrapSet);
	void SetIsBroken(bool isBroken);
	void SetIsBeingCollected(bool isBeingCollected);
	void SetContainsSurvivor(bool containsSurvivor);
};

// Class TheTrapper.IridescentStone
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class UIridescentStone : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.IridescentStone");
		return ptr;
	}



};

// Class TheTrapper.RemoveOnOriginatingSurvivorGoneStatusEffect
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class URemoveOnOriginatingSurvivorGoneStatusEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_Z3T0[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.RemoveOnOriginatingSurvivorGoneStatusEffect");
		return ptr;
	}



	void Authority_OnSurvivorRemoved(class UcamperPlayer* Survivor);
};

// Class TheTrapper.SelfUntrap
// 0x00C0 (FullSize[0x0740] - InheritedSize[0x0680])
class USelfUntrap : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _trapImmunityDuration;                                     // 0x0680(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                _untrapMontage;                                            // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeHealthy;                                  // 0x06B0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeInjured;                                  // 0x06D0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _successfulEscapeCrawling;                                 // 0x06F0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _failedEscape;                                             // 0x0710(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XGV5[0x1];                                     // 0x0730(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _canEscape;                                                // 0x0731(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XEKB[0xE];                                     // 0x0732(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.SelfUntrap");
		return ptr;
	}



};

// Class TheTrapper.TrapperAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UTrapperAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_92IX[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.TrapperAnimInstance");
		return ptr;
	}



};

// Class TheTrapper.Untrap
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UUntrap : public UChargeableInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheTrapper.Untrap");
		return ptr;
	}



	class Ubeartrap* GetTrap();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
