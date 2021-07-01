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

// Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
struct UBlightedSerumAddon_OnRep_DashInteraction_Params
{
};

// Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
struct UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Params
{
};

// Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
struct UBlightedSerumCollisionInteraction_SetCooldownInteraction_Params
{
	class UBlightedSerumCooldownInteraction*           cooldownInteraction;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
struct UBlightedSerumDashInteraction_SetCooldownInteraction_Params
{
	class UBlightedSerumCooldownInteraction*           cooldownInteraction;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
struct UBlightedSerumDashInteraction_SetCollisionInteraction_Params
{
	class UBlightedSerumCollisionInteraction*          collisionInteraction;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
struct UToxinPlantInteractable_SetToxinPlantComplete_Params
{
	bool                                               isComplete;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
struct UToxinPlantInteractable_OnToxinPlantComplete_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
struct UToxinPlantInteractable_OnSalvageInteractionStart_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
struct UToxinPlantInteractable_OnSalvageInteractionFinished_Params
{
};

// Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
struct UToxinPlantInteractable_IsToxinPlantComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
