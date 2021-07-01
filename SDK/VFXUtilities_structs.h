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

// Enum VFXUtilities.ESpawnerStrategyType
enum class VFXUtilities_ESpawnerStrategyType : uint8_t
{
	ESpawnerStrategyType__None     = 0,
	ESpawnerStrategyType__NoAccumulation = 1,
	ESpawnerStrategyType__LimitAccumulation = 2,
	ESpawnerStrategyType__ESpawnerStrategyType_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
