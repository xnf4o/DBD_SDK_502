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

// Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
struct UFastTrack_Cosmetic_OnTokenCountDecreased_Params
{
};

// Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore
struct UFlurryComboScoreComponent_OnRep_ComboScore_Params
{
};

// Function TheK23.FlurryOfKnives.Server_StartThrowing
struct UFlurryOfKnives_Server_StartThrowing_Params
{
};

// Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
struct UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Params
{
};

// Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
struct UFlurryOfKnives_OnRep_NumOfStacksReduction_Params
{
};

// Function TheK23.FlurryOfKnives.Multicast_StartThrowing
struct UFlurryOfKnives_Multicast_StartThrowing_Params
{
};

// Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
struct UKnifeProjectile_WasLaunchedDuringSuperMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.ShouldPlayRicochetSound
struct UKnifeProjectile_ShouldPlayRicochetSound_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.SetKnifeAcquired
struct UKnifeProjectile_SetKnifeAcquired_Params
{
	bool                                               acquired;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.OnWorldColliderHit
struct UKnifeProjectile_OnWorldColliderHit_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.OnProjectileBounce
struct UKnifeProjectile_OnProjectileBounce_Params
{
	struct FhitResult                                  impactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct Fvector                                     impactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.GetAddonExplosionRadius
struct UKnifeProjectile_GetAddonExplosionRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_SetKnifeActive
struct UKnifeProjectile_BP_SetKnifeActive_Params
{
	bool                                               active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic
struct UKnifeProjectile_BP_OnLaunchCosmetic_Params
{
	struct FlaunchInfo                                 launchInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               hasImpactOnLaunch;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
struct UKnifeProjectile_BP_CosmeticOnAddonExplosion_Params
{
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normal;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeRack.OnReloadMontageStarted
struct UKnifeRack_OnReloadMontageStarted_Params
{
	float                                              actionSpeedMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeRack.OnReloadEnded
struct UKnifeRack_OnReloadEnded_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnivesLauncher.GetPower
struct UKnivesLauncher_GetPower_Params
{
	class UThrowingKnives*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo
struct UKnivesLauncher_GetLocallyPredictedAmmo_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.OnRepLaceration
struct ULacerationComponent_OnRepLaceration_Params
{
	float                                              oldLaceration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Multicast_KnifeHit
struct ULacerationComponent_Multicast_KnifeHit_Params
{
	float                                              newLaceration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedKo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     impactLocation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     impactNormal;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged
struct ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Params
{
	bool                                               isLocallyObserved;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LacerationPercent;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerous;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged
struct ULacerationComponent_Cosmetic_OnLacerationChanged_Params
{
	float                                              LacerationPercent;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerous;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit
struct ULacerationComponent_Cosmetic_OnKnifeHit_Params
{
	float                                              LacerationPercent;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerous;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedKo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     impactNormal;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.OnItemUsedStateChanged
struct UThrowingKnives_OnItemUsedStateChanged_Params
{
	bool                                               pressed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
struct UThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Params
{
};

// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
struct UThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Params
{
};

// Function TheK23.ThrowingKnives.GetSlasher
struct UThrowingKnives_GetSlasher_Params
{
	class UslasherPlayer*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.GetLauncher
struct UThrowingKnives_GetLauncher_Params
{
	class UKnivesLauncher*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
struct UThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
struct UThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnLaunch
struct UThrowingKnives_Cosmetic_OnLaunch_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
struct UThrowingKnives_Cosmetic_OnComboScoreChanged_Params
{
	float                                              scoreNormalizedForAudio;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished
struct UThrowingKnives_Cosmetic_OnComboFinished_Params
{
	bool                                               isSRankCombo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
struct UThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Params
{
};

// Function TheK23.TricksterCharacterVFXInterface.ShowWeapon
struct UTricksterCharacterVFXInterface_ShowWeapon_Params
{
};

// Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
struct UTricksterCharacterVFXInterface_SetSuperModeActive_Params
{
	bool                                               active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
struct UTricksterCharacterVFXInterface_SetKnivesVisibility_Params
{
	bool                                               leftKnife;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               rightKnife;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
struct UTricksterCharacterVFXInterface_SetIsSuperModeReady_Params
{
	bool                                               isSuperModeReady;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
struct UTricksterCharacterVFXInterface_SetIsInCooldown_Params
{
	bool                                               isInCooldown;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.HideWeapon
struct UTricksterCharacterVFXInterface_HideWeapon_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
struct UTricksterSuperModeComponent_OnRepIsSuperModeReady_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
struct UTricksterSuperModeComponent_OnRepIsInSuperMode_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
struct UTricksterSuperModeComponent_OnRepIsInCooldown_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
