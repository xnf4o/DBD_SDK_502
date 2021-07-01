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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Competence.GameplayFlagCache
// 0x00A0
struct FGameplayFlagCache
{
	unsigned char                                      UnknownData_ZFFP[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

// ScriptStruct Competence.GameplayModifier
// 0x0010
struct FGameplayModifier
{
	struct FgameplayTag                                type;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              modifierValue;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Competence.GameplayModifierData
// 0x0030
struct FGameplayModifierData
{
	TArray<class UClass*>                              Conditions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayModifier>                   Modifiers;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FgameplayTag>                        TaggedFlags;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Competence.GameplayModifierCache
// 0x00A0
struct FGameplayModifierCache
{
	unsigned char                                      UnknownData_B3A2[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
