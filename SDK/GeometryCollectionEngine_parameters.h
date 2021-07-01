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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
	TArray<struct FChaosTrailingEventData>             TrailingEvents;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GeometryCollectionEngine_EChaosTrailingSortMethod  SortMethod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
	TArray<struct FChaosCollisionEventData>            CollisionEvents;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
	TArray<struct FChaosBreakingEventData>             BreakingEvents;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GeometryCollectionEngine_EChaosBreakingSortMethod  SortMethod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
	struct FChaosTrailingEventRequestSettings          InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
	struct FChaosCollisionEventRequestSettings         InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
	struct FChaosBreakingEventRequestSettings          InSettings;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
	class UGeometryCollectionActor*                    GeometryCollectionActor;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
	class UChaosSolverActor*                           ChaosSolverActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
	class UGeometryCollectionActor*                    GeometryCollectionActor;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
	class UChaosSolverActor*                           ChaosSolverActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct UGeometryCollectionActor_RaycastSingle_Params
{
	struct Fvector                                     start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     end;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  outHit;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
	bool                                               bNewNotifyBreaks;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo                  CollisionInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent*                FracturedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
	class UGeometryCollectionComponent*                FracturedComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GeometryCollectionSimulationCore_EGeometryCollectionPhysicsTypeEnum target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldSystemMetaData*                        Metadata;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                              Field;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
	float                                              radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
struct USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo                  CollisionInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
struct UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params
{
	struct FChaosPhysicsCollisionInfo                  CollisionInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
struct UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
