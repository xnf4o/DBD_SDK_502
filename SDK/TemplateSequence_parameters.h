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

// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct UTemplateSequenceActor_SetSequence_Params
{
	class UTemplateSequence*                           InSequence;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct UTemplateSequenceActor_SetBinding_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct UTemplateSequenceActor_LoadSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct UTemplateSequenceActor_GetSequencePlayer_Params
{
	class UTemplateSequencePlayer*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct UTemplateSequenceActor_GetSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequence*                           TemplateSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings         settings;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UTemplateSequenceActor*                      OutActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
