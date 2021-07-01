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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
struct ULevelSequence_RemoveMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
struct ULevelSequence_FindOrAddMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.FindMetaDataByClass
struct ULevelSequence_FindMetaDataByClass_Params
{
	class UClass*                                      InClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequence.CopyMetaData
struct ULevelSequence_CopyMetaData_Params
{
	class UObject*                                     InMetaData;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
struct ULevelSequenceBurnInOptions_SetBurnIn_Params
{
	struct FSoftClassPath                              InBurnInClass;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.ShowBurnin
struct ULevelSequenceActor_ShowBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ULevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
struct ULevelSequenceActor_SetReplicatePlayback_Params
{
	bool                                               ReplicatePlayback;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
struct ULevelSequenceActor_SetEventReceivers_Params
{
	TArray<class Uactor*>                              AdditionalReceivers;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetBindingByTag
struct ULevelSequenceActor_SetBindingByTag_Params
{
	struct FName                                       BindingTag;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              actors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ULevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              actors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ULevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ULevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
struct ULevelSequenceActor_RemoveBindingByTag_Params
{
	struct FName                                       tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ULevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
struct ULevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params
{
};

// Function LevelSequence.LevelSequenceActor.LoadSequence
struct ULevelSequenceActor_LoadSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.HideBurnin
struct ULevelSequenceActor_HideBurnin_Params
{
};

// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
struct ULevelSequenceActor_GetSequencePlayer_Params
{
	class ULevelSequencePlayer*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ULevelSequenceActor_GetSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBindings
struct ULevelSequenceActor_FindNamedBindings_Params
{
	struct FName                                       tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>          ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.FindNamedBinding
struct ULevelSequenceActor_FindNamedBinding_Params
{
	struct FName                                       tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.AddBindingByTag
struct ULevelSequenceActor_AddBindingByTag_Params
{
	struct FName                                       BindingTag;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ULevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBindingsFromAsset;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceDirector.OnCreated
struct ULevelSequenceDirector_OnCreated_Params
{
};

// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
struct ULevelSequencePlayer_GetActiveCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings         settings;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelSequenceActor*                         OutActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
struct ULevelSequenceMediaController_SynchronizeToServer_Params
{
	float                                              DesyncThresholdSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceMediaController.Play
struct ULevelSequenceMediaController_Play_Params
{
};

// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
struct ULevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params
{
};

// Function LevelSequence.LevelSequenceMediaController.GetSequence
struct ULevelSequenceMediaController_GetSequence_Params
{
	class ULevelSequenceActor*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
struct ULevelSequenceMediaController_GetMediaComponent_Params
{
	class UMediaComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
