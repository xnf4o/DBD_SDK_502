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

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTemplateSequence*       InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	UTemplateSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTemplateSequenceActor::SetBinding(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	UTemplateSequenceActor_SetBinding_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* UTemplateSequenceActor::LoadSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	UTemplateSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* UTemplateSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	UTemplateSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* UTemplateSequenceActor::GetSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	UTemplateSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequence*       TemplateSequence               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UTemplateSequenceActor*  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTemplateSequencePlayer* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* UTemplateSequencePlayer::STATIC_CreateTemplateSequencePlayer(class UObject* worldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& settings, class UTemplateSequenceActor** OutActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer");

	UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params;
	params.worldContextObject = worldContextObject;
	params.TemplateSequence = TemplateSequence;
	params.settings = settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
