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

// AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C
// 0x2F48 (FullSize[0x31C8] - InheritedSize[0x0280])
class UAB_SK_Armor_ACC01_C : public UDynamicAccessoryAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0288(0x0038)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh;                            // 0x02C0(0x0140) (ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0400(0x00B8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_11;                     // 0x04B8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_10;                     // 0x05E8(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9;                      // 0x0718(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_8;                      // 0x0848(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7;                      // 0x0978(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6;                      // 0x0AA8(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_8;                                // 0x0BD8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5;                      // 0x0CF0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4;                      // 0x0E20(0x0130)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x0F50(0x0460)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3;                      // 0x13B0(0x0130)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2;                      // 0x14E0(0x0130)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_7;                                // 0x1610(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController;                        // 0x1728(0x0130)
	unsigned char                                      UnknownData_M2WG[0x8];                                     // 0x1858(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x1860(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x1CC0(0x0460)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x2120(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x2140(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x2170(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x25D0(0x0460)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_6;                                // 0x2A30(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_5;                                // 0x2B48(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_4;                                // 0x2C60(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_3;                                // 0x2D78(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint_2;                                // 0x2E90(0x0118)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                  // 0x2FA8(0x0118)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x30C0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x30E0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3118(0x00B0)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_SK_Armor_ACC01.AB_SK_Armor_ACC01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AB_SK_Armor_ACC01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
