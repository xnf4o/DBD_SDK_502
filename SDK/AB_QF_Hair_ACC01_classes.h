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

// AnimBlueprintGeneratedClass AB_QF_Hair_ACC01.AB_QF_Hair_ACC01_C
// 0x7058 (FullSize[0x72D8] - InheritedSize[0x0280])
class UAB_QF_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02E8(0x0028)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_28;                     // 0x0310(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_27;                     // 0x0440(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_26;                     // 0x0570(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_25;                     // 0x06A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_24;                     // 0x07D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_23;                     // 0x0900(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_22;                     // 0x0A30(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_21;                     // 0x0B60(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_20;                     // 0x0C90(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_19;                     // 0x0DC0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_18;                     // 0x0EF0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_17;                     // 0x1020(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_16;                     // 0x1150(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_15;                     // 0x1280(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x13B0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x13E0(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x1400(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x1610(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x1A70(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x1ED0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x2330(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x2790(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x2BF0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x3050(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x34B0(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x3910(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x3930(0x0038)
	unsigned char                                      UnknownData_CL40[0x8];                                     // 0x3968(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x3970(0x0210)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_14;                     // 0x3B80(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_13;                     // 0x3CB0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_12;                     // 0x3DE0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11;                     // 0x3F10(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_10;                     // 0x4040(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9;                      // 0x4170(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8;                      // 0x42A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7;                      // 0x43D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6;                      // 0x4500(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5;                      // 0x4630(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x4760(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x4890(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x49C0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x4AF0(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x4C20(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x5080(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x54E0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x5940(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x5DA0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x6200(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x6660(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x6AC0(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x6F20(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x6F40(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x6F70(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x6F90(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x6FC8(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x6FF8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x7030(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x70E0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x7220(0x00B8)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_QF_Hair_ACC01.AB_QF_Hair_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_QF_Hair_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
