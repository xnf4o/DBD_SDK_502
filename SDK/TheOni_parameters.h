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

// Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
struct UAbsorbBloodOrbsInteraction_SetPlayerOwner_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.UpdateAttracted_Cosmetic
struct UbloodOrb_UpdateAttracted_Cosmetic_Params
{
	struct Fvector                                     Destination;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  absorber;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.UpdateAbsorbed_Cosmetic
struct UbloodOrb_UpdateAbsorbed_Cosmetic_Params
{
	struct Fvector                                     Destination;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  absorber;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.OnRep_State
struct UbloodOrb_OnRep_State_Params
{
	TheOni_EBloodOrbState                              oldState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.OnIsAttractedChangedCosmetic
struct UbloodOrb_OnIsAttractedChangedCosmetic_Params
{
	bool                                               isAttracted;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.OnDestroyedCosmetic
struct UbloodOrb_OnDestroyedCosmetic_Params
{
};

// Function TheOni.bloodOrb.OnAbsorbedCosmetic
struct UbloodOrb_OnAbsorbedCosmetic_Params
{
};

// Function TheOni.bloodOrb.GetDroppingPlayer
struct UbloodOrb_GetDroppingPlayer_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.Authority_OnDropped
struct UbloodOrb_Authority_OnDropped_Params
{
	class UdbdPlayer*                                  droppedBy;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              impulseFactor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrb.Authority_OnDropFinished
struct UbloodOrb_Authority_OnDropFinished_Params
{
};

// Function TheOni.bloodOrb.Authority_DestroyBloodOrb
struct UbloodOrb_Authority_DestroyBloodOrb_Params
{
};

// Function TheOni.bloodOrb.Authority_Despawn
struct UbloodOrb_Authority_Despawn_Params
{
};

// Function TheOni.bloodOrbAbsorberComponent.SetInAbsorbMode
struct UbloodOrbAbsorberComponent_SetInAbsorbMode_Params
{
	bool                                               inAbsorptionMode;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbAbsorberComponent.IsInAbsorbMode
struct UbloodOrbAbsorberComponent_IsInAbsorbMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
struct UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params
{
	class UbloodOrbVisibilityComponent*                bloodOrbVisibilityComponent;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Killer;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
struct UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params
{
	class UbloodOrbVisibilityComponent*                bloodOrbVisibilityComponent;                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
struct UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params
{
	class UbloodOrbAbsorberComponent*                  bloodOrbAbsorberComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
struct UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params
{
};

// Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
struct UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params
{
	class UdbdPlayer*                                  Killer;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
struct UBloodOrbDropperComponent_DBD_DropBloodOrbs_Params
{
	int                                                numOrbs;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_SetPaused
struct UBloodOrbDropperComponent_Authority_SetPaused_Params
{
	bool                                               paused;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
struct UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
struct UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Params
{
	struct FgameplayTag                                gameEvent;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBloodOrbDropParams                         dropParams;                                                // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
struct UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Params
{
	struct FgameplayTag                                gameEvent;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
struct UBloodOrbDropperComponent_Authority_OnCamperHooked_Params
{
	struct FgameplayTag                                gameEvent;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
struct UBloodOrbDropperComponent_Authority_OnCamperCrouched_Params
{
	struct FgameplayTag                                gameEvent;                                                 // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
struct UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params
{
	int                                                previousOverlappingOrbs;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
struct UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params
{
	class Uactor*                                      destroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params
{
	TheOni_EBloodOrbVisibilityMode                     visibilityMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
struct UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  sweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
struct UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params
{
	class UTimerObject*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
struct UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params
{
	TheOni_EBloodOrbState                              oldState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheOni_EBloodOrbState                              NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UbloodOrb*                                   bloodOrb;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
struct UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params
{
	class UbloodOrb*                                   bloodOrb;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
struct UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params
{
	class UbloodOrb*                                   bloodOrb;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.BloodOrbUtilities.GetAllBloodOrbs
struct UBloodOrbUtilities_GetAllBloodOrbs_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UbloodOrb*>                           ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbVisibilityComponent.SetVisibilityRange
struct UbloodOrbVisibilityComponent_SetVisibilityRange_Params
{
	float                                              visibilityRange;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbVisibilityComponent.SetVisibilityMode
struct UbloodOrbVisibilityComponent_SetVisibilityMode_Params
{
	TheOni_EBloodOrbVisibilityMode                     visibilityMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
struct UbloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Params
{
	bool                                               show;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbVisibilityComponent.SetAuraVisibilityRange
struct UbloodOrbVisibilityComponent_SetAuraVisibilityRange_Params
{
	float                                              auraVisibilityRange;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.bloodOrbVisibilityComponent.OnBloodOrbSpawned
struct UbloodOrbVisibilityComponent_OnBloodOrbSpawned_Params
{
	class UbloodOrb*                                   bloodOrb;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
struct UDemonModeComponent_ShouldLoseDemonModeOnStun_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.OnPowerChargeFull
struct UDemonModeComponent_OnPowerChargeFull_Params
{
};

// Function TheOni.DemonModeComponent.OnPowerChargeEmpty
struct UDemonModeComponent_OnPowerChargeEmpty_Params
{
};

// Function TheOni.DemonModeComponent.OnIsPowerChanged
struct UDemonModeComponent_OnIsPowerChanged_Params
{
	bool                                               isInPower;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
struct UDemonModeComponent_Multicast_DemonModeInterruptedOnStartup_Params
{
};

// Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
struct UDemonModeComponent_Multicast_DemonModeInterruptedOnEnding_Params
{
};

// Function TheOni.DemonModeComponent.isInDemonMode
struct UDemonModeComponent_isInDemonMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.GetDemonModeState
struct UDemonModeComponent_GetDemonModeState_Params
{
	TheOni_EDemonModeState                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.GetCurrentCharge
struct UDemonModeComponent_GetCurrentCharge_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.GetChargePercent
struct UDemonModeComponent_GetChargePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.DBD_DemonModeForever
struct UDemonModeComponent_DBD_DemonModeForever_Params
{
	bool                                               forever;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.CanStartDemonMode
struct UDemonModeComponent_CanStartDemonMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
struct UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params
{
	class UinteractionDefinition*                      interaction;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
struct UDemonModeComponent_Authority_OnLevelReadyToPlay_Params
{
};

// Function TheOni.DemonModeComponent.Authority_OnChargeChanged
struct UDemonModeComponent_Authority_OnChargeChanged_Params
{
	float                                              currentChargePercent;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.Authority_InterruptedMontage
struct UDemonModeComponent_Authority_InterruptedMontage_Params
{
	struct FAnimationMontageDescriptor                 montage;                                                   // (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeComponent.Authority_AddCharge
struct UDemonModeComponent_Authority_AddCharge_Params
{
	float                                              chargeAmount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner
struct UDemonModeCooldownInteraction_SetPlayerOwner_Params
{
	class UdbdPlayer*                                  owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
struct UDemonModeCooldownInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode
struct UDemonModeMenuComponent_SetInMenuDemonMode_Params
{
	bool                                               inMenuDemonMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
struct UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params
{
	bool                                               isInDemonMode;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniDashInteraction.SetPlayerOwner
struct UOniDashInteraction_SetPlayerOwner_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniDashInteraction.OnLevelReadyToPlay
struct UOniDashInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheOni.OniDashInteraction.OnDashEnd
struct UOniDashInteraction_OnDashEnd_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniDashInteraction.OnDashBegin
struct UOniDashInteraction_OnDashBegin_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniDashInteraction.OnChargeEnd
struct UOniDashInteraction_OnChargeEnd_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               chargeCompleted;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.OniDashInteraction.OnChargeBegin
struct UOniDashInteraction_OnChargeBegin_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
struct URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params
{
	class Uactor*                                      overlappingActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UbloodOrb*                                   bloodOrb;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.StartDemonModeInteraction.SetPlayerOwner
struct UStartDemonModeInteraction_SetPlayerOwner_Params
{
	class UdbdPlayer*                                  owner;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
struct UStartDemonModeInteraction_OnLevelReadyToPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
