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

// Class DBDGameplay.ActorPairQueryEvaluatorUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.ActorPairQueryEvaluatorUtilities");
		return ptr;
	}



};

// Class DBDGameplay.AimableComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UAimableComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_D9AS[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Uactor*>                              _occlusionIgnoredActors;                                   // 0x00C0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxAimDistance;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_595Y[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAimDirectionProvider*                       _aimDirectionProvider;                                     // 0x00D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _useOcclusion;                                             // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7Z2H[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimPointLerpFactor;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAimPointProcessor*>                  _preOcclusionAimPointProcessors;                           // 0x00E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XEBH[0x18];                                    // 0x00F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimableComponent");
		return ptr;
	}



	void SetProcessors(TArray<class UAimPointProcessor*> processors);
	void SetOcclusionIgnoredActors(TArray<class Uactor*> ignoredActors);
	void SetMaxAimDistance(float maxAimDistance);
};

// Class DBDGameplay.AimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAimDirectionProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.AimPointProcessor
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UAimPointProcessor : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimPointProcessor");
		return ptr;
	}



};

// Class DBDGameplay.AimPointPerlinNoise
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UAimPointPerlinNoise : public UAimPointProcessor
{
public:
	unsigned char                                      UnknownData_P4D3[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoisePersistence;                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _baseInaccuracyNoiseOctaveCount;                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseInaccuracyNoiseAmplitude;                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K0F5[0x4];                                     // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoiseFrequency;                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L301[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _timeOffset;                                               // 0x00D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EACG[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimPointPerlinNoise");
		return ptr;
	}



	void SetNoiseFrequencyMultiplier(float multiplier);
	void SetNoiseAmplitudeMultiplier(float multiplier);
	void SetBaseInaccuracyNoisePersistence(float noisePersistence);
	void SetBaseInaccuracyNoiseOctaveCount(int octaveCount);
	void SetBaseInaccuracyNoiseFrequency(float frequency);
	void SetBaseInaccuracyNoiseAmplitude(float amplitude);
};

// Class DBDGameplay.AuraOverriderComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UAuraOverriderComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_N3UK[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AuraOverriderComponent");
		return ptr;
	}



	void ResetAura(class Uactor* actor);
	void ForceShowAura(class Uactor* actor, const struct FLinearColor& color, bool IsAlwaysVisible, float MinimumOutlineDistance);
};

// Class DBDGameplay.BaseCamperCollectable
// 0x0048 (FullSize[0x04E0] - InheritedSize[0x0498])
class UBaseCamperCollectable : public Ucollectable
{
public:
	class USpherePlayerOverlapComponent*               _interactable;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uinteractor*                                 _collectableInteractor;                                    // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDropItemInteraction*                        _dropInteraction;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectItemInteraction*                     _collectInteraction;                                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _infectablePrimitive;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialHelper*                             _materialHelper;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USurvivorCollectableOutlineUpdateStrategy*   _survivorCollectableOutlineUpdateStrategy;                 // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7XGM[0x8];                                     // 0x04D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.BaseCamperCollectable");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightableLightingStrategy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightableLightingStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightablePointsLightingStrategy
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	class UPointsProvider*                             _pointsProvider;                                           // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _impactPointDistanceError;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WH1I[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightablePointsLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.BlindFlashlightableLightingStrategy
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.BlindFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightTargetFXComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UFlashlightTargetFXComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_UOOJ[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _modifiesBeamAngle;                                        // 0x00E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5GIF[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFlashLightableComponent*                    _flashlightable;                                           // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_49NE[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightTargetFXComponent");
		return ptr;
	}



	void OnIsLitChanged(bool isLit);
};

// Class DBDGameplay.BlindFlashlightTargetFXComponent
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	unsigned char                                      UnknownData_9BDX[0x28];                                    // 0x0100(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.BlindFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.CollectableComponentUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.CollectableComponentUtilities");
		return ptr;
	}



	class UdbdPlayer* STATIC_GetCollector(class UactorComponent* component);
};

// Class DBDGameplay.DBDCharacterPusherComponent
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UDBDCharacterPusherComponent : public UCharacterPusherComponent
{
public:
	unsigned char                                      UnknownData_B54M[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.DBDCharacterPusherComponent");
		return ptr;
	}



};

// Class DBDGameplay.DebugIndicator
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class UDebugIndicator : public Uactor
{
public:
	class UStaticMeshComponent*                        _staticMeshComponent;                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SCTN[0x10];                                    // 0x0240(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.DebugIndicator");
		return ptr;
	}



	void SetVisible(bool Visible);
	void SetColor(const struct FLinearColor& color);
};

