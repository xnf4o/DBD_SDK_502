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

// Enum DBDUIPresenters.EContextSection
enum class DBDUIPresenters_EContextSection : uint8_t
{
	EContextSection__None          = 0,
	EContextSection__Hud           = 1,
	EContextSection__MainMenu      = 2,
	EContextSection__Lobby         = 3,
	EContextSection__Store         = 4,
	EContextSection__Tally         = 5,
	EContextSection__Archive       = 6,
	EContextSection__Credits       = 7,
	EContextSection__Onboarding    = 8,
	EContextSection__EContextSection_MAX = 9,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
