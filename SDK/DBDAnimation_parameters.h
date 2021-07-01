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

// Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
struct UPlayerAnimInstance_OnLevelReadyToPlay_Params
{
};

// Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
struct UPlayerAnimInstance_OnIntroCompleted_Params
{
};

// Function DBDAnimation.PlayerAnimInstance.HasBeenNotified
struct UPlayerAnimInstance_HasBeenNotified_Params
{
	struct FName                                       animNotify;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
struct UPlayerAnimInstance_GetOwningPlayer_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
struct UBaseSurvivorAnimInstance_GetOwningSurvivor_Params
{
	class UcamperPlayer*                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
struct UArmIKSurvivorSubAnimInstance_ChangeMode_Params
{
	DBDAnimation_EArmIkMode                            newMode;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
struct UBaseKillerAnimInstance_GetOwningKiller_Params
{
	class UslasherPlayer*                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
struct UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params
{
	int                                                animPOV;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
struct UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params
{
	class UslasherPlayer*                              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
struct UBaseMenuAnimInstance_GetOwningMenuPlayer_Params
{
	class UDBDMenuPlayer*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
struct UChestAnimInstance_OnSearchedChanged_Params
{
	bool                                               searched;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
struct UGeneratorAnimInstance_SetSkillCheckSuccess_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
struct UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params
{
};

// Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
struct UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  healer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
struct ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params
{
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
struct ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params
{
	class UdbdPlayer*                                  target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chaseTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.PalletAnimInstance.OnKillerSet
struct UPalletAnimInstance_OnKillerSet_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
struct UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params
{
};

// Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
struct USkillCheckFailureTracker_ResetSkillCheckFailed_Params
{
};

// Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
struct USkillCheckFailureTracker_OnSkillCheckFailed_Params
{
	struct FgameplayTag                                GameEventType;                                             // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
struct USurvivorAnimInstance_SetAudioRummageAkEvent_Params
{
	struct FName                                       distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
struct USurvivorAnimInstance_OnInfectiousFrightScream_Params
{
};

// Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName
struct USurvivorAnimInstance_IsPlayingMontageByName_Params
{
	struct FName                                       montageID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
struct USurvivorAnimInstance_AddAudioRepairRateRadius_Params
{
	int                                                distance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.Turn180Component.Server_SetSettings
struct UTurn180Component_Server_SetSettings_Params
{
	float                                              timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTurn180Settings                            settings;                                                  // (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
struct UWakerObjectAnimInstance_ResetReappearTimer_Params
{
};

// Function DBDAnimation.WakerObjectAnimInstance.OnReappear
struct UWakerObjectAnimInstance_OnReappear_Params
{
};

// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
struct UWakerObjectAnimInstance_GetWakerObjectStarted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
struct UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
struct UWakerObjectAnimInstance_GetWakerObjectCharge_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
struct UWakerObjectAnimInstance_GetWakerObject_Params
{
	class UWakerObject*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
