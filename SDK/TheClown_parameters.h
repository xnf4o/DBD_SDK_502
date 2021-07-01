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

// Function TheClown.BaseGasCloudProjectile.SetIsDissipating
struct UBaseGasCloudProjectile_SetIsDissipating_Params
{
	bool                                               isDissipating;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
struct UBaseGasCloudProjectile_SetIgnoredActors_Params
{
};

// Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
struct UBaseGasCloudProjectile_SetGasAudioActive_Params
{
	bool                                               Activated;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
struct UBaseGasCloudProjectile_OnOverlapEnd_Params
{
	class UprimitiveComponent*                         hitComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
struct UBaseGasCloudProjectile_OnOverlapBegin_Params
{
	class UprimitiveComponent*                         hitComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  sweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
struct UBaseGasCloudProjectile_OnDelayedActivationStart_Params
{
	float                                              delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
struct UBaseGasCloudProjectile_OnAcquiredChanged_Params
{
	bool                                               acquired;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
struct UBaseGasCloudProjectile_Multicast_DissipateGasCloud_Params
{
};

// Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
struct UBaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.isDissipating
struct UBaseGasCloudProjectile_isDissipating_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.GetGasType
struct UBaseGasCloudProjectile_GetGasType_Params
{
	TheClown_EBombType                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
struct UBaseGasCloudProjectile_DissipateGasCloud_Params
{
};

// Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
struct UBaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
struct UBaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
struct UBaseGasCloudProjectile_ActivateCosmetic_BP_Params
{
};

// Function TheClown.BombLauncher.SetProjectileSpeedCurve
struct UBombLauncher_SetProjectileSpeedCurve_Params
{
	class UCurveFloat*                                 newProjectileSpeedCurve;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.SetProjectilePitchCurve
struct UBombLauncher_SetProjectilePitchCurve_Params
{
	class UCurveFloat*                                 newProjectilePitchCurve;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.SetPercentThrowStrength
struct UBombLauncher_SetPercentThrowStrength_Params
{
	float                                              throwStrength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.Server_SwitchBombType
struct UBombLauncher_Server_SwitchBombType_Params
{
};

// Function TheClown.BombLauncher.LocalLaunch
struct UBombLauncher_LocalLaunch_Params
{
	float                                              percentThrowStrength;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.Local_SwitchBombType
struct UBombLauncher_Local_SwitchBombType_Params
{
};

// Function TheClown.BombLauncher.IsBombFullyCharged
struct UBombLauncher_IsBombFullyCharged_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.GetPercentThrowStrenght
struct UBombLauncher_GetPercentThrowStrenght_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.GetCurrentBombType
struct UBombLauncher_GetCurrentBombType_Params
{
	TheClown_EBombType                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
struct UGassedStatusEffect_UpdateAntidoteEffectVFX_Params
{
	float                                              durationRemaining;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.SetRemainingDuration
struct UGassedStatusEffect_SetRemainingDuration_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
struct UGassedStatusEffect_SetRemainingAntidoteDuration_Params
{
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinEffectEnd
struct UGassedStatusEffect_OnToxinEffectEnd_Params
{
	float                                              durationSkipped;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinEffectBegin
struct UGassedStatusEffect_OnToxinEffectBegin_Params
{
	float                                              effectDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinCured
struct UGassedStatusEffect_OnToxinCured_Params
{
};

// Function TheClown.GassedStatusEffect.OnRep_IsInCloud
struct UGassedStatusEffect_OnRep_IsInCloud_Params
{
};

// Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
struct UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params
{
};

// Function TheClown.GassedStatusEffect.OnDirectBottleHit
struct UGassedStatusEffect_OnDirectBottleHit_Params
{
	TheClown_EBombType                                 bottleType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
struct UGassedStatusEffect_OnAntidoteEffectEnd_Params
{
	float                                              durationSkipped;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
struct UGassedStatusEffect_OnAntidoteEffectBegin_Params
{
	float                                              effectDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.isInCloud
struct UGassedStatusEffect_isInCloud_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.IsInAntidoteCloud
struct UGassedStatusEffect_IsInAntidoteCloud_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetRemainingDuration
struct UGassedStatusEffect_GetRemainingDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
struct UGassedStatusEffect_GetRemainingAntidoteDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetCloudEffectDuration
struct UGassedStatusEffect_GetCloudEffectDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
struct UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
struct UGassedStatusEffect_Authority_SetIsInCloud_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
struct UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
struct UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params
{
	class UBaseGasCloudProjectile*                     cloud;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
struct UGassedStatusEffect_Authority_AddOverlappingCloud_Params
{
	class UBaseGasCloudProjectile*                     cloud;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.IsGassed
struct UTheClownUtilities_IsGassed_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.IsAffectedByAntidote
struct UTheClownUtilities_IsAffectedByAntidote_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.GetGassedStatusEffect
struct UTheClownUtilities_GetGassedStatusEffect_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGassedStatusEffect*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
struct UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveGasCloudTrackerComponent*             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.CanBeGassed
struct UTheClownUtilities_CanBeGassed_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
