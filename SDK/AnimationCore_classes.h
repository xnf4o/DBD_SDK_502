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

// Class AnimationCore.AnimationDataSourceRegistry
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<struct FName, TWeakObjectPtr<class UObject>>  DataSources;                                               // 0x0030(0x0050) (Transient, UObjectWrapper, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
