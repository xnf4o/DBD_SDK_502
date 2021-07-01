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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHandlerComponentFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}



};

// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                                // 0x0030(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
