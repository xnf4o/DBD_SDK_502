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

// Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay
// (Final, Native, Private)
void UDreamInducerComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay");

	UDreamInducerComponent_Authority_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed
// (Final, Native, Private)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bonus                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           triggerLoudNoise               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           HadInput                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_ESkillCheckCustomType type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          chargeChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorDreamworldComponent::OnRepairSkillCheckFailed(bool Success, bool bonus, class UdbdPlayer* player, bool triggerLoudNoise, bool HadInput, DBDSharedTypes_ESkillCheckCustomType type, float chargeChange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed");

	UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Params params;
	params.Success = Success;
	params.bonus = bonus;
	params.player = player;
	params.triggerLoudNoise = triggerLoudNoise;
	params.HadInput = HadInput;
	params.type = type;
	params.chargeChange = chargeChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorDreamworldComponent::Cosmetic_OnPlayerFailSkillCheck(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck");

	UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              teleportingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorTeleportInteraction::TeleportPlayerToLocation(class UdbdPlayer* teleportingPlayer, const struct Fvector& location, const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation");

	UGeneratorTeleportInteraction_TeleportPlayerToLocation_Params params;
	params.teleportingPlayer = teleportingPlayer;
	params.location = location;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
// (Final, Native, Protected, BlueprintCallable)
void UGeneratorTeleportInteraction::StopBloodSpurts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts");

	UGeneratorTeleportInteraction_StopBloodSpurts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
// (Final, Native, Protected, BlueprintCallable)
void UGeneratorTeleportInteraction::StartBloodSpurts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts");

	UGeneratorTeleportInteraction_StartBloodSpurts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
// (Event, Protected, BlueprintEvent)
void UGeneratorTeleportInteraction::ShowBloodSpurtsVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX");

	UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
// (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::Server_SetSelectedGenerator(class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator");

	UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params params;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
// (Event, Protected, BlueprintEvent)
void UGeneratorTeleportInteraction::OnTeleportReady()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady");

	UGeneratorTeleportInteraction_OnTeleportReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              location                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen");

	UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params params;
	params.generator = generator;
	params.location = location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              transformBeforeTeleport        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::OnTeleported(const struct FTransform& transformBeforeTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnTeleported");

	UGeneratorTeleportInteraction_OnTeleported_Params params;
	params.transformBeforeTeleport = transformBeforeTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              selectedGenerator              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::OnSelectedGeneratorSet(class Ugenerator* selectedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet");

	UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params params;
	params.selectedGenerator = selectedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
// (Final, Native, Private)
void UGeneratorTeleportInteraction::OnRep_TeleportCooldownTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer");

	UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
// (Final, Native, Private)
void UGeneratorTeleportInteraction::OnRep_SelectedGenerator()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator");

	UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              selectedGenerator              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::OnLocallySelectedGeneratorSet(class Ugenerator* selectedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet");

	UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params params;
	params.selectedGenerator = selectedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
// (Final, Native, Protected)
void UGeneratorTeleportInteraction::OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted");

	UGeneratorTeleportInteraction_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts
// (Final, Native, Protected)
void UGeneratorTeleportInteraction::OnBloodSpurts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts");

	UGeneratorTeleportInteraction_OnBloodSpurts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct Fvector                 location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::Multicast_TeleportPlayer(const struct Fvector& location, const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer");

	UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params params;
	params.location = location;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              location                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen");

	UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params params;
	params.generator = generator;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorTeleportInteraction::IsTeleportAvailable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable");

	UGeneratorTeleportInteraction_IsTeleportAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::InitializeTunableValues(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues");

	UGeneratorTeleportInteraction_InitializeTunableValues_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* UGeneratorTeleportInteraction::GetOwningPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer");

	UGeneratorTeleportInteraction_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ugenerator*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ugenerator* UGeneratorTeleportInteraction::GetInlineGenerator(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator");

	UGeneratorTeleportInteraction_GetInlineGenerator_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorTeleportInteraction::CanTeleportAtGenerator(class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator");

	UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params params;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              playerToTeleport               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorTeleportInteraction::Authority_TeleportPlayerToGenerator(class UdbdPlayer* playerToTeleport, class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator");

	UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params params;
	params.playerToTeleport = playerToTeleport;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           teleported                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorTeleportInteraction::Authority_StartTeleportCooldown(bool teleported)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown");

	UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params params;
	params.teleported = teleported;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPalletTracker*          trackerAtLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlaceDreamPalletInteraction::SpawnDreamPallet(class UPalletTracker* trackerAtLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet");

	UPlaceDreamPalletInteraction_SpawnDreamPallet_Params params;
	params.trackerAtLocation = trackerAtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlaceDreamPalletInteraction::InitializeTunableValues(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues");

	UPlaceDreamPalletInteraction_InitializeTunableValues_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPalletTracker*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPalletTracker* UPlaceDreamPalletInteraction::GetTargetedPallet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet");

	UPlaceDreamPalletInteraction_GetTargetedPallet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPalletTracker*          tracker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlaceDreamPalletInteraction::CanSpawnDreamPalletAtTracker(class UPalletTracker* tracker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker");

	UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params params;
	params.tracker = tracker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USetDreamSnareInteraction::HasCancelledDreamSnare()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare");

	USetDreamSnareInteraction_HasCancelledDreamSnare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USetDreamSnareInteraction::GetTrapDistanceFromControlRotation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation");

	USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
