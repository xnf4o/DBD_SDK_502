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

// Class TheDemogorgon.DemogorgonPounceAttack
// 0x0070 (FullSize[0x03D0] - InheritedSize[0x0360])
class UDemogorgonPounceAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_99L3[0x70];                                    // 0x0360(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttack");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackMissSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceInteraction
// 0x00B0 (FullSize[0x0730] - InheritedSize[0x0680])
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_WP3E[0x70];                                    // 0x0680(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargedAttackStateComponent*                _chargedAttackState;                                       // 0x06F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UslasherPlayer*                              _owningSlasher;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BOTA[0x30];                                    // 0x0700(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceInteraction");
		return ptr;
	}



	void TriggerHuntingAudioEvent(bool IsHunting);
	void TriggerChargeCancelAudioEvent();
	void OnChargedAttackReadyChanged(bool ready);
	void OnCancelCooldownComplete();
};

// Class TheDemogorgon.DemogorgonPowerItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPowerItemProgressComponent");
		return ptr;
	}



};

// Class TheDemogorgon.ElevensSodaAddon
// 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
class UElevensSodaAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_XBX9[0x18];                                    // 0x0278(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.ElevensSodaAddon");
		return ptr;
	}



	void Multicast_UnhighlightGenerator(class Ugenerator* generator);
	void Multicast_HighlightGenerator(class Ugenerator* generator);
};

// Class TheDemogorgon.PortalSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_PCJ8[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isDestroyingPortal;                                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpooked;                                                // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0532(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SQXE[0xD];                                     // 0x0533(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.PortalSurvivorSubAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
