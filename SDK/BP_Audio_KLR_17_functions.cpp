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

// Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.OnKillerSoundbankLoaded
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_16_C::OnKillerSoundbankLoaded(AkAudio_EAkResult result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_16_C_OnKillerSoundbankLoaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.SelectAudioStatusStartEvent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*           AudioEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_16_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_16_C_SelectAudioStatusStartEvent_Params params;
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_16_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ReceiveBeginPlay");

	UBP_Audio_KLR_16_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_16_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ReceiveEndPlay");

	UBP_Audio_KLR_16_C_ReceiveEndPlay_Params params;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ExecuteUbergraph_BP_Audio_KLR_17
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_16_C::ExecuteUbergraph_BP_Audio_KLR_17(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_17.BP_Audio_KLR_16_C.ExecuteUbergraph_BP_Audio_KLR_17");

	UBP_Audio_KLR_16_C_ExecuteUbergraph_BP_Audio_KLR_17_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
