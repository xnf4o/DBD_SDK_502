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

// Class DBDInteraction.ActivePhaseWalkInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_DV3V[0x8];                                     // 0x0680(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _chargingSpeedCurve;                                       // 0x0688(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7N7Y[0x10];                                    // 0x0690(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ActivePhaseWalkInteraction");
		return ptr;
	}



	void ResetMovementSpeedMultipliers();
	void ResetChargeVFX(class UdbdPlayer* player);
	void Local_SendPhaseWalkInfo(bool startActivePhaseWalk, bool teleportToHusk, class UdbdPlayer* player);
};

// Class DBDInteraction.BaseLockerInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UBaseLockerInteraction : public UinteractionDefinition
{
public:
	class ULocker*                                     _owningLocker;                                             // 0x0558(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.BaseLockerInteraction");
		return ptr;
	}



};

// Class DBDInteraction.BaseStalkModeInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UBaseStalkModeInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_6TRH[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.BaseStalkModeInteraction");
		return ptr;
	}



	class UStalkerComponent* GetStalkerComponent();
	bool CanStalk();
};

// Class DBDInteraction.CollectItemInteraction
// 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
class UCollectItemInteraction : public UinteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnCollectUpdateStart;                                      // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCollectUpdateEnd;                                        // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O947[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.CollectItemInteraction");
		return ptr;
	}



	class Ucollectable* GetItem();
};

// Class DBDInteraction.CollectItemFromSearchableInteraction
// 0x0010 (FullSize[0x0590] - InheritedSize[0x0580])
class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
{
public:
	unsigned char                                      UnknownData_GZOB[0x10];                                    // 0x0580(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.CollectItemFromSearchableInteraction");
		return ptr;
	}



};

// Class DBDInteraction.DeadHardDashInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UDeadHardDashInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_YSJS[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DeadHardDashInteraction");
		return ptr;
	}



};

// Class DBDInteraction.DestroyDemogorgonPortalInteraction
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UDemogorgonPortal*                           _owningPortal;                                             // 0x0680(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QRAG[0x8];                                     // 0x0688(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DestroyDemogorgonPortalInteraction");
		return ptr;
	}



	void Authority_OnChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class DBDInteraction.DropItemInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UDropItemInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_G9BY[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DropItemInteraction");
		return ptr;
	}



	class Ucollectable* GetItem();
};

// Class DBDInteraction.EscapeMapInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UEscapeMapInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_MC7A[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.EscapeMapInteraction");
		return ptr;
	}



};

// Class DBDInteraction.GeneratorDamageInteraction
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GeneratorDamageInteraction");
		return ptr;
	}



	void Authority_DamageGenerator(class UdbdPlayer* damageBy, class Ugenerator* generator);
};

// Class DBDInteraction.GeneratorRepairInteraction
// 0x0080 (FullSize[0x0700] - InheritedSize[0x0680])
class UGeneratorRepairInteraction : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _penaltyPerRepairPlayerCount[0x3];                         // 0x0680(0x0078) (Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VBX5[0x8];                                     // 0x06F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GeneratorRepairInteraction");
		return ptr;
	}



	void SetIsObstructed(bool obstructed);
	class Ugenerator* GetOwningGenerator();
};

// Class DBDInteraction.GeneratorToolboxRepairInteraction
// 0x0070 (FullSize[0x0770] - InheritedSize[0x0700])
class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
{
public:
	struct FText                                       _interactionTextWhenEmpty;                                 // 0x0700(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _repairSkillCheckDurationWhenEmpty;                        // 0x0718(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _repairSkillCheckChanceWhenEmpty;                          // 0x0740(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_US3O[0x8];                                     // 0x0768(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GeneratorToolboxRepairInteraction");
		return ptr;
	}



	bool HasChargedToolBox(class UdbdPlayer* player);
	struct FString GetInteractionTextWhenEmpty();
};

// Class DBDInteraction.GhostChargeStalkModeInteraction
// 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{
public:
	unsigned char                                      UnknownData_KYDQ[0x10];                                    // 0x0560(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GhostChargeStalkModeInteraction");
		return ptr;
	}



	class UGhostStealthComponent* GetStealthComponent();
};

// Class DBDInteraction.HookSurvivorDefinition
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class UHookSurvivorDefinition : public UChargeableInteractionDefinition
{
public:
	class UcamperPlayer*                               _survivorBeingHooked;                                      // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5XBP[0x8];                                     // 0x0688(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.HookSurvivorDefinition");
		return ptr;
	}



	class UMeatHook* GetMeatHook();
};

// Class DBDInteraction.ItemCraftInteraction
// 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
class UItemCraftInteraction : public UinteractionDefinition
{
public:
	struct FName                                       _attachToSocketName;                                       // 0x0558(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4WIY[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _collectableClass;                                         // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ItemCraftInteraction");
		return ptr;
	}



};

