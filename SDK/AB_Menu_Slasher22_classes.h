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

// AnimBlueprintGeneratedClass AB_Menu_Slasher22.AB_Menu_Slasher22_C
// 0x03D8 (FullSize[0x0648] - InheritedSize[0x0270])
class UAB_Menu_Slasher22_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x02B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0328(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x03A0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0440(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x04B8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0558(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0590(0x00B0)
	bool                                               Role_Selected;                                             // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A9NI[0x2];                                     // 0x0642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _anim_switch;                                              // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher22.AB_Menu_Slasher22_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_Idle();
	void AnimNotify_Release();
	void AnimNotify_Pickup();
	void ExecuteUbergraph_AB_Menu_Slasher22(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
