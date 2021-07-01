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

// Function BP_Logo.BP_Logo_C.Anim__FinishedFunc
// (BlueprintEvent)
void UBP_Logo_C::Anim__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Anim__FinishedFunc");

	UBP_Logo_C_Anim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Logo.BP_Logo_C.Anim__UpdateFunc
// (BlueprintEvent)
void UBP_Logo_C::Anim__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Anim__UpdateFunc");

	UBP_Logo_C_Anim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void UBP_Logo_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc");

	UBP_Logo_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void UBP_Logo_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc");

	UBP_Logo_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Logo.BP_Logo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UBP_Logo_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.ReceiveBeginPlay");

	UBP_Logo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Logo_C::ExecuteUbergraph_BP_Logo(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo");

	UBP_Logo_C_ExecuteUbergraph_BP_Logo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
