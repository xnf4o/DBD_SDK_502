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

// Class VFXUtilities.BaseVFX
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UBaseVFX : public Uactor
{
public:
	bool                                               _shouldLoadOnServer;                                       // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_898Z[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.BaseVFX");
		return ptr;
	}



};

// Class VFXUtilities.DBDDecalComponent
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UDBDDecalComponent : public UDecalComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.DBDDecalComponent");
		return ptr;
	}



};

// Class VFXUtilities.DecalCollection
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDecalCollection : public UObject
{
public:
	TArray<class UDecalComponent*>                     _decalComponents;                                          // 0x0030(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N15D[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.DecalCollection");
		return ptr;
	}



};

// Class VFXUtilities.DecalSpawner
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UDecalSpawner : public UObject
{
public:
	class UDecalCollection*                            _decalCollection;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpawnerStrategy*                            _spawnerStrategy;                                          // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7VNY[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.DecalSpawner");
		return ptr;
	}



};

// Class VFXUtilities.DecalSpawnerCollection
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UDecalSpawnerCollection : public UObject
{
public:
	TMap<struct FName, class UDecalSpawner*>           _decalSpawners;                                            // 0x0030(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.DecalSpawnerCollection");
		return ptr;
	}



	class UDecalComponent* SpawnDecalAtLocation(const struct FName& decalSpawnerName, const struct Fvector& decalSize, const struct Fvector& location, const struct FRotator& rotation, float lifeSpan);
	void ReleaseDecalSpawner(const struct FName& decalSpawnerName);
	class UDecalSpawner* CreateDecalSpawner(class UObject* worldContextObject, const struct FName& decalSpawnerName, class UmaterialInterface* decalMaterial, int poolSize, VFXUtilities_ESpawnerStrategyType spawnerStrateryType);
};

// Class VFXUtilities.SpawnerStrategy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USpawnerStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.SpawnerStrategy");
		return ptr;
	}



};

// Class VFXUtilities.LimitAccumulationSpawnerStrategy
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class ULimitAccumulationSpawnerStrategy : public USpawnerStrategy
{
public:
	unsigned char                                      UnknownData_7YCR[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.LimitAccumulationSpawnerStrategy");
		return ptr;
	}



};

// Class VFXUtilities.NoAccumulationSpawnerStrategy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNoAccumulationSpawnerStrategy : public USpawnerStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.NoAccumulationSpawnerStrategy");
		return ptr;
	}



};

// Class VFXUtilities.VFXUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVFXUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VFXUtilities.VFXUtilities");
		return ptr;
	}



	void STATIC_SetParticleSystemsActive(bool active, bool reset);
	void STATIC_SetParticleSystemActive(class UparticleSystemComponent* particleSystem, bool active, bool reset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
