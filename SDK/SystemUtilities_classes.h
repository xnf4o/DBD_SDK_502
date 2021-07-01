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

// Class SystemUtilities.ArrayExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UArrayExt : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.ArrayExt");
		return ptr;
	}



};

// Class SystemUtilities.BoolExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBoolExt : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.BoolExt");
		return ptr;
	}



	struct FString STATIC_ToString(bool boolToConvert);
};

// Class SystemUtilities.DateTimeProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDateTimeProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.DateTimeProvider");
		return ptr;
	}



};

// Class SystemUtilities.TimeProviderMock
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTimeProviderMock : public UDateTimeProvider
{
public:
	unsigned char                                      UnknownData_PFHH[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.TimeProviderMock");
		return ptr;
	}



};

// Class SystemUtilities.DateTimerUpdater
// 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
class UDateTimerUpdater : public UObject
{
public:
	unsigned char                                      UnknownData_59KY[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FDateTimerArray>        _timers;                                                   // 0x0038(0x0050) (NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UDateTimeProvider*>      _dateTimeProvider;                                         // 0x0088(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.DateTimerUpdater");
		return ptr;
	}



};

// Class SystemUtilities.DebugUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDebugUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.DebugUtilities");
		return ptr;
	}



};

// Class SystemUtilities.PlatformUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlatformUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SystemUtilities.PlatformUtilities");
		return ptr;
	}



	struct FString STATIC_GetPlatform();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
