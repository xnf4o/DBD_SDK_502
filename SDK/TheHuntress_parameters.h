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

// Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
struct UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
struct UHatchetRack_SetMovableHatchetVisibility_Params
{
	bool                                               Visible;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
struct UHatchetThrow_GetOwningHatchetSpawner_Params
{
	class UTheHuntressPower*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
struct UReloadHatchet_IsInteractionPossible_Shared_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
struct UTheHuntressPower_StartHatchetShineCosmetic_Params
{
};

// Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
struct UTheHuntressPower_SetPercentThrowStrength_Params
{
	float                                              percentStrength;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.SetHatchetVisible
struct UTheHuntressPower_SetHatchetVisible_Params
{
	bool                                               Visible;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
struct UTheHuntressPower_PrintDebugThrowInfo_Params
{
};

// Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
struct UTheHuntressPower_IsHatchetThrowFullyCharged_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.HasHatchet
struct UTheHuntressPower_HasHatchet_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetOwningKiller
struct UTheHuntressPower_GetOwningKiller_Params
{
	class UslasherPlayer*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
struct UTheHuntressPower_GetHatchetProjectileLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetHatchetCooldown
struct UTheHuntressPower_GetHatchetCooldown_Params
{
	class UHatchetCooldown*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
struct UTheHuntressPower_GetAkAudioHatchetSpawner_Params
{
	class UAkComponent*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
struct UTheHuntressPower_Cosmetic_OnThrowInteractionStart_Params
{
};

// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
struct UTheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
