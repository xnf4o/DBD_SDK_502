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

// Function Projectile.BaseProjectile.SphereTraceSingle
struct UBaseProjectile_SphereTraceSingle_Params
{
	struct Fvector                                     start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     end;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                            sphere;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  outHitResult;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnSetActive
struct UBaseProjectile_OnSetActive_Params
{
	bool                                               active;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnLaunch
struct UBaseProjectile_OnLaunch_Params
{
	struct FlaunchInfo                                 launchInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               hasImpactOnLaunch;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnDetectPlayer
struct UBaseProjectile_OnDetectPlayer_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnDetectCollision
struct UBaseProjectile_OnDetectCollision_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_TryDetectCollision
struct UBaseProjectile_Local_TryDetectCollision_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               Force;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_SweepImpactCollision
struct UBaseProjectile_Local_SweepImpactCollision_Params
{
	struct Fvector                                     start;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     end;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    colliderRotation;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FhitResult                                  outHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_OnPlayerDetected
struct UBaseProjectile_Local_OnPlayerDetected_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct Fvector                                     projectileLocation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsValidPlayerDetection
struct UBaseProjectile_IsValidPlayerDetection_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsValidImpactDetection
struct UBaseProjectile_IsValidImpactDetection_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled
struct UBaseProjectile_IsOwningPawnLocallyControlled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetLauncher
struct UBaseProjectile_GetLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
struct UBaseProjectile_GetImpactPrimitiveComponent_Params
{
	class UprimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor
struct UBaseProjectile_GetAddLauncherVeloctyFactor_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Authority_TryDetectCollision
struct UBaseProjectile_Authority_TryDetectCollision_Params
{
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               Force;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.SetProjectileVar
struct UBaseProjectileLauncher_SetProjectileVar_Params
{
	struct FName                                       varName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.SetProjectileProvider
struct UBaseProjectileLauncher_SetProjectileProvider_Params
{
	TScriptInterface<class UprojectileProvider>        projectileProvider;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact
struct UBaseProjectileLauncher_Server_LaunchWithImpact_Params
{
	struct FlaunchInfo                                 launchInfo;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FimpactInfo                                 impactInfo;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Server_Launch
struct UBaseProjectileLauncher_Server_Launch_Params
{
	struct FlaunchInfo                                 launchInfo;                                                // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo
struct UBaseProjectileLauncher_OnRep_MaxAmmo_Params
{
	int                                                oldMaxAmmo;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnRep_Ammo
struct UBaseProjectileLauncher_OnRep_Ammo_Params
{
	int                                                oldAmmo;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnLaunch
struct UBaseProjectileLauncher_OnLaunch_Params
{
	struct FlaunchInfo                                 launchInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Local_Launch
struct UBaseProjectileLauncher_Local_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.IsLocallyControlled
struct UBaseProjectileLauncher_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.IsAmmoFull
struct UBaseProjectileLauncher_IsAmmoFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.HasProjectile
struct UBaseProjectileLauncher_HasProjectile_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.HasAuthority
struct UBaseProjectileLauncher_HasAuthority_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
struct UBaseProjectileLauncher_GetProjectileToLaunch_Params
{
	class UBaseProjectile*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetOwningPawn
struct UBaseProjectileLauncher_GetOwningPawn_Params
{
	class Upawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio
struct UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Params
{
	float                                              throwPowerRatio;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
struct UBaseProjectileLauncher_GetLaunchSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchPosition
struct UBaseProjectileLauncher_GetLaunchPosition_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio
struct UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Params
{
	struct FRotator                                    viewRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              throwPowerRatio;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchDirection
struct UBaseProjectileLauncher_GetLaunchDirection_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetAmmo
struct UBaseProjectileLauncher_GetAmmo_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo
struct UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo
struct UBaseProjectileLauncher_Authority_SetMaxAmmo_Params
{
	int                                                newMaxAmmo;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isMaxAmmoImmutable;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Authority_Reload
struct UBaseProjectileLauncher_Authority_Reload_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_Launch
struct UBaseProjectileLauncher_Authority_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
struct UBaseProjectileLauncher_Authority_AddMaxAmmo_Params
{
	int                                                ammoToAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Projectile.PhysicsBasedProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature
struct UPhysicsBasedProjectileMovementComponent_OnComponentToSweepCollisionBP__DelegateSignature_Params
{
	class UprimitiveComponent*                         primitiveComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.PhysicsBasedProjectileMovementComponent.GetPreviousLocation
struct UPhysicsBasedProjectileMovementComponent_GetPreviousLocation_Params
{
	struct Fvector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.PhysicsBasedProjectileMovementComponent.AddComponentToSweep
struct UPhysicsBasedProjectileMovementComponent_AddComponentToSweep_Params
{
	class UprimitiveComponent*                         component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile
struct USingleProjectileProviderComponent_OnRep_Projectile_Params
{
};

// Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init
struct UAuthoritativePoolProjectileProviderAdapter_Init_Params
{
	class UAuthoritativeActorPoolComponent*            pool;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer
struct UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      projectileLocation;                                        // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       projectileRotation;                                        // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetLocationTimestamp;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact
struct UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FlaunchInfo                                 launchInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch
struct UBaseProjectileReplicationComponent_Multicast_OnLaunch_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FlaunchInfo                                 launchInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer
struct UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact
struct UBaseProjectileReplicationComponent_Multicast_DetectImpact_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FimpactInfo                                 impactInfo;                                                // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation
struct UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer
struct UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Params
{
	class UBaseProjectile*                             projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
