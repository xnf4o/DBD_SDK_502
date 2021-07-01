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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	ULevelSequence_RemoveMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	ULevelSequence_FindOrAddMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	ULevelSequence_FindMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InMetaData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	ULevelSequence_CopyMetaData_Params params;
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          InBurnInClass                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	ULevelSequenceBurnInOptions_SetBurnIn_Params params;
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ShowBurnin
// (Final, Native, Public, BlueprintCallable)
void ULevelSequenceActor::ShowBurnin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	ULevelSequenceActor_ShowBurnin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ULevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReplicatePlayback              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	ULevelSequenceActor_SetReplicatePlayback_Params params;
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class Uactor*>          AdditionalReceivers            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::SetEventReceivers(TArray<class Uactor*> AdditionalReceivers)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	ULevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::SetBindingByTag(const struct FName& BindingTag, TArray<class Uactor*> actors, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	ULevelSequenceActor_SetBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.actors = actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class Uactor*> actors, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ULevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.actors = actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
void ULevelSequenceActor::ResetBindings()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ULevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ULevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::RemoveBindingByTag(const struct FName& tag, class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	ULevelSequenceActor_RemoveBindingByTag_Params params;
	params.tag = tag;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ULevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// (Public, Delegate)
void ULevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	ULevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ULevelSequenceActor::LoadSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	ULevelSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// (Final, Native, Public, BlueprintCallable)
void ULevelSequenceActor::HideBurnin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	ULevelSequenceActor_HideBurnin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	ULevelSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ULevelSequenceActor::GetSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ULevelSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> ULevelSequenceActor::FindNamedBindings(const struct FName& tag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	ULevelSequenceActor_FindNamedBindings_Params params;
	params.tag = tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID ULevelSequenceActor::FindNamedBinding(const struct FName& tag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	ULevelSequenceActor_FindNamedBinding_Params params;
	params.tag = tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BindingTag                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::AddBindingByTag(const struct FName& BindingTag, class Uactor* actor, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	ULevelSequenceActor_AddBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.actor = actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class Uactor* actor, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ULevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.actor = actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)
void ULevelSequenceDirector::OnCreated()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	ULevelSequenceDirector_OnCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	ULevelSequencePlayer_GetActiveCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ULevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* worldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& settings, class ULevelSequenceActor** OutActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.worldContextObject = worldContextObject;
	params.LevelSequence = LevelSequence;
	params.settings = settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DesyncThresholdSeconds         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer");

	ULevelSequenceMediaController_SynchronizeToServer_Params params;
	params.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.Play
// (Final, Native, Public, BlueprintCallable)
void ULevelSequenceMediaController::Play()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.Play");

	ULevelSequenceMediaController_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
// (Final, Native, Private)
void ULevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds");

	ULevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceMediaController.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequenceActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequenceActor* ULevelSequenceMediaController::GetSequence()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetSequence");

	ULevelSequenceMediaController_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaComponent* ULevelSequenceMediaController::GetMediaComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceMediaController.GetMediaComponent");

	ULevelSequenceMediaController_GetMediaComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
