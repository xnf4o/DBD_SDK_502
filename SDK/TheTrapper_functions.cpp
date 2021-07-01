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

// Function TheTrapper.beartrap.TrySetTrappedPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::TrySetTrappedPlayer(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.TrySetTrappedPlayer");

	Ubeartrap_TrySetTrappedPlayer_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.SetTrappedPlayerSinceMoved
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           didTrap                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::SetTrappedPlayerSinceMoved(bool didTrap)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.SetTrappedPlayerSinceMoved");

	Ubeartrap_SetTrappedPlayerSinceMoved_Params params;
	params.didTrap = didTrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.SetTrappedPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              trappedPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::SetTrappedPlayer(class UdbdPlayer* trappedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.SetTrappedPlayer");

	Ubeartrap_SetTrappedPlayer_Params params;
	params.trappedPlayer = trappedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.PlayMontage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::PlayMontage(class UAnimMontage* montage)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.PlayMontage");

	Ubeartrap_PlayMontage_Params params;
	params.montage = montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.OnTrappedSurvivorEndGameSacrificed
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FgameplayTag            GameEventType                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void Ubeartrap::OnTrappedSurvivorEndGameSacrificed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.OnTrappedSurvivorEndGameSacrificed");

	Ubeartrap_OnTrappedSurvivorEndGameSacrificed_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.OnSlasherSet
// (Final, Native, Protected)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.OnSlasherSet");

	Ubeartrap_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.OnSafetyZoneEndOverlap
// (Final, Native, Private)
// Parameters:
// class UprimitiveComponent*     overlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::OnSafetyZoneEndOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.OnSafetyZoneEndOverlap");

	Ubeartrap_OnSafetyZoneEndOverlap_Params params;
	params.overlappedComponent = overlappedComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.OnPlayerLeft
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FgameplayTag            GameEventType                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void Ubeartrap::OnPlayerLeft(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.OnPlayerLeft");

	Ubeartrap_OnPlayerLeft_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.OnDamageStateChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FgameplayTag            GameEventType                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void Ubeartrap::OnDamageStateChanged(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.OnDamageStateChanged");

	Ubeartrap_OnDamageStateChanged_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.IsTrapperOutOfSafetyZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Ubeartrap::IsTrapperOutOfSafetyZone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.IsTrapperOutOfSafetyZone");

	Ubeartrap_IsTrapperOutOfSafetyZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.beartrap.InitializeTrapZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UprimitiveComponent*     primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::InitializeTrapZone(class UprimitiveComponent* primitive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.InitializeTrapZone");

	Ubeartrap_InitializeTrapZone_Params params;
	params.primitive = primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.InitializeTrapSurvivorInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UinteractionDefinition*  interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::InitializeTrapSurvivorInteraction(class UinteractionDefinition* interaction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.InitializeTrapSurvivorInteraction");

	Ubeartrap_InitializeTrapSurvivorInteraction_Params params;
	params.interaction = interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.InitializeTrapKillerInteraction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UinteractionDefinition*  interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::InitializeTrapKillerInteraction(class UinteractionDefinition* interaction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.InitializeTrapKillerInteraction");

	Ubeartrap_InitializeTrapKillerInteraction_Params params;
	params.interaction = interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.InitializeSafetyZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UprimitiveComponent*     primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::InitializeSafetyZone(class UprimitiveComponent* primitive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.InitializeSafetyZone");

	Ubeartrap_InitializeSafetyZone_Params params;
	params.primitive = primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.InitializeMainInteractor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uinteractor*             interactor                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Ubeartrap::InitializeMainInteractor(class Uinteractor* interactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.InitializeMainInteractor");

	Ubeartrap_InitializeMainInteractor_Params params;
	params.interactor = interactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.HasTrappedPlayerSinceMoved
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Ubeartrap::HasTrappedPlayerSinceMoved()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.HasTrappedPlayerSinceMoved");

	Ubeartrap_HasTrappedPlayerSinceMoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.beartrap.HasTrappedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Ubeartrap::HasTrappedPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.HasTrappedPlayer");

	Ubeartrap_HasTrappedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.beartrap.GetTrappedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* Ubeartrap::GetTrappedPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.GetTrappedPlayer");

	Ubeartrap_GetTrappedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.beartrap.GetAnimInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBearTrapAnimInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBearTrapAnimInstance* Ubeartrap::GetAnimInstance()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.GetAnimInstance");

	Ubeartrap_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.beartrap.DetachTrappedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Ubeartrap::DetachTrappedPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.DetachTrappedPlayer");

	Ubeartrap_DetachTrappedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.beartrap.CanTrap
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Ubeartrap::CanTrap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.beartrap.CanTrap");

	Ubeartrap_CanTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           wasJustDisarmed                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetWasJustDisarmed(bool wasJustDisarmed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed");

	UBearTrapAnimInstance_SetWasJustDisarmed_Params params;
	params.wasJustDisarmed = wasJustDisarmed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isTrapSet                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetIsTrapSet(bool isTrapSet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet");

	UBearTrapAnimInstance_SetIsTrapSet_Params params;
	params.isTrapSet = isTrapSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.BearTrapAnimInstance.SetIsBroken
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isBroken                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetIsBroken(bool isBroken)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetIsBroken");

	UBearTrapAnimInstance_SetIsBroken_Params params;
	params.isBroken = isBroken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isBeingCollected               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetIsBeingCollected(bool isBeingCollected)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected");

	UBearTrapAnimInstance_SetIsBeingCollected_Params params;
	params.isBeingCollected = isBeingCollected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           containsSurvivor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetContainsSurvivor(bool containsSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor");

	UBearTrapAnimInstance_SetContainsSurvivor_Params params;
	params.containsSurvivor = containsSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
// (Final, Native, Protected)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoveOnOriginatingSurvivorGoneStatusEffect::Authority_OnSurvivorRemoved(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved");

	URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheTrapper.Untrap.GetTrap
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Ubeartrap*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ubeartrap* UUntrap::GetTrap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheTrapper.Untrap.GetTrap");

	UUntrap_GetTrap_Params params;

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
