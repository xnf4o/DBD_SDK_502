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

// Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAbsorbBloodOrbsInteraction::SetPlayerOwner(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner");

	UAbsorbBloodOrbsInteraction_SetPlayerOwner_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.UpdateAttracted_Cosmetic
// (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 Destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              absorber                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrb::UpdateAttracted_Cosmetic(const struct Fvector& Destination, class UdbdPlayer* absorber, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.UpdateAttracted_Cosmetic");

	UbloodOrb_UpdateAttracted_Cosmetic_Params params;
	params.Destination = Destination;
	params.absorber = absorber;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.UpdateAbsorbed_Cosmetic
// (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 Destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              absorber                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrb::UpdateAbsorbed_Cosmetic(const struct Fvector& Destination, class UdbdPlayer* absorber, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.UpdateAbsorbed_Cosmetic");

	UbloodOrb_UpdateAbsorbed_Cosmetic_Params params;
	params.Destination = Destination;
	params.absorber = absorber;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.OnRep_State
// (Final, Native, Private)
// Parameters:
// TheOni_EBloodOrbState          oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrb::OnRep_State(TheOni_EBloodOrbState oldState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.OnRep_State");

	UbloodOrb_OnRep_State_Params params;
	params.oldState = oldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.OnIsAttractedChangedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isAttracted                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrb::OnIsAttractedChangedCosmetic(bool isAttracted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.OnIsAttractedChangedCosmetic");

	UbloodOrb_OnIsAttractedChangedCosmetic_Params params;
	params.isAttracted = isAttracted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.OnDestroyedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UbloodOrb::OnDestroyedCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.OnDestroyedCosmetic");

	UbloodOrb_OnDestroyedCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.OnAbsorbedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UbloodOrb::OnAbsorbedCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.OnAbsorbedCosmetic");

	UbloodOrb_OnAbsorbedCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.GetDroppingPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* UbloodOrb::GetDroppingPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.GetDroppingPlayer");

	UbloodOrb_GetDroppingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.bloodOrb.Authority_OnDropped
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              droppedBy                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          impulseFactor                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrb::Authority_OnDropped(class UdbdPlayer* droppedBy, float impulseFactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.Authority_OnDropped");

	UbloodOrb_Authority_OnDropped_Params params;
	params.droppedBy = droppedBy;
	params.impulseFactor = impulseFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.Authority_OnDropFinished
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UbloodOrb::Authority_OnDropFinished()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.Authority_OnDropFinished");

	UbloodOrb_Authority_OnDropFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.Authority_DestroyBloodOrb
// (Final, Native, Private)
void UbloodOrb::Authority_DestroyBloodOrb()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.Authority_DestroyBloodOrb");

	UbloodOrb_Authority_DestroyBloodOrb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrb.Authority_Despawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UbloodOrb::Authority_Despawn()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrb.Authority_Despawn");

	UbloodOrb_Authority_Despawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbAbsorberComponent.SetInAbsorbMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inAbsorptionMode               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbAbsorberComponent::SetInAbsorbMode(bool inAbsorptionMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbAbsorberComponent.SetInAbsorbMode");

	UbloodOrbAbsorberComponent_SetInAbsorbMode_Params params;
	params.inAbsorptionMode = inAbsorptionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbAbsorberComponent.IsInAbsorbMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UbloodOrbAbsorberComponent::IsInAbsorbMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbAbsorberComponent.IsInAbsorbMode");

	UbloodOrbAbsorberComponent_IsInAbsorbMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
// (Final, Native, Private, Const)
// Parameters:
// class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Killer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateSurvivorBloodOrbVisibilityRange(class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent, class UdbdPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange");

	UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params params;
	params.bloodOrbVisibilityComponent = bloodOrbVisibilityComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
// (Final, Native, Private, Const)
// Parameters:
// class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateKillerBloodOrbVisiblityRanges(class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent, class UdbdPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges");

	UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params params;
	params.bloodOrbVisibilityComponent = bloodOrbVisibilityComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
// (Final, Native, Private, Const)
// Parameters:
// class UbloodOrbAbsorberComponent* bloodOrbAbsorberComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateBloodOrbAttractSpeed(class UbloodOrbAbsorberComponent* bloodOrbAbsorberComponent, class UdbdPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed");

	UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params params;
	params.bloodOrbAbsorberComponent = bloodOrbAbsorberComponent;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UBloodOrbConfiguratorComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay");

	UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
// (Final, Native, Private, Const)
// Parameters:
// class UdbdPlayer*              Killer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class UdbdPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier");

	UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
// (Final, Exec, Native, Private, Const)
// Parameters:
// int                            numOrbs                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::DBD_DropBloodOrbs(int numOrbs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs");

	UBloodOrbDropperComponent_DBD_DropBloodOrbs_Params params;
	params.numOrbs = numOrbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_SetPaused
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           paused                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_SetPaused(bool paused)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_SetPaused");

	UBloodOrbDropperComponent_Authority_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperDamageState oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperDamageState NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnOwningCamperDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged");

	UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Params params;
	params.oldState = oldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// struct FgameplayTag            gameEvent                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBloodOrbDropParams     dropParams                     (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnDropOrbsGameEvent(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData, const struct FBloodOrbDropParams& dropParams)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent");

	UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Params params;
	params.gameEvent = gameEvent;
	params.gameEventData = gameEventData;
	params.dropParams = dropParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameEvent                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperUnhooked(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked");

	UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Params params;
	params.gameEvent = gameEvent;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// struct FgameplayTag            gameEvent                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperHooked(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked");

	UBloodOrbDropperComponent_Authority_OnCamperHooked_Params params;
	params.gameEvent = gameEvent;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameEvent                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperCrouched(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched");

	UBloodOrbDropperComponent_Authority_OnCamperCrouched_Params params;
	params.gameEvent = gameEvent;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
// (Final, Native, Private)
// Parameters:
// int                            previousOverlappingOrbs        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::OnRep_CurrentOverlappingOrbs(int previousOverlappingOrbs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs");

	UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params params;
	params.previousOverlappingOrbs = previousOverlappingOrbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
// (Final, Native, Private)
// Parameters:
// class Uactor*                  destroyedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnDestroyedBloodOrb(class Uactor* destroyedActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb");

	UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params params;
	params.destroyedActor = destroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
// (Final, Native, Private)
// Parameters:
// TheOni_EBloodOrbVisibilityMode visibilityMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbVisibilityModeChanged(TheOni_EBloodOrbVisibilityMode visibilityMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged");

	UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params params;
	params.visibilityMode = visibilityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
// (Final, Native, Private)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbEndOverlap(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap");

	UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              sweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbBeginOverlap(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap");

	UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.sweepResult = sweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UBloodOrbOverlapRevealToKiller::GetRevealTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer");

	UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
// (Final, Native, Private, Const)
// Parameters:
// TheOni_EBloodOrbState          oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TheOni_EBloodOrbState          NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UbloodOrb*               bloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbStateChanged(TheOni_EBloodOrbState oldState, TheOni_EBloodOrbState NewState, class UbloodOrb* bloodOrb)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged");

	UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params params;
	params.oldState = oldState;
	params.NewState = NewState;
	params.bloodOrb = bloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
// (Final, Native, Private)
// Parameters:
// class UbloodOrb*               bloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbSpawned(class UbloodOrb* bloodOrb)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned");

	UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params params;
	params.bloodOrb = bloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
// (Final, Native, Private)
// Parameters:
// class UbloodOrb*               bloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbDestroyed(class UbloodOrb* bloodOrb)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed");

	UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params params;
	params.bloodOrb = bloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.BloodOrbUtilities.GetAllBloodOrbs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UbloodOrb*>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UbloodOrb*> UBloodOrbUtilities::STATIC_GetAllBloodOrbs(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.BloodOrbUtilities.GetAllBloodOrbs");

	UBloodOrbUtilities_GetAllBloodOrbs_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.bloodOrbVisibilityComponent.SetVisibilityRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          visibilityRange                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbVisibilityComponent::SetVisibilityRange(float visibilityRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbVisibilityComponent.SetVisibilityRange");

	UbloodOrbVisibilityComponent_SetVisibilityRange_Params params;
	params.visibilityRange = visibilityRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbVisibilityComponent.SetVisibilityMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TheOni_EBloodOrbVisibilityMode visibilityMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbVisibilityComponent::SetVisibilityMode(TheOni_EBloodOrbVisibilityMode visibilityMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbVisibilityComponent.SetVisibilityMode");

	UbloodOrbVisibilityComponent_SetVisibilityMode_Params params;
	params.visibilityMode = visibilityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbVisibilityComponent::SetShowAttractedBloodOrbsAuras(bool show)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras");

	UbloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbVisibilityComponent.SetAuraVisibilityRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          auraVisibilityRange            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbVisibilityComponent::SetAuraVisibilityRange(float auraVisibilityRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbVisibilityComponent.SetAuraVisibilityRange");

	UbloodOrbVisibilityComponent_SetAuraVisibilityRange_Params params;
	params.auraVisibilityRange = auraVisibilityRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.bloodOrbVisibilityComponent.OnBloodOrbSpawned
// (Final, Native, Private, Const)
// Parameters:
// class UbloodOrb*               bloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UbloodOrbVisibilityComponent::OnBloodOrbSpawned(class UbloodOrb* bloodOrb)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.bloodOrbVisibilityComponent.OnBloodOrbSpawned");

	UbloodOrbVisibilityComponent_OnBloodOrbSpawned_Params params;
	params.bloodOrb = bloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::ShouldLoseDemonModeOnStun()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun");

	UDemonModeComponent_ShouldLoseDemonModeOnStun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.OnPowerChargeFull
// (Final, Native, Private, Const)
void UDemonModeComponent::OnPowerChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.OnPowerChargeFull");

	UDemonModeComponent_OnPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.OnPowerChargeEmpty
// (Final, Native, Private, Const)
void UDemonModeComponent::OnPowerChargeEmpty()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.OnPowerChargeEmpty");

	UDemonModeComponent_OnPowerChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.OnIsPowerChanged
// (Final, Native, Private, Const)
// Parameters:
// bool                           isInPower                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::OnIsPowerChanged(bool isInPower)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.OnIsPowerChanged");

	UDemonModeComponent_OnIsPowerChanged_Params params;
	params.isInPower = isInPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UDemonModeComponent::Multicast_DemonModeInterruptedOnStartup()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup");

	UDemonModeComponent_Multicast_DemonModeInterruptedOnStartup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UDemonModeComponent::Multicast_DemonModeInterruptedOnEnding()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding");

	UDemonModeComponent_Multicast_DemonModeInterruptedOnEnding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.isInDemonMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::isInDemonMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.isInDemonMode");

	UDemonModeComponent_isInDemonMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetDemonModeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TheOni_EDemonModeState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheOni_EDemonModeState UDemonModeComponent::GetDemonModeState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.GetDemonModeState");

	UDemonModeComponent_GetDemonModeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetCurrentCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDemonModeComponent::GetCurrentCharge()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.GetCurrentCharge");

	UDemonModeComponent_GetCurrentCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.GetChargePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDemonModeComponent::GetChargePercent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.GetChargePercent");

	UDemonModeComponent_GetChargePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.DBD_DemonModeForever
// (Final, Exec, Native, Public)
// Parameters:
// bool                           forever                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::DBD_DemonModeForever(bool forever)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.DBD_DemonModeForever");

	UDemonModeComponent_DBD_DemonModeForever_Params params;
	params.forever = forever;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.CanStartDemonMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::CanStartDemonMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.CanStartDemonMode");

	UDemonModeComponent_CanStartDemonMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UinteractionDefinition*  interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_SetDemonModeCooldownInteraction(class UinteractionDefinition* interaction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction");

	UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params params;
	params.interaction = interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
// (Final, Native, Private)
void UDemonModeComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay");

	UDemonModeComponent_Authority_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Authority_OnChargeChanged
// (Final, Native, Private)
// Parameters:
// float                          currentChargePercent           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_OnChargeChanged(float currentChargePercent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Authority_OnChargeChanged");

	UDemonModeComponent_Authority_OnChargeChanged_Params params;
	params.currentChargePercent = currentChargePercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Authority_InterruptedMontage
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montage                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           interrupted                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& montage, bool interrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Authority_InterruptedMontage");

	UDemonModeComponent_Authority_InterruptedMontage_Params params;
	params.montage = montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeComponent.Authority_AddCharge
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          chargeAmount                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_AddCharge(float chargeAmount)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeComponent.Authority_AddCharge");

	UDemonModeComponent_Authority_AddCharge_Params params;
	params.chargeAmount = chargeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeCooldownInteraction::SetPlayerOwner(class UdbdPlayer* owner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner");

	UDemonModeCooldownInteraction_SetPlayerOwner_Params params;
	params.owner = owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
void UDemonModeCooldownInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay");

	UDemonModeCooldownInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inMenuDemonMode                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeMenuComponent::SetInMenuDemonMode(bool inMenuDemonMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode");

	UDemonModeMenuComponent_SetInMenuDemonMode_Params params;
	params.inMenuDemonMode = inMenuDemonMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
// (Final, Native, Private)
// Parameters:
// bool                           isInDemonMode                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniCustomizationItemAnimInstance::SetIsInDemonMode(bool isInDemonMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode");

	UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params params;
	params.isInDemonMode = isInDemonMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::SetPlayerOwner(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.SetPlayerOwner");

	UOniDashInteraction_SetPlayerOwner_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
void UOniDashInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.OnLevelReadyToPlay");

	UOniDashInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.OnDashEnd
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnDashEnd(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.OnDashEnd");

	UOniDashInteraction_OnDashEnd_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.OnDashBegin
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnDashBegin(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.OnDashBegin");

	UOniDashInteraction_OnDashBegin_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.OnChargeEnd
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           chargeCompleted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnChargeEnd(class UdbdPlayer* player, bool chargeCompleted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.OnChargeEnd");

	UOniDashInteraction_OnChargeEnd_Params params;
	params.player = player;
	params.chargeCompleted = chargeCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.OniDashInteraction.OnChargeBegin
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnChargeBegin(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.OniDashInteraction.OnChargeBegin");

	UOniDashInteraction_OnChargeBegin_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
// (Final, Native, Private)
// Parameters:
// class Uactor*                  overlappingActor               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UbloodOrb*               bloodOrb                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(class Uactor* overlappingActor, class UbloodOrb* bloodOrb)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin");

	URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params params;
	params.overlappingActor = overlappingActor;
	params.bloodOrb = bloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.StartDemonModeInteraction.SetPlayerOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStartDemonModeInteraction::SetPlayerOwner(class UdbdPlayer* owner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.StartDemonModeInteraction.SetPlayerOwner");

	UStartDemonModeInteraction_SetPlayerOwner_Params params;
	params.owner = owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
void UStartDemonModeInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay");

	UStartDemonModeInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
