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

// Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor
struct UAddon_TheBlight_18_SpawnParticleOnSurvivor_Params
{
	class UcamperPlayer*                               camperPlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors
struct UAddon_TheBlight_18_Multicast_SpawnParticleOnSurvivors_Params
{
	TArray<class UcamperPlayer*>                       survivors;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPower.OnPowerStateChanged
struct UBlightPower_OnPowerStateChanged_Params
{
	TheBlight_EWallGrabState                           PreviousState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheBlight_EWallGrabState                           NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
struct UBlightPowerEstimatedCollisionIndicator_OnShowIndicator_Cosmetic_Params
{
};

// Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
struct UBlightPowerEstimatedCollisionIndicator_OnHideIndicator_Cosmetic_Params
{
};

// Function TheBlight.BlightPowerState.GetStateDuration
struct UBlightPowerState_GetStateDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
struct UBlightPowerStateComponent_Server_SetWallGrabState_Params
{
	TheBlight_EWallGrabState                           NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.ResetDashTokens
struct UBlightPowerStateComponent_ResetDashTokens_Params
{
};

// Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer
struct UBlightPowerStateComponent_OnRep_StateTimer_Params
{
};

// Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens
struct UBlightPowerStateComponent_OnRep_DashTokens_Params
{
};

// Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
struct UBlightPowerStateComponent_OnLevelReadyToPlay_Params
{
};

// Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
struct UBlightPowerStateComponent_Multicast_SetWallGrabState_Params
{
	TheBlight_EWallGrabState                           NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
struct UBlightPowerStateComponent_GetStateTimeRemaining_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetStateTimer
struct UBlightPowerStateComponent_GetStateTimer_Params
{
	class UTimerObject*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
struct UBlightPowerStateComponent_GetStateTimeElapsed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
struct UBlightPowerStateComponent_GetPowerStateByEnum_Params
{
	TheBlight_EWallGrabState                           stateEnum;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlightPowerState*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetPowerState
struct UBlightPowerStateComponent_GetPowerState_Params
{
	TheBlight_EWallGrabState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
struct UBlightPowerStateComponent_GetLookAngleDegrees_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining
struct UBlightPowerStateComponent_GetDashTokensRemaining_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
struct UBlightPowerStateComponent_GetCurrentPowerState_Params
{
	class UBlightPowerState*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BlightPowerStateComponent.CanDash
struct UBlightPowerStateComponent_CanDash_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic
struct UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Params
{
};

// Function TheBlight.DragonsGrip.OnRevealSurvivor
struct UDragonsGrip_OnRevealSurvivor_Params
{
	class UdbdPlayer*                                  instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
struct UDragonsGrip_Multicast_OnRevealSurvivor_Params
{
	class UdbdPlayer*                                  Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
struct UHexUndying_Authority_UpdateHexPerkStatusView_Params
{
	class UgameplayModifierContainer*                  gameplayModifierContainer;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isApplicable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.HexUndying.Authority_OnSurvivorAdded
struct UHexUndying_Authority_OnSurvivorAdded_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
struct UHexUndying_Authority_OnCamperCleansedHexPerk_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
