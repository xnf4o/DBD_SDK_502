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

// Function SpecialEventUtilities.respawnableInteractable.OnUnhidden
struct UrespawnableInteractable_OnUnhidden_Params
{
};

// Function SpecialEventUtilities.respawnableInteractable.OnRep_IsHidden
struct UrespawnableInteractable_OnRep_IsHidden_Params
{
};

// Function SpecialEventUtilities.respawnableInteractable.OnHidden
struct UrespawnableInteractable_OnHidden_Params
{
};

// Function SpecialEventUtilities.respawnableInteractable.isHidden
struct UrespawnableInteractable_isHidden_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
struct URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params
{
};

// Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
struct URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params
{
	class UrespawnableInteractable*                    respawnableInteractable;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isInteracting;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
struct UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params
{
	class UrespawnableInteractable*                    newRespawnableInteractable;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
struct UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params
{
	class UrespawnableInteractable*                    respawnableInteractable;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
struct URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params
{
	class UrespawnableInteractable*                    respawnableInteractable;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isInteracting;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
struct URespawnablePositioner_Authority_GetRespawnables_Params
{
	TArray<class UrespawnableInteractable*>            ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
