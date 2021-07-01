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

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (FullSize[0x1AF0] - InheritedSize[0x1AE8])
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                            // 0x1AE8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VI55[0x7];                                     // 0x1AE9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}



};

// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_KMWZ[0x8];                                     // 0x07D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
