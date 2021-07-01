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

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers
// (Final, Native, Protected, BlueprintCallable)
void UActivePhaseWalkInteraction::ResetMovementSpeedMultipliers()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers");

	UActivePhaseWalkInteraction_ResetMovementSpeedMultipliers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivePhaseWalkInteraction::ResetChargeVFX(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX");

	UActivePhaseWalkInteraction_ResetChargeVFX_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           startActivePhaseWalk           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           teleportToHusk                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivePhaseWalkInteraction::Local_SendPhaseWalkInfo(bool startActivePhaseWalk, bool teleportToHusk, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo");

	UActivePhaseWalkInteraction_Local_SendPhaseWalkInfo_Params params;
	params.startActivePhaseWalk = startActivePhaseWalk;
	params.teleportToHusk = teleportToHusk;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStalkerComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStalkerComponent* UBaseStalkModeInteraction::GetStalkerComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent");

	UBaseStalkModeInteraction_GetStalkerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.BaseStalkModeInteraction.CanStalk
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseStalkModeInteraction::CanStalk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.BaseStalkModeInteraction.CanStalk");

	UBaseStalkModeInteraction_CanStalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.CollectItemInteraction.GetItem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Ucollectable*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ucollectable* UCollectItemInteraction::GetItem()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.CollectItemInteraction.GetItem");

	UCollectItemInteraction_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
// (Final, Native, Private)
// Parameters:
// float                          IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           WasCoop                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied");

	UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params params;
	params.IndividualChargeAmount = IndividualChargeAmount;
	params.TotalChargeAmount = TotalChargeAmount;
	params.ChargeInstigator = ChargeInstigator;
	params.WasCoop = WasCoop;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.DropItemInteraction.GetItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Ucollectable*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ucollectable* UDropItemInteraction::GetItem()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.DropItemInteraction.GetItem");

	UDropItemInteraction_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UdbdPlayer*              damageBy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorDamageInteraction::Authority_DamageGenerator(class UdbdPlayer* damageBy, class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator");

	UGeneratorDamageInteraction_Authority_DamageGenerator_Params params;
	params.damageBy = damageBy;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           obstructed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed");

	UGeneratorRepairInteraction_SetIsObstructed_Params params;
	params.obstructed = obstructed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Ugenerator*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ugenerator* UGeneratorRepairInteraction::GetOwningGenerator()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator");

	UGeneratorRepairInteraction_GetOwningGenerator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorToolboxRepairInteraction::HasChargedToolBox(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox");

	UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGeneratorToolboxRepairInteraction::GetInteractionTextWhenEmpty()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty");

	UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.GhostChargeStalkModeInteraction.GetStealthComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGhostStealthComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGhostStealthComponent* UGhostChargeStalkModeInteraction::GetStealthComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.GhostChargeStalkModeInteraction.GetStealthComponent");

	UGhostChargeStalkModeInteraction_GetStealthComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeatHook*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeatHook* UHookSurvivorDefinition::GetMeatHook()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.HookSurvivorDefinition.GetMeatHook");

	UHookSurvivorDefinition_GetMeatHook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.LinkedVomitInteraction.IsVomiting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULinkedVomitInteraction::IsVomiting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.LinkedVomitInteraction.IsVomiting");

	ULinkedVomitInteraction_IsVomiting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULinkedVomitInteraction::IsChargeComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete");

	ULinkedVomitInteraction_IsChargeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVomitStateComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent");

	ULinkedVomitInteraction_GetVomitStateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USearchChestInteractionBase::FireChestScoreEvent(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent");

	USearchChestInteractionBase_FireChestScoreEvent_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class Ucollectable*            collectable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOpenChestInteraction::CollectItemIfEmptyHanded(class Ucollectable* collectable, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded");

	UOpenChestInteraction_CollectItemIfEmptyHanded_Params params;
	params.collectable = collectable;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX");

	UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet");

	UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrowInteraction::InitThrowCancellationExitTime(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime");

	UThrowInteraction_InitThrowCancellationExitTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInteraction.ThrowInteraction.HasCancelledThrow
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThrowInteraction::HasCancelledThrow()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInteraction.ThrowInteraction.HasCancelledThrow");

	UThrowInteraction_HasCancelledThrow_Params params;

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
