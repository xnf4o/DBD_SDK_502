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

// Class TheLegion.FrenzyAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UFrenzyAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_8CQK[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.FrenzyAttack");
		return ptr;
	}



};

// Class TheLegion.FrenzyAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UFrenzyAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.FrenzyAttackHittingSubstate");
		return ptr;
	}



};

// Class TheLegion.FrenzyAttackSuccessSubstate
// 0x01B0 (FullSize[0x02C8] - InheritedSize[0x0118])
class UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	struct FStatProperty                               _healthyTime;                                              // 0x0118(0x0088) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStatProperty                               _injuredTime;                                              // 0x01A0(0x0088) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FStatProperty                               _bleedoutTime;                                             // 0x0228(0x0088) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _healthyCurve;                                             // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _injuredCurve;                                             // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _bleedoutCurve;                                            // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.FrenzyAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheLegion.LegionKillerAnalyticsComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class ULegionKillerAnalyticsComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_IW03[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.LegionKillerAnalyticsComponent");
		return ptr;
	}



	void SetGameEventDispatcher(class UgameEventDispatcher* gameEventDispatcher);
};

// Class TheLegion.LegionSurvivorAnalyticsComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class ULegionSurvivorAnalyticsComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_CE8D[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.LegionSurvivorAnalyticsComponent");
		return ptr;
	}



	void SetGameEventDispatcher(class UgameEventDispatcher* gameEventDispatcher);
	void OnGameEventDispatched(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class TheLegion.MadGrit
// 0x0008 (FullSize[0x03B0] - InheritedSize[0x03A8])
class UMadGrit : public Uperk
{
public:
	class UCurveFloat*                                 _slashHittingSpeedCurve;                                   // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheLegion.MadGrit");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
