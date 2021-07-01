// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TileUtilities.TileUtilities_C.CheckBasement
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UtileSpawnPoint*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Uactor*                  SpawnedObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CheckBasement(class UtileSpawnPoint* SpawnPoint, class Uactor* SpawnedObject, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CheckBasement");

	UTileUtilities_C_CheckBasement_Params params;
	params.SpawnPoint = SpawnPoint;
	params.SpawnedObject = SpawnedObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileUtilities.TileUtilities_C.CheckGenerator
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UtileSpawnPoint*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Uactor*                  SpawnedObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CheckGenerator(class UtileSpawnPoint* SpawnPoint, class Uactor* SpawnedObject, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CheckGenerator");

	UTileUtilities_C_CheckGenerator_Params params;
	params.SpawnPoint = SpawnPoint;
	params.SpawnedObject = SpawnedObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileUtilities.TileUtilities_C.CallForSpawn
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorSpawner*           ActorSpawner                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CallForSpawn");

	UTileUtilities_C_CallForSpawn_Params params;
	params.ActorSpawner = ActorSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileUtilities.TileUtilities_C.SelectSpawners
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorSpawner*>   spawners                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int                            MinCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream           Stream                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawners(TArray<class UActorSpawner*>* spawners, int MinCount, int MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawners");

	UTileUtilities_C_SelectSpawners_Params params;
	params.MinCount = MinCount;
	params.MaxCount = MaxCount;
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (spawners != nullptr)
		*spawners = params.spawners;

}


// Function TileUtilities.TileUtilities_C.SelectSpawner
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorSpawner*>   spawners                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FRandomStream           Stream                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawner(TArray<class UActorSpawner*>* spawners, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawner");

	UTileUtilities_C_SelectSpawner_Params params;
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (spawners != nullptr)
		*spawners = params.spawners;

}


// Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UChildActorComponent*> SpawnPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class Uactor*                  GeneratorSpawnPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GeneratorId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>* SpawnPoints, class Uactor* GeneratorSpawnPoint, int GeneratorId, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements");

	UTileUtilities_C_SetupGeneratorDrivenElements_Params params;
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;
	params.GeneratorId = GeneratorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;

}


// Function TileUtilities.TileUtilities_C.SelectSpawnPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UtileSpawnPoint*> SpawnPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FRandomStream           Stream                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawnPoint(TArray<class UtileSpawnPoint*>* SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawnPoint");

	UTileUtilities_C_SelectSpawnPoint_Params params;
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
