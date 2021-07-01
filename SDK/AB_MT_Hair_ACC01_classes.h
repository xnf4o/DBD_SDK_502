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

// AnimBlueprintGeneratedClass AB_MT_Hair_ACC01.AB_MT_Hair_ACC01_C
// 0x6E00 (FullSize[0x7080] - InheritedSize[0x0280])
class UAB_MT_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0310(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0340(0x0038)
	unsigned char                                      UnknownData_HSQX[0x8];                                     // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_24;                             // 0x0380(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_23;                             // 0x07E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22;                             // 0x0C40(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21;                             // 0x10A0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20;                             // 0x1500(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                             // 0x1960(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                             // 0x1DC0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                             // 0x2220(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x2680(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x2AE0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x2F40(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x33A0(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x3800(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x3830(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x3850(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x3870(0x0038)
	unsigned char                                      UnknownData_04SF[0x8];                                     // 0x38A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x38B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x3D10(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x4170(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x45D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x4A30(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x4E90(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x52F0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x5750(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x5BB0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x6010(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x6470(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x68D0(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x6D30(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x6D60(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x6D80(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x6DA0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x6DD8(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x6E88(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x6FC8(0x00B8)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_MT_Hair_ACC01.AB_MT_Hair_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_MT_Hair_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
