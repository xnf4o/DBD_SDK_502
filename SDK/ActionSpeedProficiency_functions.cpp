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

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UinteractionDefinition*  Chargeable_Interaction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              Interacting_Player             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UdbdPlayer*>      ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<class UdbdPlayer*> UActionSpeedProficiency_C::FetchInteractingPlayers(class UinteractionDefinition* Chargeable_Interaction, class UdbdPlayer* Interacting_Player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers");

	UActionSpeedProficiency_C_FetchInteractingPlayers_Params params;
	params.Chargeable_Interaction = Chargeable_Interaction;
	params.Interacting_Player = Interacting_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChargeableInteractionDefinition* Chargeable_Interaction         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              Interacting_Player             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UActionSpeedProficiency_C::Compute_Overall_speed_including_multiple_interactors(class UChargeableInteractionDefinition* Chargeable_Interaction, class UdbdPlayer* Interacting_Player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors");

	UActionSpeedProficiency_C_Compute_Overall_speed_including_multiple_interactors_Params params;
	params.Chargeable_Interaction = Chargeable_Interaction;
	params.Interacting_Player = Interacting_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* Chargeable_Interaction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionSpeedProficiency_C::ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable_Interaction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency");

	UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params params;
	params.Chargeable_Interaction = Chargeable_Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* chargeableInteraction          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UActionSpeedProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue");

	UActionSpeedProficiency_C_GetValue_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
