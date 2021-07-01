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

// BlueprintGeneratedClass BP_Menu_Slasher12.BP_Menu_Slasher12_C
// 0x001C (FullSize[0x06A8] - InheritedSize[0x068C])
class UBP_Menu_Slasher12_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_M84L[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_12_C*                          BP_Audio_KLR_13;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow1;                                                    // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher12.BP_Menu_Slasher12_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher12(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
