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

// Class S3Command.AccessKeys
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAccessKeys : public UObject
{
public:
	TArray<struct FAccessKey>                          AccessKeys;                                                // 0x0030(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class S3Command.AccessKeys");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
