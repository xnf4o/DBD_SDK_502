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

// BlueprintGeneratedClass BP_Menu_Slasher24.BP_Menu_Slasher24_C
// 0x002C (FullSize[0x06B8] - InheritedSize[0x068C])
class UBP_Menu_Slasher24_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_VBVC[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UK24_KillerAudioMenuReaction_C*              K24_KillerAudioMenuReaction;                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      _tentacle;                                                 // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Audio_KLR_24_C*                          BP_Audio_KLR_25;                                           // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               _switchInterrupt02;                                        // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UMYF[0x3];                                     // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _animSwitch;                                               // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher24.BP_Menu_Slasher24_C");
		return ptr;
	}



	void _cast_AB_Menu_Slasher24();
	void ReceiveBeginPlay();
	void ReceiveTick(float deltaSeconds);
	void ExecuteUbergraph_BP_Menu_Slasher24(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
