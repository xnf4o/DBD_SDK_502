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

// Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool enabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled");

	UDynamicCapsuleResizerComponent_SetShrinkingEnabled_Params params;
	params.enabled = enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
// (Final, Native, Private)
void UDynamicCapsuleResizerComponent::OnRep_IsShrinkingAlwaysEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled");

	UDynamicCapsuleResizerComponent_OnRep_IsShrinkingAlwaysEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDynamicCapsuleResizerComponent::OnHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit");

	UDynamicCapsuleResizerComponent_OnHit_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.normalImpulse = normalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysicsUtilities.PrimitiveCollection.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UprimitiveComponent*     primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitiveCollection::Remove(class UprimitiveComponent* primitive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Remove");

	UPrimitiveCollection_Remove_Params params;
	params.primitive = primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysicsUtilities.PrimitiveCollection.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UprimitiveComponent*     primitive                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitiveCollection::Add(class UprimitiveComponent* primitive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitiveCollection.Add");

	UPrimitiveCollection_Add_Params params;
	params.primitive = primitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UprimitiveComponent*> primitives                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPrimitivesRegistererComponent::SetPrimitives(TArray<class UprimitiveComponent*> primitives)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives");

	UPrimitivesRegistererComponent_SetPrimitives_Params params;
	params.primitives = primitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
