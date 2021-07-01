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

// Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           camperPlayer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_TheBlight_18::SpawnParticleOnSurvivor(class UcamperPlayer* camperPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor");

	UAddon_TheBlight_18_SpawnParticleOnSurvivor_Params params;
	params.camperPlayer = camperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class UcamperPlayer*>   survivors                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_TheBlight_18::Multicast_SpawnParticleOnSurvivors(TArray<class UcamperPlayer*> survivors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors");

	UAddon_TheBlight_18_Multicast_SpawnParticleOnSurvivors_Params params;
	params.survivors = survivors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPower.OnPowerStateChanged
// (Final, Native, Private)
// Parameters:
// TheBlight_EWallGrabState       PreviousState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TheBlight_EWallGrabState       NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightPower::OnPowerStateChanged(TheBlight_EWallGrabState PreviousState, TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPower.OnPowerStateChanged");

	UBlightPower_OnPowerStateChanged_Params params;
	params.PreviousState = PreviousState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBlightPowerEstimatedCollisionIndicator::OnShowIndicator_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic");

	UBlightPowerEstimatedCollisionIndicator_OnShowIndicator_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBlightPowerEstimatedCollisionIndicator::OnHideIndicator_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic");

	UBlightPowerEstimatedCollisionIndicator_OnHideIndicator_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerState.GetStateDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerState::GetStateDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerState.GetStateDuration");

	UBlightPowerState_GetStateDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TheBlight_EWallGrabState       NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightPowerStateComponent::Server_SetWallGrabState(TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState");

	UBlightPowerStateComponent_Server_SetWallGrabState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.ResetDashTokens
// (Final, Native, Public, BlueprintCallable)
void UBlightPowerStateComponent::ResetDashTokens()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.ResetDashTokens");

	UBlightPowerStateComponent_ResetDashTokens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer
// (Final, Native, Private)
void UBlightPowerStateComponent::OnRep_StateTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer");

	UBlightPowerStateComponent_OnRep_StateTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens
// (Final, Native, Private)
void UBlightPowerStateComponent::OnRep_DashTokens()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens");

	UBlightPowerStateComponent_OnRep_DashTokens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UBlightPowerStateComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay");

	UBlightPowerStateComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
// TheBlight_EWallGrabState       NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightPowerStateComponent::Multicast_SetWallGrabState(TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState");

	UBlightPowerStateComponent_Multicast_SetWallGrabState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetStateTimeRemaining()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining");

	UBlightPowerStateComponent_GetStateTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetStateTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UBlightPowerStateComponent::GetStateTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimer");

	UBlightPowerStateComponent_GetStateTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetStateTimeElapsed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed");

	UBlightPowerStateComponent_GetStateTimeElapsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TheBlight_EWallGrabState       stateEnum                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlightPowerState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlightPowerState* UBlightPowerStateComponent::GetPowerStateByEnum(TheBlight_EWallGrabState stateEnum)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum");

	UBlightPowerStateComponent_GetPowerStateByEnum_Params params;
	params.stateEnum = stateEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetPowerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TheBlight_EWallGrabState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheBlight_EWallGrabState UBlightPowerStateComponent::GetPowerState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerState");

	UBlightPowerStateComponent_GetPowerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetLookAngleDegrees()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees");

	UBlightPowerStateComponent_GetLookAngleDegrees_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBlightPowerStateComponent::GetDashTokensRemaining()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining");

	UBlightPowerStateComponent_GetDashTokensRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlightPowerState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlightPowerState* UBlightPowerStateComponent::GetCurrentPowerState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState");

	UBlightPowerStateComponent_GetCurrentPowerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BlightPowerStateComponent.CanDash
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlightPowerStateComponent::CanDash()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.CanDash");

	UBlightPowerStateComponent_CanDash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBuiltToLast::OnBuiltToLastTrigger_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic");

	UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.DragonsGrip.OnRevealSurvivor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDragonsGrip::OnRevealSurvivor(class UdbdPlayer* instigator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.OnRevealSurvivor");

	UDragonsGrip_OnRevealSurvivor_Params params;
	params.instigator = instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UdbdPlayer*              Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDragonsGrip::Multicast_OnRevealSurvivor(class UdbdPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor");

	UDragonsGrip_Multicast_OnRevealSurvivor_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
// (Final, Native, Private)
// Parameters:
// class UgameplayModifierContainer* gameplayModifierContainer      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isApplicable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexUndying::Authority_UpdateHexPerkStatusView(class UgameplayModifierContainer* gameplayModifierContainer, bool isApplicable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView");

	UHexUndying_Authority_UpdateHexPerkStatusView_Params params;
	params.gameplayModifierContainer = gameplayModifierContainer;
	params.isApplicable = isApplicable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.HexUndying.Authority_OnSurvivorAdded
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexUndying::Authority_OnSurvivorAdded(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnSurvivorAdded");

	UHexUndying_Authority_OnSurvivorAdded_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHexUndying::Authority_OnCamperCleansedHexPerk(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk");

	UHexUndying_Authority_OnCamperCleansedHexPerk_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
