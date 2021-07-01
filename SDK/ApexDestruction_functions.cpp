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

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       NewMesh                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh");

	UDestructibleComponent_SetDestructibleMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh");

	UDestructibleComponent_GetDestructibleMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 HurtOrigin                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFullDamage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct Fvector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage");

	UDestructibleComponent_ApplyRadiusDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impulseDir                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ImpulseStrength                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct Fvector& HitLocation, const struct Fvector& impulseDir, float ImpulseStrength)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyDamage");

	UDestructibleComponent_ApplyDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.impulseDir = impulseDir;
	params.ImpulseStrength = ImpulseStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
