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

// Class TheHuntress.HatchetCooldown
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UHatchetCooldown : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_VUHL[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.HatchetCooldown");
		return ptr;
	}



};

// Class TheHuntress.HatchetLauncher
// 0x0120 (FullSize[0x02A0] - InheritedSize[0x0180])
class UHatchetLauncher : public UKillerProjectileLauncher
{
public:
	struct FRotator                                    _angleOffset;                                              // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LSPI[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _angleOffsetCurve;                                         // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _speedCurve;                                               // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _hatchetSpeedWhenThrowFullyCharged;                        // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TG93[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _hatchetPitchCurve;                                        // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMinAngleOffset;                                    // 0x01B0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMaxAngleOffset;                                    // 0x01D8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMinSpeed;                                          // 0x0200(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetMaxSpeed;                                          // 0x0228(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetLaunchPitchMin;                                    // 0x0250(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hatchetLaunchPitchMax;                                    // 0x0278(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.HatchetLauncher");
		return ptr;
	}



	bool IsLaunchedHatchetFullyCharged();
};

// Class TheHuntress.HatchetProjectile
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UHatchetProjectile : public UKillerProjectile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.HatchetProjectile");
		return ptr;
	}



};

// Class TheHuntress.HatchetRack
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UHatchetRack : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.HatchetRack");
		return ptr;
	}



	void SetMovableHatchetVisibility(bool Visible);
};

// Class TheHuntress.HatchetThrow
// 0x0030 (FullSize[0x06C0] - InheritedSize[0x0690])
class UHatchetThrow : public UThrowInteraction
{
public:
	struct FDBDTunableRowHandle                        _hatchetThrowCancellationCooldown;                         // 0x0690(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W3IO[0x8];                                     // 0x06B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.HatchetThrow");
		return ptr;
	}



	class UTheHuntressPower* GetOwningHatchetSpawner();
};

// Class TheHuntress.ReloadHatchet
// 0x0000 (FullSize[0x0560] - InheritedSize[0x0560])
class UReloadHatchet : public UBaseLockerInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.ReloadHatchet");
		return ptr;
	}



	bool IsInteractionPossible_Shared(class UdbdPlayer* player);
};

// Class TheHuntress.TheHuntressPower
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
class UTheHuntressPower : public Ucollectable
{
public:
	unsigned char                                      UnknownData_10AA[0x8];                                     // 0x0498(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheHuntress.TheHuntressPower");
		return ptr;
	}



	void StartHatchetShineCosmetic();
	void SetPercentThrowStrength(float percentStrength);
	void SetHatchetVisible(bool Visible);
	void PrintDebugThrowInfo();
	bool IsHatchetThrowFullyCharged();
	bool HasHatchet();
	class UslasherPlayer* GetOwningKiller();
	class UBaseProjectileLauncher* GetHatchetProjectileLauncher();
	class UHatchetCooldown* GetHatchetCooldown();
	class UAkComponent* GetAkAudioHatchetSpawner();
	void Cosmetic_OnThrowInteractionStart();
	void Cosmetic_OnThrowInteractionCancelled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
