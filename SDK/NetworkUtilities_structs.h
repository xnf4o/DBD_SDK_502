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

// Enum NetworkUtilities.ETimerState
enum class NetworkUtilities_ETimerState : uint8_t
{
	ETimerState__Cleared           = 0,
	ETimerState__Started           = 1,
	ETimerState__Paused            = 2,
	ETimerState__ETimerState_MAX   = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetworkUtilities.Float_NetQuantize8
// 0x0008
struct FFloat_NetQuantize8
{
	float                                              _value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y9KV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.ReplicationTimerData
// 0x0014
struct FReplicationTimerData
{
	float                                              timestamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              duration;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloat_NetQuantize8                         RemainingTimePercent;                                      // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	NetworkUtilities_ETimerState                       state;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXQ1[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize16
// 0x000C
struct FYawAndPitchRotator_NetQuantize16
{
	struct FRotator                                    _value;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct NetworkUtilities.AssetNetIdRow
// 0x0008 (0x0010 - 0x0008)
struct FAssetNetIdRow : public FTableRowBase
{
	int                                                NetId;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOU9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.SpeedBasedNetSyncedValue
// 0x0038
struct FSpeedBasedNetSyncedValue
{
	unsigned char                                      UnknownData_6DN0[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedValue;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AFUF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedSpeed;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P4BH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedLastUpdateTimestamp;                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AFQY[0xC];                                     // 0x002C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize32
// 0x000C
struct FYawAndPitchRotator_NetQuantize32
{
	struct FRotator                                    _value;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
