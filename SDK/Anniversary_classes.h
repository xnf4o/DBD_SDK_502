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

// Class Anniversary.CrownPickupInteraction
// 0x0040 (FullSize[0x06C0] - InheritedSize[0x0680])
class UCrownPickupInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_L8MG[0x30];                                    // 0x0680(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _attachToSocketName;                                       // 0x06B0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractionChargeComplete;                              // 0x06BC(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JIP3[0x3];                                     // 0x06BD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary.CrownPickupInteraction");
		return ptr;
	}



};

// Class Anniversary.CrownPillarInteractable
// 0x00C8 (FullSize[0x0400] - InheritedSize[0x0338])
class UCrownPillarInteractable : public UrespawnableInteractable
{
public:
	struct FDBDTunableRowHandle                        _crownPillarInteractionSecondsToCharge;                    // 0x0338(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _crownPillarInteractionSecondsToChargeKiller;              // 0x0360(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _offeringEnabledAuraVisibilityDistance;                    // 0x0388(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrownPickupInteraction*                     _crownPillarInteraction;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPickupInteraction*                     _crownPillarInteractionKiller;                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _crownPillarInteractionChargeable;                         // 0x03C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _crownPillarInteractionChargeableKiller;                   // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uinteractor*                                 _crownPillarInteractor;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _crownPillarInteractionZone;                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _crownPillarStaticMesh;                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPillarOutlineUpdateStrategy*           _crownPillarOutlineUpdateStrategy;                         // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary.CrownPillarInteractable");
		return ptr;
	}



	void Local_OnIntroCompleted();
	bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering();
	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer);
	void Cosmetic_OnInteractionCancelled();
};

// Class Anniversary.CrownPillarOutlineUpdateStrategy
// 0x0010 (FullSize[0x00D0] - InheritedSize[0x00C0])
class UCrownPillarOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _offeringEnabledAuraColor;                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary.CrownPillarOutlineUpdateStrategy");
		return ptr;
	}



};

// Class Anniversary.CrownPlayerComponent
// 0x0060 (FullSize[0x0270] - InheritedSize[0x0210])
class UCrownPlayerComponent : public USceneComponent
{
public:
	bool                                               _hasInteractedWithCrownPillarThisGame;                     // 0x0210(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NTT9[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isCrownEventActive;                                       // 0x0218(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q07V[0x28];                                    // 0x0248(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary.CrownPlayerComponent");
		return ptr;
	}



	void OnRep_hasInteractedWithCrownPillarThisGame();
	void Cosmetic_OnInteractedWithCrownPillar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
