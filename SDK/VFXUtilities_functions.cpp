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

// Function VFXUtilities.DecalSpawnerCollection.SpawnDecalAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 decalSize                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          lifeSpan                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDecalComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDecalComponent* UDecalSpawnerCollection::SpawnDecalAtLocation(const struct FName& decalSpawnerName, const struct Fvector& decalSize, const struct Fvector& location, const struct FRotator& rotation, float lifeSpan)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFXUtilities.DecalSpawnerCollection.SpawnDecalAtLocation");

	UDecalSpawnerCollection_SpawnDecalAtLocation_Params params;
	params.decalSpawnerName = decalSpawnerName;
	params.decalSize = decalSize;
	params.location = location;
	params.rotation = rotation;
	params.lifeSpan = lifeSpan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VFXUtilities.DecalSpawnerCollection.ReleaseDecalSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecalSpawnerCollection::ReleaseDecalSpawner(const struct FName& decalSpawnerName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFXUtilities.DecalSpawnerCollection.ReleaseDecalSpawner");

	UDecalSpawnerCollection_ReleaseDecalSpawner_Params params;
	params.decalSpawnerName = decalSpawnerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFXUtilities.DecalSpawnerCollection.CreateDecalSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   decalSpawnerName               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UmaterialInterface*      decalMaterial                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            poolSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// VFXUtilities_ESpawnerStrategyType spawnerStrateryType            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDecalSpawner*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDecalSpawner* UDecalSpawnerCollection::CreateDecalSpawner(class UObject* worldContextObject, const struct FName& decalSpawnerName, class UmaterialInterface* decalMaterial, int poolSize, VFXUtilities_ESpawnerStrategyType spawnerStrateryType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFXUtilities.DecalSpawnerCollection.CreateDecalSpawner");

	UDecalSpawnerCollection_CreateDecalSpawner_Params params;
	params.worldContextObject = worldContextObject;
	params.decalSpawnerName = decalSpawnerName;
	params.decalMaterial = decalMaterial;
	params.poolSize = poolSize;
	params.spawnerStrateryType = spawnerStrateryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VFXUtilities.VFXUtilities.SetParticleSystemsActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           reset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVFXUtilities::STATIC_SetParticleSystemsActive(bool active, bool reset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemsActive");

	UVFXUtilities_SetParticleSystemsActive_Params params;
	params.active = active;
	params.reset = reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFXUtilities.VFXUtilities.SetParticleSystemActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UparticleSystemComponent* particleSystem                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           reset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVFXUtilities::STATIC_SetParticleSystemActive(class UparticleSystemComponent* particleSystem, bool active, bool reset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFXUtilities.VFXUtilities.SetParticleSystemActive");

	UVFXUtilities_SetParticleSystemActive_Params params;
	params.particleSystem = particleSystem;
	params.active = active;
	params.reset = reset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
