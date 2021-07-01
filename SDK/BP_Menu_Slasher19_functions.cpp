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

// Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UskeletalMeshComponent*  Rifle_Mesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_Slasher19_C::UpdateHarpoonOnRifle(class UskeletalMeshComponent* Rifle_Mesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.UpdateHarpoonOnRifle");

	UBP_Menu_Slasher19_C_UpdateHarpoonOnRifle_Params params;
	params.Rifle_Mesh = Rifle_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UBP_Menu_Slasher19_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ReceiveBeginPlay");

	UBP_Menu_Slasher19_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// DeadByDaylight_ECustomizationCategory category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UskeletalMeshComponent*  mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_Slasher19_C::OnMeshSwitchBP(DeadByDaylight_ECustomizationCategory category, class UskeletalMeshComponent* mesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.OnMeshSwitchBP");

	UBP_Menu_Slasher19_C_OnMeshSwitchBP_Params params;
	params.category = category;
	params.mesh = mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_Slasher19_C::ExecuteUbergraph_BP_Menu_Slasher19(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_Slasher19.BP_Menu_Slasher19_C.ExecuteUbergraph_BP_Menu_Slasher19");

	UBP_Menu_Slasher19_C_ExecuteUbergraph_BP_Menu_Slasher19_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
