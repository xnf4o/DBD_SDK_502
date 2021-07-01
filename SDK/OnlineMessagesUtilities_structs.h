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

// Enum OnlineMessagesUtilities.EClaimableInboxMessageState
enum class OnlineMessagesUtilities_EClaimableInboxMessageState : uint8_t
{
	EClaimableInboxMessageState__NONE = 0,
	EClaimableInboxMessageState__CLAIMED = 1,
	EClaimableInboxMessageState__EClaimableInboxMessageState_MAX = 2,

};

// Enum OnlineMessagesUtilities.EClaimableInboxMessageType
enum class OnlineMessagesUtilities_EClaimableInboxMessageType : uint8_t
{
	EClaimableInboxMessageType__None = 0,
	EClaimableInboxMessageType__Currency = 1,
	EClaimableInboxMessageType__Inventory = 2,
	EClaimableInboxMessageType__EClaimableInboxMessageType_MAX = 3,

};

// Enum OnlineMessagesUtilities.EOnlineMessageFlag
enum class OnlineMessagesUtilities_EOnlineMessageFlag : uint8_t
{
	EOnlineMessageFlag__New        = 0,
	EOnlineMessageFlag__Read       = 1,
	EOnlineMessageFlag__Archived   = 2,
	EOnlineMessageFlag__EOnlineMessageFlag_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessageData
// 0x0018
struct FClaimableInboxMessageData
{
	OnlineMessagesUtilities_EClaimableInboxMessageType type;                                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4O2W[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Amount;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Id;                                                        // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineMessagesUtilities.InboxMessageData
// 0x0070
struct FInboxMessageData
{
	int64_t                                            Id;                                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     origin;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RecipientId;                                               // 0x0018(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ReceivedTimestamp;                                         // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     subject;                                                   // 0x0030(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0040(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClaimableInboxMessageData>          Claimable;                                                 // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AreRewardsClaimed;                                         // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRead;                                                    // 0x0061(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEBQ[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ExpireTimestamp;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineMessagesUtilities.ClaimableInboxMessage
// 0x0018
struct FClaimableInboxMessage
{
	TArray<struct FClaimableInboxMessageData>          data;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OnlineMessagesUtilities_EClaimableInboxMessageState state;                                                     // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLQV[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
