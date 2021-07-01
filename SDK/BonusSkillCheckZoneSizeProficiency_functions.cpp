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

// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* chargeableInteraction          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBonusSkillCheckZoneSizeProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue");

	UBonusSkillCheckZoneSizeProficiency_C_GetValue_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* chargeableInteraction          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBonusSkillCheckZoneSizeProficiency_C::GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive");

	UBonusSkillCheckZoneSizeProficiency_C_GetIsActive_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// DBDSharedTypes_EStatusEffectType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
DBDSharedTypes_EStatusEffectType UBonusSkillCheckZoneSizeProficiency_C::GetType(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType");

	UBonusSkillCheckZoneSizeProficiency_C_GetType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
