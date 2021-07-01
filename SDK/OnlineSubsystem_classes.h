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

// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0040(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WMXP[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}



};

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}



	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
