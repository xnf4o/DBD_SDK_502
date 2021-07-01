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

// Class TheWraith.WraithAnimInstance
// 0x00A8 (FullSize[0x0650] - InheritedSize[0x05A8])
class UWraithAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_8795[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	struct FPerspectiveDependentAnimSequenceSelector   _cloakingInSelector;                                       // 0x05B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector   _cloakingSelector;                                         // 0x05C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector   _cloakingOutSelector;                                      // 0x05E0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector   _uncloakingInSelector;                                     // 0x05F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector   _uncloakingSelector;                                       // 0x0610(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerspectiveDependentAnimSequenceSelector   _uncloakingOutSelector;                                    // 0x0628(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              _cloakingPlayRate;                                         // 0x0640(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KSBC[0xC];                                     // 0x0644(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheWraith.WraithAnimInstance");
		return ptr;
	}



};

// Class TheWraith.WraithBurnable
// 0x0090 (FullSize[0x0190] - InheritedSize[0x0100])
class UWraithBurnable : public UPlayerLightBurnable
{
public:
	struct FDBDTunableRowHandle                        _flashlightEvasionScoreCooldown;                           // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P8SF[0x68];                                    // 0x0128(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheWraith.WraithBurnable");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
