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

// Function AP_S22_Hair_ACC006.AP_S22_Hair_ACC006_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAP_S22_Hair_ACC006_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AP_S22_Hair_ACC006.AP_S22_Hair_ACC006_C.AnimGraph");

	UAP_S22_Hair_ACC006_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AP_S22_Hair_ACC006.AP_S22_Hair_ACC006_C.ExecuteUbergraph_AP_S22_Hair_ACC006
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAP_S22_Hair_ACC006_C::ExecuteUbergraph_AP_S22_Hair_ACC006(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AP_S22_Hair_ACC006.AP_S22_Hair_ACC006_C.ExecuteUbergraph_AP_S22_Hair_ACC006");

	UAP_S22_Hair_ACC006_C_ExecuteUbergraph_AP_S22_Hair_ACC006_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
