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

// Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTormentMode*            tormentModeComponent           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivateTormentModeInteraction::SetTormentMode(class UTormentMode* tormentModeComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode");

	UActivateTormentModeInteraction_SetTormentMode_Params params;
	params.tormentModeComponent = tormentModeComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::ShowAgonyBarbWireFX_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic");

	UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnTrailEffectStop_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic");

	UAgonyComponent_OnTrailEffectStop_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnTrailEffectStart_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic");

	UAgonyComponent_OnTrailEffectStart_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAgonyComponent::OnShowBarbWireFXOnGameEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent");

	UAgonyComponent_OnShowBarbWireFXOnGameEvent_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnRep_IsInAgony
// (Final, Native, Private)
void UAgonyComponent::OnRep_IsInAgony()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnRep_IsInAgony");

	UAgonyComponent_OnRep_IsInAgony_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isLocallyObserved              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::OnLocallyObservedChanged(bool isLocallyObserved)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged");

	UAgonyComponent_OnLocallyObservedChanged_Params params;
	params.isLocallyObserved = isLocallyObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnHitInAgony_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic");

	UAgonyComponent_OnHitInAgony_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnHitByTormentAttackTrail_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic");

	UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAgonyComponent::OnHideBarbWireFXOnGameEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent");

	UAgonyComponent_OnHideBarbWireFXOnGameEvent_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isInAgony                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::OnAgonyChanged_Cosmetic(bool isInAgony)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic");

	UAgonyComponent_OnAgonyChanged_Cosmetic_Params params;
	params.isInAgony = isInAgony;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.isInAgony
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAgonyComponent::isInAgony()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.isInAgony");

	UAgonyComponent_isInAgony_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.AgonyComponent.IsAgonyMoriable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAgonyComponent::IsAgonyMoriable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.IsAgonyMoriable");

	UAgonyComponent_IsAgonyMoriable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::HideAgonyBarbWireFX_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic");

	UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
// (Final, Native, Private)
// Parameters:
// int                            drainStage                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::Authority_OnDrainStageChanged(int drainStage, class UdbdPlayer* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged");

	UAgonyComponent_Authority_OnDrainStageChanged_Params params;
	params.drainStage = drainStage;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
// (Final, Native, Private)
void UAgonyComponent::Authority_OnAttackTrailDamageCooldownTimerDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone");

	UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
// (Final, Native, Protected, BlueprintCallable)
void UBaseTormentTrailPoint::EndOfDisapearCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic");

	UBaseTormentTrailPoint_EndOfDisapearCosmetic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
// (Event, Protected, BlueprintEvent)
void UBaseTormentTrailPoint::DisappearCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic");

	UBaseTormentTrailPoint_DisappearCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.BloodPact.Authority_OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodPact::Authority_OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.BloodPact.Authority_OnInRangeChanged");

	UBloodPact_Authority_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.deathBedAnticampComponent.Multicast_TriggerDeathBedRelocate
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UdeathBedAnticampComponent::Multicast_TriggerDeathBedRelocate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.deathBedAnticampComponent.Multicast_TriggerDeathBedRelocate");

	UdeathBedAnticampComponent_Multicast_TriggerDeathBedRelocate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.deathBedAnticampComponent.Authority_OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UdeathBedAnticampComponent::Authority_OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.deathBedAnticampComponent.Authority_OnInRangeChanged");

	UdeathBedAnticampComponent_Authority_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
// (Final, Native, Private, BlueprintCallable)
void UDeathBedInteractable::TeleportCamperToDeathBed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed");

	UDeathBedInteractable_TeleportCamperToDeathBed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
