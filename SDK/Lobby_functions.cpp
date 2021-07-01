// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InPartyOwnerId                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");

	ULobbyBeaconClient_ServerSetPartyOwner_Params params;
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ULobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");

	ULobbyBeaconClient_ServerNotifyJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 InSessionId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 UrlString                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");

	ULobbyBeaconClient_ServerLoginPlayer_Params params;
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Reason                         (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");

	ULobbyBeaconClient_ServerKickPlayer_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ULobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");

	ULobbyBeaconClient_ServerDisconnectFromLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 msg                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ServerCheat(const struct FString& msg)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");

	ULobbyBeaconClient_ServerCheat_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText                   kickReason                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ClientWasKicked(const struct FText& kickReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");

	ULobbyBeaconClient_ClientWasKicked_Params params;
	params.kickReason = kickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings    settings                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& settings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");

	ULobbyBeaconClient_ClientSetInviteFlags_Params params;
	params.settings = settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");

	ULobbyBeaconClient_ClientPlayerLeft_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FText                   NewPlayerName                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");

	ULobbyBeaconClient_ClientPlayerJoined_Params params;
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");

	ULobbyBeaconClient_ClientLoginComplete_Params params;
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
void ULobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");

	ULobbyBeaconClient_ClientJoinGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
void ULobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");

	ULobbyBeaconClient_ClientAckJoiningServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (Final, Native, Protected)
void ULobbyBeaconPlayerState::OnRep_UniqueId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId");

	ULobbyBeaconPlayerState_OnRep_UniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
void ULobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");

	ULobbyBeaconPlayerState_OnRep_PartyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
void ULobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");

	ULobbyBeaconPlayerState_OnRep_InLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
void ULobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");

	ULobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
void ULobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");

	ULobbyBeaconState_OnRep_LobbyStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
