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

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
{
	bool                                               IsHunting;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
{
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
{
	bool                                               ready;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
{
};

// Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
struct UElevensSodaAddon_Multicast_UnhighlightGenerator_Params
{
	class Ugenerator*                                  generator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
struct UElevensSodaAddon_Multicast_HighlightGenerator_Params
{
	class Ugenerator*                                  generator;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
