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

// Class SharedAuthenticationUtilities.SharedAuthenticationComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class USharedAuthenticationComponent : public UactorComponent
{
public:
	int                                                PopupZOrder;                                               // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VXVZ[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AuthenticationProviderSelectionWidget;                     // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V306[0x98];                                    // 0x00C8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SharedAuthenticationUtilities.SharedAuthenticationComponent");
		return ptr;
	}



};

// Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UUMGAutheticationProviderSelection : public UUserWidget
{
public:
	unsigned char                                      UnknownData_080P[0x18];                                    // 0x0260(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection");
		return ptr;
	}



	void SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider provider);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
