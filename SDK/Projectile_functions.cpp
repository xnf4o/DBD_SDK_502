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

// Function Projectile.BaseProjectile.SphereTraceSingle
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 end                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USphereComponent*        sphere                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              outHitResult                   (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::SphereTraceSingle(const struct Fvector& start, const struct Fvector& end, class USphereComponent* sphere, struct FhitResult* outHitResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.SphereTraceSingle");

	UBaseProjectile_SphereTraceSingle_Params params;
	params.start = start;
	params.end = end;
	params.sphere = sphere;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outHitResult != nullptr)
		*outHitResult = params.outHitResult;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.OnSetActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectile::OnSetActive(bool active)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnSetActive");

	UBaseProjectile_OnSetActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectile.OnLaunch
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FlaunchInfo             launchInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           hasImpactOnLaunch              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectile::OnLaunch(const struct FlaunchInfo& launchInfo, bool hasImpactOnLaunch)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnLaunch");

	UBaseProjectile_OnLaunch_Params params;
	params.launchInfo = launchInfo;
	params.hasImpactOnLaunch = hasImpactOnLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectile.OnDetectPlayer
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectile::OnDetectPlayer(const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnDetectPlayer");

	UBaseProjectile_OnDetectPlayer_Params params;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectile.OnDetectCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectile::OnDetectCollision(const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnDetectCollision");

	UBaseProjectile_OnDetectCollision_Params params;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectile.Local_TryDetectCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::Local_TryDetectCollision(const struct FimpactInfo& impactInfo, bool Force)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_TryDetectCollision");

	UBaseProjectile_Local_TryDetectCollision_Params params;
	params.impactInfo = impactInfo;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.Local_SweepImpactCollision
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 end                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                colliderRotation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FhitResult              outHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::Local_SweepImpactCollision(const struct Fvector& start, const struct Fvector& end, const struct FRotator& colliderRotation, struct FhitResult* outHit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_SweepImpactCollision");

	UBaseProjectile_Local_SweepImpactCollision_Params params;
	params.start = start;
	params.end = end;
	params.colliderRotation = colliderRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outHit != nullptr)
		*outHit = params.outHit;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.Local_OnPlayerDetected
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct Fvector                 projectileLocation             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::Local_OnPlayerDetected(const struct FimpactInfo& impactInfo, const struct Fvector& projectileLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_OnPlayerDetected");

	UBaseProjectile_Local_OnPlayerDetected_Params params;
	params.impactInfo = impactInfo;
	params.projectileLocation = projectileLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsValidPlayerDetection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::IsValidPlayerDetection(const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsValidPlayerDetection");

	UBaseProjectile_IsValidPlayerDetection_Params params;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsValidImpactDetection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::IsValidImpactDetection(const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsValidImpactDetection");

	UBaseProjectile_IsValidImpactDetection_Params params;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::IsOwningPawnLocallyControlled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled");

	UBaseProjectile_IsOwningPawnLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.GetLauncher
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBaseProjectileLauncher* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBaseProjectileLauncher* UBaseProjectile::GetLauncher()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetLauncher");

	UBaseProjectile_GetLauncher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UprimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UprimitiveComponent* UBaseProjectile::GetImpactPrimitiveComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetImpactPrimitiveComponent");

	UBaseProjectile_GetImpactPrimitiveComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseProjectile::GetAddLauncherVeloctyFactor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor");

	UBaseProjectile_GetAddLauncherVeloctyFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectile.Authority_TryDetectCollision
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectile::Authority_TryDetectCollision(const struct FimpactInfo& impactInfo, bool Force)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Authority_TryDetectCollision");

	UBaseProjectile_Authority_TryDetectCollision_Params params;
	params.impactInfo = impactInfo;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.SetProjectileVar
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   varName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::SetProjectileVar(const struct FName& varName, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.SetProjectileVar");

	UBaseProjectileLauncher_SetProjectileVar_Params params;
	params.varName = varName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.SetProjectileProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UprojectileProvider> projectileProvider             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::SetProjectileProvider(const TScriptInterface<class UprojectileProvider>& projectileProvider)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.SetProjectileProvider");

	UBaseProjectileLauncher_SetProjectileProvider_Params params;
	params.projectileProvider = projectileProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FlaunchInfo             launchInfo                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FimpactInfo             impactInfo                     (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Server_LaunchWithImpact(const struct FlaunchInfo& launchInfo, const struct FimpactInfo& impactInfo, class UBaseProjectile* projectile)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact");

	UBaseProjectileLauncher_Server_LaunchWithImpact_Params params;
	params.launchInfo = launchInfo;
	params.impactInfo = impactInfo;
	params.projectile = projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Server_Launch
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FlaunchInfo             launchInfo                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Server_Launch(const struct FlaunchInfo& launchInfo, class UBaseProjectile* projectile)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Server_Launch");

	UBaseProjectileLauncher_Server_Launch_Params params;
	params.launchInfo = launchInfo;
	params.projectile = projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo
// (Native, Protected)
// Parameters:
// int                            oldMaxAmmo                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnRep_MaxAmmo(int oldMaxAmmo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo");

	UBaseProjectileLauncher_OnRep_MaxAmmo_Params params;
	params.oldMaxAmmo = oldMaxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.OnRep_Ammo
// (Native, Protected)
// Parameters:
// int                            oldAmmo                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnRep_Ammo(int oldAmmo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnRep_Ammo");

	UBaseProjectileLauncher_OnRep_Ammo_Params params;
	params.oldAmmo = oldAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.OnLaunch
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FlaunchInfo             launchInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnLaunch(const struct FlaunchInfo& launchInfo, class UBaseProjectile* projectile)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnLaunch");

	UBaseProjectileLauncher_OnLaunch_Params params;
	params.launchInfo = launchInfo;
	params.projectile = projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Local_Launch
// (Final, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Local_Launch()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Local_Launch");

	UBaseProjectileLauncher_Local_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::IsLocallyControlled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.IsLocallyControlled");

	UBaseProjectileLauncher_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.IsAmmoFull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::IsAmmoFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.IsAmmoFull");

	UBaseProjectileLauncher_IsAmmoFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.HasProjectile
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::HasProjectile()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.HasProjectile");

	UBaseProjectileLauncher_HasProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.HasAuthority
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::HasAuthority()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.HasAuthority");

	UBaseProjectileLauncher_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBaseProjectile*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBaseProjectile* UBaseProjectileLauncher::GetProjectileToLaunch()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch");

	UBaseProjectileLauncher_GetProjectileToLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetOwningPawn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Upawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Upawn* UBaseProjectileLauncher::GetOwningPawn()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetOwningPawn");

	UBaseProjectileLauncher_GetOwningPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          throwPowerRatio                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseProjectileLauncher::GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio");

	UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Params params;
	params.throwPowerRatio = throwPowerRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseProjectileLauncher::GetLaunchSpeed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchSpeed");

	UBaseProjectileLauncher_GetLaunchSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBaseProjectileLauncher::GetLaunchPosition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchPosition");

	UBaseProjectileLauncher_GetLaunchPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                viewRotation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          throwPowerRatio                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBaseProjectileLauncher::GetLaunchDirectionAtViewAndThrowPowerRatio(const struct FRotator& viewRotation, float throwPowerRatio)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio");

	UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Params params;
	params.viewRotation = viewRotation;
	params.throwPowerRatio = throwPowerRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetLaunchDirection
// (Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBaseProjectileLauncher::GetLaunchDirection()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchDirection");

	UBaseProjectileLauncher_GetLaunchDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.GetAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBaseProjectileLauncher::GetAmmo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetAmmo");

	UBaseProjectileLauncher_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBaseProjectileLauncher::Cosmetic_OnOutOfAmmo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo");

	UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            newMaxAmmo                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isMaxAmmoImmutable             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Authority_SetMaxAmmo(int newMaxAmmo, bool isMaxAmmoImmutable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo");

	UBaseProjectileLauncher_Authority_SetMaxAmmo_Params params;
	params.newMaxAmmo = newMaxAmmo;
	params.isMaxAmmoImmutable = isMaxAmmoImmutable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Authority_Reload
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Authority_Reload()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_Reload");

	UBaseProjectileLauncher_Authority_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Authority_Launch
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Authority_Launch()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_Launch");

	UBaseProjectileLauncher_Authority_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ammoToAdd                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Authority_AddMaxAmmo(int ammoToAdd)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo");

	UBaseProjectileLauncher_Authority_AddMaxAmmo_Params params;
	params.ammoToAdd = ammoToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction Projectile.PhysicsBasedProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// class UprimitiveComponent*     primitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UPhysicsBasedProjectileMovementComponent::OnComponentToSweepCollisionBP__DelegateSignature(class UprimitiveComponent* primitiveComponent, const struct FhitResult& hitResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction Projectile.PhysicsBasedProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature");

	UPhysicsBasedProjectileMovementComponent_OnComponentToSweepCollisionBP__DelegateSignature_Params params;
	params.primitiveComponent = primitiveComponent;
	params.hitResult = hitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UPhysicsBasedProjectileMovementComponent::GetPreviousLocation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation");

	UPhysicsBasedProjectileMovementComponent_GetPreviousLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Projectile.PhysicsBasedProjectileMovementComponent.AddComponentToSweep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UprimitiveComponent*     component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPhysicsBasedProjectileMovementComponent::AddComponentToSweep(class UprimitiveComponent* component)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.PhysicsBasedProjectileMovementComponent.AddComponentToSweep");

	UPhysicsBasedProjectileMovementComponent_AddComponentToSweep_Params params;
	params.component = component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile
// (Final, Native, Private)
void USingleProjectileProviderComponent::OnRep_Projectile()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile");

	USingleProjectileProviderComponent_OnRep_Projectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAuthoritativeActorPoolComponent* pool                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativePoolProjectileProviderAdapter::Init(class UAuthoritativeActorPoolComponent* pool)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init");

	UAuthoritativePoolProjectileProviderAdapter_Init_Params params;
	params.pool = pool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize100  projectileLocation             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize10   projectileRotation             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          targetLocationTimestamp        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Server_TryDetectPlayer(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo, const struct FVector_NetQuantize100& projectileLocation, const struct FVector_NetQuantize10& projectileRotation, float targetLocationTimestamp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer");

	UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Params params;
	params.projectile = projectile;
	params.impactInfo = impactInfo;
	params.projectileLocation = projectileLocation;
	params.projectileRotation = projectileRotation;
	params.targetLocationTimestamp = targetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FlaunchInfo             launchInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_OnLaunchWithImpact(class UBaseProjectile* projectile, const struct FlaunchInfo& launchInfo, const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact");

	UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Params params;
	params.projectile = projectile;
	params.launchInfo = launchInfo;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FlaunchInfo             launchInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_OnLaunch(class UBaseProjectile* projectile, const struct FlaunchInfo& launchInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch");

	UBaseProjectileReplicationComponent_Multicast_OnLaunch_Params params;
	params.projectile = projectile;
	params.launchInfo = launchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_DetectPlayer(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer");

	UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Params params;
	params.projectile = projectile;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FimpactInfo             impactInfo                     (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_DetectImpact(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact");

	UBaseProjectileReplicationComponent_Multicast_DetectImpact_Params params;
	params.projectile = projectile;
	params.impactInfo = impactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Client_ReceiveDetectPlayerValidation(class UBaseProjectile* projectile, bool Success)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation");

	UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Params params;
	params.projectile = projectile;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UBaseProjectile*         projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Client_LaunchRefusedByServer(class UBaseProjectile* projectile)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer");

	UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Params params;
	params.projectile = projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
