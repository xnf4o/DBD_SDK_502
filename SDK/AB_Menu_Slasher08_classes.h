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

// AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C
// 0x03E0 (FullSize[0x0650] - InheritedSize[0x0270])
class UAB_Menu_Slasher08_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x02B0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0328(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x03A0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0440(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x04E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0558(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0590(0x00B0)
	bool                                               Role_Selected;                                             // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZSGF[0x6];                                     // 0x0642(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Hatchet;                                                   // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher08.AB_Menu_Slasher08_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetKiller(class UBP_Menu_Slasher08_C** Menu_Slasher_08);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_FX_MakeHatchetAppear();
	void AnimNotify_FX_MakeHatchetDisappear();
	void ExecuteUbergraph_AB_Menu_Slasher08(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
