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

// AnimBlueprintGeneratedClass AB_MKW01.AB_MKW01_C
// 0x3D5B (FullSize[0x3FCB] - InheritedSize[0x0270])
class UAB_MKW01_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_UMFW[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x0280(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x06E0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x0700(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x0720(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x07C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x07E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x0810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x0838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x0860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x0888(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x08B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0928(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x0960(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x09D8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0A10(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x0A88(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0AC0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x0B38(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x0BD8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0C78(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0CF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x0D68(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x0DA0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0E50(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x0F08(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0F38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0F60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0F88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0FB0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0FD8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1050(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1088(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1100(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1138(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x11B0(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x11E8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x1298(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x1338(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x1368(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1408(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x1440(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1460(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x1480(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x14B0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x1550(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x1580(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x1638(0x00A0)
	unsigned char                                      UnknownData_WMWH[0x8];                                     // 0x16D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x16E0(0x0460)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1B40(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1BE0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1C10(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1C30(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1C50(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x1C80(0x0460)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x20E0(0x0030)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x2110(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x2570(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x29D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x2E30(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x3290(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x36F0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x3B50(0x0460)
	class UskeletalMeshComponent*                      OwningCharacterSkeletalMesh;                               // 0x3FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialized;                                               // 0x3FB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFirstPerson;                                             // 0x3FB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackSwing;                                             // 0x3FBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackOver;                                              // 0x3FBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsTurnOffDynamic;                                          // 0x3FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S6ER[0x3];                                     // 0x3FBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeltaTimer;                                                // 0x3FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               startTime;                                                 // 0x3FC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMori;                                                    // 0x3FC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InMenu;                                                    // 0x3FC6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAttackCarry;                                             // 0x3FC7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsEdgeCase;                                                // 0x3FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsIntroComplete;                                           // 0x3FC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsRoleSelection;                                           // 0x3FCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_MKW01.AB_MKW01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void IsOwnerInRollSelection();
	bool IsNeedEdgeCase();
	bool IsOwnerAttackCarry();
	void IsOwnerInMenu(class UDBDMenuPlayer** AsDBDMenu_Player);
	void IsOwnerMori(bool* Return);
	bool StartTimer();
	bool IsOwnerTurnOffDynamic();
	void Check_VariablesAtStart();
	void IsOwnerAttackSwing(bool* Return);
	void Updating_Variables();
	void IsOwnerFirstPerson(bool* FPV);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_F626364F428A9D4FE1796CBA5CE32DDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_90FAB1ED4D2B838BEE13C494A0190C20();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_End();
	void AnimNotify_Start();
	void AnimNotify_FX_MK_Chain_Show();
	void AnimNotify_FX_MK_Chain_Hide();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_MKW01_AnimGraphNode_BlendListByBool_927D74B44ABD94C623C74A92E94CC851();
	void ExecuteUbergraph_AB_MKW01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
