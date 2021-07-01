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

// Enum UITween.EEasingType
enum class UITween_EEasingType : uint8_t
{
	EEasingType__Linear            = 0,
	EEasingType__SineIn            = 1,
	EEasingType__SineOut           = 2,
	EEasingType__SineInOut         = 3,
	EEasingType__QuadIn            = 4,
	EEasingType__QuadOut           = 5,
	EEasingType__QuadInOut         = 6,
	EEasingType__CubicIn           = 7,
	EEasingType__CubicOut          = 8,
	EEasingType__CubicInOut        = 9,
	EEasingType__QuartIn           = 10,
	EEasingType__QuartOut          = 11,
	EEasingType__QuartInOut        = 12,
	EEasingType__QuintIn           = 13,
	EEasingType__QuintOut          = 14,
	EEasingType__QuintInOut        = 15,
	EEasingType__ExpoIn            = 16,
	EEasingType__ExpoOut           = 17,
	EEasingType__ExpoInOut         = 18,
	EEasingType__CircIn            = 19,
	EEasingType__CircOut           = 20,
	EEasingType__CircInOut         = 21,
	EEasingType__ElasticIn         = 22,
	EEasingType__ElasticOut        = 23,
	EEasingType__ElasticInOut      = 24,
	EEasingType__BackIn            = 25,
	EEasingType__BackOut           = 26,
	EEasingType__BackInOut         = 27,
	EEasingType__EEasingType_MAX   = 28,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UITween.UITweenInstance
// 0x00C8
struct FUITweenInstance
{
	unsigned char                                      UnknownData_1R8Z[0xC8];                                    // 0x0000(0x00C8) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
