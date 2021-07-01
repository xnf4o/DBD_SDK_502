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

// Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged
struct UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Params
{
	bool                                               isColliding;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators
struct UDeadMansSwitch_OnRep_BlockedGenerators_Params
{
};

// Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores
struct UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Params
{
	TArray<class UdbdPlayer*>                          nearMissedPlayers;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature
struct UFireHarpoonRifleInteraction_OnHitPlayer__DelegateSignature_Params
{
};

// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature
struct UFireHarpoonRifleInteraction_OnFireHarpoon__DelegateSignature_Params
{
};

// Function TheGunslinger.ForThePeople.Server_OnActionInputPressed
struct UForThePeople_Server_OnActionInputPressed_Params
{
};

// Function TheGunslinger.ForThePeople.OnHealingAbilityUsed
struct UForThePeople_OnHealingAbilityUsed_Params
{
	class UcamperPlayer*                               healingSurvivor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               healedSurvivor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed
struct UForThePeople_Multicast_OnHealAbilityUsed_Params
{
	class UcamperPlayer*                               healingSurvivor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               healedSurvivor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.Gearhead.OnRep_RevealedGenerators
struct UGearhead_OnRep_RevealedGenerators_Params
{
};

// DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature
struct UGunslingerEffectsComponent_PlayOutOfAmmoSound__DelegateSignature_Params
{
};

// Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged
struct UGunslingerEffectsComponent_OnItemUsedStateChanged_Params
{
	bool                                               isPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature
struct UGunslingerEffectsComponent_OnIsAimingChanged__DelegateSignature_Params
{
	bool                                               IsAiming;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound
struct UGunslingerEffectsComponent_Multicast_PlayOutOfAmmoSound_Params
{
};

// Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle
struct UGunslingerUtilities_GetHarpoonRifle_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHarpoonRifle*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected
struct UHarpoonChainPositioner_OnOwnerCollected_Params
{
	class UdbdPlayer*                                  collector;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged
struct UHarpoonChainPositioner_OnHarpoonTravelingChanged_Params
{
	bool                                               isTravelling;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle
struct UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Params
{
};

// Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged
struct UHarpoonChainPositioner_OnCurrentHarpoonChanged_Params
{
	class Uactor*                                      currentHarpoon;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp
struct UHarpoonChainPositioner_GetHarpoonProp_Params
{
	class UHarpoonProp*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon
struct UHarpoonChainPositioner_GetCurrentHarpoon_Params
{
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.AttachToRifle
struct UHarpoonChainPositioner_AttachToRifle_Params
{
};

// Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket
struct UHarpoonChainPositioner_AttachToAnimSocket_Params
{
};

// Function TheGunslinger.HarpoonProjectile.OnHarpoonStop
struct UHarpoonProjectile_OnHarpoonStop_Params
{
	struct FhitResult                                  result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonRifle.GetChain
struct UHarpoonRifle_GetChain_Params
{
	class URifleChain*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon
struct UHarpoonRifle_Authority_OnFireHarpoon_Params
{
};

// Function TheGunslinger.RedHerring.OnRep_MarkedGenerator
struct URedHerring_OnRep_MarkedGenerator_Params
{
	class Ugenerator*                                  oldMarkedGenerator;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RedHerring.OnLoudNoiseTriggered
struct URedHerring_OnLoudNoiseTriggered_Params
{
};

// Function TheGunslinger.RifleChain.UpdateChainMesh
struct URifleChain_UpdateChainMesh_Params
{
	class UInstancedStaticMeshComponent*               mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UsplineComponent*                            Spline;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.SpawnChainPoints
struct URifleChain_SpawnChainPoints_Params
{
	struct Fvector                                     start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     stop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 influenceCurve;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pointYPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pointZPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useOffset;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UsplineComponent*                            Spline;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnUnattachFromPlayer
struct URifleChain_OnUnattachFromPlayer_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnReelBackToRifle
struct URifleChain_OnReelBackToRifle_Params
{
};

// DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature
struct URifleChain_OnProjectileSet__DelegateSignature_Params
{
	class Uactor*                                      projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnLaunch
struct URifleChain_OnLaunch_Params
{
};

// DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature
struct URifleChain_OnIsCollidingChanged__DelegateSignature_Params
{
	bool                                               isColliding;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnAttachToPlayer
struct URifleChain_OnAttachToPlayer_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.isColliding
struct URifleChain_isColliding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetUnwindingSpeed
struct URifleChain_GetUnwindingSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetRiflePlayerLinker
struct URifleChain_GetRiflePlayerLinker_Params
{
	class URiflePlayerLinker*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits
struct URifleChain_GetFirstAndLastCollisionHits_Params
{
	TArray<struct FhitResult>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainTensionComponent
struct URifleChain_GetChainTensionComponent_Params
{
	class URifleChainTensionComponent*                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainStart
struct URifleChain_GetChainStart_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainEnd
struct URifleChain_GetChainEnd_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged
struct URifleChainTensionComponent_OnTensionChargeableCompletionChanged_Params
{
	bool                                               Completed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              instigatorsForCompletion;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension
struct URifleChainTensionComponent_OnRep_IsBuildingTension_Params
{
};

// DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature
struct URifleChainTensionComponent_OnIsBuildingTensionChanged__DelegateSignature_Params
{
	bool                                               isBuildingTension;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.isBuildingTension
struct URifleChainTensionComponent_isBuildingTension_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.GetProgress
struct URifleChainTensionComponent_GetProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain
struct URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature
struct URiflePlayerLinker_OnLinkedPlayerSet__DelegateSignature_Params
{
	class UdbdPlayer*                                  linkedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink
struct URiflePlayerLinker_Multicast_Unlink_Params
{
};

// Function TheGunslinger.RiflePlayerLinker.Multicast_Link
struct URiflePlayerLinker_Multicast_Link_Params
{
	class UdbdPlayer*                                  linkedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.GetLinkOwner
struct URiflePlayerLinker_GetLinkOwner_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer
struct URiflePlayerLinker_GetLinkedPlayer_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain
struct URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy
struct USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Params
{
};

// Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet
struct USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
