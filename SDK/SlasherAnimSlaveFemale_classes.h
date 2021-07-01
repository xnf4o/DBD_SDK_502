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

// AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C
// 0x0180 (FullSize[0x0400] - InheritedSize[0x0280])
class USlasherAnimSlaveFemale_C : public USlaveAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02C0(0x0140) (ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B();
	void ExecuteUbergraph_SlasherAnimSlaveFemale(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
