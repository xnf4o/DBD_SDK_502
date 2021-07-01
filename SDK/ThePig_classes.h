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

// Class ThePig.PigAmbushAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UPigAmbushAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_HYS7[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttack");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackOpenSubstate
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_LCBA[0x8];                                     // 0x0130(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackOpenSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackHittingSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackSuccessSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackMissSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackObstructSubstate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
