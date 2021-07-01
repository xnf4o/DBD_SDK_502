#pragma once

// Name: dbd, Version: 502


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet
struct UAddon_K22Power_18_Authority_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart
struct UPossessPlayer_Cosmetic_OnPossessStart_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
struct UPossessPlayer_Cosmetic_OnPossessCancelled_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessTheConjoinedTwin.OnTwinSet
struct UPossessTheConjoinedTwin_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected
struct UPossessTheConjoinedTwin_OnPowerCollected_Params
{
	class UdbdPlayer*                                  collector;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
struct UBeingPossessedInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
struct UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Params
{
	class UdbdPlayer*                                  twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ready;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ConjoinedTwin.Server_SendAttackInput
struct UConjoinedTwin_Server_SendAttackInput_Params
{
	bool                                               pressed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
struct UConjoinedTwin_OnFinishedPlayingEvent_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
struct UConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Params
{
	bool                                               onGroundAndUncontrolled;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
struct UConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Params
{
	struct FFirecrackerEffectData                      effectData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
struct UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Params
{
	class UConjoinedTwin*                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
struct UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Params
{
};

// Function TheTwins.Hoarder.Local_ThrowBubbleIndicator
struct UHoarder_Local_ThrowBubbleIndicator_Params
{
	TheTwins_EPerkInteractionObjectType                camperInteractionType;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      objectActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               interactingCamperPlayer;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.Hoarder.GetBubbleIndicatorLifetime
struct UHoarder_GetBubbleIndicatorLifetime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
struct UIsTwinRecallReady_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.K22Power.OnRep_ConjoinedTwin
struct UK22Power_OnRep_ConjoinedTwin_Params
{
};

// Function TheTwins.K22Power.OnPowerChargeEmpty
struct UK22Power_OnPowerChargeEmpty_Params
{
};

// Function TheTwins.K22Power.OnFirstAttachmentToSister
struct UK22Power_OnFirstAttachmentToSister_Params
{
};

// Function TheTwins.K22Power.GetConjoinedTwin
struct UK22Power_GetConjoinedTwin_Params
{
	class UConjoinedTwin*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
struct UK22Power_Authority_OnPossessTwinChargePercentChanged_Params
{
	class UchargeableComponent*                        chargeableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentCompletionChange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalPercentComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
struct UK22Power_Authority_OnDestroyTwinChargePercentChanged_Params
{
	class UchargeableComponent*                        chargeableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentCompletionChange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalPercentComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
struct UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.Server_StartPossessionOf
struct UPossessionComponent_Server_StartPossessionOf_Params
{
	class UdbdPlayer*                                  playerToPossess;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               shouldStartBeingPossessedInteraction;                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.Server_NotifyPossessionDone
struct UPossessionComponent_Server_NotifyPossessionDone_Params
{
};

// Function TheTwins.PossessionComponent.OnLevelReadyToPlay
struct UPossessionComponent_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.PossessionComponent.Multicast_StartPossessionOf
struct UPossessionComponent_Multicast_StartPossessionOf_Params
{
	class UdbdPlayer*                                  playerToPossess;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
struct UPossessionComponent_Multicast_NotifyPossessionDone_Params
{
};

// Function TheTwins.PossessionComponent.IsPossessed
struct UPossessionComponent_IsPossessed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.IsDormant
struct UPossessionComponent_IsDormant_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
struct UPossessionComponent_CosmeticLocal_OnUncontrolled_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled
struct UPossessionComponent_CosmeticLocal_OnControlled_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
struct UPossessionComponent_Cosmetic_OnControlledChanged_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isControlled;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
struct UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Params
{
};

// Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
struct UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Params
{
};

// DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
struct UPossessNegationEffectComponent_PlayCantPossessSound__DelegateSignature_Params
{
};

// Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
struct UPossessNegationEffectComponent_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
struct UKillerPossessNegationEffectComponent_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet
struct UPushTwinOnLockerInteraction_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
struct UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Params
{
};

// Function TheTwins.PushTwinOnLockerInteraction.Authority_OnSurvivorInLockerChanged
struct UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Params
{
	class UdbdPlayer*                                  oldSurvivor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  newSurvivor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.RecallTwin.OnTwinSet
struct URecallTwin_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.OnTwinSet
struct UReleaseConjoinedTwin_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
struct UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Params
{
};

// Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected
struct UReleaseConjoinedTwin_OnPowerCollected_Params
{
	class UdbdPlayer*                                  collector;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned
struct UReleaseConjoinedTwin_OnKillerStunned_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
struct UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
struct UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
struct UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
struct UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.RemoveTwin.OnRemoveMontageEnd
struct URemoveTwin_OnRemoveMontageEnd_Params
{
	struct FAnimationMontageDescriptor                 montage;                                                   // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  destroyingPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
struct USisterBlindFlashlightableLightingStrategy_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
struct UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Params
{
	class UtwinPossessionComponent*                    twinPossessionComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
struct UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Params
{
};

// Function TheTwins.TwinAOELingeringStatusEffect.GetShriekingRange
struct UTwinAOELingeringStatusEffect_GetShriekingRange_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
struct UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
struct UTwinAttachmentComponent_OnRep_AttachedPlayer_Params
{
	class UdbdPlayer*                                  oldAttachedPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
struct UTwinAttachmentComponent_OnMoriMontageEnd_Params
{
	struct FAnimationMontageDescriptor                 montage;                                                   // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
struct UTwinAttachmentComponent_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged
struct UTwinAttachmentComponent_OnImmobilizedStateChanged_Params
{
	DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              newImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
struct UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
struct UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Params
{
};

// Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
struct UTwinAttachmentComponent_IsAttachedToSurvivor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.IsAttachedToSister
struct UTwinAttachmentComponent_IsAttachedToSister_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
struct UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Params
{
	class UdbdPlayer*                                  Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
struct UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
struct UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Params
{
	class UdbdPlayer*                                  Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
struct UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Params
{
	class UdbdPlayer*                                  Sister;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Brother;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstAttachment;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
struct UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Params
{
	class UchargeableComponent*                        chargeableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentCompletionChange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalPercentComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinBaseAddon.Authority_OnTwinSet
struct UTwinBaseAddon_Authority_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinBaseKillerInstinctEffect.GetLullabyRange
struct UTwinBaseKillerInstinctEffect_GetLullabyRange_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
struct UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
struct UTwinDestructionComponent_OnTwinQuickDestroy_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd
struct UTwinDestructionComponent_OnDyingMontageEnd_Params
{
	struct FAnimationMontageDescriptor                 montage;                                                   // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
struct UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
struct UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
struct UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Params
{
};

// Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
struct UTwinHuskStateComponent_IsDeadFromSurvivorBack_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Server_StopJump
struct UTwinJumpAttack_Server_StopJump_Params
{
};

// Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
struct UTwinJumpAttack_Server_OnJumpStartTwin_Params
{
};

// Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
struct UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Params
{
};

// Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
struct UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Params
{
	bool                                               isForbiddenLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
struct UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Params
{
};

// Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
struct UTwinJumpAttack_Multicast_AttachToSurvivor_Params
{
	class UdbdPlayer*                                  survivorToAttachTo;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
struct UTwinJumpAttack_Cosmetic_OnJumpStarted_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
struct UTwinJumpAttack_Cosmetic_OnJumpObstructed_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UphysicalMaterial*                           physicalMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normal;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
struct UTwinJumpAttack_Cosmetic_OnJumpLanded_Params
{
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
struct UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Params
{
	bool                                               IsInJumpCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              owningTwin;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
struct UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Params
{
	bool                                               isForbiddenLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
struct UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Params
{
	bool                                               foundPath;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
struct UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
struct UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
struct UTwinJumpAudioMutedEffect_Cosmetic_OnTwinUnmuted_Params
{
};

// Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
struct UTwinJumpAudioMutedEffect_Cosmetic_OnTwinMuted_Params
{
};

// Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
struct UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Params
{
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
struct UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Params
{
};

// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
struct UTwinLockerBlockerComponent_OnPushedMontageStopped_Params
{
	struct FAnimationMontageDescriptor                 montageDescriptor;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
struct UTwinLockerBlockerComponent_OnPushedMontageStarted_Params
{
	struct FAnimationMontageDescriptor                 montageDescriptor;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                              rate;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
struct UTwinLockerBlockerComponent_OnPushedMontageEnded_Params
{
	struct FAnimationMontageDescriptor                 montageDescriptor;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
struct UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
struct UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Params
{
	bool                                               isOnLocker;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
struct UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Params
{
};

// Function TheTwins.TwinSubjectProvider.OnTwinSet
struct UTwinSubjectProvider_OnTwinSet_Params
{
	class UConjoinedTwin*                              twin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTwins.TwinSubjectProvider.ListenToTwinSet
struct UTwinSubjectProvider_ListenToTwinSet_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
