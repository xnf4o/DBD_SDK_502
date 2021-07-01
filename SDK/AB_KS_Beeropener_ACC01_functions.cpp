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

// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_KS_Beeropener_ACC01_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.AnimGraph");

	UAB_KS_Beeropener_ACC01_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.IsOwnerInMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAB_KS_Beeropener_ACC01_C::IsOwnerInMenu(bool* Return)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.IsOwnerInMenu");

	UAB_KS_Beeropener_ACC01_C_IsOwnerInMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.Update_Variables
// (Public, BlueprintCallable, BlueprintEvent)
void UAB_KS_Beeropener_ACC01_C::Update_Variables()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.Update_Variables");

	UAB_KS_Beeropener_ACC01_C_Update_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_KS_Beeropener_ACC01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.BlueprintUpdateAnimation");

	UAB_KS_Beeropener_ACC01_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.ExecuteUbergraph_AB_KS_Beeropener_ACC01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_KS_Beeropener_ACC01_C::ExecuteUbergraph_AB_KS_Beeropener_ACC01(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_KS_Beeropener_ACC01.AB_KS_Beeropener_ACC01_C.ExecuteUbergraph_AB_KS_Beeropener_ACC01");

	UAB_KS_Beeropener_ACC01_C_ExecuteUbergraph_AB_KS_Beeropener_ACC01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
