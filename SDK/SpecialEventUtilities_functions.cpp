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

// Function SpecialEventUtilities.respawnableInteractable.OnUnhidden
// (Event, Protected, BlueprintEvent)
void UrespawnableInteractable::OnUnhidden()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.respawnableInteractable.OnUnhidden");

	UrespawnableInteractable_OnUnhidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.respawnableInteractable.OnRep_IsHidden
// (Final, Native, Private)
void UrespawnableInteractable::OnRep_IsHidden()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.respawnableInteractable.OnRep_IsHidden");

	UrespawnableInteractable_OnRep_IsHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.respawnableInteractable.OnHidden
// (Event, Protected, BlueprintEvent)
void UrespawnableInteractable::OnHidden()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.respawnableInteractable.OnHidden");

	UrespawnableInteractable_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.respawnableInteractable.isHidden
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UrespawnableInteractable::isHidden()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.respawnableInteractable.isHidden");

	UrespawnableInteractable_isHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
// (Final, Exec, Native, Private)
void URespawningEventComponent::DBD_ForceRespawnSpecialEventObject()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject");

	URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
// (Native, Protected)
// Parameters:
// class UrespawnableInteractable* respawnableInteractable        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isInteracting                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URespawningEventComponent::Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class UrespawnableInteractable* respawnableInteractable, bool isInteracting)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged");

	URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params params;
	params.respawnableInteractable = respawnableInteractable;
	params.isInteracting = isInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
// (Final, Native, Public)
// Parameters:
// class UrespawnableInteractable* newRespawnableInteractable     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionRespawnableTrigger::Authority_OnNewRespawnableSubscribed(class UrespawnableInteractable* newRespawnableInteractable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed");

	UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params params;
	params.newRespawnableInteractable = newRespawnableInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
// (Final, Native, Public)
// Parameters:
// class UrespawnableInteractable* respawnableInteractable        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionRespawnableTrigger::Authority_OnInteractionEnded(class UrespawnableInteractable* respawnableInteractable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded");

	UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params params;
	params.respawnableInteractable = respawnableInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
// (Final, Native, Private)
// Parameters:
// class UrespawnableInteractable* respawnableInteractable        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isInteracting                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URespawnablePositioner::Authority_OnIsInteractingChangedEvent(class UrespawnableInteractable* respawnableInteractable, bool isInteracting)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent");

	URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params params;
	params.respawnableInteractable = respawnableInteractable;
	params.isInteracting = isInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UrespawnableInteractable*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UrespawnableInteractable*> URespawnablePositioner::Authority_GetRespawnables()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables");

	URespawnablePositioner_Authority_GetRespawnables_Params params;

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
