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

// Class GameplayUtilities.CharacterPusherComponent
// 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
class UCharacterPusherComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_8Z6P[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Ucharacter*>                          _charactersToPush;                                         // 0x00E8(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _ignoredCharacters[0x50];                                  // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty
	class UCapsuleComponent*                           _characterDetector;                                        // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           _characterCollision;                                       // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBasePushStrategyComponent*                  _pushStrategy;                                             // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Ucharacter*>                          _ignoredByPushedCharacters;                                // 0x0160(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.CharacterPusherComponent");
		return ptr;
	}



	void SetIgnoredCharacter(class Ucharacter* character, bool ignore);
	void OnCharacterDetectorOverlapExit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy);
};

// Class GameplayUtilities.BasePoolableActorComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UBasePoolableActorComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_G1UL[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAcquiredChanged;                                         // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.BasePoolableActorComponent");
		return ptr;
	}



	void SetAcquired(bool active);
	bool IsAcquired();
};

// Class GameplayUtilities.AuthoritativePoolableActorComponent
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
{
public:
	bool                                               _acquired;                                                 // 0x00D0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ER6[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.AuthoritativePoolableActorComponent");
		return ptr;
	}



	void OnRep_Acquired();
};

// Class GameplayUtilities.BaseInputAccelerationConstraintStrategy
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBaseInputAccelerationConstraintStrategy : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.BaseInputAccelerationConstraintStrategy");
		return ptr;
	}



};

// Class GameplayUtilities.BaseCharacterVelocityAdditiveStrategy
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBaseCharacterVelocityAdditiveStrategy : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.BaseCharacterVelocityAdditiveStrategy");
		return ptr;
	}



};

// Class GameplayUtilities.AuthoritativeActorPoolComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UAuthoritativeActorPoolComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_0TR0[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _actorClass;                                               // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _size;                                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AX1N[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Uactor*>                              _pool;                                                     // 0x00E0(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.AuthoritativeActorPoolComponent");
		return ptr;
	}



	void OnRep_Pool(TArray<class Uactor*> previousPool);
	void Authority_OnActorDestroyed(class Uactor* destroyedActor);
};

// Class GameplayUtilities.BasePushStrategyComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBasePushStrategyComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.BasePushStrategyComponent");
		return ptr;
	}



};

// Class GameplayUtilities.BoxOcclusionQueryComponent
// 0x0020 (FullSize[0x0470] - InheritedSize[0x0450])
class UBoxOcclusionQueryComponent : public UBoxComponent
{
public:
	float                                              TimeUntilOccluded;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1B86[0x1C];                                    // 0x0454(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.BoxOcclusionQueryComponent");
		return ptr;
	}



	float GetVisiblePercentOfScreen();
	float GetNumberOfVisiblePixels();
	float GetEstimatedRenderedPixelCount();
};

// Class GameplayUtilities.CameraUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCameraUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.CameraUtilities");
		return ptr;
	}



	bool STATIC_IsLookingTowards(class Ucontroller* controller, const struct Fvector& position, float precisionAngle);
};

// Class GameplayUtilities.CharacterPositionRecorderComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UCharacterPositionRecorderComponent : public UactorComponent
{
public:
	float                                              _cacheTimespan;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BNU0[0x1C];                                    // 0x00BC(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.CharacterPositionRecorderComponent");
		return ptr;
	}



};

// Class GameplayUtilities.CharacterSightableComponent
// 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
class UCharacterSightableComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_WDV0[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHighestSightStatusChangedBP;                             // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<TWeakObjectPtr<class Ucharacter>, struct FDelegateHandleWrapper> _sightDelegateHandles;                                     // 0x00F8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<TWeakObjectPtr<class Ucharacter>, GameplayUtilities_ESightStatus> _sightersStatus;                                           // 0x0148(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_677L[0x8];                                     // 0x0198(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.CharacterSightableComponent");
		return ptr;
	}



	void OnHighestSightStatusChangedBP__DelegateSignature(GameplayUtilities_ESightStatus Status);
	GameplayUtilities_ESightStatus GetHighestSightStatus();
};

