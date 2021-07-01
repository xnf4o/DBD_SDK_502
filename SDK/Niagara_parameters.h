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

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
struct UNiagaraActor_SetDestroyOnSystemFinish_Params
{
	bool                                               bShouldDestroyOnSystemFinish;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
struct UNiagaraActor_OnNiagaraSystemFinished_Params
{
	class UNiagaraComponent*                           FinishedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableVec4
struct UNiagaraComponent_SetVariableVec4_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    InValue;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableVec3
struct UNiagaraComponent_SetVariableVec3_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableVec2
struct UNiagaraComponent_SetVariableVec2_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableQuat
struct UNiagaraComponent_SetVariableQuat_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       InValue;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableObject
struct UNiagaraComponent_SetVariableObject_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableMaterial
struct UNiagaraComponent_SetVariableMaterial_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableLinearColor
struct UNiagaraComponent_SetVariableLinearColor_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InValue;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableInt
struct UNiagaraComponent_SetVariableInt_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableFloat
struct UNiagaraComponent_SetVariableFloat_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableBool
struct UNiagaraComponent_SetVariableBool_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetVariableActor
struct UNiagaraComponent_SetVariableActor_Params
{
	struct FName                                       InVariableName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetSeekDelta
struct UNiagaraComponent_SetSeekDelta_Params
{
	float                                              InSeekDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
	bool                                               bInRenderingEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetPreviewLODDistance
struct UNiagaraComponent_SetPreviewLODDistance_Params
{
	bool                                               bEnablePreviewLODDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewLODDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetPaused
struct UNiagaraComponent_SetPaused_Params
{
	bool                                               bInPaused;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    InValue;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       InValue;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
struct UNiagaraComponent_SetNiagaraVariableObject_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InValue;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetMaxSimTime
struct UNiagaraComponent_SetMaxSimTime_Params
{
	float                                              InMaxTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetForceSolo
struct UNiagaraComponent_SetForceSolo_Params
{
	bool                                               bInForceSolo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetDesiredAge
struct UNiagaraComponent_SetDesiredAge_Params
{
	float                                              InDesiredAge;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
	bool                                               bInCanRenderWhileSeeking;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAutoDestroy
struct UNiagaraComponent_SetAutoDestroy_Params
{
	bool                                               bInAutoDestroy;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAsset
struct UNiagaraComponent_SetAsset_Params
{
	class UNiagaraSystem*                              InAsset;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAllowScalability
struct UNiagaraComponent_SetAllowScalability_Params
{
	bool                                               bAllow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SetAgeUpdateMode
struct UNiagaraComponent_SetAgeUpdateMode_Params
{
	Niagara_ENiagaraAgeUpdateMode                      InAgeUpdateMode;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.SeekToDesiredAge
struct UNiagaraComponent_SeekToDesiredAge_Params
{
	float                                              InDesiredAge;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.ResetSystem
struct UNiagaraComponent_ResetSystem_Params
{
};

// Function Niagara.NiagaraComponent.ReinitializeSystem
struct UNiagaraComponent_ReinitializeSystem_Params
{
};

// Function Niagara.NiagaraComponent.IsPaused
struct UNiagaraComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetSeekDelta
struct UNiagaraComponent_GetSeekDelta_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetPreviewLODDistance
struct UNiagaraComponent_GetPreviewLODDistance_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InValueName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InValueName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetMaxSimTime
struct UNiagaraComponent_GetMaxSimTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetForceSolo
struct UNiagaraComponent_GetForceSolo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetDesiredAge
struct UNiagaraComponent_GetDesiredAge_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetDataInterface
struct UNiagaraComponent_GetDataInterface_Params
{
	struct FString                                     name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetAsset
struct UNiagaraComponent_GetAsset_Params
{
	class UNiagaraSystem*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.GetAgeUpdateMode
struct UNiagaraComponent_GetAgeUpdateMode_Params
{
	Niagara_ENiagaraAgeUpdateMode                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
	float                                              SimulateTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickDeltaSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraComponent.AdvanceSimulation
struct UNiagaraComponent_AdvanceSimulation_Params
{
	int                                                TickCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickDeltaSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
struct UNiagaraParticleCallbackHandler_ReceiveParticleData_Params
{
	TArray<struct FBasicParticleData>                  data;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              NiagaraSystem;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
{
	class UNiagaraComponent*                           component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
{
	class UNiagaraComponent*                           component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sizeY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
{
	class UNiagaraComponent*                           component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      dest;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttributeIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
{
	class UNiagaraComponent*                           component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      dest;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TilesX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TilesY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
	class UNiagaraSystem*                              SystemTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENCPoolMethod                              PoolingMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreCullCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              SystemTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENCPoolMethod                              PoolingMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreCullCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVolumeTexture*                              texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
struct UNiagaraFunctionLibrary_SetTextureObject_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Utexture*                                    texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UskeletalMeshComponent*                      skeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraParameterCollection*                 collection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraParameterCollectionInstance*         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    InValue;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       InValue;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
	struct FString                                     InVariableName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewBase.SetSystem
struct UNiagaraPreviewBase_SetSystem_Params
{
	class UNiagaraSystem*                              InSystem;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewBase.SetLabelText
struct UNiagaraPreviewBase_SetLabelText_Params
{
	struct FText                                       InXAxisText;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       InYAxisText;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewAxis.Num
struct UNiagaraPreviewAxis_Num_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
	class UNiagaraComponent*                           PreviewComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsXAxis;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutLabelText;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewGrid.SetPaused
struct UNiagaraPreviewGrid_SetPaused_Params
{
	bool                                               bPaused;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewGrid.GetPreviews
struct UNiagaraPreviewGrid_GetPreviews_Params
{
	TArray<class UNiagaraComponent*>                   OutPreviews;                                               // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
struct UNiagaraPreviewGrid_DeactivatePreviews_Params
{
};

// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
struct UNiagaraPreviewGrid_ActivatePreviews_Params
{
	bool                                               bReset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
struct UNiagaraScript_RaiseOnGPUCompilationComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
