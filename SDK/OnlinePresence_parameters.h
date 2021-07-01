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

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params
{
	struct FString                                     currencyName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
struct UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params
{
	struct FString                                     currencyName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
struct UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params
{
	struct FString                                     stateName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                version;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
struct UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params
{
	struct FString                                     stateName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
struct UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params
{
	struct FString                                     InString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
struct UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
struct UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
