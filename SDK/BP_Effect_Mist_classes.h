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

// BlueprintGeneratedClass BP_Effect_Mist.BP_Effect_Mist_C
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
class UBP_Effect_Mist_C : public UBaseVFX
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDBDAggregateParticleLocatorComponent*       DBDAggregateParticleLocator;                               // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Effect_Mist.BP_Effect_Mist_C");
		return ptr;
	}



	void ReceiveTick(float deltaSeconds);
	void ExecuteUbergraph_BP_Effect_Mist(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
