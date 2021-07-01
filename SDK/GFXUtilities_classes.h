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

// Class GFXUtilities.BatchMeshCommands
// 0x0090 (FullSize[0x02A0] - InheritedSize[0x0210])
class UBatchMeshCommands : public USceneComponent
{
public:
	unsigned char                                      UnknownData_9Z2Q[0x60];                                    // 0x0210(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMaterialNamedGroup>                 Groups;                                                    // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMaterialHelperOriginalMeshState>    TargetMeshes;                                              // 0x0280(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     _materialGroupName;                                        // 0x0290(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.BatchMeshCommands");
		return ptr;
	}



	void UpdateMaterials();
	void SetVectorParameter(const struct FName& parameterName, const struct Fvector& newValue);
	void SetTextureParameter(const struct FName& parameterName, class Utexture* newTexture);
	void SetStencilIntegerScalarParameter(const struct FName& parameterName, int newValue);
	void SetScalarParameter(const struct FName& parameterName, float newValue);
	void SetRenderInMainPass(bool inRenderInMainPass);
	void SetRenderInCustomDepth(bool renderInCustomDepth);
	void SetRenderInCustomColourNoDepth(bool renderInCustomColour);
	void SetReceivesDecals(bool receivesDecals);
	void SetMaterial(const struct FString& groupName);
	void SetLightingChannelForAllMeshes(const struct FlightingChannels& lightingChannels);
	void SetCustomDepthStencilValue(int stencilValue);
	void SetColourParameter(const struct FName& parameterName, const struct FLinearColor& newValue);
	void SetCastCinematicShadows(bool castCinematicShadows);
	void SetAllToSameMaterial(class UmaterialInterface* materialInterface);
	void ResetMaterials();
	bool CopyFirstScalarParameter(const struct FName& parameterName, float* outValue);
	void BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void BatchSetSkipComponentAndChildrenTransformUpdate(bool skip);
	void BatchSetComponentTickEnabled(bool enabled);
};

// Class GFXUtilities.AlternatingColor
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UAlternatingColor : public UObject
{
public:
	struct FLinearColor                                FirstColor;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                SecondColor;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ColorChangePeriod;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MFT4[0x24];                                    // 0x0054(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.AlternatingColor");
		return ptr;
	}



};

// Class GFXUtilities.BaseOutlineRenderStrategy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UBaseOutlineRenderStrategy : public UObject
{
public:
	TArray<class UBatchMeshCommands*>                  _batchCommands;                                            // 0x0030(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C18Z[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.BaseOutlineRenderStrategy");
		return ptr;
	}



};

// Class GFXUtilities.ClippableProviderComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UClippableProviderComponent : public UactorComponent
{
public:
	unsigned char                                      _ignoredPrimitives[0x50];                                  // 0x00B8(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.ClippableProviderComponent");
		return ptr;
	}



	void SetIgnoredPrimitives(TArray<class UprimitiveComponent*> ignoredPrimitives);
};

// Class GFXUtilities.ClonedMeshComponent
// 0x00A0 (FullSize[0x0340] - InheritedSize[0x02A0])
class UClonedMeshComponent : public UBatchMeshCommands
{
public:
	TMap<class USceneComponent*, class UMeshComponent*> _originalToClone;                                          // 0x02A0(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UMeshComponent*, class USceneComponent*> _cloneToOriginal;                                          // 0x02F0(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.ClonedMeshComponent");
		return ptr;
	}



};

// Class GFXUtilities.ClonedMeshComponentTranslucentOutline
// 0x0000 (FullSize[0x0340] - InheritedSize[0x0340])
class UClonedMeshComponentTranslucentOutline : public UClonedMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.ClonedMeshComponentTranslucentOutline");
		return ptr;
	}



};

// Class GFXUtilities.ClonedStaticMeshComponent
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class UClonedStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_FUWL[0x8];                                     // 0x04E8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.ClonedStaticMeshComponent");
		return ptr;
	}



};

// Class GFXUtilities.ClonedSkeletalMeshComponent
// 0x0004 (FullSize[0x0B70] - InheritedSize[0x0B6C])
class UClonedSkeletalMeshComponent : public UskeletalMeshComponent
{
public:
	unsigned char                                      UnknownData_Q48H[0x4];                                     // 0x0B6C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.ClonedSkeletalMeshComponent");
		return ptr;
	}



};

// Class GFXUtilities.CustomDepthOutlineRenderStrategy
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
public:
	class UmaterialInterface*                          _replacementMaterial;                                      // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBatchMeshCommands*>                  _translucentCopies;                                        // 0x0078(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.CustomDepthOutlineRenderStrategy");
		return ptr;
	}



};

