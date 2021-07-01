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

// Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged
// (Final, Native, Private)
// Parameters:
// bool                           isColliding                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChainPlayerMovementStatusEffect::OnIsChainCollidingChanged(bool isColliding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged");

	UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Params params;
	params.isColliding = isColliding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators
// (Final, Native, Private)
void UDeadMansSwitch::OnRep_BlockedGenerators()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators");

	UDeadMansSwitch_OnRep_BlockedGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<class UdbdPlayer*>      nearMissedPlayers              (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFireHarpoonRifleInteraction::Server_HandleMissShotScores(TArray<class UdbdPlayer*> nearMissedPlayers)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores");

	UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Params params;
	params.nearMissedPlayers = nearMissedPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UFireHarpoonRifleInteraction::OnHitPlayer__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature");

	UFireHarpoonRifleInteraction_OnHitPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UFireHarpoonRifleInteraction::OnFireHarpoon__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature");

	UFireHarpoonRifleInteraction_OnFireHarpoon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.ForThePeople.Server_OnActionInputPressed
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UForThePeople::Server_OnActionInputPressed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.ForThePeople.Server_OnActionInputPressed");

	UForThePeople_Server_OnActionInputPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.ForThePeople.OnHealingAbilityUsed
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           healingSurvivor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           healedSurvivor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForThePeople::OnHealingAbilityUsed(class UcamperPlayer* healingSurvivor, class UcamperPlayer* healedSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.ForThePeople.OnHealingAbilityUsed");

	UForThePeople_OnHealingAbilityUsed_Params params;
	params.healingSurvivor = healingSurvivor;
	params.healedSurvivor = healedSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// class UcamperPlayer*           healingSurvivor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           healedSurvivor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UForThePeople::Multicast_OnHealAbilityUsed(class UcamperPlayer* healingSurvivor, class UcamperPlayer* healedSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed");

	UForThePeople_Multicast_OnHealAbilityUsed_Params params;
	params.healingSurvivor = healingSurvivor;
	params.healedSurvivor = healedSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.Gearhead.OnRep_RevealedGenerators
// (Final, Native, Private)
void UGearhead::OnRep_RevealedGenerators()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.Gearhead.OnRep_RevealedGenerators");

	UGearhead_OnRep_RevealedGenerators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UGunslingerEffectsComponent::PlayOutOfAmmoSound__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature");

	UGunslingerEffectsComponent_PlayOutOfAmmoSound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           isPressed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGunslingerEffectsComponent::OnItemUsedStateChanged(bool isPressed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged");

	UGunslingerEffectsComponent_OnItemUsedStateChanged_Params params;
	params.isPressed = isPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           IsAiming                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGunslingerEffectsComponent::OnIsAimingChanged__DelegateSignature(bool IsAiming)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature");

	UGunslingerEffectsComponent_OnIsAimingChanged__DelegateSignature_Params params;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound
// (Final, Net, Native, Event, NetMulticast, Private)
void UGunslingerEffectsComponent::Multicast_PlayOutOfAmmoSound()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound");

	UGunslingerEffectsComponent_Multicast_PlayOutOfAmmoSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHarpoonRifle*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHarpoonRifle* UGunslingerUtilities::STATIC_GetHarpoonRifle(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle");

	UGunslingerUtilities_GetHarpoonRifle_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              collector                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHarpoonChainPositioner::OnOwnerCollected(class UdbdPlayer* collector)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected");

	UHarpoonChainPositioner_OnOwnerCollected_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isTravelling                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHarpoonChainPositioner::OnHarpoonTravelingChanged(bool isTravelling)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged");

	UHarpoonChainPositioner_OnHarpoonTravelingChanged_Params params;
	params.isTravelling = isTravelling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle
// (Event, Protected, BlueprintEvent)
void UHarpoonChainPositioner::OnHarpoonLoadedOnRifle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle");

	UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  currentHarpoon                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHarpoonChainPositioner::OnCurrentHarpoonChanged(class Uactor* currentHarpoon)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged");

	UHarpoonChainPositioner_OnCurrentHarpoonChanged_Params params;
	params.currentHarpoon = currentHarpoon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHarpoonProp*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHarpoonProp* UHarpoonChainPositioner::GetHarpoonProp()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp");

	UHarpoonChainPositioner_GetHarpoonProp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Uactor* UHarpoonChainPositioner::GetCurrentHarpoon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon");

	UHarpoonChainPositioner_GetCurrentHarpoon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.HarpoonChainPositioner.AttachToRifle
// (Final, Native, Public, BlueprintCallable)
void UHarpoonChainPositioner::AttachToRifle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.AttachToRifle");

	UHarpoonChainPositioner_AttachToRifle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket
// (Final, Native, Public, BlueprintCallable)
void UHarpoonChainPositioner::AttachToAnimSocket()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket");

	UHarpoonChainPositioner_AttachToAnimSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonProjectile.OnHarpoonStop
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FhitResult              result                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UHarpoonProjectile::OnHarpoonStop(const struct FhitResult& result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonProjectile.OnHarpoonStop");

	UHarpoonProjectile_OnHarpoonStop_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.HarpoonRifle.GetChain
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URifleChain*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URifleChain* UHarpoonRifle::GetChain()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonRifle.GetChain");

	UHarpoonRifle_GetChain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon
// (Final, Native, Private)
void UHarpoonRifle::Authority_OnFireHarpoon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon");

	UHarpoonRifle_Authority_OnFireHarpoon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RedHerring.OnRep_MarkedGenerator
// (Final, Native, Private)
// Parameters:
// class Ugenerator*              oldMarkedGenerator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URedHerring::OnRep_MarkedGenerator(class Ugenerator* oldMarkedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RedHerring.OnRep_MarkedGenerator");

	URedHerring_OnRep_MarkedGenerator_Params params;
	params.oldMarkedGenerator = oldMarkedGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RedHerring.OnLoudNoiseTriggered
// (Event, Protected, BlueprintEvent)
void URedHerring::OnLoudNoiseTriggered()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RedHerring.OnLoudNoiseTriggered");

	URedHerring_OnLoudNoiseTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.UpdateChainMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInstancedStaticMeshComponent* mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UsplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChain::UpdateChainMesh(class UInstancedStaticMeshComponent* mesh, class UsplineComponent* Spline, float Alpha)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.UpdateChainMesh");

	URifleChain_UpdateChainMesh_Params params;
	params.mesh = mesh;
	params.Spline = Spline;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.SpawnChainPoints
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 stop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*             influenceCurve                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          pointYPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          pointZPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           useOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UsplineComponent*        Spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int URifleChain::SpawnChainPoints(const struct Fvector& start, const struct Fvector& stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class UsplineComponent* Spline)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.SpawnChainPoints");

	URifleChain_SpawnChainPoints_Params params;
	params.start = start;
	params.stop = stop;
	params.influenceCurve = influenceCurve;
	params.pointYPosition = pointYPosition;
	params.pointZPosition = pointZPosition;
	params.useOffset = useOffset;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.OnUnattachFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChain::OnUnattachFromPlayer(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.OnUnattachFromPlayer");

	URifleChain_OnUnattachFromPlayer_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.OnReelBackToRifle
// (Event, Public, BlueprintEvent)
void URifleChain::OnReelBackToRifle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.OnReelBackToRifle");

	URifleChain_OnReelBackToRifle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class Uactor*                  projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChain::OnProjectileSet__DelegateSignature(class Uactor* projectile)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature");

	URifleChain_OnProjectileSet__DelegateSignature_Params params;
	params.projectile = projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.OnLaunch
// (Event, Public, BlueprintEvent)
void URifleChain::OnLaunch()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.OnLaunch");

	URifleChain_OnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           isColliding                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChain::OnIsCollidingChanged__DelegateSignature(bool isColliding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature");

	URifleChain_OnIsCollidingChanged__DelegateSignature_Params params;
	params.isColliding = isColliding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.OnAttachToPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChain::OnAttachToPlayer(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.OnAttachToPlayer");

	URifleChain_OnAttachToPlayer_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChain.isColliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URifleChain::isColliding()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.isColliding");

	URifleChain_isColliding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetUnwindingSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float URifleChain::GetUnwindingSpeed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetUnwindingSpeed");

	URifleChain_GetUnwindingSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetRiflePlayerLinker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URiflePlayerLinker*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URiflePlayerLinker* URifleChain::GetRiflePlayerLinker()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetRiflePlayerLinker");

	URifleChain_GetRiflePlayerLinker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FhitResult>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FhitResult> URifleChain::GetFirstAndLastCollisionHits()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits");

	URifleChain_GetFirstAndLastCollisionHits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetChainTensionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URifleChainTensionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URifleChainTensionComponent* URifleChain::GetChainTensionComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetChainTensionComponent");

	URifleChain_GetChainTensionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetChainStart
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector URifleChain::GetChainStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetChainStart");

	URifleChain_GetChainStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChain.GetChainEnd
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector URifleChain::GetChainEnd()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChain.GetChainEnd");

	URifleChain_GetChainEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           Completed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          instigatorsForCompletion       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChainTensionComponent::OnTensionChargeableCompletionChanged(bool Completed, TArray<class Uactor*> instigatorsForCompletion)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged");

	URifleChainTensionComponent_OnTensionChargeableCompletionChanged_Params params;
	params.Completed = Completed;
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension
// (Final, Native, Private)
void URifleChainTensionComponent::OnRep_IsBuildingTension()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension");

	URifleChainTensionComponent_OnRep_IsBuildingTension_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           isBuildingTension              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URifleChainTensionComponent::OnIsBuildingTensionChanged__DelegateSignature(bool isBuildingTension)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature");

	URifleChainTensionComponent_OnIsBuildingTensionChanged__DelegateSignature_Params params;
	params.isBuildingTension = isBuildingTension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RifleChainTensionComponent.isBuildingTension
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URifleChainTensionComponent::isBuildingTension()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChainTensionComponent.isBuildingTension");

	URifleChainTensionComponent_isBuildingTension_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RifleChainTensionComponent.GetProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float URifleChainTensionComponent::GetProgress()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RifleChainTensionComponent.GetProgress");

	URifleChainTensionComponent_GetProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiflePlayerLinker::Server_OnClientConfirmTensionBreakChain(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain");

	URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UdbdPlayer*              linkedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiflePlayerLinker::OnLinkedPlayerSet__DelegateSignature(class UdbdPlayer* linkedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature");

	URiflePlayerLinker_OnLinkedPlayerSet__DelegateSignature_Params params;
	params.linkedPlayer = linkedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void URiflePlayerLinker::Multicast_Unlink()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink");

	URiflePlayerLinker_Multicast_Unlink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RiflePlayerLinker.Multicast_Link
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UdbdPlayer*              linkedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiflePlayerLinker::Multicast_Link(class UdbdPlayer* linkedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.Multicast_Link");

	URiflePlayerLinker_Multicast_Link_Params params;
	params.linkedPlayer = linkedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.RiflePlayerLinker.GetLinkOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* URiflePlayerLinker::GetLinkOwner()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.GetLinkOwner");

	URiflePlayerLinker_GetLinkOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* URiflePlayerLinker::GetLinkedPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer");

	URiflePlayerLinker_GetLinkedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URiflePlayerLinker::Client_OnAuthorityTensionBreakChain(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain");

	URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy
// (Final, Native, Private)
void USurvivorChainLinkableComponent::OnRep_VelocityAdditiveStrategy()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy");

	USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorReelVelocityAdditiveStrategy::OnKillerSet(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet");

	USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
