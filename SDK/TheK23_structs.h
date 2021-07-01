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

// Enum TheK23.EFlurryOfKnivesInteractionState
enum class TheK23_EFlurryOfKnivesInteractionState : uint8_t
{
	EFlurryOfKnivesInteractionState__Charging = 0,
	EFlurryOfKnivesInteractionState__Aiming = 1,
	EFlurryOfKnivesInteractionState__Throwing = 2,
	EFlurryOfKnivesInteractionState__Finished = 3,
	EFlurryOfKnivesInteractionState__EFlurryOfKnivesInteractionState_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
