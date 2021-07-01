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

// AnimBlueprintGeneratedClass AB_K24_SW00_Menu.AB_K24_SW00_Menu_C
// 0x03F8 (FullSize[0x0668] - InheritedSize[0x0270])
class UAB_K24_SW00_Menu_C : public UanimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0278(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x02B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x02D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x0300(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x0328(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0350(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0378(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x03A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x0418(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0450(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x04C8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0500(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0578(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x05B0(0x00B0)
	bool                                               _switchInterrupt2;                                         // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TJNZ[0x3];                                     // 0x0661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _animSwitch;                                               // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("AnimBlueprintGeneratedClass AB_K24_SW00_Menu.AB_K24_SW00_Menu_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void _castBP_Menu_Slasher24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_5379521448A4B316E2F9BD9C8706F1D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_161B332C47A9CAC5BF1C388CC040D878();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_3F79D4CE49B2CD0DD97AAE96AE0A579D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_1F33432442B6BE98ACB89392234E545D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_040B652B418D0E13FD01CC8D7485351C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_K24_SW00_Menu_AnimGraphNode_TransitionResult_095BA9D5479486B94EEA6394E3F8CEF9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify__introOver();
	void ExecuteUbergraph_AB_K24_SW00_Menu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
