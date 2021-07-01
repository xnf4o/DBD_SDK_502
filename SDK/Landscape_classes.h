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

// Class Landscape.ControlPointMeshActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UControlPointMeshActor : public Uactor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                 // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.ControlPointMeshActor");
		return ptr;
	}



};

// Class Landscape.ControlPointMeshComponent
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_KD40[0x8];                                     // 0x04E8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x0328 (FullSize[0x0558] - InheritedSize[0x0230])
class ULandscapeProxy : public Uactor
{
public:
	class ULandscapeSplinesComponent*                  splineComponent;                                           // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       LandscapeGuid;                                             // 0x0238(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   LandscapeSectionOffset;                                    // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODLevel;                                               // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistanceFactor;                                         // 0x0254(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLODFalloff>        LODFalloff;                                                // 0x0258(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFDZ[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ComponentScreenSizeToUseSubSections;                       // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOD0ScreenSize;                                            // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOD0DistributionSetting;                                   // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistributionSetting;                                    // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TessellationComponentScreenSize;                           // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTessellationComponentScreenSizeFalloff;                 // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z3CF[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationComponentScreenSizeFalloff;                    // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OccluderGeometryLOD;                                       // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                         // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UphysicalMaterial*                           DefaultPhysMaterial;                                       // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StreamingDistanceMultiplier;                               // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDL0[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          LandscapeMaterial;                                         // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8V7[0x20];                                    // 0x0298(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          LandscapeHoleMaterial;                                     // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                                // 0x02C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMeshHoles;                                                // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MeshHolesMaxLod;                                           // 0x02D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0OB[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                    // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VirtualTextureNumLods;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VirtualTextureLodBias;                                     // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ERuntimeVirtualTextureMainPassType          VirtualTextureRenderPassType;                              // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PBFA[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NegativeZBoundsExtension;                                  // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKDV[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                       // 0x0300(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                       // 0x0310(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                         // 0x0320(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY31[0x64];                                    // 0x0330(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasLandscapeGrass;                                        // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1L0[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticLightingResolution;                                  // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x039C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x039C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastFarShadow : 1;                                        // 0x039C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QB1K[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                          // 0x03A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FlightingChannels                           lightingChannels;                                          // 0x03A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1LTN[0x2];                                     // 0x03A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;            // 0x03A4(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRenderCustomDepth : 1;                                    // 0x03A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ZFQ[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomDepthStencilValue;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LDMaxDrawDistance;                                         // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                         // 0x03B0(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x03CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSA9[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyInstance                               BodyInstance;                                              // 0x03D8(0x0118) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateOverlapEvents : 1;                                // 0x04F0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;              // 0x04F0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GP0S[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ComponentSizeQuads;                                        // 0x04F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsedForNavigation : 1;                                    // 0x0500(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFillCollisionUnderLandscapeForNavmesh : 1;                // 0x0500(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACVO[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseDynamicMaterialInstance;                               // 0x0504(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ENavDataGatheringMode                       NavigationGeometryGatheringMode;                           // 0x0505(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;              // 0x0506(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLayersContent;                                         // 0x0507(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                         // 0x0508(0x0050) (Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}



	void SetLandscapeMaterialVectorParameterValue(const struct FName& parameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(const struct FName& parameterName, class Utexture* Value);
	void SetLandscapeMaterialScalarParameterValue(const struct FName& parameterName, float Value);
	void EditorSetLandscapeMaterial(class UmaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class UsplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Class Landscape.Landscape
// 0x0000 (FullSize[0x0558] - InheritedSize[0x0558])
class ULandscape : public ULandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}



};

// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ULandscapeBlueprintBrushBase : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}



	void RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UTexture2D*>* OutStreamableAssets);
};

// Class Landscape.LandscapeComponent
// 0x01F8 (FullSize[0x0620] - InheritedSize[0x0428])
class ULandscapeComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_ZEI5[0x4];                                     // 0x0428(0x0004) Fix Super Size
	int                                                SectionBaseY;                                              // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8OZ[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          OverrideMaterial;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          OverrideHoleMaterial;                                      // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                         // 0x0450(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                         // 0x0460(0x0010) (ZeroConstructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                  // 0x0470(0x0010) (ZeroConstructor, Transient, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                   // 0x0480(0x0010) (ZeroConstructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;               // 0x0490(0x0010) (ZeroConstructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  XYOffsetmapTexture;                                        // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QPD7[0x8];                                     // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    WeightmapScaleBias;                                        // 0x04B0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightmapSubsectionOffset;                                 // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_09RJ[0xC];                                     // 0x04C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    HeightmapScaleBias;                                        // 0x04D0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fbox                                        CachedLocalBox;                                            // 0x04E0(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                        // 0x04FC(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapTexture;                                          // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                 // 0x0520(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                          WeightmapTextures;                                         // 0x0530(0x0010) (ZeroConstructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fguid                                       MapBuildDataId;                                            // 0x0540(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fguid>                               IrrelevantLights;                                          // 0x0550(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x0560(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x0564(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NegativeZBoundsExtension;                                  // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x056C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticLightingResolution;                                  // 0x0570(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedLOD;                                                 // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias;                                                   // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       StateId;                                                   // 0x057C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       BakedTextureMaterialGuid;                                  // 0x058C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPR5[0x4];                                     // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                   // 0x05A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MobileBlendableLayerMask;                                  // 0x05A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L0WV[0x7];                                     // 0x05A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          MobileMaterialInterface;                                   // 0x05B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  MobileMaterialInterfaces;                                  // 0x05B8(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                   // 0x05C8(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0XA[0x48];                                    // 0x05D8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}



	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct Fvector& InLocation, const struct FName& InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(const struct Fvector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
};

