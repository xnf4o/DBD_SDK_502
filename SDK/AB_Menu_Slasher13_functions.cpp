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

// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher13_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimGraph");

	UAB_Menu_Slasher13_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher13_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher13_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear
// (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponAppear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponAppear");

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear
// (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear");

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible
// (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_MenuBack_MakeSwordVisible()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_MenuBack_MakeSwordVisible");

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_MenuBack_MakeSwordVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible
// (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher13_C::AnimNotify_FX_HK_Menu_MakeSwordInvisible()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.AnimNotify_FX_HK_Menu_MakeSwordInvisible");

	UAB_Menu_Slasher13_C_AnimNotify_FX_HK_Menu_MakeSwordInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher13_C::ExecuteUbergraph_AB_Menu_Slasher13(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AB_Menu_Slasher13.AB_Menu_Slasher13_C.ExecuteUbergraph_AB_Menu_Slasher13");

	UAB_Menu_Slasher13_C_ExecuteUbergraph_AB_Menu_Slasher13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
