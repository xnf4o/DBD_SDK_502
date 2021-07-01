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

// Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
struct UActivatableExhaustedEffect_Authority_Start_Params
{
	float                                              duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
struct UActivatableExhaustedEffect_Authority_OnHookCamper_Params
{
	struct FgameplayTag                                gameEvent;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
struct UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
struct UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
struct UAnyMeansNecessary_Authority_OnPalletPulledUp_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
struct UAnySurvivorHasObjectState_OnSurvivorRemoved_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
struct UAnySurvivorHasObjectState_OnSurvivorAdded_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
struct UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
	class UinteractionDefinition*                      interactionDefinition;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
struct UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer                       interactionSemantics;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
struct UBaseLingeringStatusEffect_SetLingerDuration_Params
{
	float                                              lingerDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
struct UBetterTogether_OnStartedGeneratorRepair_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.OnSlasherSet
struct UBreakout_OnSlasherSet_Params
{
	class UslasherPlayer*                              slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.OnRep_IsPerkActive
struct UBreakout_OnRep_IsPerkActive_Params
{
};

// Function DBDCompetence.Breakout.Authority_OnRangeChanged
struct UBreakout_Authority_OnRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
struct UBreakout_Authority_ImposeWiggleStatusEffect_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Camaraderie.Authority_EnablePerk
struct UCamaraderie_Authority_EnablePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
struct UCorruptIntervention_Server_ActivatePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
struct UCorruptIntervention_OnRep_BlockedGenerators_Params
{
};

// Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
struct UCorruptIntervention_Local_OnIntroCompleted_Params
{
};

// Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
struct UDBDConditionFactory_IsPlayerPerformingInteraction_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       interactionSemantics;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UIsPlayerPerformingInteraction*              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
struct UDBDConditionFactory_DoesPerkHaveToken_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class Uperk*                                       perk;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDoesPerkHaveToken*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
struct UDecisiveStrike_OnUnhookedTimerEnded_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnSkillCheck
struct UDecisiveStrike_OnSkillCheck_Params
{
	bool                                               HadInput;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bonus;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
struct UDecisiveStrike_OnRep_HasBeenAttempted_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnPickUpEnded
struct UDecisiveStrike_OnPickUpEnded_Params
{
	class UdbdPlayer*                                  picker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
struct UDecisiveStrike_OnOwnerPickedUp_Params
{
	class UdbdPlayer*                                  picker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
struct UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params
{
	class UdbdPlayer*                                  picker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
struct UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params
{
	DeadByDaylight_ECamperDamageState                  before;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  after;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
struct UDelayedHealEffect_Authority_OnActivationTimerComplete_Params
{
};

// Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
struct UDistortion_OnRep_AuraBlockIsActive_Params
{
};

// Function DBDCompetence.Distortion.AuraBlockCanBeActive
struct UDistortion_AuraBlockCanBeActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Diversion.IsOwnerDisabled
struct UDiversion_IsOwnerDisabled_Params
{
	class UcamperPlayer*                               owningPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Diversion.GetThrowDistance
struct UDiversion_GetThrowDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Diversion.CanThrow
struct UDiversion_CanThrow_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DoesPerkHaveToken.SetPerk
struct UDoesPerkHaveToken_SetPerk_Params
{
	class Uperk*                                       perk;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
struct UDoesPerkHaveToken_OnRep_Perk_Params
{
};

// Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
struct UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params
{
};

// Function DBDCompetence.DyingLight.OnObsessionChanged
struct UDyingLight_OnObsessionChanged_Params
{
	class UcamperPlayer*                               newObsession;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               previousObsession;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.FlipFlop.Authority_OnPickedUp
struct UFlipFlop_Authority_OnPickedUp_Params
{
	class UdbdPlayer*                                  picker;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
struct UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params
{
};

// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
struct UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params
{
	class UchargeableComponent*                        chargeableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentCompletionChange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalPercentComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapExit
struct UHeadOn_OnPawnOverlapExit_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapEnter
struct UHeadOn_OnPawnOverlapEnter_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  sweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
struct UHeadOn_OnHeadOnAnimationComplete_Params
{
};

// Function DBDCompetence.HeadOn.Multicast_StunPlayer
struct UHeadOn_Multicast_StunPlayer_Params
{
	class UstunnableComponent*                         stunnableComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  stunner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
struct UHeadOn_CanApplyHeadOnInteraction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.Authority_ActivatePerk
struct UHeadOn_Authority_ActivatePerk_Params
{
};

// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
struct UHexPerk_ReceiveGameplayEvent_Params
{
	DeadByDaylight_EDBDScoreTypes                      gameplayEventType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.OnRep_TotemActors
struct UHexPerk_OnRep_TotemActors_Params
{
};

// Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
struct UHexPerk_OnRep_PlayersWhoKnowCurse_Params
{
	TArray<class UdbdPlayer*>                          oldPlayersWhoKnowCurse;                                    // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
struct UHexPerk_OnHexPerkGameplayEvent_Params
{
	DeadByDaylight_EDBDScoreTypes                      gameplayEventType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
struct UHexPerk_IsCurseRevealedToPlayer_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.GetTotems
struct UHexPerk_GetTotems_Params
{
	TArray<class Utotem*>                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.GetDistanceToOwner
struct UHexPerk_GetDistanceToOwner_Params
{
	class Uactor*                                      otherActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.GetBoundTotems
struct UHexPerk_GetBoundTotems_Params
{
	TArray<class Utotem*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.FireCursedStatusOnLocalPlayer
struct UHexPerk_FireCursedStatusOnLocalPlayer_Params
{
};

// Function DBDCompetence.HexPerk.Authority_UnbindFromTotem
struct UHexPerk_Authority_UnbindFromTotem_Params
{
	class Utotem*                                      aTotemActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isCleansedTotem;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
struct UHexPerk_Authority_SetCurseRevealedToPlayer_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               revealed;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
struct UHexPerk_Authority_RevealCurseToAllSurvivors_Params
{
};

// Function DBDCompetence.HexPerk.Authority_Reactivate_BP
struct UHexPerk_Authority_Reactivate_BP_Params
{
};

// Function DBDCompetence.HexPerk.Authority_BindToDullTotems
struct UHexPerk_Authority_BindToDullTotems_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
struct UHexRuin_Authority_ConstructActivationTimersMap_Params
{
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
struct UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params
{
	int                                                level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
struct UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params
{
	struct FName                                       effectIDLevel1;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       effectIDLevel2;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       effectIDLevel3;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
struct UImAllEars_Server_OnCamperLoudNoise_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.OnEventBaseAddon.OnEventFired
struct UOnEventBaseAddon_OnEventFired_Params
{
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
struct UInfectiousFright_RevealSurvivorLocation_Params
{
	class UcamperPlayer*                               target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
struct UInfectiousFright_OnRep_PerkActivationCount_Params
{
};

// Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
struct UInnerStrength_OnRep_PerkEnabled_Params
{
};

// Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
struct UInnerStrength_OnPlayerImmobilizeStateChanged_Params
{
	DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              newImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
struct UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params
{
	class UstatusEffect*                               effect;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               valid;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged
struct UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
struct UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params
{
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
struct UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
struct UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params
{
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
struct UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params
{
	bool                                               empty;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
struct UIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
	class UinteractionDefinition*                      interactionDefinition;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
struct UIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer                       interactionSemantics;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
struct UKillerSubjectProvider_RegisterWhenKillerSet_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LuckyBreak.OnDamageStateChanged
struct ULuckyBreak_OnDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldDamageState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  currentDamageState;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LuckyBreak.ActivationTimerEnded
struct ULuckyBreak_ActivationTimerEnded_Params
{
};

// Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
struct UNoOneLeftBehind_GetSpeedBoostEffect_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
struct UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params
{
};

// Function DBDCompetence.OwningSlasherHasBeenStill.Authority_SetSecondsOfStillnessRequired
struct UOwningSlasherHasBeenStill_Authority_SetSecondsOfStillnessRequired_Params
{
	float                                              secondsRequired;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
struct UPlayerIsInExitArea_PlayerExitExitArea_Params
{
};

// Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
struct UPlayerIsInExitArea_PlayerEnterExitArea_Params
{
};

// Function DBDCompetence.SmallGame.VFXTotemFound
struct USmallGame_VFXTotemFound_Params
{
};

// Function DBDCompetence.SmallGame.SearchForTotems
struct USmallGame_SearchForTotems_Params
{
};

// Function DBDCompetence.SmallGame.Multicast_TotemFound
struct USmallGame_Multicast_TotemFound_Params
{
};

// Function DBDCompetence.SmallGame.GetDetectionConeAngle
struct USmallGame_GetDetectionConeAngle_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SmallGame.Authority_SetTotemDetected
struct USmallGame_Authority_SetTotemDetected_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
struct USoleSurvivor_Authority_OnSurvivorAdded_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
struct USolidarity_Authority_OnSkillCheckResponse_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bonus;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               triggerLoudNoise;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HadInput;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chargeChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
struct USolidarity_Authority_OnHealthChargeApplied_Params
{
	float                                              IndividualChargeAmount;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalChargeAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ChargeInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCoop;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.spiesfromtheshadows.StartCooldownIfInRange
struct Uspiesfromtheshadows_StartCooldownIfInRange_Params
{
	struct Fvector                                     loudNoiseLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.spiesfromtheshadows.Server_TriggerCooldown
struct Uspiesfromtheshadows_Server_TriggerCooldown_Params
{
};

// Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
struct USprintBurst_Authority_OnIsRunningAndMovingChanged_Params
{
	bool                                               isRunningAndMoving;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.StatsSystemUtilities.InitStatBP
struct UStatsSystemUtilities_InitStatBP_Params
{
	struct FTunableStat                                theStat;                                                   // (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UmodifierProvider>          modifierProvider;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
struct UStatsSystemUtilities_GetStatValueBP_Params
{
	struct FTunableStat                                theStat;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Surge.Client_TriggerEffects
struct USurge_Client_TriggerEffects_Params
{
	TArray<class Ugenerator*>                          Generators;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
struct UTheMettleOfMan_OnRep_NumTokenSoFar_Params
{
};

// Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
struct UTheMettleOfMan_OnRep_CurrentPhase_Params
{
};

// Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
struct UThrillingTremors_OnRep_BlockedGenerators_Params
{
};

// Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
struct UYamaokaFamilyCrest_RevealSurvivor_Params
{
	class UcamperPlayer*                               survivorToReveal;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
struct UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
