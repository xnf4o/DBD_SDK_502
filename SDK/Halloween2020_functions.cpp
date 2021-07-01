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

// Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
// (Final, Native, Private)
void UBlightedSerumAddon::OnRep_DashInteraction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction");

	UBlightedSerumAddon_OnRep_DashInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBlightedSerumAddon::OnBlightedDashEnabledVfxSfx()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx");

	UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCooldownInteraction* cooldownInteraction            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumCollisionInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction");

	UBlightedSerumCollisionInteraction_SetCooldownInteraction_Params params;
	params.cooldownInteraction = cooldownInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCooldownInteraction* cooldownInteraction            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumDashInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction");

	UBlightedSerumDashInteraction_SetCooldownInteraction_Params params;
	params.cooldownInteraction = cooldownInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlightedSerumCollisionInteraction* collisionInteraction           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumDashInteraction::SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction");

	UBlightedSerumDashInteraction_SetCollisionInteraction_Params params;
	params.collisionInteraction = collisionInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isComplete                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UToxinPlantInteractable::SetToxinPlantComplete(bool isComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete");

	UToxinPlantInteractable_SetToxinPlantComplete_Params params;
	params.isComplete = isComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UToxinPlantInteractable::OnToxinPlantComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete");

	UToxinPlantInteractable_OnToxinPlantComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UToxinPlantInteractable::OnSalvageInteractionStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart");

	UToxinPlantInteractable_OnSalvageInteractionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UToxinPlantInteractable::OnSalvageInteractionFinished()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished");

	UToxinPlantInteractable_OnSalvageInteractionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UToxinPlantInteractable::IsToxinPlantComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete");

	UToxinPlantInteractable_IsToxinPlantComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
