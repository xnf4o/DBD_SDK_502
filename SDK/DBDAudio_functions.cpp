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

// Function DBDAudio.AudioUtilities.PostAkAudioEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioUtilities::STATIC_PostAkAudioEvent(class UAkAudioEvent* AudioEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.PostAkAudioEvent");

	UAudioUtilities_PostAkAudioEvent_Params params;
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAudio.InteractionAudioComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           akEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInteractionAudioComponent::PostAkEvent(class UAkAudioEvent* akEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAudio.InteractionAudioComponent.PostAkEvent");

	UInteractionAudioComponent_PostAkEvent_Params params;
	params.akEvent = akEvent;

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
