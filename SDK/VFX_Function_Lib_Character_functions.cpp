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

// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Uactor*                  actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomizedSkeletalMesh* CustomizedSkeletalMesh         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_Spawn_Niagara_Particles_Character_Dissolve(bool Killer, class Uactor* actor, class UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool Out, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve");

	UVFX_Function_Lib_Character_C_Spawn_Niagara_Particles_Character_Dissolve_Params params;
	params.Killer = Killer;
	params.actor = actor;
	params.CustomizedSkeletalMesh = CustomizedSkeletalMesh;
	params.Out = Out;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           run                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UslasherPlayer*          slasherPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_SpawnFootstepKillerVFX(bool run, bool left, class UslasherPlayer* slasherPlayer, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX");

	UVFX_Function_Lib_Character_C_SpawnFootstepKillerVFX_Params params;
	params.run = run;
	params.left = left;
	params.slasherPlayer = slasherPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           run                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UcamperPlayer*           CamperCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Bloody_Footprints              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Footprint_Socket               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Surface_Type                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_SpawnFootstepVFX(bool run, bool left, class UcamperPlayer* CamperCharacter, class UObject* __WorldContext, bool* Bloody_Footprints, struct FName* Footprint_Socket, int* Surface_Type)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX");

	UVFX_Function_Lib_Character_C_SpawnFootstepVFX_Params params;
	params.run = run;
	params.left = left;
	params.CamperCharacter = CamperCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bloody_Footprints != nullptr)
		*Bloody_Footprints = params.Bloody_Footprints;
	if (Footprint_Socket != nullptr)
		*Footprint_Socket = params.Footprint_Socket;
	if (Surface_Type != nullptr)
		*Surface_Type = params.Surface_Type;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Upawn*                   pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UactorComponent*         MistActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_ManageInteractiveMist(class Upawn* pawn, class UactorComponent* MistActor, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist");

	UVFX_Function_Lib_Character_C_ManageInteractiveMist_Params params;
	params.pawn = pawn;
	params.MistActor = MistActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_MakeCharacter_Visible(class UdbdPlayer* character, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible");

	UVFX_Function_Lib_Character_C_MakeCharacter_Visible_Params params;
	params.character = character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_MakeCharacter_Invisible(class UdbdPlayer* character, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible");

	UVFX_Function_Lib_Character_C_MakeCharacter_Invisible_Params params;
	params.character = character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_MaskFPV_Visible(class UdbdPlayer* character, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible");

	UVFX_Function_Lib_Character_C_MaskFPV_Visible_Params params;
	params.character = character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVFX_Function_Lib_Character_C::STATIC_MaskFPV_Hidden(class UdbdPlayer* character, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden");

	UVFX_Function_Lib_Character_C_MaskFPV_Hidden_Params params;
	params.character = character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
