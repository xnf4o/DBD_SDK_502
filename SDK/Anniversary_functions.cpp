// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
// (Final, Native, Private)
void UCrownPillarInteractable::Local_OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted");

	UCrownPillarInteractable_Local_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCrownPillarInteractable::IsLocallyObservedPlayerEquippedWithAnniversaryOffering()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering");

	UCrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UCrownPillarInteractable::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting");

	UCrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          interactionDuration            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrownPillarInteractable::Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting");

	UCrownPillarInteractable_Cosmetic_OnStartedInteracting_Params params;
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrownPillarInteractable::Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted");

	UCrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UCrownPillarInteractable::Cosmetic_OnInteractionCancelled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled");

	UCrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
// (Final, Native, Private)
void UCrownPlayerComponent::OnRep_hasInteractedWithCrownPillarThisGame()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame");

	UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar
// (Event, Protected, BlueprintEvent)
void UCrownPlayerComponent::Cosmetic_OnInteractedWithCrownPillar()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar");

	UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
