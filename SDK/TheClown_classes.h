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

// Class TheClown.ActiveGasCloudTrackerComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UActiveGasCloudTrackerComponent : public UactorComponent
{
public:
	TArray<class UBaseGasCloudProjectile*>             _activeToxinClouds;                                        // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBaseGasCloudProjectile*>             _activeAntidoteClouds;                                     // 0x00C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.ActiveGasCloudTrackerComponent");
		return ptr;
	}



};

// Class TheClown.BaseGasCloudProjectile
// 0x0228 (FullSize[0x04B0] - InheritedSize[0x0288])
class UBaseGasCloudProjectile : public UPhysicsBasedProjectile
{
public:
	TheClown_EBombType                                 _gasType;                                                  // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4D5N[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPoolableProjectileComponent*                _poolableProjectile;                                       // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudDuration;                                         // 0x0298(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudGravityScale;                                     // 0x02C0(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudBounciness;                                       // 0x02E8(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudFriction;                                         // 0x0310(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _dissipateGasCloudTime;                                    // 0x0338(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudMinimumLifetime;                                  // 0x0360(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudSimpleCollisionRadius;                            // 0x0388(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudComplexCollisionRadius;                           // 0x03B0(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudSurvivorDetectionRadius;                          // 0x03D8(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudDetectionDelay;                                   // 0x0400(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gasCloudCosmeticFadeDuration;                             // 0x0428(0x0028) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _overlappingTime;                                          // 0x0450(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _dissipating;                                              // 0x0454(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OZW3[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _overlappingSurvivors;                                     // 0x0458(0x0010) (BlueprintVisible, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UparticleSystemComponent*                    _gasParticleSystem;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _simpleCollider;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _complexCollider;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpherePlayerOverlapComponent*               _survivorDetector;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveGasCloudTrackerComponent*             _activeGasCloudTracker;                                    // 0x0488(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FgameplayTag                                _cloudSizeModifierTag;                                     // 0x0490(0x000C) (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9LNQ[0x4];                                     // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _cumulativeLifetime;                                       // 0x04A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0647[0xC];                                     // 0x04A4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.BaseGasCloudProjectile");
		return ptr;
	}



	void SetIsDissipating(bool isDissipating);
	void SetIgnoredActors();
	void SetGasAudioActive(bool Activated);
	void OnOverlapEnd(class UprimitiveComponent* hitComp, class Uactor* otherActor, class UprimitiveComponent* otherComponent, int otherBodyIndex);
	void OnOverlapBegin(class UprimitiveComponent* hitComp, class Uactor* otherActor, class UprimitiveComponent* otherComponent, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
	void OnDelayedActivationStart(float delay);
	void OnAcquiredChanged(bool acquired);
	void Multicast_DissipateGasCloud();
	bool IsSurvivorDetectionEnabled();
	bool isDissipating();
	TheClown_EBombType GetGasType();
	void DissipateGasCloud();
	void Authority_SetCumulativeLifetime(float Value);
	float Authority_GetCumulativeLifetime();
	void ActivateCosmetic_BP();
};

// Class TheClown.AntidoteCloudProjectile
// 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
class UAntidoteCloudProjectile : public UBaseGasCloudProjectile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.AntidoteCloudProjectile");
		return ptr;
	}



};

// Class TheClown.BombLauncher
// 0x0018 (FullSize[0x0198] - InheritedSize[0x0180])
class UBombLauncher : public UKillerProjectileLauncher
{
public:
	class UCurveFloat*                                 _speedCurve;                                               // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _pitchCurve;                                               // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheClown_EBombType                                 _currentBombType;                                          // 0x0190(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_91MM[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.BombLauncher");
		return ptr;
	}



	void SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve);
	void SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve);
	void SetPercentThrowStrength(float throwStrength);
	void Server_SwitchBombType();
	void LocalLaunch(float percentThrowStrength);
	void Local_SwitchBombType();
	bool IsBombFullyCharged();
	float GetPercentThrowStrenght();
	TheClown_EBombType GetCurrentBombType();
};

// Class TheClown.GassedStatusEffect
// 0x00E0 (FullSize[0x0400] - InheritedSize[0x0320])
class UGassedStatusEffect : public UstatusEffect
{
public:
	struct FScriptMulticastDelegate                    _onIsInCloudChanged;                                       // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onIsInAntidoteCloudChanged;                               // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onOverlappingCloudAdded;                                  // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                               _isInCloud;                                                // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInAntidoteCloud;                                        // 0x0351(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YWWE[0x6];                                     // 0x0352(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _overlappingClouds[0x50];                                  // 0x0352(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _overlappingAntidoteClouds[0x50];                          // 0x03A8(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_RUGS[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.GassedStatusEffect");
		return ptr;
	}



	void UpdateAntidoteEffectVFX(float durationRemaining);
	void SetRemainingDuration(float Value);
	void SetRemainingAntidoteDuration(float Value);
	void OnToxinEffectEnd(float durationSkipped);
	void OnToxinEffectBegin(float effectDuration);
	void OnToxinCured();
	void OnRep_IsInCloud();
	void OnRep_IsInAntidoteCloud();
	void OnDirectBottleHit(TheClown_EBombType bottleType);
	void OnAntidoteEffectEnd(float durationSkipped);
	void OnAntidoteEffectBegin(float effectDuration);
	bool isInCloud();
	bool IsInAntidoteCloud();
	float GetRemainingDuration();
	float GetRemainingAntidoteDuration();
	float GetCloudEffectDuration();
	float GetAntidoteCloudEffectDuration();
	void Authority_SetIsInCloud(bool Value);
	void Authority_SetIsInAntidoteCloud(bool Value);
	void Authority_RemoveOverlappingCloud(class UBaseGasCloudProjectile* cloud);
	void Authority_AddOverlappingCloud(class UBaseGasCloudProjectile* cloud);
};

// Class TheClown.GassedSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UGassedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isGassed;                                                 // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AA1W[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.GassedSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheClown.TheClownUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTheClownUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheClown.TheClownUtilities");
		return ptr;
	}



	bool STATIC_IsGassed(class UdbdPlayer* player);
	bool STATIC_IsAffectedByAntidote(class UdbdPlayer* player);
	class UGassedStatusEffect* STATIC_GetGassedStatusEffect(class UdbdPlayer* player);
	class UActiveGasCloudTrackerComponent* STATIC_GetActiveGasCloudTrackerComponent(class UObject* worldContextObject);
	bool STATIC_CanBeGassed(class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
