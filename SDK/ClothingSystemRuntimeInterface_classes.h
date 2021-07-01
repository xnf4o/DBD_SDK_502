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

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothConfigBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothConfigBase");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothingSimulationFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UClothingSimulationInteractor : public UObject
{
public:
	unsigned char                                      UnknownData_UZ7K[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}



	void SetAnimDriveSpringStiffness(float InStiffness);
	void PhysicsAssetUpdated();
	void EnableGravityOverride(const struct Fvector& InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClothSharedSimConfigBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       AssetGuid;                                                 // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct Fvector>                             Vertices;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             Normals;                                                   // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Indices;                                                   // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      InverseMasses;                                             // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>                  BoneData;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFixedVerts;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBoneWeights;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   SelfCollisionIndices;                                      // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4AL[0x50];                                    // 0x0098(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
