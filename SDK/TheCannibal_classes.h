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

// Class TheCannibal.CannibalAnalyticsComponent
// 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
class UCannibalAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{
public:
	unsigned char                                      UnknownData_QBOI[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalAnalyticsComponent");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttack
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class UCannibalChainsawAttack : public UHillbillyChainsawAttack
{
public:
	unsigned char                                      UnknownData_SBPV[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInTantrum;                                              // 0x03E0(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QIEQ[0x20];                                    // 0x0410(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttack");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackOpenSubstate
// 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
class UCannibalChainsawAttackOpenSubstate : public UHillbillyChainsawAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_88VG[0x18];                                    // 0x0168(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackOpenSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UCannibalChainsawAttackHittingSubstate : public UHillbillyChainsawAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackHittingSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UCannibalChainsawAttackSuccessSubstate : public UHillbillyChainsawAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackMissSubstate
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UCannibalChainsawAttackMissSubstate : public UHillbillyChainsawAttackMissSubstate
{
public:
	unsigned char                                      UnknownData_5U4F[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackMissSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackObstructSubstate
// 0x0058 (FullSize[0x0180] - InheritedSize[0x0128])
class UCannibalChainsawAttackObstructSubstate : public UHillbillyChainsawAttackObstructSubstate
{
public:
	struct FTagStateBool                               _isInTantrum;                                              // 0x0128(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1R5O[0x28];                                    // 0x0158(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackObstructSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawHitEventAddon
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawHitEventAddon");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawPowerComponent
// 0x0598 (FullSize[0x0650] - InheritedSize[0x00B8])
class UCannibalChainsawPowerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_JMBN[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPowerChargeComponent*                       _chainsawPowerCharge;                                      // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _chainsawPowerDischarge;                                   // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _tantrumPowerCharge;                                       // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OOTF[0xC8];                                    // 0x00D8(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInTantrum;                                              // 0x01A0(0x0030) (Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numPowerCharges;                                          // 0x01D0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numPowerChargesConsumed;                                  // 0x01D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YTQ8[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _chainsawDashDuration;                                     // 0x01E0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawPowerMaxCharge;                                   // 0x0260(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawChargeRate;                                       // 0x02E0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawMaxNumberOfCharges;                               // 0x0360(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _chainsawCooldownIncreaseRate;                             // 0x03E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawCooldownDuration;                                 // 0x0408(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _chainsawMaxCooldownDuration;                              // 0x0488(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumChargeRate;                                        // 0x04B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumDischargeRate;                                     // 0x04D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tantrumMaxCharge;                                         // 0x0500(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumDurationIncreaseRate;                              // 0x0580(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tantrumDuration;                                          // 0x05A8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumMaxDuration;                                       // 0x0628(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawPowerComponent");
		return ptr;
	}



	void Server_OnTantrumPowerChargeFull();
	void OnRep_NumPowerCharges(int previousNumPowerCharges);
	void OnLevelReadyToPlay();
	void Multicast_OnTantrumPowerChargeFull();
	void Local_OnTantrumPowerChargeFull();
	int GetNumberOfChainsawPowerCharges();
	void Authority_OnChainsawPowerChargeFull();
};

// Class TheCannibal.CannibalChainsawRevInteraction
// 0x0090 (FullSize[0x0770] - InheritedSize[0x06E0])
class UCannibalChainsawRevInteraction : public UChainsawRevInteraction
{
public:
	unsigned char                                      UnknownData_O8EF[0x90];                                    // 0x06E0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawRevInteraction");
		return ptr;
	}



};

// Class TheCannibal.CannibalPowerPresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UCannibalChainsawPowerComponent*             _cannibalPowerChainsawComponent;                           // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalPowerPresentationItemProgressComponent");
		return ptr;
	}



	void SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);
};

// Class TheCannibal.CarburetorTuningGuideAddon
// 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
class UCarburetorTuningGuideAddon : public UOnEventBaseAddon
{
public:
	unsigned char                                      UnknownData_9BGC[0x10];                                    // 0x0288(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CarburetorTuningGuideAddon");
		return ptr;
	}



};

// Class TheCannibal.IridescentLeatherAddon
// 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
class UIridescentLeatherAddon : public UCannibalChainsawHitEventAddon
{
public:
	unsigned char                                      UnknownData_Y81P[0x10];                                    // 0x0288(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.IridescentLeatherAddon");
		return ptr;
	}



};

// Class TheCannibal.ShopLubricantAddon
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UShopLubricantAddon : public UOnEventBaseAddon
{
public:
	float                                              _auraBlockingDuration;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _auraVisibleDistance;                                      // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.ShopLubricantAddon");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
