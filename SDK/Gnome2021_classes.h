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

// Class Gnome2021.Gnome
// 0x00A0 (FullSize[0x03D8] - InheritedSize[0x0338])
class UGnome : public UrespawnableInteractable
{
public:
	class UGnomeInteraction*                           _gnomeInteraction;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGnomeInteraction*                           _gnomeInteractionKiller;                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _gnomeInteractionChargeable;                               // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _gnomeInteractionChargeableKiller;                         // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uinteractor*                                 _gnomeInteractor;                                          // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _gnomeInteractionZone;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _gnomeSkeletalMesh;                                        // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gnomeInteractionSecondsToCharge;                          // 0x0378(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gnomeInteractionSecondsToChargeKiller;                    // 0x03A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _auraColorWhileInteracting;                                // 0x03C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Gnome2021.Gnome");
		return ptr;
	}



	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer);
};

// Class Gnome2021.GnomeEventComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UGnomeEventComponent : public URespawningEventComponent
{
public:
	class UInteractionRespawnableTrigger*              _interactionRespawnableTrigger;                            // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTimedRespawnableTrigger*                    _timedRespawnableTrigger;                                  // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_37E7[0x18];                                    // 0x00D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Gnome2021.GnomeEventComponent");
		return ptr;
	}



	void Authority_OnEndGameStarted(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Gnome2021.GnomeInteraction
// 0x0020 (FullSize[0x06A0] - InheritedSize[0x0680])
class UGnomeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_R7NJ[0x20];                                    // 0x0680(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Gnome2021.GnomeInteraction");
		return ptr;
	}



};

// Class Gnome2021.GnomePlayerComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UGnomePlayerComponent : public UactorComponent
{
public:
	bool                                               _hasInteractedWithGnomeThisGame;                           // 0x00B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1TL9[0x27];                                    // 0x00B9(0x0027) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Gnome2021.GnomePlayerComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
