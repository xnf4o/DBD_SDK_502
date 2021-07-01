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

// Class DBDAttack.PounceAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UPounceAttack : public UDBDAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttack");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackOpenSubstate
// 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
class UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate
{
public:
	class UClass*                                      _pounceOpenStateCosmeticBlueprintClass;                    // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPounceAttackOpenSubstateCosmetic*           _pounceOpenStateCosmeticBlueprintObject;                   // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9KQN[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackOpenSubstate");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UPounceAttackHittingSubstate : public UDBDAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackHittingSubstate");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UPounceAttackSuccessSubstate : public UDBDAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackSuccessSubstate");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackMissSubstate
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UPounceAttackMissSubstate : public UDBDAttackMissSubstate
{
public:
	unsigned char                                      UnknownData_IXXD[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackMissSubstate");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackObstructSubstate
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate
{
public:
	struct FName                                       _fullObstructMontage;                                      // 0x0118(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4BO0[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackObstructSubstate");
		return ptr;
	}



};

// Class DBDAttack.PounceAttackOpenSubstateCosmetic
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPounceAttackOpenSubstateCosmetic : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.PounceAttackOpenSubstateCosmetic");
		return ptr;
	}



	void OnLungeAttackStartCosmetic(class UdbdPlayer* slasherPlayer);
	void OnLungeAttackEndCosmetic(class UdbdPlayer* slasherPlayer);
	void OnLocallyObservedChangedCosmetic(class UdbdPlayer* slasherPlayer);
	void OnLocallyObservedChanged(class UdbdPlayer* slasherPlayer);
	bool IsLungeAttackAugmented(class UdbdPlayer* slasherPlayer);
};

// Class DBDAttack.SlashAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class USlashAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr =
UObject::FindClass("Class DBDAttack.SlashAttack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
