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

// Enum DBDUIViewsMobile.EActionOnFriendType
enum class DBDUIViewsMobile_EActionOnFriendType : uint8_t
{
	EActionOnFriendType__None      = 0,
	EActionOnFriendType__SendFriendRequest = 1,
	EActionOnFriendType__ConfirmFriendRequest = 2,
	EActionOnFriendType__DeclineFriendRequest = 3,
	EActionOnFriendType__RemoveFriend = 4,
	EActionOnFriendType__AddToFavorite = 5,
	EActionOnFriendType__RemoveToFavorite = 6,
	EActionOnFriendType__Mute      = 7,
	EActionOnFriendType__Unmute    = 8,
	EActionOnFriendType__InviteToParty = 9,
	EActionOnFriendType__CancelInviteToParty = 10,
	EActionOnFriendType__Select    = 11,
	EActionOnFriendType__ConfirmAction = 12,
	EActionOnFriendType__DeclineAction = 13,
	EActionOnFriendType__Count     = 14,
	EActionOnFriendType__EActionOnFriendType_MAX = 15,

};

// Enum DBDUIViewsMobile.EAtlantaFriendUIStatus
enum class DBDUIViewsMobile_EAtlantaFriendUIStatus : uint8_t
{
	EAtlantaFriendUIStatus__Undefined = 0,
	EAtlantaFriendUIStatus__FriendSuggestion = 1,
	EAtlantaFriendUIStatus__FriendRequestSent = 2,
	EAtlantaFriendUIStatus__FriendRequestReceived = 3,
	EAtlantaFriendUIStatus__Available = 4,
	EAtlantaFriendUIStatus__InAMatch = 5,
	EAtlantaFriendUIStatus__Offline = 6,
	EAtlantaFriendUIStatus__AddFriendToSeeStatus = 7,
	EAtlantaFriendUIStatus__EAtlantaFriendUIStatus_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewsMobile.AtlantaFriendUIData
// 0x0068
struct FAtlantaFriendUIData
{
	unsigned char                                      UnknownData_552C[0x68];                                    // 0x0000(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewsMobile.actionOnFriend
// 0x0078
struct FactionOnFriend
{
	DBDUIViewsMobile_EActionOnFriendType               ActionToProceed;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INLP[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAtlantaFriendUIData                        AtlantaFriendDataToUpdate;                                 // 0x0008(0x0068) (NativeAccessSpecifierPublic)
	class UUMGBaseFriendListElement*                   ActionOwner;                                               // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsMobile.FriendStatusUIData
// 0x0050 (0x0058 - 0x0008)
struct FFriendStatusUIData : public FDBDTableRowBase
{
	DBDUIViewsMobile_EAtlantaFriendUIStatus            FriendStatus;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASMW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StatusIcon[0x30];                                          // 0x0009(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       StatusText;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
