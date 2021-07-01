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

// Class StartupInitializer.StartupInitializer
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UStartupInitializer : public UObject
{
public:
	unsigned char                                      UnknownData_HZ1D[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.StartupInitializer");
		return ptr;
	}



};

// Class StartupInitializer.ClientStartupInitializer
// 0x00F8 (FullSize[0x0168] - InheritedSize[0x0070])
class UClientStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_AKUK[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USharedAuthenticationComponent*              _sharedAuthenticationComponent;                            // 0x0078(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WGF5[0xE8];                                    // 0x0080(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.ClientStartupInitializer");
		return ptr;
	}



};

// Class StartupInitializer.DedicatedServerStartupInitializer
// 0x0030 (FullSize[0x00A0] - InheritedSize[0x0070])
class UDedicatedServerStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_NZ9P[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTimeUtilities*                           _dbdTimeUtilities;                                         // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8BAX[0x20];                                    // 0x0080(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StartupInitializer.DedicatedServerStartupInitializer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
