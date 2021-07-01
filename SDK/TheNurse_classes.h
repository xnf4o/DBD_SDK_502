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

// Class TheNurse.BlinkAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UBlinkAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.BlinkAttack");
		return ptr;
	}



};

// Class TheNurse.BlinkAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.BlinkAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheNurse.NurseAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNurseAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_572I[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.NurseAnimInstance");
		return ptr;
	}



};

// Class TheNurse.NurseBurnable
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UNurseBurnable : public UPlayerLightBurnable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.NurseBurnable");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
