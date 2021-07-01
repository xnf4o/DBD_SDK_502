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

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
struct UActionSpeedProficiency_C_FetchInteractingPlayers_Params
{
	class UinteractionDefinition*                      Chargeable_Interaction;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UdbdPlayer*                                  Interacting_Player;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UdbdPlayer*>                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
struct UActionSpeedProficiency_C_Compute_Overall_speed_including_multiple_interactors_Params
{
	class UChargeableInteractionDefinition*            Chargeable_Interaction;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UdbdPlayer*                                  Interacting_Player;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
struct UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params
{
	class UChargeableInteractionDefinition*            Chargeable_Interaction;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
struct UActionSpeedProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition*            chargeableInteraction;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UdbdPlayer*                                  player;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
