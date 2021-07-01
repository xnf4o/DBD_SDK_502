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
// Parameters
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnPoint
struct UTileBase01_C_SelectSpawnPoint_Params
{
	TArray<class UtileSpawnPoint*>                     Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
struct UTileBase01_C_SetupGeneratorDrivenElements_Params
{
	class Uactor*                                      GeneratorSpawnPoint;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>                GeneratorDrivenElements;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.ReceiveTick
struct UTileBase01_C_ReceiveTick_Params
{
	float                                              deltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.OnLevelLoaded
struct UTileBase01_C_OnLevelLoaded_Params
{
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
struct UTileBase01_C_SetGeneratorDrivenObjects_Params
{
	class UtileSpawnPoint*                             SpawnPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Uactor*                                      SpawnedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
struct UTileBase01_C_SetGeneratorDrivenScoreEvent_Params
{
	TArray<class Uactor*>                              Generators;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.KNY_StartSnowstorm
struct UTileBase01_C_KNY_StartSnowstorm_Params
{
};

// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
struct UTileBase01_C_ExecuteUbergraph_TileBase01_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
