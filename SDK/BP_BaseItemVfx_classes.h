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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class UBP_BaseItemVfx_C : public UItemVfx
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_BaseItemVfx.BP_BaseItemVfx_C");
		return ptr;
	}



	void SpawnEmitter(class UparticleSystem* EmitterTemplate, class UskeletalMeshComponent* AttachToComponent, const struct FName& AttachPointName, const struct Fvector& location, const struct FRotator& rotation, const struct Fvector& scale, bool Absolute_Rotation, class UparticleSystemComponent** Particle_System);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
