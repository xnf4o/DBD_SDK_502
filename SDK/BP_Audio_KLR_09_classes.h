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

// BlueprintGeneratedClass BP_Audio_KLR_09.BP_Audio_KLR_09_C
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UBP_Audio_KLR_09_C : public UBP_Audio_KLR_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_09.BP_Audio_KLR_09_C");
		return ptr;
	}



	void OnKillerSoundbankLoaded(AkAudio_EAkResult result);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason);
	void ExecuteUbergraph_BP_Audio_KLR_09(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