// (Event, Public, BlueprintEvent)
void UDeathBedInteractable::StartPlayerAbsorbedByGround()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround");

	UDeathBedInteractable_StartPlayerAbsorbedByGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           camperPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathBedInteractable::SetInDeathBedCamper(class UcamperPlayer* camperPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper");

	UDeathBedInteractable_SetInDeathBedCamper_Params params;
	params.camperPlayer = camperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
// (Final, Native, Private)
// Parameters:
// class UprimitiveComponent*     overlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathBedInteractable::PlayerOverlapZoneEndOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap");

	UDeathBedInteractable_PlayerOverlapZoneEndOverlap_Params params;
	params.overlappedComponent = overlappedComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UprimitiveComponent*     overlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              sweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDeathBedInteractable::PlayerOverlapZoneBeginOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap");

	UDeathBedInteractable_PlayerOverlapZoneBeginOverlap_Params params;
	params.overlappedComponent = overlappedComponent;
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


// Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDeathBedInteractable::OnSkillCheckFailed_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic");

	UDeathBedInteractable_OnSkillCheckFailed_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
// (Final, Native, Private)
void UDeathBedInteractable::OnSkillCheckFailed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed");

	UDeathBedInteractable_OnSkillCheckFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.OnRescueCancelled
// (Event, Protected, BlueprintEvent)
void UDeathBedInteractable::OnRescueCancelled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRescueCancelled");

	UDeathBedInteractable_OnRescueCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UDeathBedInteractable::OnRelocateStart_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic");

	UDeathBedInteractable_OnRelocateStart_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
// (Final, Native, Public, BlueprintCallable)
void UDeathBedInteractable::OnDeathBedDeathEnd()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd");

	UDeathBedInteractable_OnDeathBedDeathEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UDeathBedInteractable*   DeathBed                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           camperPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathBedInteractable::Multicast_RelocateToOtherDeathBed(class UDeathBedInteractable* DeathBed, class UcamperPlayer* camperPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed");

	UDeathBedInteractable_Multicast_RelocateToOtherDeathBed_Params params;
	params.DeathBed = DeathBed;
	params.camperPlayer = camperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UDeathBedInteractable::GetRescuerSnapPosition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition");

	UDeathBedInteractable_GetRescuerSnapPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.DeathBedInteractable.GetMontagePlayer
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMontagePlayer*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMontagePlayer* UDeathBedInteractable::GetMontagePlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetMontagePlayer");

	UDeathBedInteractable_GetMontagePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UcamperPlayer*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UcamperPlayer* UDeathBedInteractable::GetInDeathBedCamper()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper");

	UDeathBedInteractable_GetInDeathBedCamper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDeathBedInteractable::FX_SurvivorSavedFromDeathBed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed");

	UDeathBedInteractable_FX_SurvivorSavedFromDeathBed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDeathBedInteractable::FX_DeathBedAppear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear");

	UDeathBedInteractable_FX_DeathBedAppear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.DeathBedDisappear
// (Event, Public, BlueprintEvent)
void UDeathBedInteractable::DeathBedDisappear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.DeathBedDisappear");

	UDeathBedInteractable_DeathBedDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDeathBedInteractable::CanRescueSurvivor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor");

	UDeathBedInteractable_CanRescueSurvivor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.DeathBedInteractable.ActivateDeathBed
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathBedInteractable::ActivateDeathBed(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.ActivateDeathBed");

	UDeathBedInteractable_ActivateDeathBed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
// (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UDeathBedRescueInteraction::GetRescuerSnapPosition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition");

	UDeathBedRescueInteraction_GetRescuerSnapPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
// (Final, Native, Private)
void UDeathbound::OnRep_SurvivorsToReveal()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal");

	UDeathbound_OnRep_SurvivorsToReveal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.Deathbound.MakeSurvivorScream
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           Survivor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathbound::MakeSurvivorScream(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.MakeSurvivorScream");

	UDeathbound_MakeSurvivorScream_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.Deathbound.GetRevealLocationDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDeathbound::GetRevealLocationDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.GetRevealLocationDuration");

	UDeathbound_GetRevealLocationDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExecutionerTormentAttack::Server_TormentTryHitTargetNotInCoolDown(class UdbdPlayer* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown");

	UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Params params;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExecutionerTormentAttack::Multicast_TormentHitTarget(class UdbdPlayer* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget");

	UExecutionerTormentAttack_Multicast_TormentHitTarget_Params params;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UBaseTormentTrailPoint*  trailPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMobileTormentTrailRenderer::Multicast_RemoveInstance(class UBaseTormentTrailPoint* trailPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance");

	UMobileTormentTrailRenderer_Multicast_RemoveInstance_Params params;
	params.trailPoint = trailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UBaseTormentTrailPoint*  trailPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isAttackTrailPoint             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMobileTormentTrailRenderer::Multicast_AddInstance(class UBaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance");

	UMobileTormentTrailRenderer_Multicast_AddInstance_Params params;
	params.trailPoint = trailPoint;
	params.isAttackTrailPoint = isAttackTrailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::Server_OnActionInputPressed(class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed");

	URepressedAlliance_Server_OnActionInputPressed_Params params;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
// (Final, Native, Private)
// Parameters:
// class UinteractionDefinition*  oldRepairInteraction           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::OnRep_CurrentRepairInteractionWithAbility(class UinteractionDefinition* oldRepairInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility");

	URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Params params;
	params.oldRepairInteraction = oldRepairInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
// (Final, Native, Private)
// Parameters:
// class Ugenerator*              oldGenerator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::OnRep_BlockedGenerator(class Ugenerator* oldGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator");

	URepressedAlliance_OnRep_BlockedGenerator_Params params;
	params.oldGenerator = oldGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UDeathBedInteractable*   DeathBed                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USendToDeathBedInteraction::Multicast_SendCamperToDeathBed(class UDeathBedInteractable* DeathBed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed");

	USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Params params;
	params.DeathBed = DeathBed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UcamperPlayer*           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UcamperPlayer* USendToDeathBedInteraction::GetOwningSurvivor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor");

	USendToDeathBedInteraction_GetOwningSurvivor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USendToDeathBedInteraction::FX_InteractionStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart");

	USendToDeathBedInteraction_FX_InteractionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USendToDeathBedInteraction::FX_InteractionCancel()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel");

	USendToDeathBedInteraction_FX_InteractionCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX
// (Event, Protected, BlueprintEvent)
void USoulGuard::Authority_ShowOnKOPreventedFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX");

	USoulGuard_Authority_ShowOnKOPreventedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FCamperHealResult       healResult                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USoulGuard::Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed");

	USoulGuard_Authority_OnSurvivorHealed_Params params;
	params.healResult = healResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTheExecutionerAnimInstance::NoInputFeedbackCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic");

	UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer");

	UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_SetAgonyOnLocallyControlledPlayer(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer");

	UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
// (Final, Exec, Native, Public)
void UTheExecutionerCheatComponent::DBD_LocalKillSurvivorInDeathBed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed");

	UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_DisplayAllDeathBed(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed");

	UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
// (Final, Exec, Native, Public)
void UTheExecutionerCheatComponent::DBD_DeathBedPlayStruggleHitReaction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction");

	UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController
// (Final, Native, Protected, BlueprintCallable)
void UTrailControllerBase::RemoveTormentTrailController()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController");

	UTrailControllerBase_RemoveTormentTrailController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TrailControllerBase.OnTrailPointDeath
// (Native, Protected)
// Parameters:
// class UBaseTormentTrailPoint*  baseTrailPoint                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrailControllerBase::OnTrailPointDeath(class UBaseTormentTrailPoint* baseTrailPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnTrailPointDeath");

	UTrailControllerBase_OnTrailPointDeath_Params params;
	params.baseTrailPoint = baseTrailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TrailControllerBase.OnAcquireChanged
// (Native, Protected)
// Parameters:
// bool                           acquired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrailControllerBase::OnAcquireChanged(bool acquired)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnAcquireChanged");

	UTrailControllerBase_OnAcquireChanged_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TrailControllerBase.ActivateCosmetic
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrailControllerBase::ActivateCosmetic(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.ActivateCosmetic");

	UTrailControllerBase_ActivateCosmetic_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentAttackTrailController::OnTrailPointRemovedCosmetic(int index)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic");

	UTormentAttackTrailController_OnTrailPointRemovedCosmetic_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
// (Final, Native, Private)
void UTormentAttackTrailController::OnStartTrailTimerDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone");

	UTormentAttackTrailController_OnStartTrailTimerDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
// (Final, Native, Private)
void UTormentAttackTrailController::OnIntervalBetweenPointsTimerDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone");

	UTormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTormentAttackTrailController::OnAttackTrailStartCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic");

	UTormentAttackTrailController_OnAttackTrailStartCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// float                          serverTimeSpawn                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   location                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UTormentAttackTrailController::Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& location, const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail");

	UTormentAttackTrailController_Multicast_StartAttackTrail_Params params;
	params.serverTimeSpawn = serverTimeSpawn;
	params.location = location;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
// (Native, Event, Protected, BlueprintEvent)
void UTormentAttackTrailController::DisplayAttackTrailSpawnSign()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign");

	UTormentAttackTrailController_DisplayAttackTrailSpawnSign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class UsplineComponent*        splinemesh                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            indexInTrail                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentAttackTrailPoint::DisplayTrailSplineMesh(class UsplineComponent* splinemesh, int indexInTrail)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh");

	UTormentAttackTrailPoint_DisplayTrailSplineMesh_Params params;
	params.splinemesh = splinemesh;
	params.indexInTrail = indexInTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UTormentMode::Server_RequestMoreActorInAttackPool()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool");

	UTormentMode_Server_RequestMoreActorInAttackPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTormentMode::OnTormentModeStop_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic");

	UTormentMode_OnTormentModeStop_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTormentMode::OnTormentModeStart_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic");

	UTormentMode_OnTormentModeStart_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty
// (Final, Native, Private)
void UTormentMode::OnTormentModeChargeEmpty()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty");

	UTormentMode_OnTormentModeChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentMode.IsInTormentMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTormentMode::IsInTormentMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.IsInTormentMode");

	UTormentMode_IsInTormentMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UTormentor::GetTormentTrailSpawnPoint()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint");

	UTormentor_GetTormentTrailSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UTormentor::GetTormentTrailAttackSpawnPoint()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint");

	UTormentor_GetTormentTrailAttackSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UTormentTrailPoint*      trailPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   location                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UTormentTrailController::Server_SpawnTormentTrailPoint(class UTormentTrailPoint* trailPoint, const struct FVector_NetQuantize10& location, const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint");

	UTormentTrailController_Server_SpawnTormentTrailPoint_Params params;
	params.trailPoint = trailPoint;
	params.location = location;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UTormentTrailPoint::Server_RemoveTrailPoint()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint");

	UTormentTrailPoint_Server_RemoveTrailPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// TheExecutioner_ETrailPointRefreshReason trailPointRefreshReason        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPoint::RefreshTrailPointCosmetic(TheExecutioner_ETrailPointRefreshReason trailPointRefreshReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic");

	UTormentTrailPoint_RefreshTrailPointCosmetic_Params params;
	params.trailPointRefreshReason = trailPointRefreshReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.OnAcquireChanged
// (Final, Native, Private)
// Parameters:
// bool                           acquired                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPoint::OnAcquireChanged(bool acquired)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.OnAcquireChanged");

	UTormentTrailPoint_OnAcquireChanged_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UTormentTrailPoint::Multicast_TriggerTrailPointDisappear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear");

	UTormentTrailPoint_Multicast_TriggerTrailPointDisappear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            indexInTrail                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UsplineComponent*        splineComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 outStartLocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 outStartTangent                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 outEndLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 outEndTangent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPoint::GetTrailLocationAndTangeant(int indexInTrail, class UsplineComponent* splineComponent, struct Fvector* outStartLocation, struct Fvector* outStartTangent, struct Fvector* outEndLocation, struct Fvector* outEndTangent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant");

	UTormentTrailPoint_GetTrailLocationAndTangeant_Params params;
	params.indexInTrail = indexInTrail;
	params.splineComponent = splineComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outStartLocation != nullptr)
		*outStartLocation = params.outStartLocation;
	if (outStartTangent != nullptr)
		*outStartTangent = params.outStartTangent;
	if (outEndLocation != nullptr)
		*outEndLocation = params.outEndLocation;
	if (outEndTangent != nullptr)
		*outEndTangent = params.outEndTangent;

}


// Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic
// (Event, Public, BlueprintEvent)
// Parameters:
// class UsplineComponent*        splineComponent                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  indexInTrail                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPoint::AddTrailCosmetic(class UsplineComponent* splineComponent, unsigned char indexInTrail)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic");

	UTormentTrailPoint_AddTrailCosmetic_Params params;
	params.splineComponent = splineComponent;
	params.indexInTrail = indexInTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPoint.ActivateCosmetic
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPoint::ActivateCosmetic(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.ActivateCosmetic");

	UTormentTrailPoint_ActivateCosmetic_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
// (Final, Native, Private)
// Parameters:
// class UTormentTrailPoint*      trailPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPointCollectionComponent::OnTrailAcquireChanged(class UTormentTrailPoint* trailPoint, bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged");

	UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Params params;
	params.trailPoint = trailPoint;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UTormentTrailController* trailController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   location                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Sever_SpawnTrailController(class UTormentTrailController* trailController, const struct FVector_NetQuantize10& location, const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController");

	UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Params params;
	params.trailController = trailController;
	params.location = location;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UTormentTrailController* trailController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Server_StopTrailController(class UTormentTrailController* trailController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController");

	UTormentTrailSpawnerComponent_Server_StopTrailController_Params params;
	params.trailController = trailController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TheExecutioner_ETrailType      trailType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool(TheExecutioner_ETrailType trailType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool");

	UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Params params;
	params.trailType = trailType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UTormentTrailSpawnerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay");

	UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::OnInRangeChanged(bool inRange, class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged");

	UTormentTrailSpawnerComponent_OnInRangeChanged_Params params;
	params.inRange = inRange;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheExecutioner.TrailofTorment.OnRep_HighlightGenerator
// (Final, Native, Private)
// Parameters:
// class Ugenerator*              _oldHighlightedGenerator       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrailofTorment::OnRep_HighlightGenerator(class Ugenerator* _oldHighlightedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheExecutioner.TrailofTorment.OnRep_HighlightGenerator");

	UTrailofTorment_OnRep_HighlightGenerator_Params params;
	params._oldHighlightedGenerator = _oldHighlightedGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
