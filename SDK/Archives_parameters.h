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

// Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
struct UAfterExitOpenQEEvaluator_OnExitGateOpened_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
struct UBloodPointsQEEvaluator_OnFinishedPlaying_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
struct UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       specialBehaviourId;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
struct UContextualQuestUtilities_PlayerHasAssociatedQuest_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       specialBehaviourId;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
struct UDoBeforeEscapeQEEvaluator_OnEscaped_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.DoBeforeHookQEEvaluator.OnHooked
struct UDoBeforeHookQEEvaluator_OnHooked_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
struct UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
struct UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
struct UEndOfGameQEEvaluator_OnFinishedPlaying_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.OnRep_PlayersWithVisibility
struct UGlyph_OnRep_PlayersWithVisibility_Params
{
};

// Function Archives.Glyph.DoesLocalPlayerHaveVisibility
struct UGlyph_DoesLocalPlayerHaveVisibility_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnStoppedInteracting
struct UGlyph_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Archives.Glyph.Cosmetic_OnStartedInteracting
struct UGlyph_Cosmetic_OnStartedInteracting_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnInteractionCompleted
struct UGlyph_Cosmetic_OnInteractionCompleted_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
struct UGlyph_Cosmetic_OnGlyphVisibilityChanged_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
struct UGlyph_Authority_OnPlayerBreachedRangeThreshold_Params
{
	bool                                               isWithinRange;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      trackedActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Authority_OnIntroCompleted
struct UGlyph_Authority_OnIntroCompleted_Params
{
};

// Function Archives.Glyph.Authority_OnInteractionCompleted
struct UGlyph_Authority_OnInteractionCompleted_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearKillerQEEvaluator.OnRangeChanged
struct UNearKillerQEEvaluator_OnRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
struct UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
struct UHideNearKillerQEEvaluator_OnHarpoonHit_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
struct UHideNearKillerQEEvaluator_OnFinishedPlaying_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnChaseStart
struct UHideNearKillerQEEvaluator_OnChaseStart_Params
{
	class UdbdPlayer*                                  chasedSurvivor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
struct UHideNearKillerQEEvaluator_OnChaseEnd_Params
{
	class UdbdPlayer*                                  chasedSurvivor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chaseTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
struct UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
struct UMaxEventCountQEEvaluator_OnStopEventCount_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
struct UMaxEventCountQEEvaluator_OnIncrementEventCount_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
struct UMaxEventCountQEEvaluator_OnDecrementEventCount_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
struct USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
struct USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
struct UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
struct UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
struct UItemConsumedQEEvaluator_OnItemConsumed_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ItemUsedQEEvaluator.OnItemUsed
struct UItemUsedQEEvaluator_OnItemUsed_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
struct ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params
{
	class UcamperPlayer*                               survivorRemoved;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
struct ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params
{
	class UcamperPlayer*                               survivorAdded;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.StopTrackingActor
struct UNearTrackedActorComponent_StopTrackingActor_Params
{
	class Uactor*                                      actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.StartTrackingActor
struct UNearTrackedActorComponent_StartTrackingActor_Params
{
	class Uactor*                                      actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.SetDistanceThreshold
struct UNearTrackedActorComponent_SetDistanceThreshold_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
struct UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params
{
	bool                                               isWithinRange;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      trackedActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.IsActorWithinRange
struct UNearTrackedActorComponent_IsActorWithinRange_Params
{
	class Uactor*                                      actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.questEventsHandler.OnPlayerGameStateChanged
struct UquestEventsHandler_OnPlayerGameStateChanged_Params
{
	DBDSharedTypes_EGameState                          gameState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.questEventsHandler.OnGameEnded
struct UquestEventsHandler_OnGameEnded_Params
{
	DeadByDaylight_EEndGameReason                      Reason;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.questEventsHandler.OnFinishedPlaying
struct UquestEventsHandler_OnFinishedPlaying_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.questEventsHandler.DBD_ShowInGameCurrentQuestInfos
struct UquestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params
{
};

// Function Archives.questEventsHandler.DBD_InGameAddProgressionToCurrentQuest
struct UquestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params
{
	int                                                Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
struct UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params
{
	class UquestEventsHandler*                         questEventsHandler;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
struct USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
