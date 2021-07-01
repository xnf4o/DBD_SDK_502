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

// Function TheDoctor.SurvivorMadnessEffect.Server_AddMadness
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          madnessToAdd                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorMadnessEffect::Server_AddMadness(float madnessToAdd)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Server_AddMadness");

	USurvivorMadnessEffect_Server_AddMadness_Params params;
	params.madnessToAdd = madnessToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::OnStaticBlastReceived_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived_BP");

	USurvivorMadnessEffect_OnStaticBlastReceived_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived
// (Final, Native, Public, BlueprintCallable)
void USurvivorMadnessEffect::OnStaticBlastReceived()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnStaticBlastReceived");

	USurvivorMadnessEffect_OnStaticBlastReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::OnSnapOutOfIt_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt_BP");

	USurvivorMadnessEffect_OnSnapOutOfIt_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt
// (Final, Native, Public, BlueprintCallable)
void USurvivorMadnessEffect::OnSnapOutOfIt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnSnapOutOfIt");

	USurvivorMadnessEffect_OnSnapOutOfIt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::OnShockTherapyReceived_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived_BP");

	USurvivorMadnessEffect_OnShockTherapyReceived_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived
// (Final, Native, Public, BlueprintCallable)
void USurvivorMadnessEffect::OnShockTherapyReceived()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnShockTherapyReceived");

	USurvivorMadnessEffect_OnShockTherapyReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierUp_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::OnMadnessTierUp_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierUp_BP");

	USurvivorMadnessEffect_OnMadnessTierUp_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierDown_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::OnMadnessTierDown_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.OnMadnessTierDown_BP");

	USurvivorMadnessEffect_OnMadnessTierDown_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.Multicast_UpdateMadnessPlayerTags
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
// int                            newMadness                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorMadnessEffect::Multicast_UpdateMadnessPlayerTags(int newMadness)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_UpdateMadnessPlayerTags");

	USurvivorMadnessEffect_Multicast_UpdateMadnessPlayerTags_Params params;
	params.newMadness = newMadness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierUp
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
void USurvivorMadnessEffect::Multicast_OnMadnessTierUp()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierUp");

	USurvivorMadnessEffect_Multicast_OnMadnessTierUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierDown
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
void USurvivorMadnessEffect::Multicast_OnMadnessTierDown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Multicast_OnMadnessTierDown");

	USurvivorMadnessEffect_Multicast_OnMadnessTierDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.GetMadnessValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USurvivorMadnessEffect::GetMadnessValue()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.GetMadnessValue");

	USurvivorMadnessEffect_GetMadnessValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USurvivorMadnessEffect::GetMadnessTier()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.GetMadnessTier");

	USurvivorMadnessEffect_GetMadnessTier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheDoctor.SurvivorMadnessEffect.ChangeMadnessAudio_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            madnessTier                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorMadnessEffect::ChangeMadnessAudio_Cosmetic(int madnessTier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.ChangeMadnessAudio_Cosmetic");

	USurvivorMadnessEffect_ChangeMadnessAudio_Cosmetic_Params params;
	params.madnessTier = madnessTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP
// (Event, Protected, BlueprintEvent)
void USurvivorMadnessEffect::Authority_OnMadnessScreamTimerEnd_BP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.SurvivorMadnessEffect.Authority_OnMadnessScreamTimerEnd_BP");

	USurvivorMadnessEffect_Authority_OnMadnessScreamTimerEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDoctor.TheDoctorUtilities.IsTotallyInsane
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheDoctorUtilities::STATIC_IsTotallyInsane(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.IsTotallyInsane");

	UTheDoctorUtilities_IsTotallyInsane_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USurvivorMadnessEffect*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USurvivorMadnessEffect* UTheDoctorUtilities::STATIC_GetSurvivorMadnessEffect(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.GetSurvivorMadnessEffect");

	UTheDoctorUtilities_GetSurvivorMadnessEffect_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheDoctor.TheDoctorUtilities.GetMadnessTier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTheDoctorUtilities::STATIC_GetMadnessTier(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.GetMadnessTier");

	UTheDoctorUtilities_GetMadnessTier_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheDoctor.TheDoctorUtilities.CanGainInsanity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheDoctorUtilities::STATIC_CanGainInsanity(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDoctor.TheDoctorUtilities.CanGainInsanity");

	UTheDoctorUtilities_CanGainInsanity_Params params;
	params.player = player;

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
