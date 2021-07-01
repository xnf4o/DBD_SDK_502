// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent
// (BlueprintEvent)
void UStartScreen_C::K2Node_MatineeController_1_FadedOutEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent");

	UStartScreen_C_K2Node_MatineeController_1_FadedOutEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished
// (BlueprintEvent)
void UStartScreen_C::K2Node_MatineeController_1_Finished()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished");

	UStartScreen_C_K2Node_MatineeController_1_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StartScreen.StartScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UStartScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ReceiveBeginPlay");

	UStartScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StartScreen.StartScreen_C.BeginDestroyTravelSequence
// (Event, Public, BlueprintEvent)
void UStartScreen_C::BeginDestroyTravelSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.BeginDestroyTravelSequence");

	UStartScreen_C_BeginDestroyTravelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStartScreen_C::ExecuteUbergraph_StartScreen(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen");

	UStartScreen_C_ExecuteUbergraph_StartScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