// Class DBDGameplay.EtherealComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UEtherealComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_3R5W[0x28];                                    // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isEthereal;                                               // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T2ID[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.EtherealComponent");
		return ptr;
	}



	void Server_SetIsEthereal(float timestamp, bool ethereal);
	void OnRep_OnIsEtherealChanged();
};

// Class DBDGameplay.RangeToActorsTrackerStrategy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class URangeToActorsTrackerStrategy : public UObject
{
public:
	struct FDBDTunableRowHandle                        _range;                                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3W8E[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerStrategy");
		return ptr;
	}



	void OnInRangeToTrackedActorsChanged(bool inRange);
};

// Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FadeComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UFadeComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFadePercentChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _fadeDuration;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8IEW[0xC];                                     // 0x00CC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FadeComponent");
		return ptr;
	}



	float GetFadePercent();
};

// Class DBDGameplay.FlashLightableComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UFlashLightableComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashlightAddedEvent;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightRemovedEvent;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightLitChangedEvent;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFlashlightableLightingStrategy*             _lightingStrategy;                                         // 0x00E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlights[0x50];                                        // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashLightableComponent");
		return ptr;
	}



	void OnFlashlightLitChangedEvent__DelegateSignature(bool isLit);
	void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* FlashLight);
	bool isLit();
};

// Class DBDGameplay.FlashlightComponent
// 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
class UFlashlightComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_EJ9C[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOn;                                      // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOff;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightablesUpdated;                                  // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _baseBlindnessDuration;                                    // 0x00F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseAccuracy;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lagDuration;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlightables[0x50];                                    // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _autonomousLitFlashlightables[0x50];                       // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<class UFlashLightableComponent*>            _replicatedLitFlashlightables;                             // 0x01C0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isOwnerLagging;                                           // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2KAK[0x2F];                                    // 0x01D1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightComponent");
		return ptr;
	}



	void TurnOn();
	void TurnOff();
	void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashLightableComponent*> newLitFlashlightables);
	void OnRep_ReplicatedLitFlashlightables();
	void OnRep_IsOwnerLagging();
	void OnFlashlightEvent__DelegateSignature();
	bool IsOn();
	float GetEffectiveTimeToBlindModifier();
	float GetEffectiveBlindnessDuration();
};

// Class DBDGameplay.FlashlightConeComponent
// 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
class UFlashlightConeComponent : public UactorComponent
{
public:
	struct Fvector                                     AIAimBeamLocationOffset;                                   // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AIAimBeamRotationOffset;                                   // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             _flashlightBottom;                                         // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _baseBeamAngle;                                            // 0x00D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseBeamLength;                                           // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class Uactor>                       _cacheCollidingActor;                                      // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y4N1[0x18];                                    // 0x0130(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightConeComponent");
		return ptr;
	}



	float GetOcclusionDistance();
	float GetEffectiveConeLength();
	float GetEffectiveConeHalfAngle();
};

// Class DBDGameplay.FlashlightFXComponent
// 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
class UFlashlightFXComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashEvent;                                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                             _tip;                                                      // 0x00C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        _centerGlowMesh;                                           // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineMeshComponent*                        _beamMesh;                                                 // 0x00D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minimumOcclusionDistanceForSpotlight;                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_40Z4[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _flashEffectIntensityCurve;                                // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _flashEffectDuration;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightHalfAngle;                                       // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightIntensity;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _visualReworkSpotLightIntensity;                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingHalfAngle;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamFlashHalfAngle;                                       // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithTarget;                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithoutTarget;                // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _resizeConeLength;                                         // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ELKL[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _centerGlowWidthScaleWithoutBlindTarget;                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleWithBlindTarget;                      // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleDuringFlash;                          // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowShrinkDistance;                                 // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowLengthMaxScale;                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAkObservedPlayerSoundLoop                  _aimedAtSoundLoop;                                         // 0x0128(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFlashlightTargetFXComponent*                _currentBeamModifyingTarget;                               // 0x0168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _targets[0x50];                                            // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_UWYN[0x98];                                    // 0x01C0(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightFXComponent");
		return ptr;
	}



	void UpdateFXTargets();
	void UpdateConeEvent(float length, float halfAngle);
	void PostUpdateEvent();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnStopEvent();
	void OnStartEvent();
	void OnFlashEvent__DelegateSignature();
	void OnDroppedEvent();
	void OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved);
	void OnCollectedEvent(class UdbdPlayer* collector);
	float GetBlindingSuccessRatio();
};

