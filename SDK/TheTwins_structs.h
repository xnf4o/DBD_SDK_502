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

// Enum TheTwins.EPerkInteractionObjectType
enum class TheTwins_EPerkInteractionObjectType : uint8_t
{
	EPerkInteractionObjectType__Item = 0,
	EPerkInteractionObjectType__ChestClosed = 1,
	EPerkInteractionObjectType__ChestOpen = 2,
	EPerkInteractionObjectType__EPerkInteractionObjectType_MAX = 3,

};

// Enum TheTwins.EPossessionState
enum class TheTwins_EPossessionState : uint8_t
{
	EPossessionState__NotPossessed = 0,
	EPossessionState__BeingPossessed = 1,
	EPossessionState__Possessed    = 2,
	EPossessionState__EPossessionState_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
