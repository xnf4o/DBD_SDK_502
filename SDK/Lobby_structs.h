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

// Enum Lobby.ELobbyBeaconJoinState
enum class Lobby_ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None    = 0,
	ELobbyBeaconJoinState__SentJoinRequest = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_JO8Y[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULobbyBeaconPlayerState*                     LobbyPlayerState;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x0120 - 0x0108)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	TArray<struct FLobbyPlayerStateActorInfo>          players;                                                   // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULobbyBeaconState*                           ParentState;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
