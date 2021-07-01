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

// AnimBlueprintGeneratedClass AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C
// 0x8840 (FullSize[0x8AC0] - InheritedSize[0x0280])
class UAB_K22_backpack_ACC01_REF_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02C0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0400(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x04B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04E0(0x0028)
	unsigned char                                      UnknownData_2GNX[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_30;                             // 0x0510(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_29;                             // 0x0970(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_28;                             // 0x0DD0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27;                             // 0x1230(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26;                             // 0x1690(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_25;                             // 0x1AF0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_24;                             // 0x1F50(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_23;                             // 0x23B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22;                             // 0x2810(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21;                             // 0x2C70(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20;                             // 0x30D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                             // 0x3530(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                             // 0x3990(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                             // 0x3DF0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x4250(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x46B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x46D0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x46F0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x4720(0x0038)
	unsigned char                                      UnknownData_28LY[0x8];                                     // 0x4758(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x4760(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x4BC0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x5020(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x5480(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x58E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x5D40(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x61A0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x6600(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x6A60(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x6EC0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x7320(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x7780(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x7BE0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x8040(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x84A0(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x8900(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x8920(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x8940(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x8970(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x89A8(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x89D8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x8A10(0x00B0)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_K22_backpack_ACC01_REF(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
