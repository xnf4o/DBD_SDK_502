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

// Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay
struct UDreamInducerComponent_Authority_OnLevelReadyToPlay_Params
{
};

// Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed
struct UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Params
{
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bonus;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               triggerLoudNoise;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HadInput;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chargeChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck
struct UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.TeleportPlayerToLocation
struct UGeneratorTeleportInteraction_TeleportPlayerToLocation_Params
{
	class UdbdPlayer*                                  teleportingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
struct UGeneratorTeleportInteraction_StopBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
struct UGeneratorTeleportInteraction_StartBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
struct UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
struct UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
struct UGeneratorTeleportInteraction_OnTeleportReady_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  location;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
struct UGeneratorTeleportInteraction_OnTeleported_Params
{
	struct FTransform                                  transformBeforeTeleport;                                   // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params
{
	class Ugenerator*                                  selectedGenerator;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
struct UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
struct UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params
{
	class Ugenerator*                                  selectedGenerator;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
struct UGeneratorTeleportInteraction_OnIntroCompleted_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts
struct UGeneratorTeleportInteraction_OnBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
struct UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params
{
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  location;                                                  // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
struct UGeneratorTeleportInteraction_IsTeleportAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
struct UGeneratorTeleportInteraction_InitializeTunableValues_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
struct UGeneratorTeleportInteraction_GetOwningPlayer_Params
{
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
struct UGeneratorTeleportInteraction_GetInlineGenerator_Params
{
	class UdbdPlayer*                                  player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Ugenerator*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
struct UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params
{
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
struct UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params
{
	class UdbdPlayer*                                  playerToTeleport;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Ugenerator*                                  generator;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
struct UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params
{
	bool                                               teleported;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
struct UPlaceDreamPalletInteraction_SpawnDreamPallet_Params
{
	class UPalletTracker*                              trackerAtLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
struct UPlaceDreamPalletInteraction_InitializeTunableValues_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
struct UPlaceDreamPalletInteraction_GetTargetedPallet_Params
{
	class UPalletTracker*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
struct UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params
{
	class UPalletTracker*                              tracker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
struct USetDreamSnareInteraction_HasCancelledDreamSnare_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
struct USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
