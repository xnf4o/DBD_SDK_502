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

// Function TheClown.BaseGasCloudProjectile.SetIsDissipating
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isDissipating                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::SetIsDissipating(bool isDissipating)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetIsDissipating");

	UBaseGasCloudProjectile_SetIsDissipating_Params params;
	params.isDissipating = isDissipating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
// (Final, Native, Private)
void UBaseGasCloudProjectile::SetIgnoredActors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetIgnoredActors");

	UBaseGasCloudProjectile_SetIgnoredActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           Activated                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::SetGasAudioActive(bool Activated)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetGasAudioActive");

	UBaseGasCloudProjectile_SetGasAudioActive_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
// (Final, Native, Public)
// Parameters:
// class UprimitiveComponent*     hitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::OnOverlapEnd(class UprimitiveComponent* hitComp, class Uactor* otherActor, class UprimitiveComponent* otherComponent, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnOverlapEnd");

	UBaseGasCloudProjectile_OnOverlapEnd_Params params;
	params.hitComp = hitComp;
	params.otherActor = otherActor;
	params.otherComponent = otherComponent;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UprimitiveComponent*     hitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              sweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::OnOverlapBegin(class UprimitiveComponent* hitComp, class Uactor* otherActor, class UprimitiveComponent* otherComponent, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnOverlapBegin");

	UBaseGasCloudProjectile_OnOverlapBegin_Params params;
	params.hitComp = hitComp;
	params.otherActor = otherActor;
	params.otherComponent = otherComponent;
	params.otherBodyIndex = otherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.sweepResult = sweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::OnDelayedActivationStart(float delay)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart");

	UBaseGasCloudProjectile_OnDelayedActivationStart_Params params;
	params.delay = delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
// (Final, Native, Private)
// Parameters:
// bool                           acquired                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::OnAcquiredChanged(bool acquired)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged");

	UBaseGasCloudProjectile_OnAcquiredChanged_Params params;
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void UBaseGasCloudProjectile::Multicast_DissipateGasCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud");

	UBaseGasCloudProjectile_Multicast_DissipateGasCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseGasCloudProjectile::IsSurvivorDetectionEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled");

	UBaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BaseGasCloudProjectile.isDissipating
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseGasCloudProjectile::isDissipating()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.isDissipating");

	UBaseGasCloudProjectile_isDissipating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BaseGasCloudProjectile.GetGasType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TheClown_EBombType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheClown_EBombType UBaseGasCloudProjectile::GetGasType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.GetGasType");

	UBaseGasCloudProjectile_GetGasType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UBaseGasCloudProjectile::DissipateGasCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.DissipateGasCloud");

	UBaseGasCloudProjectile_DissipateGasCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGasCloudProjectile::Authority_SetCumulativeLifetime(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime");

	UBaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseGasCloudProjectile::Authority_GetCumulativeLifetime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime");

	UBaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
// (Event, Protected, BlueprintEvent)
void UBaseGasCloudProjectile::ActivateCosmetic_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP");

	UBaseGasCloudProjectile_ActivateCosmetic_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.SetProjectileSpeedCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             newProjectileSpeedCurve        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetProjectileSpeedCurve");

	UBombLauncher_SetProjectileSpeedCurve_Params params;
	params.newProjectileSpeedCurve = newProjectileSpeedCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.SetProjectilePitchCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             newProjectilePitchCurve        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetProjectilePitchCurve");

	UBombLauncher_SetProjectilePitchCurve_Params params;
	params.newProjectilePitchCurve = newProjectilePitchCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.SetPercentThrowStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          throwStrength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetPercentThrowStrength(float throwStrength)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetPercentThrowStrength");

	UBombLauncher_SetPercentThrowStrength_Params params;
	params.throwStrength = throwStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.Server_SwitchBombType
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void UBombLauncher::Server_SwitchBombType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.Server_SwitchBombType");

	UBombLauncher_Server_SwitchBombType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.LocalLaunch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          percentThrowStrength           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::LocalLaunch(float percentThrowStrength)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.LocalLaunch");

	UBombLauncher_LocalLaunch_Params params;
	params.percentThrowStrength = percentThrowStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.Local_SwitchBombType
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UBombLauncher::Local_SwitchBombType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.Local_SwitchBombType");

	UBombLauncher_Local_SwitchBombType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.BombLauncher.IsBombFullyCharged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBombLauncher::IsBombFullyCharged()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.IsBombFullyCharged");

	UBombLauncher_IsBombFullyCharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BombLauncher.GetPercentThrowStrenght
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBombLauncher::GetPercentThrowStrenght()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.GetPercentThrowStrenght");

	UBombLauncher_GetPercentThrowStrenght_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.BombLauncher.GetCurrentBombType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TheClown_EBombType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheClown_EBombType UBombLauncher::GetCurrentBombType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.BombLauncher.GetCurrentBombType");

	UBombLauncher_GetCurrentBombType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          durationRemaining              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::UpdateAntidoteEffectVFX(float durationRemaining)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX");

	UGassedStatusEffect_UpdateAntidoteEffectVFX_Params params;
	params.durationRemaining = durationRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.SetRemainingDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::SetRemainingDuration(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.SetRemainingDuration");

	UGassedStatusEffect_SetRemainingDuration_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::SetRemainingAntidoteDuration(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration");

	UGassedStatusEffect_SetRemainingAntidoteDuration_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnToxinEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          durationSkipped                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnToxinEffectEnd(float durationSkipped)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinEffectEnd");

	UGassedStatusEffect_OnToxinEffectEnd_Params params;
	params.durationSkipped = durationSkipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnToxinEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          effectDuration                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnToxinEffectBegin(float effectDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinEffectBegin");

	UGassedStatusEffect_OnToxinEffectBegin_Params params;
	params.effectDuration = effectDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnToxinCured
// (Event, Protected, BlueprintEvent)
void UGassedStatusEffect::OnToxinCured()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinCured");

	UGassedStatusEffect_OnToxinCured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnRep_IsInCloud
// (Final, Native, Private)
void UGassedStatusEffect::OnRep_IsInCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnRep_IsInCloud");

	UGassedStatusEffect_OnRep_IsInCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
// (Final, Native, Private)
void UGassedStatusEffect::OnRep_IsInAntidoteCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud");

	UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnDirectBottleHit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TheClown_EBombType             bottleType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnDirectBottleHit(TheClown_EBombType bottleType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnDirectBottleHit");

	UGassedStatusEffect_OnDirectBottleHit_Params params;
	params.bottleType = bottleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          durationSkipped                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnAntidoteEffectEnd(float durationSkipped)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd");

	UGassedStatusEffect_OnAntidoteEffectEnd_Params params;
	params.durationSkipped = durationSkipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          effectDuration                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnAntidoteEffectBegin(float effectDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin");

	UGassedStatusEffect_OnAntidoteEffectBegin_Params params;
	params.effectDuration = effectDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.isInCloud
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGassedStatusEffect::isInCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.isInCloud");

	UGassedStatusEffect_isInCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.IsInAntidoteCloud
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGassedStatusEffect::IsInAntidoteCloud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.IsInAntidoteCloud");

	UGassedStatusEffect_IsInAntidoteCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.GetRemainingDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetRemainingDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetRemainingDuration");

	UGassedStatusEffect_GetRemainingDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetRemainingAntidoteDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration");

	UGassedStatusEffect_GetRemainingAntidoteDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.GetCloudEffectDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetCloudEffectDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetCloudEffectDuration");

	UGassedStatusEffect_GetCloudEffectDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetAntidoteCloudEffectDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration");

	UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_SetIsInCloud(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_SetIsInCloud");

	UGassedStatusEffect_Authority_SetIsInCloud_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_SetIsInAntidoteCloud(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud");

	UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseGasCloudProjectile* cloud                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_RemoveOverlappingCloud(class UBaseGasCloudProjectile* cloud)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud");

	UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params params;
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UBaseGasCloudProjectile* cloud                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_AddOverlappingCloud(class UBaseGasCloudProjectile* cloud)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud");

	UGassedStatusEffect_Authority_AddOverlappingCloud_Params params;
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheClown.TheClownUtilities.IsGassed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_IsGassed(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.IsGassed");

	UTheClownUtilities_IsGassed_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.TheClownUtilities.IsAffectedByAntidote
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_IsAffectedByAntidote(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.IsAffectedByAntidote");

	UTheClownUtilities_IsAffectedByAntidote_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.TheClownUtilities.GetGassedStatusEffect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGassedStatusEffect*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGassedStatusEffect* UTheClownUtilities::STATIC_GetGassedStatusEffect(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.GetGassedStatusEffect");

	UTheClownUtilities_GetGassedStatusEffect_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActiveGasCloudTrackerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UActiveGasCloudTrackerComponent* UTheClownUtilities::STATIC_GetActiveGasCloudTrackerComponent(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent");

	UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheClown.TheClownUtilities.CanBeGassed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_CanBeGassed(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.CanBeGassed");

	UTheClownUtilities_CanBeGassed_Params params;
	params.player = player;

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