// Class Landscape.LandscapeGizmoActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ULandscapeGizmoActor : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
class ULandscapeGizmoActiveActor : public ULandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData_FMXH[0x50];                                    // 0x0230(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ULandscapeGizmoRenderComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_76FZ[0x8];                                     // 0x0428(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDensityScaling : 1;                                 // 0x0040(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83LM[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0048(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                              // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementJitter;                                           // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                         // 0x0058(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                           // 0x005C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x0060(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x0061(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKND[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (FullSize[0x0508] - InheritedSize[0x0428])
class ULandscapeHeightfieldCollisionComponent : public UprimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                       // 0x0428(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseX;                                              // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionSizeQuads;                                        // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                            // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionSizeQuads;                                  // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LH7C[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              CollisionQuadFlags;                                        // 0x0450(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       HeightfieldGuid;                                           // 0x0460(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fbox                                        CachedLocalBox;                                            // 0x0470(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                           // 0x048C(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZT4T[0x10];                                    // 0x04A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UphysicalMaterial*>                   CookedPhysicalMaterials;                                   // 0x04B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F33N[0x40];                                    // 0x04C8(0x0040) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}



	class ULandscapeComponent* GetRenderComponent();
};

// Class Landscape.LandscapeInfo
// 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ULandscape>                   LandscapeActor;                                            // 0x0030(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       LandscapeGuid;                                             // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentNumSubsections;                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     DrawScale;                                                 // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2B07[0xA4];                                    // 0x0074(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULandscapeStreamingProxy*>            Proxies;                                                   // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KIXH[0xF0];                                    // 0x0128(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData_571U[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                 // 0x0030(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0GF[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UphysicalMaterial*                           PhysMaterial;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Hardness;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LayerUsageDebugColor;                                      // 0x004C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LY7X[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0018 (FullSize[0x0430] - InheritedSize[0x0418])
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                                      // 0x0418(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsLayerThumbnail : 1;                                     // 0x0428(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableTessellation : 1;                                  // 0x0428(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMobile : 1;                                               // 0x0428(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEditorToolUsage : 1;                                      // 0x0428(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DQ2S[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0018 (FullSize[0x0520] - InheritedSize[0x0508])
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct Fguid                                       MeshGuid;                                                  // 0x0508(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4I1[0x8];                                     // 0x0518(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ULandscapeMeshProxyActor : public Uactor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                               // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0028 (FullSize[0x0510] - InheritedSize[0x04E8])
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct Fguid                                       LandscapeGuid;                                             // 0x04E8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                       // 0x04F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int8_t                                             ProxyLOD;                                                  // 0x0508(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WS7R[0x7];                                     // 0x0509(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeSettings
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_23RG[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0038 (FullSize[0x0460] - InheritedSize[0x0428])
class ULandscapeSplinesComponent : public UprimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                             // 0x0428(0x0010) (ZeroConstructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                  // 0x0438(0x0010) (ZeroConstructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                               // 0x0448(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E5M3[0x8];                                     // 0x0458(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}



	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

// Class Landscape.LandscapeSplineControlPoint
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct Fvector                                     location;                                                  // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LayerWidthRatio;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideFalloff;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftSideFalloffFactor;                                     // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightSideFalloffFactor;                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftSideLayerFalloffFactor;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightSideLayerFalloffFactor;                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndFalloff;                                                // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                         // 0x0068(0x0010) (ZeroConstructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>         points;                                                    // 0x0078(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fbox                                        Bounds;                                                    // 0x0088(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UEMB[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                        // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                          // 0x0030(0x0030) (Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          SplineInfo;                                                // 0x0060(0x0018) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>         points;                                                    // 0x0078(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fbox                                        Bounds;                                                    // 0x0088(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K6KE[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                       // 0x00A8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}



};

// Class Landscape.LandscapeStreamingProxy
// 0x0020 (FullSize[0x0578] - InheritedSize[0x0558])
class ULandscapeStreamingProxy : public ULandscapeProxy
{
public:
	TLazyObjectPtr<class ULandscape>                   LandscapeActor;                                            // 0x0558(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7KXY[0x4];                                     // 0x0574(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}



};

// Class Landscape.LandscapeSubsystem
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class ULandscapeSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_2C4B[0x68];                                    // 0x0038(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeSubsystem");
		return ptr;
	}



};

// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0030(0x0020) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       LayerGuid;                                                 // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ExpressionGUID;                                            // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<Landscape_ETerrainCoordMappingType>    MappingType;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                              // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QFK6[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MappingScale;                                              // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingRotation;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanU;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanV;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MICE[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       parameterName;                                             // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ExpressionGUID;                                            // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                 // 0x0048(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9C38[0xC];                                     // 0x0058(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerNotUsed;                                              // 0x0064(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOB0[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       parameterName;                                             // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviewUsed : 1;                                           // 0x008C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DINC[0x3];                                     // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       ExpressionGUID;                                            // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                      // 0x0048(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6X2R[0xC];                                     // 0x0058(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            Layer;                                                     // 0x0064(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EKM[0xC];                                     // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       parameterName;                                             // 0x0080(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ConstBase;                                                 // 0x0090(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ExpressionGUID;                                            // 0x009C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C43E[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct Fguid                                       ExpressionGUID;                                            // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