// Class DBDInteraction.InClosetFlashbangItemCraftInteraction
// 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
class UInClosetFlashbangItemCraftInteraction : public UItemCraftInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.InClosetFlashbangItemCraftInteraction");
		return ptr;
	}



};

// Class DBDInteraction.LinkedVomitInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_IGIW[0x1C];                                    // 0x0680(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _chargeComplete;                                           // 0x069C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PIBW[0x3];                                     // 0x069D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.LinkedVomitInteraction");
		return ptr;
	}



	bool IsVomiting();
	bool IsChargeComplete();
	class UVomitStateComponent* GetVomitStateComponent();
};

// Class DBDInteraction.LockerFakeEnterInteraction
// 0x0038 (FullSize[0x0590] - InheritedSize[0x0558])
class ULockerFakeEnterInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_YR7O[0x8];                                     // 0x0558(0x0008) Fix Super Size
	class ULocker*                                     _owningLocker;                                             // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fakeEnterLoudNoiseRange;                                  // 0x0568(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.LockerFakeEnterInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SearchChestInteractionBase
// 0x0028 (FullSize[0x06A8] - InheritedSize[0x0680])
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{
public:
	bool                                               _handleCompletionScoreEvents;                              // 0x0680(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOCJ[0x3];                                     // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _searchableCompleteContributionPercentTag;                 // 0x0684(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _scoreEventFired;                                          // 0x0690(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7KD2[0x7];                                     // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USearchable*                                 _owningChest;                                              // 0x0698(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onLastInteractionWasComplete;                             // 0x06A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K4K9[0x7];                                     // 0x06A1(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SearchChestInteractionBase");
		return ptr;
	}



	void FireChestScoreEvent(class UdbdPlayer* player);
};

// Class DBDInteraction.OpenChestInteraction
// 0x0028 (FullSize[0x06D0] - InheritedSize[0x06A8])
class UOpenChestInteraction : public USearchChestInteractionBase
{
public:
	struct FgameplayTag                                _camperSearchablePercentTag;                               // 0x06A8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_484J[0x4];                                     // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                     // 0x06B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startTime;                                                // 0x06C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4OAH[0xC];                                     // 0x06C4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.OpenChestInteraction");
		return ptr;
	}



	void CollectItemIfEmptyHanded(class Ucollectable* collectable, class UdbdPlayer* player);
};

// Class DBDInteraction.PalletPullUpInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class UPalletPullUpInteraction : public UChargeableInteractionDefinition
{
public:
	DeadByDaylight_EPalletSide                         _side;                                                     // 0x0680(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HC03[0x7];                                     // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Upallet*                                     _owningPallet;                                             // 0x0688(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F7PR[0x10];                                    // 0x0690(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.PalletPullUpInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SearchOpenedChestInteraction
// 0x0008 (FullSize[0x06B0] - InheritedSize[0x06A8])
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{
public:
	unsigned char                                      UnknownData_PFM5[0x8];                                     // 0x06A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SearchOpenedChestInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SetGroundPortalInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x0680(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObjectPlacerComponent*                      _trapPlacerComponent;                                      // 0x0688(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _portalClassToSpawn;                                       // 0x0690(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QO6C[0x8];                                     // 0x0698(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SetGroundPortalInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SetTrapInteraction
// 0x0060 (FullSize[0x06E0] - InheritedSize[0x0680])
class USetTrapInteraction : public UChargeableInteractionDefinition
{
public:
	struct FSocketOrBoneCache                          _dropSocket;                                               // 0x0680(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SetTrapInteraction");
		return ptr;
	}



};

// Class DBDInteraction.TeleportToDemogorgonPortalInteraction
// 0x00B0 (FullSize[0x0730] - InheritedSize[0x0680])
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	float                                              _enterPortalPhaseDuration;                                 // 0x0680(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cancelTeleportingPhaseDuration;                           // 0x0684(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalTargetingComponent*                   _portalTargetingComponent;                                 // 0x0688(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x0690(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemogorgonPortal*                           _startingPortal;                                           // 0x0698(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemogorgonPortal*                           _targetedPortal;                                           // 0x06A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _interactingPlayer;                                        // 0x06A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H5S3[0x60];                                    // 0x06B0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _huskRef;                                                  // 0x0710(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ClassToSpawnForHusk;                                       // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_05VH[0x10];                                    // 0x0720(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.TeleportToDemogorgonPortalInteraction");
		return ptr;
	}



	void OnTeleportInteractionCanceledVFX();
	void OnSlasherSet(class UslasherPlayer* slasher);
};

// Class DBDInteraction.ThrowInteraction
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class UThrowInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _throwCancelledSpeedCurve;                                 // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _throwCancellationExitTime;                                // 0x0688(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CF3M[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ThrowInteraction");
		return ptr;
	}



	void InitThrowCancellationExitTime(float Value);
	bool HasCancelledThrow();
};

// Class DBDInteraction.ThrowRockInteraction
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UThrowRockInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_049O[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ThrowRockInteraction");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
