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

// Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_K22Power_18::Authority_OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet");

	UAddon_K22Power_18_Authority_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessPlayer::Cosmetic_OnPossessStart(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart");

	UPossessPlayer_Cosmetic_OnPossessStart_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessPlayer::Cosmetic_OnPossessCancelled(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled");

	UPossessPlayer_Cosmetic_OnPossessCancelled_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessTheConjoinedTwin.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessTheConjoinedTwin::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnTwinSet");

	UPossessTheConjoinedTwin_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              collector                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessTheConjoinedTwin::OnPowerCollected(class UdbdPlayer* collector)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected");

	UPossessTheConjoinedTwin_OnPowerCollected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
void UBeingPossessedInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay");

	UBeingPossessedInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ready                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChargeTwinJumpInteraction::Cosmetic_OnJumpReadyChanged(class UdbdPlayer* twin, bool ready)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged");

	UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Params params;
	params.twin = twin;
	params.ready = ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ConjoinedTwin.Server_SendAttackInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           pressed                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UConjoinedTwin::Server_SendAttackInput(bool pressed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Server_SendAttackInput");

	UConjoinedTwin_Server_SendAttackInput_Params params;
	params.pressed = pressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UConjoinedTwin::OnFinishedPlayingEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent");

	UConjoinedTwin_OnFinishedPlayingEvent_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           onGroundAndUncontrolled        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UConjoinedTwin::Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged");

	UConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Params params;
	params.onGroundAndUncontrolled = onGroundAndUncontrolled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FFirecrackerEffectData  effectData                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UConjoinedTwin::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin");

	UConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Params params;
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConjoinedTwin*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConjoinedTwin* UConjoinedTwinAnimInstance::GetOwningConjoinedTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin");

	UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UDeception::OnOwningPlayerFakedEnteringLockerCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic");

	UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.Hoarder.Local_ThrowBubbleIndicator
// (Event, Protected, BlueprintEvent)
// Parameters:
// TheTwins_EPerkInteractionObjectType camperInteractionType          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  objectActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           interactingCamperPlayer        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHoarder::Local_ThrowBubbleIndicator(TheTwins_EPerkInteractionObjectType camperInteractionType, class Uactor* objectActor, class UcamperPlayer* interactingCamperPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.Hoarder.Local_ThrowBubbleIndicator");

	UHoarder_Local_ThrowBubbleIndicator_Params params;
	params.camperInteractionType = camperInteractionType;
	params.objectActor = objectActor;
	params.interactingCamperPlayer = interactingCamperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.Hoarder.GetBubbleIndicatorLifetime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHoarder::GetBubbleIndicatorLifetime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.Hoarder.GetBubbleIndicatorLifetime");

	UHoarder_GetBubbleIndicatorLifetime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
// (Final, Native, Private)
void UIsTwinRecallReady::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay");

	UIsTwinRecallReady_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22Power.OnRep_ConjoinedTwin
// (Final, Native, Private)
void UK22Power::OnRep_ConjoinedTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnRep_ConjoinedTwin");

	UK22Power_OnRep_ConjoinedTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22Power.OnPowerChargeEmpty
// (Final, Native, Private)
void UK22Power::OnPowerChargeEmpty()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnPowerChargeEmpty");

	UK22Power_OnPowerChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22Power.OnFirstAttachmentToSister
// (Final, Native, Private)
void UK22Power::OnFirstAttachmentToSister()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnFirstAttachmentToSister");

	UK22Power_OnFirstAttachmentToSister_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22Power.GetConjoinedTwin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UConjoinedTwin*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConjoinedTwin* UK22Power::GetConjoinedTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.GetConjoinedTwin");

	UK22Power_GetConjoinedTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
// (Final, Native, Private)
// Parameters:
// class UchargeableComponent*    chargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentCompletionChange        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          totalPercentComplete           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK22Power::Authority_OnPossessTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged");

	UK22Power_Authority_OnPossessTwinChargePercentChanged_Params params;
	params.chargeableComponent = chargeableComponent;
	params.percentCompletionChange = percentCompletionChange;
	params.totalPercentComplete = totalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
// (Final, Native, Private)
// Parameters:
// class UchargeableComponent*    chargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentCompletionChange        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          totalPercentComplete           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK22Power::Authority_OnDestroyTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged");

	UK22Power_Authority_OnDestroyTwinChargePercentChanged_Params params;
	params.chargeableComponent = chargeableComponent;
	params.percentCompletionChange = percentCompletionChange;
	params.totalPercentComplete = totalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK22PowerChargePresentationItemProgressComponent::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet");

	UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Server_StartPossessionOf
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UdbdPlayer*              playerToPossess                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           shouldStartBeingPossessedInteraction (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Server_StartPossessionOf(class UdbdPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_StartPossessionOf");

	UPossessionComponent_Server_StartPossessionOf_Params params;
	params.playerToPossess = playerToPossess;
	params.shouldStartBeingPossessedInteraction = shouldStartBeingPossessedInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Server_NotifyPossessionDone
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UPossessionComponent::Server_NotifyPossessionDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_NotifyPossessionDone");

	UPossessionComponent_Server_NotifyPossessionDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UPossessionComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.OnLevelReadyToPlay");

	UPossessionComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Multicast_StartPossessionOf
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UdbdPlayer*              playerToPossess                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Multicast_StartPossessionOf(class UdbdPlayer* playerToPossess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_StartPossessionOf");

	UPossessionComponent_Multicast_StartPossessionOf_Params params;
	params.playerToPossess = playerToPossess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UPossessionComponent::Multicast_NotifyPossessionDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone");

	UPossessionComponent_Multicast_NotifyPossessionDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.IsPossessed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPossessionComponent::IsPossessed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsPossessed");

	UPossessionComponent_IsPossessed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.PossessionComponent.IsDormant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPossessionComponent::IsDormant()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsDormant");

	UPossessionComponent_IsDormant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::CosmeticLocal_OnUncontrolled(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled");

	UPossessionComponent_CosmeticLocal_OnUncontrolled_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::CosmeticLocal_OnControlled(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled");

	UPossessionComponent_CosmeticLocal_OnControlled_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isControlled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Cosmetic_OnControlledChanged(class UdbdPlayer* player, bool isControlled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged");

	UPossessionComponent_Cosmetic_OnControlledChanged_Params params;
	params.player = player;
	params.isControlled = isControlled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UPossessionComponent::Client_StartStateMachineDriverChangeProcess()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess");

	UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
// (Final, Native, Private)
void UKillerPossessionComponent::OnRep_ShouldDeactivateCollisionsWithSurvivors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors");

	UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UPossessNegationEffectComponent::PlayCantPossessSound__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature");

	UPossessNegationEffectComponent_PlayCantPossessSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
// (Native, Protected)
void UPossessNegationEffectComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay");

	UPossessNegationEffectComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKillerPossessNegationEffectComponent::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet");

	UKillerPossessNegationEffectComponent_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPushTwinOnLockerInteraction::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet");

	UPushTwinOnLockerInteraction_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
// (Final, Native, Private)
void UPushTwinOnLockerInteraction::OnRep_PushTwinOnLockerChargeable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable");

	UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.PushTwinOnLockerInteraction.Authority_OnSurvivorInLockerChanged
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              oldSurvivor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              newSurvivor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPushTwinOnLockerInteraction::Authority_OnSurvivorInLockerChanged(class UdbdPlayer* oldSurvivor, class UdbdPlayer* newSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.Authority_OnSurvivorInLockerChanged");

	UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Params params;
	params.oldSurvivor = oldSurvivor;
	params.newSurvivor = newSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.RecallTwin.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URecallTwin::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.RecallTwin.OnTwinSet");

	URecallTwin_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnTwinSet");

	UReleaseConjoinedTwin_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
// (Final, Native, Private)
void UReleaseConjoinedTwin::OnRep_ReleaseAnimationWentToTheEnd()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd");

	UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              collector                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnPowerCollected(class UdbdPlayer* collector)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected");

	UReleaseConjoinedTwin_OnPowerCollected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnKillerStunned(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned");

	UReleaseConjoinedTwin_OnKillerStunned_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdateStart(class UdbdPlayer* Sister, class UConjoinedTwin* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Params params;
	params.Sister = Sister;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdate(class UdbdPlayer* Sister, class UConjoinedTwin* Brother, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Params params;
	params.Sister = Sister;
	params.Brother = Brother;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseChargeComplete(class UdbdPlayer* Sister, class UConjoinedTwin* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Params params;
	params.Sister = Sister;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseCancelled(class UdbdPlayer* Sister, class UConjoinedTwin* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Params params;
	params.Sister = Sister;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.RemoveTwin.OnRemoveMontageEnd
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montage                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           interrupted                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              destroyingPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoveTwin::OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted, class UdbdPlayer* destroyingPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.RemoveTwin.OnRemoveMontageEnd");

	URemoveTwin_OnRemoveMontageEnd_Params params;
	params.montage = montage;
	params.interrupted = interrupted;
	params.destroyingPlayer = destroyingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USisterBlindFlashlightableLightingStrategy::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet");

	USisterBlindFlashlightableLightingStrategy_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UtwinPossessionComponent* twinPossessionComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheTwinsCheatComponent::Multicast_TrySendThePlayerBackInKiller(class UtwinPossessionComponent* twinPossessionComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller");

	UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Params params;
	params.twinPossessionComponent = twinPossessionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
// (Final, Exec, Native, Public)
void UTheTwinsCheatComponent::DBD_TwinDestroyTheTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin");

	UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAOELingeringStatusEffect.GetShriekingRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwinAOELingeringStatusEffect::GetShriekingRange()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAOELingeringStatusEffect.GetShriekingRange");

	UTwinAOELingeringStatusEffect_GetShriekingRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAOELingeringStatusEffect::Authority_OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged");

	UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              oldAttachedPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnRep_AttachedPlayer(class UdbdPlayer* oldAttachedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer");

	UTwinAttachmentComponent_OnRep_AttachedPlayer_Params params;
	params.oldAttachedPlayer = oldAttachedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montage                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           interrupted                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnMoriMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd");

	UTwinAttachmentComponent_OnMoriMontageEnd_Params params;
	params.montage = montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UTwinAttachmentComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay");

	UTwinAttachmentComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperImmobilizeState oldImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperImmobilizeState newImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnImmobilizedStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged");

	UTwinAttachmentComponent_OnImmobilizedStateChanged_Params params;
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperDamageState oldState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperDamageState NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnAttachedSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged");

	UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Params params;
	params.oldState = oldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UTwinAttachmentComponent::Multicast_QuickDestroyTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin");

	UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinAttachmentComponent::IsAttachedToSurvivor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor");

	UTwinAttachmentComponent_IsAttachedToSurvivor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinAttachmentComponent.IsAttachedToSister
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinAttachmentComponent::IsAttachedToSister()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSister");

	UTwinAttachmentComponent_IsAttachedToSister_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSurvivor(class UdbdPlayer* Survivor, class UdbdPlayer* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor");

	UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Params params;
	params.Survivor = Survivor;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSister(class UdbdPlayer* Sister, class UdbdPlayer* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister");

	UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Params params;
	params.Sister = Sister;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSurvivor(class UdbdPlayer* Survivor, class UdbdPlayer* Brother)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor");

	UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Params params;
	params.Survivor = Survivor;
	params.Brother = Brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Sister                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              Brother                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isFirstAttachment              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSister(class UdbdPlayer* Sister, class UdbdPlayer* Brother, bool isFirstAttachment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister");

	UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Params params;
	params.Sister = Sister;
	params.Brother = Brother;
	params.isFirstAttachment = isFirstAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
// (Final, Native, Private)
// Parameters:
// class UchargeableComponent*    chargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentCompletionChange        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          totalPercentComplete           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Authority_OnRemoveTwinChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged");

	UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Params params;
	params.chargeableComponent = chargeableComponent;
	params.percentCompletionChange = percentCompletionChange;
	params.totalPercentComplete = totalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinBaseAddon.Authority_OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinBaseAddon::Authority_OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinBaseAddon.Authority_OnTwinSet");

	UTwinBaseAddon_Authority_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinBaseKillerInstinctEffect.GetLullabyRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwinBaseKillerInstinctEffect::GetLullabyRange()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinBaseKillerInstinctEffect.GetLullabyRange");

	UTwinBaseKillerInstinctEffect_GetLullabyRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinBaseKillerInstinctEffect::Authority_OnInRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged");

	UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::OnTwinQuickDestroy(class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy");

	UTwinDestructionComponent_OnTwinQuickDestroy_Params params;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montage                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           interrupted                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::OnDyingMontageEnd(const struct FAnimationMontageDescriptor& montage, bool interrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd");

	UTwinDestructionComponent_OnDyingMontageEnd_Params params;
	params.montage = montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromSurvivorRemove(class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove");

	UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Params params;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromKick(class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick");

	UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Params params;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
void UTwinDestructionComponent::Authority_OnTwinQuickDestroyOver()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver");

	UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinHuskStateComponent::IsDeadFromSurvivorBack()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack");

	UTwinHuskStateComponent_IsDeadFromSurvivorBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinJumpAttack.Server_StopJump
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UTwinJumpAttack::Server_StopJump()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_StopJump");

	UTwinJumpAttack_Server_StopJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UTwinJumpAttack::Server_OnJumpStartTwin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin");

	UTwinJumpAttack_Server_OnJumpStartTwin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
// (Final, Native, Private)
void UTwinJumpAttack::OnRep_ShouldTwinHaveJumpObjectType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType");

	UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// bool                           isForbiddenLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation");

	UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Params params;
	params.isForbiddenLocation = isForbiddenLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UTwinJumpAttack::Multicast_DestroyTwinOnWrongLanding()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding");

	UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UdbdPlayer*              survivorToAttachTo             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Multicast_AttachToSurvivor(class UdbdPlayer* survivorToAttachTo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor");

	UTwinJumpAttack_Multicast_AttachToSurvivor_Params params;
	params.survivorToAttachTo = survivorToAttachTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpStarted(class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted");

	UTwinJumpAttack_Cosmetic_OnJumpStarted_Params params;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UphysicalMaterial*       physicalMaterial               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpObstructed(class UConjoinedTwin* owningTwin, class UphysicalMaterial* physicalMaterial, const struct Fvector& position, const struct Fvector& normal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed");

	UTwinJumpAttack_Cosmetic_OnJumpObstructed_Params params;
	params.owningTwin = owningTwin;
	params.physicalMaterial = physicalMaterial;
	params.position = position;
	params.normal = normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpLanded(class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded");

	UTwinJumpAttack_Cosmetic_OnJumpLanded_Params params;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           IsInJumpCooldown               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          owningTwin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpCooldownChanged(bool IsInJumpCooldown, class UConjoinedTwin* owningTwin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged");

	UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Params params;
	params.IsInJumpCooldown = IsInJumpCooldown;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isForbiddenLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged");

	UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Params params;
	params.isForbiddenLocation = isForbiddenLocation;
	params.twin = twin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// bool                           foundPath                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Client_Debug_PrintFinalDecisionOnScreen(bool foundPath)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen");

	UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Params params;
	params.foundPath = foundPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UTwinJumpAttackOpenSubstate::Local_OnTwinOverlapEnter(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& hit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter");

	UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UTwinJumpAttackOpenSubstate::Local_OnTwinCapsuleHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit");

	UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.normalImpulse = normalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinUnmuted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted");

	UTwinJumpAudioMutedEffect_Cosmetic_OnTwinUnmuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinMuted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted");

	UTwinJumpAudioMutedEffect_Cosmetic_OnTwinMuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct Fvector                 location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpTargetVisibleEffect::OnJumpTargetTick(const struct Fvector& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick");

	UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
// (Final, Native, Private)
void UTwinJumpTargetVisibleEffect::OnHideTargetPosition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition");

	UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montageDescriptor              (ConstParm, Parm, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped");

	UTwinLockerBlockerComponent_OnPushedMontageStopped_Params params;
	params.montageDescriptor = montageDescriptor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montageDescriptor              (ConstParm, Parm, NativeAccessSpecifierPublic)
// float                          rate                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float rate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted");

	UTwinLockerBlockerComponent_OnPushedMontageStarted_Params params;
	params.montageDescriptor = montageDescriptor;
	params.rate = rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
// (Final, Native, Private)
// Parameters:
// struct FAnimationMontageDescriptor montageDescriptor              (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                           interrupted                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded");

	UTwinLockerBlockerComponent_OnPushedMontageEnded_Params params;
	params.montageDescriptor = montageDescriptor;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinLockerBlockerComponent::IsTwinAttachedToLocker()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker");

	UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isOnLocker                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::Cosmetic_OnTwinOnLockerChanged(bool isOnLocker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged");

	UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Params params;
	params.isOnLocker = isOnLocker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
// (Final, Native, Private)
void UTwinLockerBlockerComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay");

	UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinSubjectProvider.OnTwinSet
// (Final, Native, Private)
// Parameters:
// class UConjoinedTwin*          twin                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinSubjectProvider::OnTwinSet(class UConjoinedTwin* twin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.OnTwinSet");

	UTwinSubjectProvider_OnTwinSet_Params params;
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTwins.TwinSubjectProvider.ListenToTwinSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinSubjectProvider::ListenToTwinSet(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.ListenToTwinSet");

	UTwinSubjectProvider_ListenToTwinSet_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
