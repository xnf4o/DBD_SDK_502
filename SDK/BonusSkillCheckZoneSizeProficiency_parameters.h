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

// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue
struct UBonusSkillCheckZoneSizeProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UdbdPlayer*                                  player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive
struct UBonusSkillCheckZoneSizeProficiency_C_GetIsActive_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UdbdPlayer*                                  player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType
struct UBonusSkillCheckZoneSizeProficiency_C_GetType_Params
{
	float                                              Value;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	DBDSharedTypes_EStatusEffectType                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