// Class DBDGameplay.FlashlightUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightUtilities : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightUtilities");
		return ptr;
	}



};

// Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_PDA4[0x68];                                    // 0x0070(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.InteractionStarterComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UInteractionStarterComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_6QG4[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UinteractionDefinition*                      _interaction;                                              // 0x00C0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _shouldStartInteraction;                                   // 0x00C8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CAT2[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.InteractionStarterComponent");
		return ptr;
	}



	void OnRep_ShouldStartInteraction();
	void OnInteractionStarted();
};

// Class DBDGameplay.KillerFlashlightSFXComponent
// 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
class UKillerFlashlightSFXComponent : public UactorComponent
{
public:
	struct FAkObservedPlayerSoundLoop                  _targetSoundLoop;                                          // 0x00B8(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFlashlightTargetFXComponent*>        _flashlightTargets;                                        // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X8FB[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.KillerFlashlightSFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.LightBurnable
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class ULightBurnable : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBurnChargeCompleteEvent;                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0X0[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _chargeable;                                               // 0x00E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashLightableComponent*                    _flashlightable;                                           // 0x00E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandler;                                 // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isBurning;                                                // 0x00F8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DF2R[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.LightBurnable");
		return ptr;
	}



	void OnRep_IsBurning();
	void OnChargeableCompleteEvent(bool Completed, TArray<class Uactor*> instigatorsForCompletion);
	void OnBurnChargeEmpty();
	void OnBurnChargeCompleteEvent__DelegateSignature(TArray<class Uactor*> instigatorsForCompletion);
	void Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* FlashLight);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
};

// Class DBDGameplay.LightBurnableFlashlightTargetFXComponent
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	class ULightBurnable*                              _burnable;                                                 // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7POY[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.LightBurnableFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.Medkit
// 0x0040 (FullSize[0x0520] - InheritedSize[0x04E0])
class UMedkit : public UBaseCamperCollectable
{
public:
	class UAkComponent*                                _akComponent;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargerComponent*                           _charger;                                                  // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UparticleSystem*                             _dustRingTemplate;                                         // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitGetAkEvent;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitDropAkEvent;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioBank*                                _medkitBank;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _healOtherChargeMultiplier;                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2G2Z[0xC];                                     // 0x0514(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.Medkit");
		return ptr;
	}



	void UseCharge(float seconds);
	void OnMedkitHealedCamper(class UdbdPlayer* healedPlayer);
	bool HasCharge();
	float GetChargeMultiplier();
	void Authority_OnChargeStateChange(bool empty);
	void Authority_OnAnyOngoingInteractionChanged(bool isInteracting);
	void Authority_ConsumeIfNotInteracting();
};

// Class DBDGameplay.PointsProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPointsProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.MeshSocketPointsProvider
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UMeshSocketPointsProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _meshReference;                                            // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class UMeshComponent*                              _mesh;                                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _sockets;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.MeshSocketPointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.PlayerCameraAimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerCameraAimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.PlayerInteractionListenerComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UPlayerInteractionListenerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_GIJW[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerInteractionListenerComponent");
		return ptr;
	}



	void UnlistenToInteractionStart(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic);
	void UnlistenToInteractionEnd(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic);
	void OnActorDestroyed(class Uactor* destroyedActor);
	void ListenToInteractionStart(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate);
	void ListenToInteractionEnd(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate);
	void InteractionMulticastDelegate__DelegateSignature(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic);
	void InteractionDelegate__DelegateSignature(class UdbdPlayer* player, const struct FgameplayTag& interactionSemantic);
};

// Class DBDGameplay.PlayerLightBurnable
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UPlayerLightBurnable : public ULightBurnable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerLightBurnable");
		return ptr;
	}



};

// Class DBDGameplay.PlayerMovementUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerMovementUtilities");
		return ptr;
	}



	void STATIC_Local_SetGamepadYawCurve(class UdbdPlayer* player, class UCurveFloat* curve);
	void STATIC_Local_SetGamepadPitchCurve(class UdbdPlayer* player, class UCurveFloat* curve);
	void STATIC_Local_ResetRotationScale(class UdbdPlayer* player, float adjustmentTime);
	void STATIC_Local_ResetGamepadLookCurves(class UdbdPlayer* player);
	void STATIC_Local_ApplyYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyRotationScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMouseYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMousePitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
};

