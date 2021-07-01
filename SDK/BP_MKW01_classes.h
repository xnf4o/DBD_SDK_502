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

// BlueprintGeneratedClass BP_MKW01.BP_MKW01_C
// 0x002C (FullSize[0x02E4] - InheritedSize[0x02B8])
class UBP_MKW01_C : public UItemBlueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Audio_MKW01;                                            // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoneSocketLocalVelocityEvaluator*           BoneSocketLocalVelocityEvaluator;                          // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UparticleSystemComponent*                    P_MKW01_Smoke;                                             // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UparticleSystemComponent*                    P_MKW01_Smoke_FPV;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCConversionFactor;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_MKW01.BP_MKW01_C");
		return ptr;
	}



	float GetChainVelocity();
	float ConvertVelocityToRTPC(float Velocity);
	void UserConstructionScript();
	void ReceiveTick(float deltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MKW01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
