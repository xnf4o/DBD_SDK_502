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

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.isCharacter
struct UBP_Audio_KLR_24_C_isCharacter_Params
{
	class UdbdPlayer*                                  camperPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             CharacterName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               isCharacter;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.SelectAudioStatusStartEvent
struct UBP_Audio_KLR_24_C_SelectAudioStatusStartEvent_Params
{
	bool                                               IsInMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAkAudioEvent*                               AudioEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.HitImpactOnSurvivorSFX
struct UBP_Audio_KLR_24_C_HitImpactOnSurvivorSFX_Params
{
	class UcamperPlayer*                               Camper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	DBDSharedTypes_EAttackType                         AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isWeaponHit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.TriggerKillerReactionSpecificSurvivorSFX
struct UBP_Audio_KLR_24_C_TriggerKillerReactionSpecificSurvivorSFX_Params
{
	class UdbdPlayer*                                  Camper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ChaseTriggerKillerReactionSpecificSurvivorSFX
struct UBP_Audio_KLR_24_C_ChaseTriggerKillerReactionSpecificSurvivorSFX_Params
{
	class UdbdPlayer*                                  Camper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_25.BP_Audio_KLR_24_C.ExecuteUbergraph_BP_Audio_KLR_25
struct UBP_Audio_KLR_24_C_ExecuteUbergraph_BP_Audio_KLR_25_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
