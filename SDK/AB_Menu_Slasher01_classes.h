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

// AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C
// 0x19F2 (FullSize[0x1C62] - InheritedSize[0x0270])
class UAB_Menu_Slasher01_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x02B0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x02D0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x02F0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x0750(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x0BB0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x1010(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x1470(0x0460)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x18D0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x1970(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x19E8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1A88(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1B00(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1B78(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1BB0(0x00B0)
	bool                                               Role_Selected;                                             // 0x1C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x1C61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_Menu_Slasher01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
