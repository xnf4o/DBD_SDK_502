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

// Class ApexDestruction.DestructibleActor
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UDestructibleActor : public Uactor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnActorFracture;                                           // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}



};

// Class ApexDestruction.DestructibleComponent
// 0x00E0 (FullSize[0x07B0] - InheritedSize[0x06D0])
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      bFractureEffectOverride : 1;                               // 0x06D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAU7[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x06D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHardSleeping;                                       // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z04N[0x3];                                     // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LargeChunkThreshold;                                       // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8Z2Z[0x10];                                    // 0x06F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComponentFracture;                                       // 0x0700(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PGMI[0xA0];                                    // 0x0710(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}



	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct Fvector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct Fvector& HitLocation, const struct Fvector& impulseDir, float ImpulseStrength);
};

// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureMaterial                           FractureMaterialDesc;                                      // 0x0034(0x0024) (Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXJP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct Fvector>                             VoronoiSites;                                              // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalSubmeshCount;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2R3F[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UmaterialInterface*>                  Materials;                                                 // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                           // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3AP[0x28];                                    // 0x0098(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}



};

// Class ApexDestruction.DestructibleMesh
// 0x00A0 (FullSize[0x0428] - InheritedSize[0x0388])
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                             // 0x0388(0x0088) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FFractureEffect>                     FractureEffects;                                           // 0x0410(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V1LU[0x8];                                     // 0x0420(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
