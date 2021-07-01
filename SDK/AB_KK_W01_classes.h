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

// AnimBlueprintGeneratedClass AB_KK_W01.AB_KK_W01_C
// 0x0251 (FullSize[0x04C1] - InheritedSize[0x0270])
class UAB_KK_W01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_2;                               // 0x02B0(0x0010)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x02C0(0x0110)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x03D0(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0470(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0490(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x04A0(0x0020)
	bool                                               IsAttack;                                                  // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_KK_W01.AB_KK_W01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	bool GetLegionAttack();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_KK_W01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
