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

// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ULevelTransition_LightsEffects_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay");

	ULevelTransition_LightsEffects_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          deltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelTransition_LightsEffects_C::ReceiveTick(float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick");

	ULevelTransition_LightsEffects_C_ReceiveTick_Params params;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelTransition_LightsEffects_C::ExecuteUbergraph_LevelTransition_LightsEffects(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects");

	ULevelTransition_LightsEffects_C_ExecuteUbergraph_LevelTransition_LightsEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
