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

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothConfigCommon : public UClothConfigBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothingAssetCustomData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x01A8 (FullSize[0x01F8] - InheritedSize[0x0050])
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class UClothConfigBase*>        ClothConfigs;                                              // 0x0058(0x0050) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ClothSharedSimConfig;                                      // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ClothSimConfig;                                            // 0x00B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                            ChaosClothSimConfig;                                       // 0x00B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClothLODDataCommon_Legacy*>          ClothLodData;                                              // 0x00C0(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>                 LodData;                                                   // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        LodMap;                                                    // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               UsedBoneNames;                                             // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        UsedBoneIndices;                                           // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReferenceBoneIndex;                                        // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LNRT[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClothingAssetCustomData*                    CustomData;                                                // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig_Legacy                         ClothConfig;                                               // 0x0120(0x00D4) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3GNH[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}



};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                          // 0x0030(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                      ClothPhysicalMeshData;                                     // 0x0038(0x00F8) (NativeAccessSpecifierPublic)
	struct FClothCollisionData                         CollisionData;                                             // 0x0130(0x0040) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SHAR[0x20];                                    // 0x0170(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
