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

// BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C
// 0x002D (FullSize[0x06B9] - InheritedSize[0x068C])
class UBP_Menu_Slasher08_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_Y55E[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_08_C*                          BP_Audio_KLR_08;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      ItemMesh_Axe;                                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Dissolve_01C466A74EFEFADB8976FC84BC95D44F;      // 0x06A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_01C466A74EFEFADB8976FC84BC95D44F;    // 0x06AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2JYZ[0x3];                                     // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHatchetVisible;                                          // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher08.BP_Menu_Slasher08_C");
		return ptr;
	}



	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void FX_MakeHatchetAppear();
	void FX_MakeHatchetDisappear();
	void OnCustomizationUpdated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Menu_Slasher08(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
