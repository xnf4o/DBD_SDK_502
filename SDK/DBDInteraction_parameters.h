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

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers
struct UActivePhaseWalkInteraction_ResetMovementSpeedMultipliers_Params
{
};

// Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX
struct UActivePhaseWalkInteraction_ResetChargeVFX_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo
struct UActivePhaseWalkInteraction_Local_SendPhaseWalkInfo_Params
{
	bool                                               startActivePhaseWalk;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               teleportToHusk;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
struct UBaseStalkModeInteraction_GetStalkerComponent_Params
{
	class UStalkerComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.BaseStalkModeInteraction.CanStalk
struct UBaseStalkModeInteraction_CanStalk_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.CollectItemInteraction.GetItem
struct UCollectItemInteraction_GetItem_Params
{
	class Ucollectable*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
struct UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params
{
	float                                              IndividualChargeAmount;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalChargeAmount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ChargeInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasCoop;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.DropItemInteraction.GetItem
struct UDropItemInteraction_GetItem_Params
{
	class Ucollectable*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
struct UGeneratorDamageInteraction_Authority_DamageGenerator_Params
{
	class UdbdPlayer*                                  damageBy;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
struct UGeneratorRepairInteraction_SetIsObstructed_Params
{
	bool                                               obstructed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
struct UGeneratorRepairInteraction_GetOwningGenerator_Params
{
	class Ugenerator*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
struct UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
struct UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.GhostChargeStalkModeInteraction.GetStealthComponent
struct UGhostChargeStalkModeInteraction_GetStealthComponent_Params
{
	class UGhostStealthComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
struct UHookSurvivorDefinition_GetMeatHook_Params
{
	class UMeatHook*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.LinkedVomitInteraction.IsVomiting
struct ULinkedVomitInteraction_IsVomiting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete
struct ULinkedVomitInteraction_IsChargeComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
struct ULinkedVomitInteraction_GetVomitStateComponent_Params
{
	class UVomitStateComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
struct USearchChestInteractionBase_FireChestScoreEvent_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
struct UOpenChestInteraction_CollectItemIfEmptyHanded_Params
{
	class Ucollectable*                                collectable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
struct UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params
{
};

// Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
struct UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params
{
	class UslasherPlayer*                              slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
struct UThrowInteraction_InitThrowCancellationExitTime_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInteraction.ThrowInteraction.HasCancelledThrow
struct UThrowInteraction_HasCancelledThrow_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
