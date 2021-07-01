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

// AnimBlueprintGeneratedClass AB_Menu_Slasher18.AB_Menu_Slasher18_C
// 0x02EA (FullSize[0x055A] - InheritedSize[0x0270])
class UAB_Menu_Slasher18_C : public UBaseMenuAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x02B0(0x00A0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x0350(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x03C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0468(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x04E0(0x0078)
	bool                                               Role_Selected;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Online;                                                 // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher18.AB_Menu_Slasher18_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_FX_SK_SwitchClub_DemonMode();
	void AnimNotify_FX_SK_SwitchClub_NormalMode();
	void AnimNotify_FK_SK_ShowKatana();
	void AnimNotify_FX_SK_HideKatana();
	void AnimNotify_FX_SK_ShowDemonCosmetic();
	void AnimNotify_FX_SK_HideDemonCosmetic();
	void AnimNotify_FX_SK_HideKatana_TPV();
	void BlueprintInitializeAnimation();
	void AnimNotify_FX_SK_ReturnToNormal();
	void ExecuteUbergraph_AB_Menu_Slasher18(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
