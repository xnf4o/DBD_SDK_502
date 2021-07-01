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

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
struct UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params
{
	bool                                               IsInMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAkAudioEvent*                               AudioEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
struct UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
struct UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params
{
	class UDBDBasePlayer*                              player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AudioCharacterName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
struct UBP_Audio_KLR_Base_C_InititializeComponent_Params
{
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
struct UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
struct UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
struct UBP_Audio_KLR_Base_C_Soundbank_Killer_Unloaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX
struct UBP_Audio_KLR_Base_C_TriggerSurvivorDamageHitAudioSFX_Params
{
	class UcamperPlayer*                               Camper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	DBDSharedTypes_EAttackType                         AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               causedKo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isWeaponHit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isLightHit;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX
struct UBP_Audio_KLR_Base_C_HitImpactOnSurvivorSFX_Params
{
	class UcamperPlayer*                               Camper;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	DBDSharedTypes_EAttackType                         AttackType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isWeaponHit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
struct UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
