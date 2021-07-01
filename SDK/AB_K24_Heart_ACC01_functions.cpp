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

// Function AB_K24_Heart_ACC01.AB_K24_Heart_ACC01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_K24_Heart_ACC01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K24_Heart_ACC01.AB_K24_Heart_ACC01_C.AnimGraph");

	UAB_K24_Heart_ACC01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_K24_Heart_ACC01.AB_K24_Heart_ACC01_C.ExecuteUbergraph_AB_K24_Heart_ACC01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K24_Heart_ACC01_C::ExecuteUbergraph_AB_K24_Heart_ACC01(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_K24_Heart_ACC01.AB_K24_Heart_ACC01_C.ExecuteUbergraph_AB_K24_Heart_ACC01");

	UAB_K24_Heart_ACC01_C_ExecuteUbergraph_AB_K24_Heart_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
