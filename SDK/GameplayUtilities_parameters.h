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

// Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
struct UCharacterPusherComponent_SetIgnoredCharacter_Params
{
	class Ucharacter*                                  character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ignore;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
struct UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                otherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterPusherComponent.Construct
struct UCharacterPusherComponent_Construct_Params
{
	class UCapsuleComponent*                           characterDetector;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                           characterCollision;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBasePushStrategyComponent*                  pushStrategy;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
struct UBasePoolableActorComponent_SetAcquired_Params
{
	bool                                               active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
struct UBasePoolableActorComponent_IsAcquired_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
struct UAuthoritativePoolableActorComponent_OnRep_Acquired_Params
{
};

// Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool
struct UAuthoritativeActorPoolComponent_OnRep_Pool_Params
{
	TArray<class Uactor*>                              previousPool;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
struct UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params
{
	class Uactor*                                      destroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
struct UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
struct UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
struct UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CameraUtilities.IsLookingTowards
struct UCameraUtilities_IsLookingTowards_Params
{
	class Ucontroller*                                 controller;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     position;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              precisionAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
struct UCharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature_Params
{
	GameplayUtilities_ESightStatus                     Status;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
struct UCharacterSightableComponent_GetHighestSightStatus_Params
{
	GameplayUtilities_ESightStatus                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
struct UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
struct UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent
struct UCharacterSightComponent_SetMinimumCharacterScreenPercent_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
struct UCharacterSightComponent_SetMaximumSightDistance_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
struct UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params
{
	TArray<class Ucharacter*>                          characters;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
struct UCharacterSightComponent_OnRep_DiscernibleCharacters_Params
{
};

// Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
struct UCharacterSightComponent_OnRep_CanSee_Params
{
};

// Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
struct UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Params
{
	float                                              secondsToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              baseMaxSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              baseRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
struct UMovementUtilities_Local_MoveActorTo_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.PawnUtilities.GetOwningPawn
struct UPawnUtilities_GetOwningPawn_Params
{
	class Uactor*                                      origin;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
struct UPawnUtilities_GetLocallyObservedPawn_Params
{
	class UObject*                                     worldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
