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

// Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UGnome::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting");

	UGnome_Cosmetic_OnStoppedInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          interactionDuration            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGnome::Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting");

	UGnome_Cosmetic_OnStartedInteracting_Params params;
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGnome::Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted");

	UGnome_Cosmetic_OnInteractionCompleted_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGnomeEventComponent::Authority_OnEndGameStarted(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted");

	UGnomeEventComponent_Authority_OnEndGameStarted_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
