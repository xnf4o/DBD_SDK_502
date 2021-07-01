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

// Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
struct UActivateTormentModeInteraction_SetTormentMode_Params
{
	class UTormentMode*                                tormentModeComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
struct UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
struct UAgonyComponent_OnTrailEffectStop_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
struct UAgonyComponent_OnTrailEffectStart_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
struct UAgonyComponent_OnShowBarbWireFXOnGameEvent_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.OnRep_IsInAgony
struct UAgonyComponent_OnRep_IsInAgony_Params
{
};

// Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged
struct UAgonyComponent_OnLocallyObservedChanged_Params
{
	bool                                               isLocallyObserved;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
struct UAgonyComponent_OnHitInAgony_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
struct UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
struct UAgonyComponent_OnHideBarbWireFXOnGameEvent_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
struct UAgonyComponent_OnAgonyChanged_Cosmetic_Params
{
	bool                                               isInAgony;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.isInAgony
struct UAgonyComponent_isInAgony_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.IsAgonyMoriable
struct UAgonyComponent_IsAgonyMoriable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
struct UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Params
{
};

// Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
struct UAgonyComponent_Authority_OnDrainStageChanged_Params
{
	int                                                drainStage;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
struct UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Params
{
};

// Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
struct UBaseTormentTrailPoint_EndOfDisapearCosmetic_Params
{
};

// Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
struct UBaseTormentTrailPoint_DisappearCosmetic_Params
{
};

// Function TheExecutioner.BloodPact.Authority_OnInRangeChanged
struct UBloodPact_Authority_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.deathBedAnticampComponent.Multicast_TriggerDeathBedRelocate
struct UdeathBedAnticampComponent_Multicast_TriggerDeathBedRelocate_Params
{
};

// Function TheExecutioner.deathBedAnticampComponent.Authority_OnInRangeChanged
struct UdeathBedAnticampComponent_Authority_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
struct UDeathBedInteractable_TeleportCamperToDeathBed_Params
{
};

// Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
struct UDeathBedInteractable_StartPlayerAbsorbedByGround_Params
{
};

// Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
struct UDeathBedInteractable_SetInDeathBedCamper_Params
{
	class UcamperPlayer*                               camperPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
struct UDeathBedInteractable_PlayerOverlapZoneEndOverlap_Params
{
	class UprimitiveComponent*                         overlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
struct UDeathBedInteractable_PlayerOverlapZoneBeginOverlap_Params
{
	class UprimitiveComponent*                         overlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  sweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
struct UDeathBedInteractable_OnSkillCheckFailed_Cosmetic_Params
{
};

// Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
struct UDeathBedInteractable_OnSkillCheckFailed_Params
{
};

// Function TheExecutioner.DeathBedInteractable.OnRescueCancelled
struct UDeathBedInteractable_OnRescueCancelled_Params
{
};

// Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
struct UDeathBedInteractable_OnRelocateStart_Cosmetic_Params
{
};

// Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
struct UDeathBedInteractable_OnDeathBedDeathEnd_Params
{
};

// Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
struct UDeathBedInteractable_Multicast_RelocateToOtherDeathBed_Params
{
	class UDeathBedInteractable*                       DeathBed;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               camperPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
struct UDeathBedInteractable_GetRescuerSnapPosition_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.GetMontagePlayer
struct UDeathBedInteractable_GetMontagePlayer_Params
{
	class UMontagePlayer*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
struct UDeathBedInteractable_GetInDeathBedCamper_Params
{
	class UcamperPlayer*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
struct UDeathBedInteractable_FX_SurvivorSavedFromDeathBed_Params
{
};

// Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
struct UDeathBedInteractable_FX_DeathBedAppear_Params
{
};

// Function TheExecutioner.DeathBedInteractable.DeathBedDisappear
struct UDeathBedInteractable_DeathBedDisappear_Params
{
};

// Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor
struct UDeathBedInteractable_CanRescueSurvivor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedInteractable.ActivateDeathBed
struct UDeathBedInteractable_ActivateDeathBed_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
struct UDeathBedRescueInteraction_GetRescuerSnapPosition_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
struct UDeathbound_OnRep_SurvivorsToReveal_Params
{
};

// Function TheExecutioner.Deathbound.MakeSurvivorScream
struct UDeathbound_MakeSurvivorScream_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.Deathbound.GetRevealLocationDuration
struct UDeathbound_GetRevealLocationDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
struct UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Params
{
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
struct UExecutionerTormentAttack_Multicast_TormentHitTarget_Params
{
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
struct UMobileTormentTrailRenderer_Multicast_RemoveInstance_Params
{
	class UBaseTormentTrailPoint*                      trailPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
struct UMobileTormentTrailRenderer_Multicast_AddInstance_Params
{
	class UBaseTormentTrailPoint*                      trailPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isAttackTrailPoint;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
struct URepressedAlliance_Server_OnActionInputPressed_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
struct URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Params
{
	class UinteractionDefinition*                      oldRepairInteraction;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
struct URepressedAlliance_OnRep_BlockedGenerator_Params
{
	class Ugenerator*                                  oldGenerator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
struct USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Params
{
	class UDeathBedInteractable*                       DeathBed;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
struct USendToDeathBedInteraction_GetOwningSurvivor_Params
{
	class UcamperPlayer*                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
struct USendToDeathBedInteraction_FX_InteractionStart_Params
{
};

// Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
struct USendToDeathBedInteraction_FX_InteractionCancel_Params
{
};

// Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX
struct USoulGuard_Authority_ShowOnKOPreventedFX_Params
{
};

// Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
struct USoulGuard_Authority_OnSurvivorHealed_Params
{
	struct FCamperHealResult                           healResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
struct UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Params
{
};

// Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
struct UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
struct UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
struct UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Params
{
};

// Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
struct UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Params
{
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
struct UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Params
{
};

// Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController
struct UTrailControllerBase_RemoveTormentTrailController_Params
{
};

// Function TheExecutioner.TrailControllerBase.OnTrailPointDeath
struct UTrailControllerBase_OnTrailPointDeath_Params
{
	class UBaseTormentTrailPoint*                      baseTrailPoint;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TrailControllerBase.OnAcquireChanged
struct UTrailControllerBase_OnAcquireChanged_Params
{
	bool                                               acquired;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TrailControllerBase.ActivateCosmetic
struct UTrailControllerBase_ActivateCosmetic_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
struct UTormentAttackTrailController_OnTrailPointRemovedCosmetic_Params
{
	int                                                index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
struct UTormentAttackTrailController_OnStartTrailTimerDone_Params
{
};

// Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
struct UTormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Params
{
};

// Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
struct UTormentAttackTrailController_OnAttackTrailStartCosmetic_Params
{
};

// Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
struct UTormentAttackTrailController_Multicast_StartAttackTrail_Params
{
	float                                              serverTimeSpawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       location;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
struct UTormentAttackTrailController_DisplayAttackTrailSpawnSign_Params
{
};

// Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
struct UTormentAttackTrailPoint_DisplayTrailSplineMesh_Params
{
	class UsplineComponent*                            splinemesh;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                indexInTrail;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
struct UTormentMode_Server_RequestMoreActorInAttackPool_Params
{
};

// Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
struct UTormentMode_OnTormentModeStop_Cosmetic_Params
{
};

// Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
struct UTormentMode_OnTormentModeStart_Cosmetic_Params
{
};

// Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty
struct UTormentMode_OnTormentModeChargeEmpty_Params
{
};

// Function TheExecutioner.TormentMode.IsInTormentMode
struct UTormentMode_IsInTormentMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
struct UTormentor_GetTormentTrailSpawnPoint_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
struct UTormentor_GetTormentTrailAttackSpawnPoint_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
struct UTormentTrailController_Server_SpawnTormentTrailPoint_Params
{
	class UTormentTrailPoint*                          trailPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       location;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
struct UTormentTrailPoint_Server_RemoveTrailPoint_Params
{
};

// Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
struct UTormentTrailPoint_RefreshTrailPointCosmetic_Params
{
	TheExecutioner_ETrailPointRefreshReason            trailPointRefreshReason;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPoint.OnAcquireChanged
struct UTormentTrailPoint_OnAcquireChanged_Params
{
	bool                                               acquired;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
struct UTormentTrailPoint_Multicast_TriggerTrailPointDisappear_Params
{
};

// Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
struct UTormentTrailPoint_GetTrailLocationAndTangeant_Params
{
	int                                                indexInTrail;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UsplineComponent*                            splineComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     outStartLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     outStartTangent;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     outEndLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     outEndTangent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic
struct UTormentTrailPoint_AddTrailCosmetic_Params
{
	class UsplineComponent*                            splineComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      indexInTrail;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPoint.ActivateCosmetic
struct UTormentTrailPoint_ActivateCosmetic_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
struct UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Params
{
	class UTormentTrailPoint*                          trailPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
struct UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Params
{
	class UTormentTrailController*                     trailController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       location;                                                  // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
struct UTormentTrailSpawnerComponent_Server_StopTrailController_Params
{
	class UTormentTrailController*                     trailController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
struct UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Params
{
	TheExecutioner_ETrailType                          trailType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
struct UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Params
{
};

// Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
struct UTormentTrailSpawnerComponent_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheExecutioner.TrailofTorment.OnRep_HighlightGenerator
struct UTrailofTorment_OnRep_HighlightGenerator_Params
{
	class Ugenerator*                                  _oldHighlightedGenerator;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
