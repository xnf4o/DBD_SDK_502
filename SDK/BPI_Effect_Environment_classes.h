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

// BlueprintGeneratedClass BPI_Effect_Environment.BPI_Effect_Environment_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBPI_Effect_Environment_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BPI_Effect_Environment.BPI_Effect_Environment_C");
		return ptr;
	}



	void KNY_StartSnowstorm();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
