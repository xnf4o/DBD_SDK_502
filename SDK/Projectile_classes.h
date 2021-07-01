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
// Classes
//---------------------------------------------------------------------------

// Class Projectile.BaseProjectile
// 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
class UBaseProjectile : public Uactor
{
public:
	unsigned char                                      UnknownData_EWTB[0x40];                                    // 0x0230(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _multicastLaunch;                                          // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowMultipleHits;                                        // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _notifyClientOfServerHitValidationResult;                  // 0x0272(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_26FV[0x5];                                     // 0x0273(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseProjectileReplicationComponent*         _replicationComponent;                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.BaseProjectile");
		return ptr;
	}



	bool SphereTraceSingle(const struct Fvector& start, const struct Fvector& end, class USphereComponent* sphere, struct FhitResult* outHitResult);
	void OnSetActive(bool active);
	void OnLaunch(const struct FlaunchInfo& launchInfo, bool hasImpactOnLaunch);
	void OnDetectPlayer(const struct FimpactInfo& impactInfo);
	void OnDetectCollision(const struct FimpactInfo& impactInfo);
	bool Local_TryDetectCollision(const struct FimpactInfo& impactInfo, bool Force);
	bool Local_SweepImpactCollision(const struct Fvector& start, const struct Fvector& end, const struct FRotator& colliderRotation, struct FhitResult* outHit);
	bool Local_OnPlayerDetected(const struct FimpactInfo& impactInfo, const struct Fvector& projectileLocation);
	bool IsValidPlayerDetection(const struct FimpactInfo& impactInfo);
	bool IsValidImpactDetection(const struct FimpactInfo& impactInfo);
	bool IsOwningPawnLocallyControlled();
	class UBaseProjectileLauncher* GetLauncher();
	class UprimitiveComponent* GetImpactPrimitiveComponent();
	float GetAddLauncherVeloctyFactor();
	bool Authority_TryDetectCollision(const struct FimpactInfo& impactInfo, bool Force);
};

// Class Projectile.PhysicsBasedProjectile
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UPhysicsBasedProjectile : public UBaseProjectile
{
public:
	class UPhysicsBasedProjectileMovementComponent*    Movement;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.PhysicsBasedProjectile");
		return ptr;
	}



};

// Class Projectile.BaseProjectileLauncher
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UBaseProjectileLauncher : public UactorComponent
{
public:
	unsigned char                                      UnknownData_1DQ3[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _requireLaunchImpactDetection;                             // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P9KN[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _ammo;                                                     // 0x00F8(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _maxAmmo;                                                  // 0x00FC(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canLaunchWhileOutOfAmmo;                                  // 0x0100(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S018[0x2F];                                    // 0x0101(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseProjectile*                             _debugProjectile;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SR2K[0x40];                                    // 0x0138(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseProjectileReplicationComponent*         _projectileReplicationComponent;                           // 0x0178(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.BaseProjectileLauncher");
		return ptr;
	}



	void SetProjectileVar(const struct FName& varName, float Value);
	void SetProjectileProvider(const TScriptInterface<class UprojectileProvider>& projectileProvider);
	void Server_LaunchWithImpact(const struct FlaunchInfo& launchInfo, const struct FimpactInfo& impactInfo, class UBaseProjectile* projectile);
	void Server_Launch(const struct FlaunchInfo& launchInfo, class UBaseProjectile* projectile);
	void OnRep_MaxAmmo(int oldMaxAmmo);
	void OnRep_Ammo(int oldAmmo);
	void OnLaunch(const struct FlaunchInfo& launchInfo, class UBaseProjectile* projectile);
	void Local_Launch();
	bool IsLocallyControlled();
	bool IsAmmoFull();
	bool HasProjectile();
	bool HasAuthority();
	class UBaseProjectile* GetProjectileToLaunch();
	class Upawn* GetOwningPawn();
	float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio);
	float GetLaunchSpeed();
	struct Fvector GetLaunchPosition();
	struct Fvector GetLaunchDirectionAtViewAndThrowPowerRatio(const struct FRotator& viewRotation, float throwPowerRatio);
	struct Fvector GetLaunchDirection();
	int GetAmmo();
	void Cosmetic_OnOutOfAmmo();
	void Authority_SetMaxAmmo(int newMaxAmmo, bool isMaxAmmoImmutable);
	void Authority_Reload();
	void Authority_Launch();
	void Authority_AddMaxAmmo(int ammoToAdd);
};

// Class Projectile.PhysicsBasedProjectileMovementComponent
// 0x0070 (FullSize[0x0250] - InheritedSize[0x01E0])
class UPhysicsBasedProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData_OFS6[0x18];                                    // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComponentToSweepCollisionBP;                             // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMFL[0x18];                                    // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FComponentSweepInfo>                 _componentsToSweep;                                        // 0x0220(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RHEE[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             _cachedUpdatedComponent;                                   // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T0WP[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.PhysicsBasedProjectileMovementComponent");
		return ptr;
	}



	void OnComponentToSweepCollisionBP__DelegateSignature(class UprimitiveComponent* primitiveComponent, const struct FhitResult& hitResult);
	struct Fvector GetPreviousLocation();
	void AddComponentToSweep(class UprimitiveComponent* component);
};

// Class Projectile.SingleProjectileProviderComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class USingleProjectileProviderComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_HFOK[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _projectileClass;                                          // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBaseProjectile*                             _projectile;                                               // 0x00C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_489Y[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.SingleProjectileProviderComponent");
		return ptr;
	}



	void OnRep_Projectile();
};

// Class Projectile.AuthoritativePoolProjectileProviderAdapter
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAuthoritativePoolProjectileProviderAdapter : public UObject
{
public:
	unsigned char                                      UnknownData_4A7K[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativeActorPoolComponent*            _pool;                                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.AuthoritativePoolProjectileProviderAdapter");
		return ptr;
	}



	void Init(class UAuthoritativeActorPoolComponent* pool);
};

// Class Projectile.BaseProjectileReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBaseProjectileReplicationComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.BaseProjectileReplicationComponent");
		return ptr;
	}



	void Server_TryDetectPlayer(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo, const struct FVector_NetQuantize100& projectileLocation, const struct FVector_NetQuantize10& projectileRotation, float targetLocationTimestamp);
	void Multicast_OnLaunchWithImpact(class UBaseProjectile* projectile, const struct FlaunchInfo& launchInfo, const struct FimpactInfo& impactInfo);
	void Multicast_OnLaunch(class UBaseProjectile* projectile, const struct FlaunchInfo& launchInfo);
	void Multicast_DetectPlayer(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo);
	void Multicast_DetectImpact(class UBaseProjectile* projectile, const struct FimpactInfo& impactInfo);
	void Client_ReceiveDetectPlayerValidation(class UBaseProjectile* projectile, bool Success);
	void Client_LaunchRefusedByServer(class UBaseProjectile* projectile);
};

// Class Projectile.projectileProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UprojectileProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Projectile.projectileProvider");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
