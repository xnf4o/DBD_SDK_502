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

// BlueprintGeneratedClass BP_Audio_KLR_06.BP_Audio_KLR_06_C
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UBP_Audio_KLR_06_C : public UBP_Audio_KLR_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_06.BP_Audio_KLR_06_C");
		return ptr;
	}



	void OnKillerSoundbankLoaded(AkAudio_EAkResult result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
