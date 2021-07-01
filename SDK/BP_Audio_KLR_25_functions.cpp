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

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.isCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UdbdPlayer*              camperPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           isCharacter                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_24_C::isCharacter(class UdbdPlayer* camperPlayer, TArray<struct FString>* CharacterName, bool* isCharacter)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.isCharacter");

	UBP_Audio_KLR_24_C_isCharacter_Params params;
	params.camperPlayer = camperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterName != nullptr)
		*CharacterName = params.CharacterName;
	if (isCharacter != nullptr)
		*isCharacter = params.isCharacter;

}


// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.SelectAudioStatusStartEvent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*           AudioEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_24_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_24_C_SelectAudioStatusStartEvent_Params params;
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.HitImpactOnSurvivorSFX
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UcamperPlayer*           Camper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// DBDSharedTypes_EAttackType     AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isWeaponHit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Audio_KLR_24_C::HitImpactOnSurvivorSFX(class UcamperPlayer* Camper, DBDSharedTypes_EAttackType AttackType, bool isWeaponHit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.HitImpactOnSurvivorSFX");

	UBP_Audio_KLR_24_C_HitImpactOnSurvivorSFX_Params params;
	params.Camper = Camper;
	params.AttackType = AttackType;
	params.isWeaponHit = isWeaponHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.TriggerKillerReactionSpecificSurvivorSFX
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Camper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_24_C::TriggerKillerReactionSpecificSurvivorSFX(class UdbdPlayer* Camper)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.TriggerKillerReactionSpecificSurvivorSFX");

	UBP_Audio_KLR_24_C_TriggerKillerReactionSpecificSurvivorSFX_Params params;
	params.Camper = Camper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ChaseTriggerKillerReactionSpecificSurvivorSFX
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              Camper                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_24_C::ChaseTriggerKillerReactionSpecificSurvivorSFX(class UdbdPlayer* Camper)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ChaseTriggerKillerReactionSpecificSurvivorSFX");

	UBP_Audio_KLR_24_C_ChaseTriggerKillerReactionSpecificSurvivorSFX_Params params;
	params.Camper = Camper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ExecuteUbergraph_BP_Audio_KLR_25
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_24_C::ExecuteUbergraph_BP_Audio_KLR_25(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ExecuteUbergraph_BP_Audio_KLR_25");

	UBP_Audio_KLR_24_C_ExecuteUbergraph_BP_Audio_KLR_25_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
