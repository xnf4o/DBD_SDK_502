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

// BlueprintGeneratedClass StartScreen.StartScreen_C
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UStartScreen_C : public UStartScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMatineeActor*                               MatineeActor_1_ExecuteUbergraph_StartScreen_RefProperty;   // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass StartScreen.StartScreen_C");
		return ptr;
	}



	void K2Node_MatineeController_1_FadedOutEvent();
	void K2Node_MatineeController_1_Finished();
	void ReceiveBeginPlay();
	void BeginDestroyTravelSequence();
	void ExecuteUbergraph_StartScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
