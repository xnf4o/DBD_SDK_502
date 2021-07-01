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

// Enum DBDAnimation.EArmIkMode
enum class DBDAnimation_EArmIkMode : uint8_t
{
	EArmIkMode__None               = 0,
	EArmIkMode__BothHand           = 1,
	EArmIkMode__OnlyRight          = 2,
	EArmIkMode__OnlyLeft           = 3,
	EArmIkMode__OneHandAtTime      = 4,
	EArmIkMode__BothAtSameTime     = 5,
	EArmIkMode__EArmIkMode_MAX     = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDAnimation.FootBoneData
// 0x0030
struct FFootBoneData
{
	class UCurveVector*                                RightFootCurve;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OMS[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                LeftFootCurve;                                             // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMTD[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDAnimation.PerspectiveDependentAnimSequenceSelector
// 0x0018
struct FPerspectiveDependentAnimSequenceSelector
{
	class UAnimSequence*                               _current;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _thirdPerson;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequence*                               _firstPerson;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
