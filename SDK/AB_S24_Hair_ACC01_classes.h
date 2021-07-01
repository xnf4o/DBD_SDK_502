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

// AnimBlueprintGeneratedClass AB_S24_Hair_ACC01.AB_S24_Hair_ACC01_C
// 0x76C0 (FullSize[0x7940] - InheritedSize[0x0280])
class UAB_S24_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02C0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0400(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x04B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x04E0(0x0028)
	unsigned char                                      UnknownData_BD5R[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_26;                             // 0x0510(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_25;                             // 0x0970(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_24;                             // 0x0DD0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_23;                             // 0x1230(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22;                             // 0x1690(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21;                             // 0x1AF0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20;                             // 0x1F50(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                             // 0x23B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                             // 0x2810(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                             // 0x2C70(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x30D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x3530(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x3990(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x3DF0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x3E20(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x3E40(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x3E60(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x3E98(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x3EB8(0x0020)
	unsigned char                                      UnknownData_NUDB[0x8];                                     // 0x3ED8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x3EE0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x4340(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x47A0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x4C00(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x5060(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x54C0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x5920(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x5D80(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x61E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x6640(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x6AA0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x6F00(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x7360(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x77C0(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x77F0(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x7828(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x7858(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x7890(0x00B0)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_S24_Hair_ACC01.AB_S24_Hair_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_S24_Hair_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
