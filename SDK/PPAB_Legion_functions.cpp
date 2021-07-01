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

// Function PPAB_Legion.PPAB_Legion_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UPPAB_Legion_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PPAB_Legion.PPAB_Legion_C.AnimGraph");

	UPPAB_Legion_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function PPAB_Legion.PPAB_Legion_C.ExecuteUbergraph_PPAB_Legion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPPAB_Legion_C::ExecuteUbergraph_PPAB_Legion(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PPAB_Legion.PPAB_Legion_C.ExecuteUbergraph_PPAB_Legion");

	UPPAB_Legion_C_ExecuteUbergraph_PPAB_Legion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
