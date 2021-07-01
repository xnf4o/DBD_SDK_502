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
// Enums
//---------------------------------------------------------------------------

// Enum DBDCompetence.EImposeEffectTo
enum class DBDCompetence_EImposeEffectTo : uint8_t
{
	EImposeEffectTo__EventInstigator = 0,
	EImposeEffectTo__EventTarget   = 1,
	EImposeEffectTo__AddonOwner    = 2,
	EImposeEffectTo__AllSurvivors  = 3,
	EImposeEffectTo__EImposeEffectTo_MAX = 4,

};

// Enum DBDCompetence.ESecondWindState
enum class DBDCompetence_ESecondWindState : uint8_t
{
	ESecondWindState__Loading      = 0,
	ESecondWindState__Locked       = 1,
	ESecondWindState__Available    = 2,
	ESecondWindState__InUse        = 3,
	ESecondWindState__ESecondWindState_MAX = 4,

};

// Enum DBDCompetence.ETheMettleOfManPhase
enum class DBDCompetence_ETheMettleOfManPhase : uint8_t
{
	ETheMettleOfManPhase__Uninitialized = 0,
	ETheMettleOfManPhase__GainingTokens = 1,
	ETheMettleOfManPhase__CancelNextAttack = 2,
	ETheMettleOfManPhase__RevealWhenHealthy = 3,
	ETheMettleOfManPhase__RevealedToKiller = 4,
	ETheMettleOfManPhase__ETheMettleOfManPhase_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDCompetence.WindowBlockableList
// 0x0010
struct FWindowBlockableList
{
	TArray<class UBlockableComponent*>                 Blockables;                                                // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddonParams
// 0x0010
struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams
{
	struct FName                                       _statusEffectID;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              _customParam;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
