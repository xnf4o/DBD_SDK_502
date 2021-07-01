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

// BlueprintGeneratedClass BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C
// 0x000C (FullSize[0x025C] - InheritedSize[0x0250])
class UBP_Effect_K21_Body01_CV01_C : public UBP_BaseItemVfx_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TotalTime;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Effect_K21_Body01_CV01.BP_Effect_K21_Body01_CV01_C");
		return ptr;
	}



	void AttachToSkeletalMesh(class UskeletalMeshComponent* SkeletonPart);
	void ExecuteUbergraph_BP_Effect_K21_Body01_CV01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
