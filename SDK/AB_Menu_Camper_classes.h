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

// AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C
// 0x182D (FullSize[0x1A9D] - InheritedSize[0x0270])
class UAB_Menu_Camper_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x02B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x02D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0300(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x0328(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x0358(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x0390(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x0408(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x04A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x0520(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x0558(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x05D0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x0648(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x06E8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x0720(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x07D0(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x0890(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x0950(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x09C8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x0A00(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x0AB0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0B50(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x0BC8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x0C40(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0D00(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0D78(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0E38(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x0EB0(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0F68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0F90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x0FB8(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0FE8(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1020(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x1040(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x1070(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x1090(0x0460)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone;                                  // 0x14F0(0x0138)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1628(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1660(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1690(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x16C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1778(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1818(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x1848(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1900(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x1930(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x1A40(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x1A60(0x0020)
	DeadByDaylight_EItemHandPosition                   Hand_Position;                                             // 0x1A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U9SE[0x3];                                     // 0x1A81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SelectedIdleIndex;                                         // 0x1A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequence*>                       Menu_Idles;                                                // 0x1A88(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               Role_Selected;                                             // 0x1A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Dynamic_Override;                                          // 0x1A99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Override_Nea;                                              // 0x1A9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Override_Jane;                                             // 0x1A9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               _weaponRT_adjustment;                                      // 0x1A9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Camper.AB_Menu_Camper_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetRandomMenuIdleOverride(int* Return);
	void HasMenuIdleOverrides(bool* Has_Overrides);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_2C83DBE640DBC980B0BA558E2D0836E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_C524B5794BA138DEF5B9088AE8B497C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_5EB4AD52451079E09BBD61A047B60255();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_LayeredBoneBlend_612DCE9C44EB7890D120098F6019F197();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_C4545BC049DFD562DBE9C0BEDFB2FA1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_ModifyBone_F80FCF524110A51D7C4B38A1720994C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_BlendListByBool_747405E04A935FAD9C72CBB1F0F32382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Camper_AnimGraphNode_TransitionResult_BA6696174B4541A7601209A8053A34AA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_SelectNewIdle();
	void ExecuteUbergraph_AB_Menu_Camper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
