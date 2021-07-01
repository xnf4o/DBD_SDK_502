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

// Enum DBDInput.EAnalogCursorDataType
enum class DBDInput_EAnalogCursorDataType : uint8_t
{
	EAnalogCursorDataType__MaxSpeedDefault = 0,
	EAnalogCursorDataType__MaxSpeedDefaultSlow = 1,
	EAnalogCursorDataType__MaxSpeedStickyDefault = 2,
	EAnalogCursorDataType__MaxSpeedStickySlow = 3,
	EAnalogCursorDataType__MaxSpeedStickyButtonMedium = 4,
	EAnalogCursorDataType__MaxSpeedStickyButtonLarge = 5,
	EAnalogCursorDataType__MaxSpeedDefaultBloodweb = 6,
	EAnalogCursorDataType__MaxSpeedStickyBloodweb = 7,
	EAnalogCursorDataType__CustomAcceleration = 8,
	EAnalogCursorDataType__DeadZone = 9,
	EAnalogCursorDataType__HandheldSpeedBoostFactor = 10,
	EAnalogCursorDataType__EAnalogCursorDataType_MAX = 11,

};

// Enum DBDInput.EDBDInputMode
enum class DBDInput_EDBDInputMode : uint8_t
{
	EDBDInputMode__None            = 0,
	EDBDInputMode__Scaleform       = 1,
	EDBDInputMode__UMG             = 2,
	EDBDInputMode__Game            = 3,
	EDBDInputMode__EDBDInputMode_MAX = 4,

};

// Enum DBDInput.EUIActionType
enum class DBDInput_EUIActionType : uint8_t
{
	EUIActionType__Accept          = 0,
	EUIActionType__Cancel          = 1,
	EUIActionType__Previous        = 2,
	EUIActionType__Next            = 3,
	EUIActionType__EUIActionType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDInput.AnalogCursorData
// 0x0010 (0x0018 - 0x0008)
struct FAnalogCursorData : public FDBDTableRowBase
{
	DBDInput_EAnalogCursorDataType                     type;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SC8[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScalesWithDPI;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACKM[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
