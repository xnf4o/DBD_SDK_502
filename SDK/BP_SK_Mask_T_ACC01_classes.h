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

// BlueprintGeneratedClass BP_SK_Mask_T_ACC01.BP_SK_Mask_T_ACC01_C
// 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
class UBP_SK_Mask_T_ACC01_C : public UBP_SK_Mask_T_ACC000_C
{
public:
	class UparticleSystemComponent*                    P_SK_Mask_Acc_Horn_001_LT;                                 // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UparticleSystemComponent*                    P_SK_Mask_Acc_Eyes_001;                                    // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UparticleSystemComponent*                    P_SK_Mask_Acc_Horn_001_RT;                                 // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_SK_Mask_T_ACC01.BP_SK_Mask_T_ACC01_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
