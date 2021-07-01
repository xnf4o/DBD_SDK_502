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

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
struct UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
struct UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Params
{
};

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
struct UDynamicCapsuleResizerComponent_OnHit_Params
{
	class UprimitiveComponent*                         hitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         otherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function PhysicsUtilities.PrimitiveCollection.Remove
struct UPrimitiveCollection_Remove_Params
{
	class UprimitiveComponent*                         primitive;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PhysicsUtilities.PrimitiveCollection.Add
struct UPrimitiveCollection_Add_Params
{
	class UprimitiveComponent*                         primitive;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
struct UPrimitivesRegistererComponent_SetPrimitives_Params
{
	TArray<class UprimitiveComponent*>                 primitives;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
