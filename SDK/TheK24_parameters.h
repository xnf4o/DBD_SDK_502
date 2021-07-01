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

// Function TheK24.ActivateK24PowerInteraction.SetK24Power
struct UActivateK24PowerInteraction_SetK24Power_Params
{
	class Uk24Power*                                   k24Power;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic
struct UBlastMine_TrapDettachedToGenerator_Cosmetic_Params
{
	class Ugenerator*                                  trappedGenerator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
struct UBlastMine_TrapAttachedToGenerator_Cosmetic_Params
{
	class Ugenerator*                                  trappedGenerator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
struct UBlastMine_ThrowBubbleIndicator_Cosmetic_Params
{
	struct FTransform                                  location;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Server_OnActionInputPressed
struct UBlastMine_Server_OnActionInputPressed_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnRep_TrappedGenerator
struct UBlastMine_OnRep_TrappedGenerator_Params
{
	class Ugenerator*                                  oldGenerator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility
struct UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Params
{
	class UinteractionDefinition*                      oldRepairInteraction;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnActivateExplosion
struct UBlastMine_OnActivateExplosion_Params
{
	struct FTransform                                  firecrackerTransform;                                      // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Client_TrapActivatedLoudNotification
struct UBlastMine_Client_TrapActivatedLoudNotification_Params
{
	struct FTransform                                  location;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Authority_OnRepairProgress
struct UBlastMine_Authority_OnRepairProgress_Params
{
	float                                              IndividualChargeAmount;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalChargeAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ChargeInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCoop;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive
struct UBlastMineTrapComponent_OnRep_IsTrapActive_Params
{
};

// Function TheK24.Counterforce.Multicast_ShowTotemAura
struct UCounterforce_Multicast_ShowTotemAura_Params
{
	class Utotem*                                      totem;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.OnRep_IsPerkEnabled
struct UEruption_OnRep_IsPerkEnabled_Params
{
};

// Function TheK24.Eruption.Multicast_TriggerPerk
struct UEruption_Multicast_TriggerPerk_Params
{
	TArray<class Ugenerator*>                          explodingGenerators;                                       // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Multicast_HighlightGenerator
struct UEruption_Multicast_HighlightGenerator_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.MakeSurvivorScreamCosmetic
struct UEruption_MakeSurvivorScreamCosmetic_Params
{
	class UdbdPlayer*                                  screamingSurvivor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.GetScreamRevealLocationDuration
struct UEruption_GetScreamRevealLocationDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
struct UEruption_Cosmetic_OnGeneratorHighlightStart_Params
{
	class Ugenerator*                                  highlightedGenerator;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
struct UEruption_Cosmetic_OnGeneratorHighlightEnd_Params
{
	class Ugenerator*                                  highlightedGenerator;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress
struct UFlashbang_OnRep_GeneratorsRepairProgress_Params
{
};

// Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
struct UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Params
{
};

// Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
struct UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Params
{
};

// Function TheK24.Flashbang.Authority_OnRepairProgressApplied
struct UFlashbang_Authority_OnRepairProgressApplied_Params
{
	float                                              IndividualChargeAmount;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalChargeAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ChargeInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCoop;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
struct UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Params
{
};

// Function TheK24.InjectSerumInteraction.OnKillerSet
struct UInjectSerumInteraction_OnKillerSet_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.GetInjectionTarget
struct UInjectSerumInteraction_GetInjectionTarget_Params
{
	class UcamperPlayer*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.Authority_CureSurvivor
struct UInjectSerumInteraction_Authority_CureSurvivor_Params
{
	class UcamperPlayer*                               camperPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged
struct UK24AnimInstance_OnKillerPowerLevelChanged_Params
{
	int                                                powerLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
struct UK24CharacterFXComponent_Local_OnKillerPowerLevelChanged_Params
{
	int                                                powerLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo
struct UK24CheatComponent_DBD_TeleportZombiesTo_Params
{
	float                                              x;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24ZombieFall
struct UK24CheatComponent_DBD_K24ZombieFall_Params
{
	float                                              Zvalue;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24StopAllZombies
struct UK24CheatComponent_DBD_K24StopAllZombies_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24StartAllZombies
struct UK24CheatComponent_DBD_K24StartAllZombies_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
struct UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
struct UK24CheatComponent_DBD_K24SetPowerLevelPoints_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
struct UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
struct UK24CheatComponent_DBD_K24ComeToMeMyZombies_Params
{
};

// Function TheK24.K24PounceAttack.Server_HitZombie
struct UK24PounceAttack_Server_HitZombie_Params
{
	class UZombieCharacter*                            Zombie;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetLocationTimestamp;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.WhipAttackStart_Cosmetic
struct Uk24Power_WhipAttackStart_Cosmetic_Params
{
};

// Function TheK24.k24Power.WhipAttackMove_Cosmetic
struct Uk24Power_WhipAttackMove_Cosmetic_Params
{
	struct Fvector                                     whipStartLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     whipEndLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstRayCast;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.WhipAttackHit_Cosmetic
struct Uk24Power_WhipAttackHit_Cosmetic_Params
{
	struct Fvector                                     whipStartLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     impactPointLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     whipEndLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstHit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     impactNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       phyMaterial;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hitACharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.WhipAttackEnd_Cosmetic
struct Uk24Power_WhipAttackEnd_Cosmetic_Params
{
};

// Function TheK24.k24Power.Server_PowerDestroyPallet
struct Uk24Power_Server_PowerDestroyPallet_Params
{
	class Upallet*                                     pallet;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.Server_PowerDestroyBreakable
struct Uk24Power_Server_PowerDestroyBreakable_Params
{
	class UBreakableBase*                              breakable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.Server_KillAZombie
struct Uk24Power_Server_KillAZombie_Params
{
	class UZombieCharacter*                            Zombie;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EAttackType                         AttackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.PowerHitStateEnd_Cosmetic
struct Uk24Power_PowerHitStateEnd_Cosmetic_Params
{
	struct Fvector                                     whipStartLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     whipEndLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.PowerCooldownEnd_Cosmetic
struct Uk24Power_PowerCooldownEnd_Cosmetic_Params
{
};

// Function TheK24.k24Power.OnRep_PowerLevelPoints
struct Uk24Power_OnRep_PowerLevelPoints_Params
{
};

// Function TheK24.k24Power.OnPowerStop_Cosmetic
struct Uk24Power_OnPowerStop_Cosmetic_Params
{
};

// Function TheK24.k24Power.OnPowerStartCharge_Cosmetic
struct Uk24Power_OnPowerStartCharge_Cosmetic_Params
{
};

// Function TheK24.k24Power.OnPowerLevelChanged_Cosmetic
struct Uk24Power_OnPowerLevelChanged_Cosmetic_Params
{
	int                                                powerLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.Multicast_PowerDestroyPallet
struct Uk24Power_Multicast_PowerDestroyPallet_Params
{
	class Upallet*                                     pallet;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.Multicast_PowerDestroyBreakable
struct Uk24Power_Multicast_PowerDestroyBreakable_Params
{
	class UBreakableBase*                              breakable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.isInPower
struct Uk24Power_isInPower_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.GetWhipLength
struct Uk24Power_GetWhipLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.GetPowerLevel
struct Uk24Power_GetPowerLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.k24Power.Authority_OnSurvivorContaminated
struct Uk24Power_Authority_OnSurvivorContaminated_Params
{
	TheK24_EContaminator                               contaminator;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
struct UK24PowerAnimInstance_OnLevelReadyToPlay_Params
{
};

// Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
struct UK24PowerAnimInstance_OnKillerPowerLevelChanged_Params
{
	int                                                powerLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerAnimInstance.OnIntroCompleted
struct UK24PowerAnimInstance_OnIntroCompleted_Params
{
};

// Function TheK24.k24PowerCooldownInteraction.SetK24Power
struct Uk24PowerCooldownInteraction_SetK24Power_Params
{
	class Uk24Power*                                   k24Power;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
struct UK24PowerPresentationItemProgressComponent_SetK24Power_Params
{
	class Uk24Power*                                   k24Power;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24WhipAttack.Server_ContaminatePlayer
struct UK24WhipAttack_Server_ContaminatePlayer_Params
{
	class UcamperPlayer*                               target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetLocationTimestamp;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24WhipAttack.Client_ContaminationResult
struct UK24WhipAttack_Client_ContaminationResult_Params
{
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isValid;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.LethalPursuer.Server_ActivatePerk
struct ULethalPursuer_Server_ActivatePerk_Params
{
};

// Function TheK24.LethalPursuer.Local_OnIntroCompleted
struct ULethalPursuer_Local_OnIntroCompleted_Params
{
};

// Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
struct URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Params
{
};

// Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
struct URookieSpirit_HandleGeneratorIsDamagedChanged_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SupplyCrateInteractable.OnRep_IsOpen
struct USupplyCrateInteractable_OnRep_IsOpen_Params
{
};

// Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing
struct USupplyCrateInteractable_OnRep_IsAutoClosing_Params
{
};

// Function TheK24.SurvivorContaminationComponent.Server_SetContaminatedValue
struct USurvivorContaminationComponent_Server_SetContaminatedValue_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK24_EContaminator                               contaminator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
struct USurvivorContaminationComponent_OnRep_IsContaminated_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnRep_InjectionSerumInteraction
struct USurvivorContaminationComponent_OnRep_InjectionSerumInteraction_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnPlayerInteractableSet
struct USurvivorContaminationComponent_OnPlayerInteractableSet_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
struct USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
struct USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
struct USurvivorContaminationComponent_OnContaminated_Cosmetic_Params
{
	TheK24_EContaminator                               contaminator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
struct USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Params
{
	TheK24_EContaminator                               contaminator;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SurvivorContaminationComponent.IsContaminated
struct USurvivorContaminationComponent_IsContaminated_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAIController.OnSlasherSet
struct UZombieAIController_OnSlasherSet_Params
{
	class UslasherPlayer*                              slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
struct UZombieAIController_Authority_OnTargetPerceptionUpdated_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                                 stimulus;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
struct UZombieAttractedByGeneratorBTService_OnInRangeChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
struct UZombieCharacter_ZombieKilledByKiller_Cosmetic_Params
{
	DBDSharedTypes_EAttackType                         AttackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
struct UZombieCharacter_SetCharacterActive_Cosmetic_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
struct UZombieCharacter_OnZombieStateChanged_Cosmetic_Params
{
	TheK24_EZombieState                                zombieState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnSlasherSet
struct UZombieCharacter_OnSlasherSet_Params
{
	class UslasherPlayer*                              slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnRep_ZombieState
struct UZombieCharacter_OnRep_ZombieState_Params
{
	TheK24_EZombieState                                PreviousState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnRep_ZombieGender
struct UZombieCharacter_OnRep_ZombieGender_Params
{
};

// Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
struct UZombieCharacter_OnFemaleGenderSet_Cosmetic_Params
{
};

// Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
struct UZombieCharacter_OnEndOverlapZombieAttackDetector_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
struct UZombieCharacter_OnBeginOverlapZombieAttackDetector_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  sweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
struct UZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Params
{
	DBDSharedTypes_EAttackType                         AttackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetZombieGender
struct UZombieCharacter_GetZombieGender_Params
{
	TheK24_EZombieGender                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
struct UZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Params
{
	class UOtherCharactersVerticalCollisionsHandler*   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
struct UZombieCharacter_GetAuthoritativeMovementComponent_Params
{
	class UAuthoritativeMovementComponent*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetAudioSwitchState
struct UZombieCharacter_GetAudioSwitchState_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged
struct UZombieCharacter_Authority_OnZombieStateChanged_Params
{
	TheK24_EZombieState                                zombieState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
struct UZombieCharacter_Authority_OnFlashlightRemoved_Params
{
	class UFlashlightComponent*                        FlashLight;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded
struct UZombieCharacter_Authority_OnFlashlightAdded_Params
{
	class UFlashlightComponent*                        FlashLight;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
struct UZombieCharacter_Authority_OnFirecrackerInRangeBegin_Params
{
	struct FFirecrackerEffectData                      effectData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
struct UZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Params
{
};

// Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
struct UZombieCustomizationComponent_Multicast_SetZombieCustomization_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
struct UZombieFallDetectorComponent_Authority_OnMovementModeChange_Params
{
	class Ucharacter*                                  character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  prevMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      previousCustomMode;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
struct UZombieResurrector_Authority_OnKillerPowerLevelChanged_Params
{
	int                                                powerLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
struct UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Params
{
	class Uactor*                                      originator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      instigatingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               shouldTrack;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              audibleRange;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isQuickAction;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombiesManagement.Authority_OnIntroComplete
struct UZombiesManagement_Authority_OnIntroComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