// Class DBDGameplay.PositionLagCompensationComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UPositionLagCompensationComponent : public UactorComponent
{
public:
	float                                              _maxExtrapolationDurationInSeconds;                        // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maxInterpolationToServerMoveInSeconds;                    // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PositionLagCompensationComponent");
		return ptr;
	}



};

// Class DBDGameplay.PowerChargeComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class UPowerChargeComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerChargeChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OEPS[0x58];                                    // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpeedBasedNetSyncedValue                   _currentCharge;                                            // 0x0120(0x0038) (Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GQ41[0x4];                                     // 0x0158(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _forceFullCharge;                                          // 0x015C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HEOK[0x3];                                     // 0x015D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerChargeComponent");
		return ptr;
	}



	void OnRep_CurrentCharge();
	void OnCurrentChargeChanged(float Value);
};

// Class DBDGameplay.PowerChargePresentationItemProgressComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x00C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _chargeReadyThreshold;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FC0K[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerChargePresentationItemProgressComponent");
		return ptr;
	}



};

// Class DBDGameplay.PowerToggleComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UPowerToggleComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_B82R[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isInPower;                                                // 0x00D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_41RS[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerToggleComponent");
		return ptr;
	}



	void OnRep_IsInPower();
};

// Class DBDGameplay.RangeToActorsTrackerComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class URangeToActorsTrackerComponent : public UactorComponent
{
public:
	TArray<class URangeToActorsTrackerStrategy*>       _rangeTrackers;                                            // 0x00B8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, NoClear, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerComponent");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
{
public:
	class UClass*                                      _actorClass;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerDefaultStrategy");
		return ptr;
	}



};

// Class DBDGameplay.SceneComponentPointProvider
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USceneComponentPointProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _sceneReference;                                           // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _sceneComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.SceneComponentPointProvider");
		return ptr;
	}



};

// Class DBDGameplay.StruggleComponent
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UStruggleComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_BUXD[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _skillCheckCount;                                          // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z8EU[0x6C];                                    // 0x0114(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.StruggleComponent");
		return ptr;
	}



	void OnSkillCheckEnd(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void Local_TryActivateSkillCheck();
};

// Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.SurvivorAimStateComponent
// 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
class USurvivorAimStateComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_5732[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ucollectable*                                _aimableCollectable;                                       // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SWAC[0x48];                                    // 0x00D0(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.SurvivorAimStateComponent");
		return ptr;
	}



};

// Class DBDGameplay.TracingConeFlashlightableLightingStrategy
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	int                                                _aroundConeCircleTraceCount;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E99T[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.TracingConeFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.UnhookedSurvivorTrackerComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UUnhookedSurvivorTrackerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_P4VG[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.UnhookedSurvivorTrackerComponent");
		return ptr;
	}



};

// Class DBDGameplay.VisibleHatchRangeTrackerStrategy
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_QBKG[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.VisibleHatchRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.WiggleComponent
// 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
class UWiggleComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_85BX[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _wiggleProgress;                                           // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UslasherPlayer*                              _killerWigglingFrom;                                       // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                             _inputComponent;                                           // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KGAP[0xB8];                                    // 0x00D8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.WiggleComponent");
		return ptr;
	}



	void Server_OnWiggleEnd();
	void OnWiggleSkillCheckEnd(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void OnWiggleInput();
	void OnWiggleEnd();
	void OnPlayerPickedUpStart(class UdbdPlayer* picker);
	void OnPlayerPickedUpEnd(class UdbdPlayer* picker);
	void OnPickedUpSkillCheckEnd(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void OnKeyBindingsChanged();
	void OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType type);
	void OnChargeableCompleteEvent(bool Completed, TArray<class Uactor*> instigatorsForCompletion);
	class UchargeableComponent* GetWiggleChargeable();
	void Authority_AddWiggleCharge(float chargeAmount);
};

// Class DBDGameplay.WiggleMotionComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UWiggleMotionComponent : public UactorComponent
{
public:
	class UdbdPlayer*                                  _carriedPlayer;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDCharacterMovementComponent*              _ownerMovementComponent;                                   // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8L0B[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.WiggleMotionComponent");
		return ptr;
	}



	void SetIsBeingWiggled(bool isBeingWiggled);
	void Server_SetIsBeingWiggled(bool isBeingWiggled);
	void OnWiggleSkillCheckEnd(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void OnSurvivorRemoved(class UdbdPlayer* target);
	void OnSurvivorPickedUp(class UdbdPlayer* target);
	void OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType type);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
