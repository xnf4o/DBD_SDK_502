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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GFXUtilities.MaterialMap
// 0x0010
struct FMaterialMap
{
	class UmaterialInterface*                          SrcMaterial;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          DstMaterial;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GFXUtilities.MaterialHelperOriginalMeshState
// 0x0048
struct FMaterialHelperOriginalMeshState
{
	unsigned char                                      UnknownData_YL6K[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UmaterialInterface*>                  _originalMaterials;                                        // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  _originalDynamicMaterials;                                 // 0x0018(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKK1[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct GFXUtilities.MaterialNamedGroup
// 0x0020
struct FMaterialNamedGroup
{
	struct FString                                     groupName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMaterialMap>                        Maps;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GFXUtilities.DBDCullDistanceSizePair
// 0x0008
struct FDBDCullDistanceSizePair
{
	struct FperPlatformFloat                           Size;                                                      // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FperPlatformFloat                           CullDistance;                                              // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct GFXUtilities.LightUpdate
// 0x0010
struct FLightUpdate
{
	class ULightComponent*                             light;                                                     // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUT4[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GFXUtilities.LightMaterialUpdate
// 0x0018
struct FLightMaterialUpdate
{
	class UMaterialHelper*                             MATERIAL;                                                  // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       propertyName;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
