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

// Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
struct UGnome_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
struct UGnome_Cosmetic_OnStartedInteracting_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
struct UGnome_Cosmetic_OnInteractionCompleted_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
struct UGnomeEventComponent_Authority_OnEndGameStarted_Params
{
	struct FgameplayTag                                GameEventType;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
