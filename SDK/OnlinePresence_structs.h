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

// Enum OnlinePresence.ERichPresenceUserType
enum class OnlinePresence_ERichPresenceUserType : uint8_t
{
	ERichPresenceUserType__Player  = 0,
	ERichPresenceUserType__Server  = 1,
	ERichPresenceUserType__ERichPresenceUserType_MAX = 2,

};

// Enum OnlinePresence.ERichPresenceStatus
enum class OnlinePresence_ERichPresenceStatus : uint8_t
{
	ERichPresenceStatus__Offline   = 0,
	ERichPresenceStatus__Connected = 1,
	ERichPresenceStatus__InMenus   = 2,
	ERichPresenceStatus__InPartyLobby = 3,
	ERichPresenceStatus__InOnlineLobby = 4,
	ERichPresenceStatus__InMatch   = 5,
	ERichPresenceStatus__ERichPresenceStatus_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