// Class GFXUtilities.DBDReflectionCaptureSpawnerComponent
// 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
class UDBDReflectionCaptureSpawnerComponent : public USceneComponent
{
public:
	Engine_EReflectionSourceType                       ReflectionSourceType;                                      // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Z8U[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureCube*                                Cubemap;                                                   // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceCubemapAngle;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              brightness;                                                // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              contributionFactor;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CaptureOffset;                                             // 0x022C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReflectionCapture*                          SpawnedReflectionCapture;                                  // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.DBDReflectionCaptureSpawnerComponent");
		return ptr;
	}



	void SetContributionFactor(float contributionFactor);
	void SetBrightness(float brightness);
};

// Class GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent
// 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
class UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{
public:
	struct Fvector                                     InfluenceBox;                                              // 0x0240(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BoxTransitionDistance;                                     // 0x024C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               PreviewInfluenceBox;                                       // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               PreviewCaptureBox;                                         // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent");
		return ptr;
	}



};

// Class GFXUtilities.DBDCullDistanceVolumeComponent
// 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
class UDBDCullDistanceVolumeComponent : public USceneComponent
{
public:
	TArray<struct FDBDCullDistanceSizePair>            CullDistances;                                             // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InfluenceBox;                                              // 0x0220(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               enabled;                                                   // 0x022C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Unbound;                                                   // 0x022D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKUZ[0x2];                                     // 0x022E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               _previewInfluenceBox;                                      // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OVNH[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.DBDCullDistanceVolumeComponent");
		return ptr;
	}



};

// Class GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UDBDSphereReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{
public:
	float                                              InfluenceRadius;                                           // 0x0240(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J5L2[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawSphereComponent*                        PreviewInfluenceRadius;                                    // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent");
		return ptr;
	}



};

// Class GFXUtilities.GFXUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGFXUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.GFXUtilities");
		return ptr;
	}



	void STATIC_ActivateVFX(class UskeletalMeshComponent* skeletalMeshComponent, bool active);
};

// Class GFXUtilities.InFrustumComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UInFrustumComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_5SDD[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.InFrustumComponent");
		return ptr;
	}



};

// Class GFXUtilities.LightIntensityTimelineComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class ULightIntensityTimelineComponent : public UactorComponent
{
public:
	TArray<struct FLightUpdate>                        Lights;                                                    // 0x00B8(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLightMaterialUpdate>                materialHelpers;                                           // 0x00C8(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 intensityCurve;                                            // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               randomizeStart;                                            // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               randomizeLength;                                           // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPSV[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              minLength;                                                 // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              maxLength;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               normalizeCurve;                                            // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               startTicking;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ELightUnits                                 inputLightUnit;                                            // 0x00EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYVH[0x1];                                     // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTimelineFinished;                                        // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3FE[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.LightIntensityTimelineComponent");
		return ptr;
	}



	void SetRandomizeLength(bool isRandom);
	void SetMinLength(float newMinValue);
	void SetMaxLength(float newMaxValue);
	void SetLightToMaxValue();
	void SetLightCurve(class UCurveFloat* lightcurve);
	void reset();
	void RegisterForTick();
	void DeactivateTick();
	void AddMaterialHelper(class UMaterialHelper* matHelper, const struct FName& propName, float multiplier);
	void AddLight(class ULightComponent* light, float multiplier);
};

// Class GFXUtilities.MaterialHelper
// 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
class UMaterialHelper : public UBatchMeshCommands
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.MaterialHelper");
		return ptr;
	}



	void RefreshMeshes();
	void RefreshMesh(class UMeshComponent* mc);
};

// Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComp
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class UMaterialHelperUnaffectedStaticMeshComp : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_4162[0x8];                                     // 0x04E8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.MaterialHelperUnaffectedStaticMeshComp");
		return ptr;
	}



};

// Class GFXUtilities.MeshCloningFactory
// 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
class UMeshCloningFactory : public UBatchMeshCommands
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.MeshCloningFactory");
		return ptr;
	}



};

// Class GFXUtilities.OuterlineComponent
// 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
class UOuterlineComponent : public USceneComponent
{
public:
	class UmaterialInterface*                          CloneCustomDepthMaterial;                                  // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          CloneTranslucentMaterial;                                  // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    _cloneCustomDepthMaterialDynamic;                          // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _cloneTranslucentMaterialDynamic;                          // 0x0228(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _customDepthSkeletalMesh;                                  // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _overlaySkeletalMesh;                                      // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.OuterlineComponent");
		return ptr;
	}



	void SetIntensity(float intensity);
};

// Class GFXUtilities.StencilOutlineRenderStrategy
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
public:
	TArray<class UmaterialInterface*>                  _replacementMaterials;                                     // 0x0070(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBatchMeshCommands*>                  _translucentCopies;                                        // 0x0080(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RWLZ[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.StencilOutlineRenderStrategy");
		return ptr;
	}



};

// Class GFXUtilities.TranslucentOutlineRenderStrategy
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
public:
	TArray<class UmaterialInterface*>                  _replacementMaterials;                                     // 0x0070(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GFXUtilities.TranslucentOutlineRenderStrategy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
