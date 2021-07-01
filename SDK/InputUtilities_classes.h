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

// Class InputUtilities.AxisFlick
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAxisFlick : public UObject
{
public:
	unsigned char                                      UnknownData_4E2T[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InputUtilities.AxisFlick");
		return ptr;
	}



};

// Class InputUtilities.AxisFlickMasher
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UAxisFlickMasher : public UactorComponent
{
public:
	class UInputComponent*                             _inputComponent;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WG2B[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAxisFlick*                                  _axisFlick1;                                               // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAxisFlick*                                  _axisFlick2;                                               // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CT3I[0x20];                                    // 0x00D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InputUtilities.AxisFlickMasher");
		return ptr;
	}



	void OnAxisFlicked2();
	void OnAxisFlicked1();
};

// Class InputUtilities.ButtonPressTracker
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UButtonPressTracker : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData_116A[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UInputComponent>              _trackedInputComponent;                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UplayerInput>                 _playerInput;                                              // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4XXM[0x28];                                    // 0x0060(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InputUtilities.ButtonPressTracker");
		return ptr;
	}



};

// Class InputUtilities.InputMasher
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UInputMasher : public UactorComponent
{
public:
	class UInputComponent*                             _inputComponent;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8U9B[0x30];                                    // 0x00C0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InputUtilities.InputMasher");
		return ptr;
	}



};

// Class InputUtilities.VirtualKeyboard
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UVirtualKeyboard : public UObject
{
public:
	unsigned char                                      UnknownData_J6Y0[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InputUtilities.VirtualKeyboard");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
