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

// Class GraphicsExtensions.GMAdaptiveShadowMapAtlas
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapAtlas : public UObject
{
public:
	unsigned char                                      UnknownData_JOWE[0xB8];                                    // 0x0030(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapAtlas");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapController
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapController : public UObject
{
public:
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UmaterialInterface*                          _lightFunctionMaterial;                                    // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceList;                                      // 0x0040(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceActivatedList;                             // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6UC2[0x68];                                    // 0x0060(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapController");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent
// 0x01E0 (FullSize[0x03F0] - InheritedSize[0x0210])
class UGMAdaptiveShadowMapControllerComponent : public USceneComponent
{
public:
	struct FBHVRPerDetailModeInt                       TileSize;                                                  // 0x0210(0x00A0) (Edit, NativeAccessSpecifierPublic)
	int                                                TileCountX;                                                // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileCountY;                                                // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   GridSize;                                                  // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GeneratedTilesPerFrame;                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJY6[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBHVRPerDetailModeInt                       MaxPreallocatedTilesPerFrame;                              // 0x02C8(0x00A0) (Edit, NativeAccessSpecifierPublic)
	bool                                               bSupportsDirectionalLights;                                // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportsSpotLights;                                       // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXPU[0x6];                                     // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          LightFunctionMaterial;                                     // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullShadowIfPixelSizeLessThan;                             // 0x0378(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreviewOnly;                                              // 0x037C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FU9O[0x13];                                    // 0x037D(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                    // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGMAdaptiveShadowMapController*              _controller;                                               // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UGMAdaptiveShadowMapSourceComponent*, class UGMAdaptiveShadowMapSource*> _shadowMapSources;                                         // 0x03A0(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapControllerComponent");
		return ptr;
	}



	void RebuildAtlas();
	bool IsControllerDonePreallocatingTiles();
	int GetTileSize();
	int GetTileCountY();
	int GetTileCountX();
	void DumpDebugInfo();
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSource
// 0x02C8 (FullSize[0x02F8] - InheritedSize[0x0030])
class UGMAdaptiveShadowMapSource : public UObject
{
public:
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULightComponent*                             _lightComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PDY6[0x2B8];                                   // 0x0040(0x02B8) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSource");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent
// 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
class UGMAdaptiveShadowMapSourceComponent : public USceneComponent
{
public:
	bool                                               bUseAutoRadius;                                            // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FC4E[0x3];                                     // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              radius;                                                    // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthMin;                                                  // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthMax;                                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Levels;                                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreGeneratedLevels;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7UG[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponent");
		return ptr;
	}



	void SetLightRadiusWithBounds(const struct Fvector& BoundingSphereCenter, float BoundingSphereRadius);
};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UGMAdaptiveShadowMapSourceComponentSpawner : public Uactor
{
public:
	bool                                               bCreateASMSourceComponentOnBeginPlay;                      // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveCastForCinematicOnlyFlagOnLights;                   // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveLightFunctionMaterialOnLights;                      // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZXU[0x1];                                     // 0x0233(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumLevelPerSource;                                         // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPreGeneratedLevelPerSource;                             // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreviewOnly;                                              // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QEZ[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional
// 0x0058 (FullSize[0x0350] - InheritedSize[0x02F8])
class UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
{
public:
	class UDirectionalLightComponent*                  _directionalLightComponent;                                // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5OFL[0x50];                                    // 0x0300(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional");
		return ptr;
	}



};

// Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot
// 0x0068 (FullSize[0x0360] - InheritedSize[0x02F8])
class UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
{
public:
	class USpotLightComponent*                         _spotLightComponent;                                       // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XUND[0x60];                                    // 0x0300(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GraphicsExtensions.GMAdaptiveShadowMapSourceSpot");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
