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

// Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UFastTrack::Cosmetic_OnTokenCountDecreased()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased");

	UFastTrack_Cosmetic_OnTokenCountDecreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore
// (Final, Native, Private, Const)
void UFlurryComboScoreComponent::OnRep_ComboScore()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore");

	UFlurryComboScoreComponent_OnRep_ComboScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.FlurryOfKnives.Server_StartThrowing
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UFlurryOfKnives::Server_StartThrowing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_StartThrowing");

	UFlurryOfKnives_Server_StartThrowing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks");

	UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
// (Final, Native, Private)
void UFlurryOfKnives::OnRep_NumOfStacksReduction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction");

	UFlurryOfKnives_OnRep_NumOfStacksReduction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.FlurryOfKnives.Multicast_StartThrowing
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UFlurryOfKnives::Multicast_StartThrowing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Multicast_StartThrowing");

	UFlurryOfKnives_Multicast_StartThrowing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UKnifeProjectile::WasLaunchedDuringSuperMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode");

	UKnifeProjectile_WasLaunchedDuringSuperMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.KnifeProjectile.ShouldPlayRicochetSound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UKnifeProjectile::ShouldPlayRicochetSound()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.ShouldPlayRicochetSound");

	UKnifeProjectile_ShouldPlayRicochetSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.KnifeProjectile.SetKnifeAcquired
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           acquired                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeProjectile::SetKnifeAcquired(bool acquired)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.SetKnifeAcquired");

	UKnifeProjectile_SetKnifeAcquired_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.OnWorldColliderHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UKnifeProjectile::OnWorldColliderHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnWorldColliderHit");

	UKnifeProjectile_OnWorldColliderHit_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.normalImpulse = normalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.OnProjectileBounce
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FhitResult              impactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct Fvector                 impactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeProjectile::OnProjectileBounce(const struct FhitResult& impactResult, const struct Fvector& impactVelocity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnProjectileBounce");

	UKnifeProjectile_OnProjectileBounce_Params params;
	params.impactResult = impactResult;
	params.impactVelocity = impactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.GetAddonExplosionRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKnifeProjectile::GetAddonExplosionRadius()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.GetAddonExplosionRadius");

	UKnifeProjectile_GetAddonExplosionRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.KnifeProjectile.BP_SetKnifeActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeProjectile::BP_SetKnifeActive(bool active)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_SetKnifeActive");

	UKnifeProjectile_BP_SetKnifeActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// struct FlaunchInfo             launchInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           hasImpactOnLaunch              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeProjectile::BP_OnLaunchCosmetic(const struct FlaunchInfo& launchInfo, bool hasImpactOnLaunch)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic");

	UKnifeProjectile_BP_OnLaunchCosmetic_Params params;
	params.launchInfo = launchInfo;
	params.hasImpactOnLaunch = hasImpactOnLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
// (BlueprintCosmetic, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normal                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeProjectile::BP_CosmeticOnAddonExplosion(const struct Fvector& location, const struct Fvector& normal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion");

	UKnifeProjectile_BP_CosmeticOnAddonExplosion_Params params;
	params.location = location;
	params.normal = normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeRack.OnReloadMontageStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          actionSpeedMultiplier          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeRack::OnReloadMontageStarted(float actionSpeedMultiplier, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadMontageStarted");

	UKnifeRack_OnReloadMontageStarted_Params params;
	params.actionSpeedMultiplier = actionSpeedMultiplier;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnifeRack.OnReloadEnded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKnifeRack::OnReloadEnded(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadEnded");

	UKnifeRack_OnReloadEnded_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.KnivesLauncher.GetPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UThrowingKnives*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UThrowingKnives* UKnivesLauncher::GetPower()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetPower");

	UKnivesLauncher_GetPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UKnivesLauncher::GetLocallyPredictedAmmo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo");

	UKnivesLauncher_GetLocallyPredictedAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.LacerationComponent.OnRepLaceration
// (Final, Native, Private)
// Parameters:
// float                          oldLaceration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::OnRepLaceration(float oldLaceration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.OnRepLaceration");

	ULacerationComponent_OnRepLaceration_Params params;
	params.oldLaceration = oldLaceration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.LacerationComponent.Multicast_KnifeHit
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// float                          newLaceration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           causedDamage                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           causedKo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impactLocation                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impactNormal                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKo, const struct Fvector& impactLocation, const struct Fvector& impactNormal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Multicast_KnifeHit");

	ULacerationComponent_Multicast_KnifeHit_Params params;
	params.newLaceration = newLaceration;
	params.causedDamage = causedDamage;
	params.causedKo = causedKo;
	params.impactLocation = impactLocation;
	params.impactNormal = impactNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           isLocallyObserved              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LacerationPercent              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsDangerous                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, float LacerationPercent, bool IsDangerous)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged");

	ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Params params;
	params.isLocallyObserved = isLocallyObserved;
	params.LacerationPercent = LacerationPercent;
	params.IsDangerous = IsDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// float                          LacerationPercent              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsDangerous                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnLacerationChanged(float LacerationPercent, bool IsDangerous)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged");

	ULacerationComponent_Cosmetic_OnLacerationChanged_Params params;
	params.LacerationPercent = LacerationPercent;
	params.IsDangerous = IsDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          LacerationPercent              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsDangerous                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           causedDamage                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           causedKo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impactNormal                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnKnifeHit(float LacerationPercent, bool IsDangerous, bool causedDamage, bool causedKo, const struct Fvector& impactNormal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit");

	ULacerationComponent_Cosmetic_OnKnifeHit_Params params;
	params.LacerationPercent = LacerationPercent;
	params.IsDangerous = IsDangerous;
	params.causedDamage = causedDamage;
	params.causedKo = causedKo;
	params.impactNormal = impactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.OnItemUsedStateChanged
// (Final, Native, Private)
// Parameters:
// bool                           pressed                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrowingKnives::OnItemUsedStateChanged(bool pressed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.OnItemUsedStateChanged");

	UThrowingKnives_OnItemUsedStateChanged_Params params;
	params.pressed = pressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
// (Net, Native, Event, NetMulticast, Public)
void UThrowingKnives::Multicast_OnUsePowerWhenOutOfAmmo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo");

	UThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
// (Net, Native, Event, NetMulticast, Public)
void UThrowingKnives::Multicast_OnUsePowerWhenInCooldown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown");

	UThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.GetSlasher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UslasherPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UslasherPlayer* UThrowingKnives::GetSlasher()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetSlasher");

	UThrowingKnives_GetSlasher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.ThrowingKnives.GetLauncher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKnivesLauncher*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UKnivesLauncher* UThrowingKnives::GetLauncher()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetLauncher");

	UThrowingKnives_GetLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UThrowingKnives::Cosmetic_OnUsePowerWhenOutOfAmmo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo");

	UThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UThrowingKnives::Cosmetic_OnUsePowerWhenInCooldown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown");

	UThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Cosmetic_OnLaunch
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UThrowingKnives::Cosmetic_OnLaunch()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnLaunch");

	UThrowingKnives_Cosmetic_OnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// float                          scoreNormalizedForAudio        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrowingKnives::Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged");

	UThrowingKnives_Cosmetic_OnComboScoreChanged_Params params;
	params.scoreNormalizedForAudio = scoreNormalizedForAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           isSRankCombo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrowingKnives::Cosmetic_OnComboFinished(bool isSRankCombo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished");

	UThrowingKnives_Cosmetic_OnComboFinished_Params params;
	params.isSRankCombo = isSRankCombo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
// (Final, Native, Public)
void UThrowingKnives::Authority_SpawnReloadInteractionOnLockers()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers");

	UThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.ShowWeapon
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void UTricksterCharacterVFXInterface::ShowWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.ShowWeapon");

	UTricksterCharacterVFXInterface_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetSuperModeActive(bool active)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive");

	UTricksterCharacterVFXInterface_SetSuperModeActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           leftKnife                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           rightKnife                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetKnivesVisibility(bool leftKnife, bool rightKnife)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility");

	UTricksterCharacterVFXInterface_SetKnivesVisibility_Params params;
	params.leftKnife = leftKnife;
	params.rightKnife = rightKnife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSuperModeReady               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetIsSuperModeReady(bool isSuperModeReady)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady");

	UTricksterCharacterVFXInterface_SetIsSuperModeReady_Params params;
	params.isSuperModeReady = isSuperModeReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isInCooldown                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetIsInCooldown(bool isInCooldown)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown");

	UTricksterCharacterVFXInterface_SetIsInCooldown_Params params;
	params.isInCooldown = isInCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterCharacterVFXInterface.HideWeapon
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void UTricksterCharacterVFXInterface::HideWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.HideWeapon");

	UTricksterCharacterVFXInterface_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
// (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsSuperModeReady()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady");

	UTricksterSuperModeComponent_OnRepIsSuperModeReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
// (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsInSuperMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode");

	UTricksterSuperModeComponent_OnRepIsInSuperMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
// (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsInCooldown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown");

	UTricksterSuperModeComponent_OnRepIsInCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
