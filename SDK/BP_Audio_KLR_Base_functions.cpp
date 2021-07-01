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

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*           AudioEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params params;
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::OnKillerSoundbankLoaded(AkAudio_EAkResult result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AudioCharacterName             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::GetAudioCharacterName(class UDBDBasePlayer* player, struct FName* AudioCharacterName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName");

	UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioCharacterName != nullptr)
		*AudioCharacterName = params.AudioCharacterName;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
// (Protected, BlueprintCallable, BlueprintEvent)
void UBP_Audio_KLR_Base_C::InititializeComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent");

	UBP_Audio_KLR_Base_C_InititializeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay");

	UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay");

	UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params params;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::Soundbank_Killer_Unloaded(AkAudio_EAkResult result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded");

	UBP_Audio_KLR_Base_C_Soundbank_Killer_Unloaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           Camper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// DBDSharedTypes_EAttackType     AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           causedKo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isWeaponHit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isLightHit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_Base_C::TriggerSurvivorDamageHitAudioSFX(class UcamperPlayer* Camper, DBDSharedTypes_EAttackType AttackType, bool causedKo, bool isWeaponHit, bool isLightHit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX");

	UBP_Audio_KLR_Base_C_TriggerSurvivorDamageHitAudioSFX_Params params;
	params.Camper = Camper;
	params.AttackType = AttackType;
	params.causedKo = causedKo;
	params.isWeaponHit = isWeaponHit;
	params.isLightHit = isLightHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           Camper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// DBDSharedTypes_EAttackType     AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isWeaponHit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_Base_C::HitImpactOnSurvivorSFX(class UcamperPlayer* Camper, DBDSharedTypes_EAttackType AttackType, bool isWeaponHit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX");

	UBP_Audio_KLR_Base_C_HitImpactOnSurvivorSFX_Params params;
	params.Camper = Camper;
	params.AttackType = AttackType;
	params.isWeaponHit = isWeaponHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ExecuteUbergraph_BP_Audio_KLR_Base(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base");

	UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
