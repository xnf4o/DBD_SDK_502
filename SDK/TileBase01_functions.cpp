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

// Function TileBase01.TileBase01_C.SelectSpawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UtileSpawnPoint*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UTileBase01_C::SelectSpawnPoint(TArray<class UtileSpawnPoint*>* Array)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SelectSpawnPoint");

	UTileBase01_C_SelectSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uactor*                  GeneratorSpawnPoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UChildActorComponent*> GeneratorDrivenElements        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UTileBase01_C::SetupGeneratorDrivenElements(class Uactor* GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements");

	UTileBase01_C_SetupGeneratorDrivenElements_Params params;
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratorDrivenElements != nullptr)
		*GeneratorDrivenElements = params.GeneratorDrivenElements;

}


// Function TileBase01.TileBase01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          deltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileBase01_C::ReceiveTick(float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ReceiveTick");

	UTileBase01_C_ReceiveTick_Params params;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileBase01.TileBase01_C.OnLevelLoaded
// (BlueprintCallable, BlueprintEvent)
void UTileBase01_C::OnLevelLoaded()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.OnLevelLoaded");

	UTileBase01_C_OnLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UtileSpawnPoint*         SpawnPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Uactor*                  SpawnedObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileBase01_C::SetGeneratorDrivenObjects(class UtileSpawnPoint* SpawnPoint, class Uactor* SpawnedObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects");

	UTileBase01_C_SetGeneratorDrivenObjects_Params params;
	params.SpawnPoint = SpawnPoint;
	params.SpawnedObject = SpawnedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class Uactor*>          Generators                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UTileBase01_C::SetGeneratorDrivenScoreEvent(TArray<class Uactor*> Generators)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent");

	UTileBase01_C_SetGeneratorDrivenScoreEvent_Params params;
	params.Generators = Generators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileBase01.TileBase01_C.KNY_StartSnowstorm
// (Public, BlueprintCallable, BlueprintEvent)
void UTileBase01_C::KNY_StartSnowstorm()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.KNY_StartSnowstorm");

	UTileBase01_C_KNY_StartSnowstorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileBase01_C::ExecuteUbergraph_TileBase01(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01");

	UTileBase01_C_ExecuteUbergraph_TileBase01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
