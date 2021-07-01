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

// BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVFX_Function_Lib_Character_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass VFX_Function_Lib_Character.VFX_Function_Lib_Character_C");
		return ptr;
	}



	void STATIC_Spawn_Niagara_Particles_Character_Dissolve(bool Killer, class Uactor* actor, class UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool Out, class UObject* __WorldContext);
	void STATIC_SpawnFootstepKillerVFX(bool run, bool left, class UslasherPlayer* slasherPlayer, class UObject* __WorldContext);
	void STATIC_SpawnFootstepVFX(bool run, bool left, class UcamperPlayer* CamperCharacter, class UObject* __WorldContext, bool* Bloody_Footprints, struct FName* Footprint_Socket, int* Surface_Type);
	void STATIC_ManageInteractiveMist(class Upawn* pawn, class UactorComponent* MistActor, class UObject* __WorldContext);
	void STATIC_MakeCharacter_Visible(class UdbdPlayer* character, class UObject* __WorldContext);
	void STATIC_MakeCharacter_Invisible(class UdbdPlayer* character, class UObject* __WorldContext);
	void STATIC_MaskFPV_Visible(class UdbdPlayer* character, class UObject* __WorldContext);
	void STATIC_MaskFPV_Hidden(class UdbdPlayer* character, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
