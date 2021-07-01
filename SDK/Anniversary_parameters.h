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

// Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
struct UCrownPillarInteractable_Local_OnIntroCompleted_Params
{
};

// Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
struct UCrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
struct UCrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
struct UCrownPillarInteractable_Cosmetic_OnStartedInteracting_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
struct UCrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params
{
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
struct UCrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params
{
};

// Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
struct UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params
{
};

// Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar
struct UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
