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
// Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x0088 (FullSize[0x0350] - InheritedSize[0x02C8])
class ULobbyBeaconClient : public UOnlineBeaconClient
{
public:
	class ULobbyBeaconState*                           lobbyState;                                                // 0x02C8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyBeaconPlayerState*                     playerState;                                               // 0x02D0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZE9U[0x1];                                     // 0x02D8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Lobby_ELobbyBeaconJoinState                        LobbyJoinServerState;                                      // 0x02D9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1P4M[0x76];                                    // 0x02DA(0x0076) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}



	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& msg);
	void ClientWasKicked(const struct FText& kickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// Class Lobby.LobbyBeaconHost
// 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
class ULobbyBeaconHost : public UOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_ZV2I[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LobbyStateClass[0x30];                                     // 0x0258(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	class ULobbyBeaconState*                           lobbyState;                                                // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}



};

// Class Lobby.LobbyBeaconPlayerState
// 0x00C0 (FullSize[0x02F0] - InheritedSize[0x0230])
class ULobbyBeaconPlayerState : public UInfo
{
public:
	struct FText                                       DisplayName;                                               // 0x0230(0x0018) (Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueID;                                                  // 0x0248(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                        // 0x0270(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLobby;                                                  // 0x0298(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHI6[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOnlineBeaconClient*                         ClientActor;                                               // 0x02A0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XDEE[0x48];                                    // 0x02A8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}



	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// Class Lobby.LobbyBeaconState
// 0x01A8 (FullSize[0x03D8] - InheritedSize[0x0230])
class ULobbyBeaconState : public UInfo
{
public:
	int                                                MaxPlayers;                                                // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FW37[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LobbyBeaconPlayerStateClass;                               // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B1SI[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLobbyStarted;                                             // 0x0248(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I19C[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitForPlayersTimeRemaining;                               // 0x024C(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray                  players;                                                   // 0x0250(0x0120) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2T8Q[0x68];                                    // 0x0370(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}



	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
