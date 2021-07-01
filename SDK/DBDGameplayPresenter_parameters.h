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

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
struct USurvivorStatusComponent_OnValidatedInteractionStarted_Params
{
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
struct USurvivorStatusComponent_OnValidatedInteractionEnded_Params
{
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
struct USurvivorStatusComponent_OnSuvivorDamaged_Params
{
	DeadByDaylight_ECamperDamageState                  oldDamageState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  newDamageState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
struct USurvivorStatusComponent_OnSurivorStatusChange_Params
{
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
struct USurvivorStatusComponent_OnRunningAndMovementChanged_Params
{
	bool                                               isRunningAndMoving;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged
struct USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Params
{
	DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              newImmobilizeState;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
struct USurvivorStatusComponent_OnHookedStateChanged_Params
{
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
struct USurvivorStatusComponent_OnGuidedStateChanged_Params
{
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
struct USurvivorStatusComponent_OnCrouchChanged_Params
{
	bool                                               IsCrouched;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
struct USurvivorStatusComponent_IsSleeping_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
struct USurvivorStatusComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
struct USurvivorStatusComponent_IsInjured_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
struct USurvivorStatusComponent_IsHooked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
struct USurvivorStatusComponent_IsHiding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
struct USurvivorStatusComponent_IsHealing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
struct USurvivorStatusComponent_IsHarpooned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
struct USurvivorStatusComponent_IsGettingStrangled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
struct USurvivorStatusComponent_IsGettingSacrificed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying
struct USurvivorStatusComponent_IsDying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.isDead
struct USurvivorStatusComponent_isDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
struct USurvivorStatusComponent_IsCrouching_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
struct USurvivorStatusComponent_IsCaptured_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
struct USurvivorStatusComponent_GetMovementSpeed_Params
{
	float                                              currentMovementSpeed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentMovementSpeed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maximumMovementSpeed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
