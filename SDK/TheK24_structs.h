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

// Enum TheK24.EContaminator
enum class TheK24_EContaminator : uint8_t
{
	EContaminator__Zombie          = 0,
	EContaminator__Killer          = 1,
	EContaminator__Mori            = 2,
	EContaminator__EContaminator_MAX = 3,

};

// Enum TheK24.EZombieState
enum class TheK24_EZombieState : uint8_t
{
	EZombieState__InPool           = 0,
	EZombieState__Spawn            = 1,
	EZombieState__Patrolling       = 2,
	EZombieState__Searching        = 3,
	EZombieState__Chase            = 4,
	EZombieState__Attack           = 5,
	EZombieState__Dying            = 6,
	EZombieState__Dead             = 7,
	EZombieState__ChaseSearching   = 8,
	EZombieState__InPlaceIdle      = 9,
	EZombieState__Stunned          = 10,
	EZombieState__FallSmash        = 11,
	EZombieState__AttackCooldown   = 12,
	EZombieState__Stop             = 13,
	EZombieState__EZombieState_MAX = 14,

};

// Enum TheK24.EZombieGender
enum class TheK24_EZombieGender : uint8_t
{
	EZombieGender__Male            = 0,
	EZombieGender__Female          = 1,
	EZombieGender__EZombieGender_MAX = 2,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
