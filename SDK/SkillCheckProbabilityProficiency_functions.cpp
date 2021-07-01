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

// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* chargeableInteraction          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USkillCheckProbabilityProficiency_C::GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive");

	USkillCheckProbabilityProficiency_C_GetIsActive_Params params;
	params.chargeableInteraction = chargeableInteraction;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Value                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// DBDSharedTypes_EStatusEffectType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
DBDSharedTypes_EStatusEffectType USkillCheckProbabilityProficiency_C::GetType(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType");

	USkillCheckProbabilityProficiency_C_GetType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UChargeableInteractionDefinition* chargeableInteraction          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UdbdPlayer*              player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float USkillCheckProbabilityProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue");

	USkillCheckProbabilityProficiency_C_GetValue_Params params;
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
