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

// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_SK_Body_T_ACC01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.AnimGraph");

	UAB_SK_Body_T_ACC01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.GetOwnerActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UskeletalMeshComponent*  skeletalMeshComponent          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_SK_Body_T_ACC01_C::GetOwnerActor(class UskeletalMeshComponent** skeletalMeshComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.GetOwnerActor");

	UAB_SK_Body_T_ACC01_C_GetOwnerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (skeletalMeshComponent != nullptr)
		*skeletalMeshComponent = params.skeletalMeshComponent;

}


// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_SK_Body_T_ACC01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.BlueprintUpdateAnimation");

	UAB_SK_Body_T_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.ExecuteUbergraph_AB_SK_Body_T_ACC01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_SK_Body_T_ACC01_C::ExecuteUbergraph_AB_SK_Body_T_ACC01(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_SK_Body_T_ACC01.AB_SK_Body_T_ACC01_C.ExecuteUbergraph_AB_SK_Body_T_ACC01");

	UAB_SK_Body_T_ACC01_C_ExecuteUbergraph_AB_SK_Body_T_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
