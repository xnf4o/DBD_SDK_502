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
// Parameters
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ULobbyBeaconClient_ServerSetPartyOwner_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InPartyOwnerId;                                            // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ULobbyBeaconClient_ServerNotifyJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ULobbyBeaconClient_ServerLoginPlayer_Params
{
	struct FString                                     InSessionId;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UrlString;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ULobbyBeaconClient_ServerKickPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerToKick;                                              // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                    // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ULobbyBeaconClient_ServerDisconnectFromLobby_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerCheat
struct ULobbyBeaconClient_ServerCheat_Params
{
	struct FString                                     msg;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ULobbyBeaconClient_ClientWasKicked_Params
{
	struct FText                                       kickReason;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ULobbyBeaconClient_ClientSetInviteFlags_Params
{
	struct FJoinabilitySettings                        settings;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ULobbyBeaconClient_ClientPlayerLeft_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ULobbyBeaconClient_ClientPlayerJoined_Params
{
	struct FText                                       NewPlayerName;                                             // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ULobbyBeaconClient_ClientLoginComplete_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ULobbyBeaconClient_ClientJoinGame_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ULobbyBeaconClient_ClientAckJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
struct ULobbyBeaconPlayerState_OnRep_UniqueId_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ULobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ULobbyBeaconPlayerState_OnRep_InLobby_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ULobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ULobbyBeaconState_OnRep_LobbyStarted_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
