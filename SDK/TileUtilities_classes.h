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

// BlueprintGeneratedClass TileUtilities.TileUtilities_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTileUtilities_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass TileUtilities.TileUtilities_C");
		return ptr;
	}



	void STATIC_CheckBasement(class UtileSpawnPoint* SpawnPoint, class Uactor* SpawnedObject, class UObject* __WorldContext);
	void STATIC_CheckGenerator(class UtileSpawnPoint* SpawnPoint, class Uactor* SpawnedObject, class UObject* __WorldContext);
	void STATIC_CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext);
	void STATIC_SelectSpawners(TArray<class UActorSpawner*>* spawners, int MinCount, int MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext);
	void STATIC_SelectSpawner(TArray<class UActorSpawner*>* spawners, const struct FRandomStream& Stream, class UObject* __WorldContext);
	void STATIC_SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>* SpawnPoints, class Uactor* GeneratorSpawnPoint, int GeneratorId, class UObject* __WorldContext);
	void STATIC_SelectSpawnPoint(TArray<class UtileSpawnPoint*>* SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