// Class GameplayUtilities.CharacterSightComponent
// 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
class UCharacterSightComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_MVEE[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minimumCharacterScreenPercent;                            // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minimumCharacterVisiblePixelsPercent;                     // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maximumSightDistance;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _screenVisibilityZoneRadiusPercent;                        // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _sightingDelay;                                            // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _discerningDelay;                                          // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _undiscerningDelay;                                        // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JSS2[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _sightableCharacterClass;                                  // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAuthorityDiscernedCharacter>        _discernedCharacters;                                      // 0x0118(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FDiscernibleCharacter>               _localDiscernibleCharacters;                               // 0x0128(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _debugMode;                                                // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canSee;                                                   // 0x0139(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MCRW[0x6];                                     // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActivationDefinition                       _activationDefinition;                                     // 0x0140(0x0028) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LP5D[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.CharacterSightComponent");
		return ptr;
	}



	void SetScreenVisibilityZoneRadiusPercent(float Value);
	void SetMinimumCharacterVisiblePixelsPercent(float Value);
	void SetMinimumCharacterScreenPercent(float Value);
	void SetMaximumSightDistance(float Value);
	void Server_UpdateDiscernedCharacters(TArray<class Ucharacter*> characters);
	void OnRep_DiscernibleCharacters();
	void OnRep_CanSee();
};

// Class GameplayUtilities.ChargeableUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UChargeableUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.ChargeableUtilities");
		return ptr;
	}



	float STATIC_ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate);
};

// Class GameplayUtilities.ContainerUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UContainerUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.ContainerUtilities");
		return ptr;
	}



};

// Class GameplayUtilities.PoolableActor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPoolableActor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.PoolableActor");
		return ptr;
	}



};

// Class GameplayUtilities.MockAuthoritativeActorPoolComponent
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UMockAuthoritativeActorPoolComponent : public UAuthoritativeActorPoolComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.MockAuthoritativeActorPoolComponent");
		return ptr;
	}



};

// Class GameplayUtilities.MockPoolableActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UMockPoolableActor : public Uactor
{
public:
	class UPoolableActorComponent*                     _poolable;                                                 // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.MockPoolableActor");
		return ptr;
	}



};

// Class GameplayUtilities.MovableCamera
// 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
class UMovableCamera : public Upawn
{
public:
	float                                              MovementSpeed;                                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresShiftModifierForInput;                             // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJEI[0x1B];                                    // 0x0295(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UplayerController*                           _playerController;                                         // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.MovableCamera");
		return ptr;
	}



};

// Class GameplayUtilities.MoveActorToComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UMoveActorToComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_I3UG[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.MoveActorToComponent");
		return ptr;
	}



};

// Class GameplayUtilities.MovementUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovementUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.MovementUtilities");
		return ptr;
	}



	void STATIC_Local_MoveActorTo(class Uactor* actor, const struct Fvector& location, const struct FRotator& rotation, float duration);
};

// Class GameplayUtilities.PawnUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPawnUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.PawnUtilities");
		return ptr;
	}



	class Upawn* STATIC_GetOwningPawn(class Uactor* origin);
	class Upawn* STATIC_GetLocallyObservedPawn(class UObject* worldContext);
};

// Class GameplayUtilities.PlayerStateExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerStateExt : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.PlayerStateExt");
		return ptr;
	}



};

// Class GameplayUtilities.PoolableActorComponent
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UPoolableActorComponent : public UBasePoolableActorComponent
{
public:
	unsigned char                                      UnknownData_ZD1Y[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.PoolableActorComponent");
		return ptr;
	}



};

// Class GameplayUtilities.SceneComponentExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USceneComponentExt : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.SceneComponentExt");
		return ptr;
	}



};

// Class GameplayUtilities.SidePushStrategyComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class USidePushStrategyComponent : public UBasePushStrategyComponent
{
public:
	float                                              _maxImpulseStrength;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              _minImpulseStrength;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              _detectorCapsuleInflation;                                 // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68P6[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.SidePushStrategyComponent");
		return ptr;
	}



};

// Class GameplayUtilities.VisualLoggerExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVisualLoggerExt : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GameplayUtilities.VisualLoggerExt");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
