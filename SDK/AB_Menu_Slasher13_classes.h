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

// AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
// 0x3B02 (FullSize[0x3D72] - InheritedSize[0x0270])
class UAB_Menu_Slasher13_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x02B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0328(0x0078)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_12;                             // 0x03A0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_11;                             // 0x0800(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10;                             // 0x0C60(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9;                              // 0x10C0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8;                              // 0x1520(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7;                              // 0x1980(0x0460)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_2;                                // 0x1DE0(0x0138)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone;                                  // 0x1F18(0x0138)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6;                              // 0x2050(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5;                              // 0x24B0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4;                              // 0x2910(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3;                              // 0x2D70(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2;                              // 0x31D0(0x0460)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics;                                // 0x3630(0x0460)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x3A90(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x3AB0(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x3AD0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x3B70(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x3BE8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x3C88(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x3CC0(0x00B0)
	bool                                               Role_Selected;                                             // 0x3D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x3D71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();
	void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();
	void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();
	void AnimNotify_FX_HK_Menu_MakeSwordInvisible();
	void ExecuteUbergraph_AB_Menu_Slasher13(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
