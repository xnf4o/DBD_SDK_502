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

// Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivatableExhaustedEffect::Authority_Start(float duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start");

	UActivatableExhaustedEffect_Authority_Start_Params params;
	params.duration = duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameEvent                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UActivatableExhaustedEffect::Authority_OnHookCamper(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper");

	UActivatableExhaustedEffect_Authority_OnHookCamper_Params params;
	params.gameEvent = gameEvent;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnyActorPairQueryRangeIsTrue::OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged");

	UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted");

	UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAnyMeansNecessary::Authority_OnPalletPulledUp(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp");

	UAnyMeansNecessary_Authority_OnPalletPulledUp_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
// (Final, Native, Protected)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnySurvivorHasObjectState::OnSurvivorRemoved(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved");

	UAnySurvivorHasObjectState_OnSurvivorRemoved_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
// (Final, Native, Protected)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnySurvivorHasObjectState::OnSurvivorAdded(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded");

	UAnySurvivorHasObjectState_OnSurvivorAdded_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Protected)
// Parameters:
// class UinteractionDefinition*  interactionDefinition          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseIsPlayerPerformingInteraction::UpdateIsTrue(class UinteractionDefinition* interactionDefinition)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue");

	UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params params;
	params.interactionDefinition = interactionDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBaseIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics");

	UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          lingerDuration                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseLingeringStatusEffect::SetLingerDuration(float lingerDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration");

	UBaseLingeringStatusEffect_SetLingerDuration_Params params;
	params.lingerDuration = lingerDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBetterTogether::OnStartedGeneratorRepair(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair");

	UBetterTogether_OnStartedGeneratorRepair_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Breakout.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnSlasherSet");

	UBreakout_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Breakout.OnRep_IsPerkActive
// (Final, Native, Private)
void UBreakout::OnRep_IsPerkActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnRep_IsPerkActive");

	UBreakout_OnRep_IsPerkActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Breakout.Authority_OnRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::Authority_OnRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_OnRangeChanged");

	UBreakout_Authority_OnRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::Authority_ImposeWiggleStatusEffect(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect");

	UBreakout_Authority_ImposeWiggleStatusEffect_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Camaraderie.Authority_EnablePerk
// (Final, Native, Private)
void UCamaraderie::Authority_EnablePerk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Camaraderie.Authority_EnablePerk");

	UCamaraderie_Authority_EnablePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UCorruptIntervention::Server_ActivatePerk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Server_ActivatePerk");

	UCorruptIntervention_Server_ActivatePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
// (Final, Native, Private)
void UCorruptIntervention::OnRep_BlockedGenerators()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators");

	UCorruptIntervention_OnRep_BlockedGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
// (Final, Native, Private)
void UCorruptIntervention::Local_OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted");

	UCorruptIntervention_Local_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UIsPlayerPerformingInteraction* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UIsPlayerPerformingInteraction* UDBDConditionFactory::STATIC_IsPlayerPerformingInteraction(const TScriptInterface<class UconditionReceiver>& conditionReceiver, const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction");

	UDBDConditionFactory_IsPlayerPerformingInteraction_Params params;
	params.conditionReceiver = conditionReceiver;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class Uperk*                   perk                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDoesPerkHaveToken*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDoesPerkHaveToken* UDBDConditionFactory::STATIC_DoesPerkHaveToken(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class Uperk* perk)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken");

	UDBDConditionFactory_DoesPerkHaveToken_Params params;
	params.conditionReceiver = conditionReceiver;
	params.perk = perk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
// (Final, Native, Private)
void UDecisiveStrike::OnUnhookedTimerEnded()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded");

	UDecisiveStrike_OnUnhookedTimerEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DecisiveStrike.OnSkillCheck
// (Final, Native, Private)
// Parameters:
// bool                           HadInput                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bonus                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_ESkillCheckCustomType type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnSkillCheck(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnSkillCheck");

	UDecisiveStrike_OnSkillCheck_Params params;
	params.HadInput = HadInput;
	params.Success = Success;
	params.bonus = bonus;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
// (Final, Native, Private)
void UDecisiveStrike::OnRep_HasBeenAttempted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted");

	UDecisiveStrike_OnRep_HasBeenAttempted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DecisiveStrike.OnPickUpEnded
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              picker                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnPickUpEnded(class UdbdPlayer* picker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnPickUpEnded");

	UDecisiveStrike_OnPickUpEnded_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              picker                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnOwnerPickedUp(class UdbdPlayer* picker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp");

	UDecisiveStrike_OnOwnerPickedUp_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              picker                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDelayedHealEffect::Authority_OnOwningCamperPickedUp(class UdbdPlayer* picker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp");

	UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperDamageState before                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperDamageState after                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDelayedHealEffect::Authority_OnOwningCamperHealthChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged");

	UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params params;
	params.before = before;
	params.after = after;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
// (Final, Native, Private)
void UDelayedHealEffect::Authority_OnActivationTimerComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete");

	UDelayedHealEffect_Authority_OnActivationTimerComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
// (Final, Native, Private)
void UDistortion::OnRep_AuraBlockIsActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive");

	UDistortion_OnRep_AuraBlockIsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Distortion.AuraBlockCanBeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDistortion::AuraBlockCanBeActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.AuraBlockCanBeActive");

	UDistortion_AuraBlockCanBeActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.Diversion.IsOwnerDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UcamperPlayer*           owningPlayer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDiversion::IsOwnerDisabled(class UcamperPlayer* owningPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Diversion.IsOwnerDisabled");

	UDiversion_IsOwnerDisabled_Params params;
	params.owningPlayer = owningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.Diversion.GetThrowDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDiversion::GetThrowDistance()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Diversion.GetThrowDistance");

	UDiversion_GetThrowDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.Diversion.CanThrow
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDiversion::CanThrow()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Diversion.CanThrow");

	UDiversion_CanThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.DoesPerkHaveToken.SetPerk
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uperk*                   perk                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoesPerkHaveToken::SetPerk(class Uperk* perk)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.SetPerk");

	UDoesPerkHaveToken_SetPerk_Params params;
	params.perk = perk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
// (Final, Native, Private)
void UDoesPerkHaveToken::OnRep_Perk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk");

	UDoesPerkHaveToken_OnRep_Perk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
// (Final, Native, Private)
void UDownedByBasicAttack::OnRep_ReplicatedIsTrue()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue");

	UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.DyingLight.OnObsessionChanged
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           newObsession                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           previousObsession              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDyingLight::OnObsessionChanged(class UcamperPlayer* newObsession, class UcamperPlayer* previousObsession)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.DyingLight.OnObsessionChanged");

	UDyingLight_OnObsessionChanged_Params params;
	params.newObsession = newObsession;
	params.previousObsession = previousObsession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.FlipFlop.Authority_OnPickedUp
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              picker                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlipFlop::Authority_OnPickedUp(class UdbdPlayer* picker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.FlipFlop.Authority_OnPickedUp");

	UFlipFlop_Authority_OnPickedUp_Params params;
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
// (Final, Native, Private)
void UHasPlayerReachedWiggleFillPercentCondition::OnRep_IsWigglePercentReached()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached");

	UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
// (Final, Native, Private)
// Parameters:
// class UchargeableComponent*    chargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentCompletionChange        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          totalPercentComplete           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasPlayerReachedWiggleFillPercentCondition::Authority_OnOwnerWiggleChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged");

	UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params params;
	params.chargeableComponent = chargeableComponent;
	params.percentCompletionChange = percentCompletionChange;
	params.totalPercentComplete = totalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HeadOn.OnPawnOverlapExit
// (Final, Native, Private)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadOn::OnPawnOverlapExit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapExit");

	UHeadOn_OnPawnOverlapExit_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HeadOn.OnPawnOverlapEnter
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              sweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UHeadOn::OnPawnOverlapEnter(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapEnter");

	UHeadOn_OnPawnOverlapEnter_Params params;
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


// Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
// (Final, Native, Public, BlueprintCallable)
void UHeadOn::OnHeadOnAnimationComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete");

	UHeadOn_OnHeadOnAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HeadOn.Multicast_StunPlayer
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UstunnableComponent*     stunnableComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              stunner                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadOn::Multicast_StunPlayer(class UstunnableComponent* stunnableComponent, class UdbdPlayer* stunner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Multicast_StunPlayer");

	UHeadOn_Multicast_StunPlayer_Params params;
	params.stunnableComponent = stunnableComponent;
	params.stunner = stunner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadOn::CanApplyHeadOnInteraction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction");

	UHeadOn_CanApplyHeadOnInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HeadOn.Authority_ActivatePerk
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UHeadOn::Authority_ActivatePerk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Authority_ActivatePerk");

	UHeadOn_Authority_ActivatePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// DeadByDaylight_EDBDScoreTypes  gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::ReceiveGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.ReceiveGameplayEvent");

	UHexPerk_ReceiveGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.Amount = Amount;
	params.instigator = instigator;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.OnRep_TotemActors
// (Final, Native, Private)
void UHexPerk::OnRep_TotemActors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnRep_TotemActors");

	UHexPerk_OnRep_TotemActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
// (Final, Native, Private)
// Parameters:
// TArray<class UdbdPlayer*>      oldPlayersWhoKnowCurse         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::OnRep_PlayersWhoKnowCurse(TArray<class UdbdPlayer*> oldPlayersWhoKnowCurse)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse");

	UHexPerk_OnRep_PlayersWhoKnowCurse_Params params;
	params.oldPlayersWhoKnowCurse = oldPlayersWhoKnowCurse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
// (Final, Native, Public)
// Parameters:
// DeadByDaylight_EDBDScoreTypes  gameplayEventType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::OnHexPerkGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent");

	UHexPerk_OnHexPerkGameplayEvent_Params params;
	params.gameplayEventType = gameplayEventType;
	params.Amount = Amount;
	params.instigator = instigator;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHexPerk::IsCurseRevealedToPlayer(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer");

	UHexPerk_IsCurseRevealedToPlayer_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class Utotem*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class Utotem*> UHexPerk::GetTotems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.GetTotems");

	UHexPerk_GetTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetDistanceToOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  otherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHexPerk::GetDistanceToOwner(class Uactor* otherActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.GetDistanceToOwner");

	UHexPerk_GetDistanceToOwner_Params params;
	params.otherActor = otherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.GetBoundTotems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class Utotem*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class Utotem*> UHexPerk::GetBoundTotems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.GetBoundTotems");

	UHexPerk_GetBoundTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
void UHexPerk::FireCursedStatusOnLocalPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer");

	UHexPerk_FireCursedStatusOnLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class Utotem*                  aTotemActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isCleansedTotem                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::Authority_UnbindFromTotem(class Utotem* aTotemActor, bool isCleansedTotem)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_UnbindFromTotem");

	UHexPerk_Authority_UnbindFromTotem_Params params;
	params.aTotemActor = aTotemActor;
	params.isCleansedTotem = isCleansedTotem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           revealed                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::Authority_SetCurseRevealedToPlayer(class UdbdPlayer* player, bool revealed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer");

	UHexPerk_Authority_SetCurseRevealedToPlayer_Params params;
	params.player = player;
	params.revealed = revealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
void UHexPerk::Authority_RevealCurseToAllSurvivors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors");

	UHexPerk_Authority_RevealCurseToAllSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.Authority_Reactivate_BP
// (Event, Protected, BlueprintEvent)
void UHexPerk::Authority_Reactivate_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_Reactivate_BP");

	UHexPerk_Authority_Reactivate_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHexPerk::Authority_BindToDullTotems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_BindToDullTotems");

	UHexPerk_Authority_BindToDullTotems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
// (Final, Native, Private)
void UHexRuin::Authority_ConstructActivationTimersMap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap");

	UHexRuin_Authority_ConstructActivationTimersMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int level)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel");

	UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params params;
	params.level = level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   effectIDLevel1                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   effectIDLevel2                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   effectIDLevel3                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHighestLevelAndClosestEffectCondition::InitEffectArrays(const struct FName& effectIDLevel1, const struct FName& effectIDLevel2, const struct FName& effectIDLevel3)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays");

	UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params params;
	params.effectIDLevel1 = effectIDLevel1;
	params.effectIDLevel2 = effectIDLevel2;
	params.effectIDLevel3 = effectIDLevel3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UImAllEars::Server_OnCamperLoudNoise(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise");

	UImAllEars_Server_OnCamperLoudNoise_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.OnEventBaseAddon.OnEventFired
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UOnEventBaseAddon::OnEventFired(const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.OnEventBaseAddon.OnEventFired");

	UOnEventBaseAddon_OnEventFired_Params params;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInfectiousFright::RevealSurvivorLocation(class UcamperPlayer* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.RevealSurvivorLocation");

	UInfectiousFright_RevealSurvivorLocation_Params params;
	params.target = target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
// (Final, Native, Private)
void UInfectiousFright::OnRep_PerkActivationCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount");

	UInfectiousFright_OnRep_PerkActivationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
// (Final, Native, Private)
void UInnerStrength::OnRep_PerkEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnRep_PerkEnabled");

	UInnerStrength_OnRep_PerkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperImmobilizeState oldImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperImmobilizeState newImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInnerStrength::OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged");

	UInnerStrength_OnPlayerImmobilizeStateChanged_Params params;
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
// (Final, Native, Private)
// Parameters:
// class UstatusEffect*           effect                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           valid                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsHighestLevelAndClosestOriginatingEffect::OnStatusEffectAddedOrRemoved(class UstatusEffect* effect, bool valid)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved");

	UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params params;
	params.effect = effect;
	params.valid = valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsOutRangeOfOriginatingPlayer::OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged");

	UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
// (Final, Native, Protected)
void UIsOwningPlayerInRangeFromHook::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay");

	UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingItemInteraction::OnCollectablePickedUp(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp");

	UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
// (Final, Native, Private)
void UIsPlayerPerformingItemInteraction::OnCollectableDropped()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped");

	UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
// (Final, Native, Private)
// Parameters:
// bool                           empty                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingItemInteraction::OnCollectableChargeStateChange(bool empty)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange");

	UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params params;
	params.empty = empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
// (Final, Native, Private)
// Parameters:
// class UinteractionDefinition*  interactionDefinition          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingInteraction::UpdateIsTrue(class UinteractionDefinition* interactionDefinition)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue");

	UIsPlayerPerformingInteraction_UpdateIsTrue_Params params;
	params.interactionDefinition = interactionDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   interactionSemantics           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics");

	UIsPlayerPerformingInteraction_SetInteractionSemantics_Params params;
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKillerSubjectProvider::RegisterWhenKillerSet(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet");

	UKillerSubjectProvider_RegisterWhenKillerSet_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.LuckyBreak.OnDamageStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperDamageState oldDamageState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperDamageState currentDamageState             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULuckyBreak::OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState currentDamageState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.OnDamageStateChanged");

	ULuckyBreak_OnDamageStateChanged_Params params;
	params.oldDamageState = oldDamageState;
	params.currentDamageState = currentDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.LuckyBreak.ActivationTimerEnded
// (Final, Native, Private)
void ULuckyBreak::ActivationTimerEnded()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.ActivationTimerEnded");

	ULuckyBreak_ActivationTimerEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNoOneLeftBehind::GetSpeedBoostEffect()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect");

	UNoOneLeftBehind_GetSpeedBoostEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
// (Final, Native, Protected)
void UOwningPlayerInTotemRange::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay");

	UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          secondsRequired                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOwningSlasherHasBeenStill::Authority_SetSecondsOfStillnessRequired(float secondsRequired)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired");

	UOwningSlasherHasBeenStill_Authority_SetSecondsOfStillnessRequired_Params params;
	params.secondsRequired = secondsRequired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
// (Final, Native, Private)
void UPlayerIsInExitArea::PlayerExitExitArea()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea");

	UPlayerIsInExitArea_PlayerExitExitArea_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
// (Final, Native, Private)
void UPlayerIsInExitArea::PlayerEnterExitArea()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea");

	UPlayerIsInExitArea_PlayerEnterExitArea_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SmallGame.VFXTotemFound
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USmallGame::VFXTotemFound()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.VFXTotemFound");

	USmallGame_VFXTotemFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SmallGame.SearchForTotems
// (Event, Protected, BlueprintEvent)
void USmallGame::SearchForTotems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.SearchForTotems");

	USmallGame_SearchForTotems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SmallGame.Multicast_TotemFound
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
void USmallGame::Multicast_TotemFound()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Multicast_TotemFound");

	USmallGame_Multicast_TotemFound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SmallGame.GetDetectionConeAngle
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USmallGame::GetDetectionConeAngle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.GetDetectionConeAngle");

	USmallGame_GetDetectionConeAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.SmallGame.Authority_SetTotemDetected
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmallGame::Authority_SetTotemDetected(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Authority_SetTotemDetected");

	USmallGame_Authority_SetTotemDetected_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           Survivor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USoleSurvivor::Authority_OnSurvivorAdded(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded");

	USoleSurvivor_Authority_OnSurvivorAdded_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
// (Final, Native, Private)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bonus                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           triggerLoudNoise               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           HadInput                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_ESkillCheckCustomType type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          chargeChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USolidarity::Authority_OnSkillCheckResponse(bool Success, bool bonus, class UdbdPlayer* player, bool triggerLoudNoise, bool HadInput, DBDSharedTypes_ESkillCheckCustomType type, float chargeChange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse");

	USolidarity_Authority_OnSkillCheckResponse_Params params;
	params.Success = Success;
	params.bonus = bonus;
	params.player = player;
	params.triggerLoudNoise = triggerLoudNoise;
	params.HadInput = HadInput;
	params.type = type;
	params.chargeChange = chargeChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
// (Final, Native, Private)
// Parameters:
// float                          IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           WasCoop                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USolidarity::Authority_OnHealthChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied");

	USolidarity_Authority_OnHealthChargeApplied_Params params;
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


// Function DBDCompetence.spiesfromtheshadows.StartCooldownIfInRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 loudNoiseLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uspiesfromtheshadows::StartCooldownIfInRange(const struct Fvector& loudNoiseLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.spiesfromtheshadows.StartCooldownIfInRange");

	Uspiesfromtheshadows_StartCooldownIfInRange_Params params;
	params.loudNoiseLocation = loudNoiseLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.spiesfromtheshadows.Server_TriggerCooldown
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void Uspiesfromtheshadows::Server_TriggerCooldown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.spiesfromtheshadows.Server_TriggerCooldown");

	Uspiesfromtheshadows_Server_TriggerCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
// (Final, Native, Private)
// Parameters:
// bool                           isRunningAndMoving             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USprintBurst::Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged");

	USprintBurst_Authority_OnIsRunningAndMovingChanged_Params params;
	params.isRunningAndMoving = isRunningAndMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.StatsSystemUtilities.InitStatBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTunableStat            theStat                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UmodifierProvider> modifierProvider               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UStatsSystemUtilities::STATIC_InitStatBP(struct FTunableStat* theStat, const TScriptInterface<class UmodifierProvider>& modifierProvider)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.InitStatBP");

	UStatsSystemUtilities_InitStatBP_Params params;
	params.modifierProvider = modifierProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (theStat != nullptr)
		*theStat = params.theStat;

}


// Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTunableStat            theStat                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UStatsSystemUtilities::STATIC_GetStatValueBP(const struct FTunableStat& theStat)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.GetStatValueBP");

	UStatsSystemUtilities_GetStatValueBP_Params params;
	params.theStat = theStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDCompetence.Surge.Client_TriggerEffects
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// TArray<class Ugenerator*>      Generators                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurge::Client_TriggerEffects(TArray<class Ugenerator*> Generators)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.Surge.Client_TriggerEffects");

	USurge_Client_TriggerEffects_Params params;
	params.Generators = Generators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
// (Final, Native, Private)
void UTheMettleOfMan::OnRep_NumTokenSoFar()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar");

	UTheMettleOfMan_OnRep_NumTokenSoFar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
// (Final, Native, Private)
void UTheMettleOfMan::OnRep_CurrentPhase()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase");

	UTheMettleOfMan_OnRep_CurrentPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
// (Final, Native, Private)
void UThrillingTremors::OnRep_BlockedGenerators()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators");

	UThrillingTremors_OnRep_BlockedGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           survivorToReveal               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UYamaokaFamilyCrest::RevealSurvivor(class UcamperPlayer* survivorToReveal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor");

	UYamaokaFamilyCrest_RevealSurvivor_Params params;
	params.survivorToReveal = survivorToReveal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
// (Final, Native, Private)
void UYamaokaFamilyCrest::OnRep_AddonActivationCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount");

	UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
