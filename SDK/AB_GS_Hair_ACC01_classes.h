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

// AnimBlueprintGeneratedClass AB_GS_Hair_ACC01.AB_GS_Hair_ACC01_C
// 0x8118 (FullSize[0x8398] - InheritedSize[0x0280])
class UAB_GS_Hair_ACC01_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x02E8(0x0028)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_20;                     // 0x0310(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_19;                     // 0x0440(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_18;                     // 0x0570(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_17;                     // 0x06A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_16;                     // 0x07D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_15;                     // 0x0900(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_14;                     // 0x0A30(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_13;                     // 0x0B60(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_12;                     // 0x0C90(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11;                     // 0x0DC0(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x0EF0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x0F20(0x0020)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2;                                 // 0x0F40(0x0210)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22;                             // 0x1150(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_21;                             // 0x15B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20;                             // 0x1A10(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_19;                             // 0x1E70(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18;                             // 0x22D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_17;                             // 0x2730(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16;                             // 0x2B90(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_15;                             // 0x2FF0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_14;                             // 0x3450(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_13;                             // 0x38B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x3D10(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x4170(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x4190(0x0038)
	unsigned char                                      UnknownData_PI2H[0x8];                                     // 0x41C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK;                                   // 0x41D0(0x0210)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_10;                     // 0x43E0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9;                      // 0x4510(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8;                      // 0x4640(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7;                      // 0x4770(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6;                      // 0x48A0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5;                      // 0x49D0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x4B00(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x4C30(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x4D60(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x4E90(0x0130)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x4FC0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x4FF0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x5010(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x5470(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x58D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x5D30(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x6190(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x65F0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x6A50(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x6EB0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x7310(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x7770(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x7BD0(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x8030(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x8050(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x8088(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x80B8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x80F0(0x00B0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x81A0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x82E0(0x00B8)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_GS_Hair_ACC01.AB_GS_Hair_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_GS_Hair_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
