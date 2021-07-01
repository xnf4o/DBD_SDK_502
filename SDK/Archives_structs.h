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

// Enum Archives.EventCountComparisonOperator
enum class Archives_EventCountComparisonOperator : uint8_t
{
	EventCountComparisonOperator__EqualTo = 0,
	EventCountComparisonOperator__GreaterThan = 1,
	EventCountComparisonOperator__GreaterThanEqualTo = 2,
	EventCountComparisonOperator__LessThan = 3,
	EventCountComparisonOperator__LessThanEqualTo = 4,
	EventCountComparisonOperator__EventCountComparisonOperator_MAX = 5,

};

// Enum Archives.EAllowedPlayerType
enum class Archives_EAllowedPlayerType : uint8_t
{
	EAllowedPlayerType__All        = 0,
	EAllowedPlayerType__KillerOnly = 1,
	EAllowedPlayerType__SurvivorOnly = 2,
	EAllowedPlayerType__EAllowedPlayerType_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
