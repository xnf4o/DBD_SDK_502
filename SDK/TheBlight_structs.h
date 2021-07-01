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

// Enum TheBlight.EWallGrabState
enum class TheBlight_EWallGrabState : uint8_t
{
	EWallGrabState__None           = 0,
	EWallGrabState__Charging       = 1,
	EWallGrabState__Charged        = 2,
	EWallGrabState__NonLethalCharge = 3,
	EWallGrabState__Adjusting      = 4,
	EWallGrabState__Holding        = 5,
	EWallGrabState__LethalCharge   = 6,
	EWallGrabState__Cooldown       = 7,
	EWallGrabState__Sliding        = 8,
	EWallGrabState__Attacking      = 9,
	EWallGrabState__EWallGrabState_MAX = 10,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
