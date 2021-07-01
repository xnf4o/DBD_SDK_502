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

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UparticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UskeletalMeshComponent*  AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Fvector                 location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct Fvector                 scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Absolute_Rotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UparticleSystemComponent* Particle_System                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BaseItemVfx_C::SpawnEmitter(class UparticleSystem* EmitterTemplate, class UskeletalMeshComponent* AttachToComponent, const struct FName& AttachPointName, const struct Fvector& location, const struct FRotator& rotation, const struct Fvector& scale, bool Absolute_Rotation, class UparticleSystemComponent** Particle_System)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter");

	UBP_BaseItemVfx_C_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.location = location;
	params.rotation = rotation;
	params.scale = scale;
	params.Absolute_Rotation = Absolute_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Particle_System != nullptr)
		*Particle_System = params.Particle_System;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
