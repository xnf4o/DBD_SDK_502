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

// Function LevelGenerator.LevelGenerator_C.RemoveMist
// (Event, Public, BlueprintEvent)
void ULevelGenerator_C::RemoveMist()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.RemoveMist");

	ULevelGenerator_C_RemoveMist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelGenerator.LevelGenerator_C.ApplyMist
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelGenerator_C::ApplyMist(float modifier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.ApplyMist");

	ULevelGenerator_C_ApplyMist_Params params;
	params.modifier = modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelGenerator_C::ExecuteUbergraph_LevelGenerator(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator");

	ULevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
