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

// BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_13_C
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UBP_Audio_KLR_13_C : public UBP_Audio_KLR_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_13_C");
		return ptr;
	}



	void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason);
	void ExecuteUbergraph_BP_Audio_KLR_14(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
