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

// Function TheTrapper.beartrap.TrySetTrappedPlayer
struct Ubeartrap_TrySetTrappedPlayer_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.SetTrappedPlayerSinceMoved
struct Ubeartrap_SetTrappedPlayerSinceMoved_Params
{
	bool                                               didTrap;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.SetTrappedPlayer
struct Ubeartrap_SetTrappedPlayer_Params
{
	class UdbdPlayer*                                  trappedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.PlayMontage
struct Ubeartrap_PlayMontage_Params
{
	class UAnimMontage*                                montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.OnTrappedSurvivorEndGameSacrificed
struct Ubeartrap_OnTrappedSurvivorEndGameSacrificed_Params
{
	struct FgameplayTag                                GameEventType;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.OnSlasherSet
struct Ubeartrap_OnSlasherSet_Params
{
	class UslasherPlayer*                              slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.OnSafetyZoneEndOverlap
struct Ubeartrap_OnSafetyZoneEndOverlap_Params
{
	class UprimitiveComponent*                         overlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.OnPlayerLeft
struct Ubeartrap_OnPlayerLeft_Params
{
	struct FgameplayTag                                GameEventType;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.OnDamageStateChanged
struct Ubeartrap_OnDamageStateChanged_Params
{
	struct FgameplayTag                                GameEventType;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.IsTrapperOutOfSafetyZone
struct Ubeartrap_IsTrapperOutOfSafetyZone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.InitializeTrapZone
struct Ubeartrap_InitializeTrapZone_Params
{
	class UprimitiveComponent*                         primitive;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.InitializeTrapSurvivorInteraction
struct Ubeartrap_InitializeTrapSurvivorInteraction_Params
{
	class UinteractionDefinition*                      interaction;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.InitializeTrapKillerInteraction
struct Ubeartrap_InitializeTrapKillerInteraction_Params
{
	class UinteractionDefinition*                      interaction;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.InitializeSafetyZone
struct Ubeartrap_InitializeSafetyZone_Params
{
	class UprimitiveComponent*                         primitive;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.InitializeMainInteractor
struct Ubeartrap_InitializeMainInteractor_Params
{
	class Uinteractor*                                 interactor;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.HasTrappedPlayerSinceMoved
struct Ubeartrap_HasTrappedPlayerSinceMoved_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.HasTrappedPlayer
struct Ubeartrap_HasTrappedPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.GetTrappedPlayer
struct Ubeartrap_GetTrappedPlayer_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.GetAnimInstance
struct Ubeartrap_GetAnimInstance_Params
{
	class UBearTrapAnimInstance*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.beartrap.DetachTrappedPlayer
struct Ubeartrap_DetachTrappedPlayer_Params
{
};

// Function TheTrapper.beartrap.CanTrap
struct Ubeartrap_CanTrap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
struct UBearTrapAnimInstance_SetWasJustDisarmed_Params
{
	bool                                               wasJustDisarmed;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
struct UBearTrapAnimInstance_SetIsTrapSet_Params
{
	bool                                               isTrapSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsBroken
struct UBearTrapAnimInstance_SetIsBroken_Params
{
	bool                                               isBroken;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
struct UBearTrapAnimInstance_SetIsBeingCollected_Params
{
	bool                                               isBeingCollected;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
struct UBearTrapAnimInstance_SetContainsSurvivor_Params
{
	bool                                               containsSurvivor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
struct URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.Untrap.GetTrap
struct UUntrap_GetTrap_Params
{
	class Ubeartrap*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
