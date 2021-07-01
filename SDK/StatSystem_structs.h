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

// Enum StatSystem.EModifierCompoundStrategy
enum class StatSystem_EModifierCompoundStrategy : uint8_t
{
	EModifierCompoundStrategy__Add = 0,
	EModifierCompoundStrategy__AddPlusOne = 1,
	EModifierCompoundStrategy__Min = 2,
	EModifierCompoundStrategy__MAX = 3,
	EModifierCompoundStrategy__Mult = 4,
	EModifierCompoundStrategy__MultWithCompoundNegative = 5,
	EModifierCompoundStrategy__EModifierCompoundStrategy_MAX = 6,

};

// Enum StatSystem.EModifierOperationStrategy
enum class StatSystem_EModifierOperationStrategy : uint8_t
{
	EModifierOperationStrategy__Add = 0,
	EModifierOperationStrategy__Subs = 1,
	EModifierOperationStrategy__Mult = 2,
	EModifierOperationStrategy__Div = 3,
	EModifierOperationStrategy__EModifierOperationStrategy_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StatSystem.StatModifier
// 0x0030
struct FStatModifier
{
	StatSystem_EModifierOperationStrategy              OperationStrategy;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZKA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                ModifierTag;                                               // 0x0004(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	StatSystem_EModifierCompoundStrategy               CompoundStrategy;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J97P[0x1F];                                    // 0x0011(0x001F) MISSED OFFSET (PADDING)

};

// ScriptStruct StatSystem.BaseStat
// 0x0058
struct FBaseStat
{
	unsigned char                                      UnknownData_1SL1[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStatModifier>                       _statModifiers;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DJKW[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct StatSystem.TunableStat
// 0x0028 (0x0080 - 0x0058)
struct FTunableStat : public FBaseStat
{
	struct FDBDTunableRowHandle                        _baseValue;                                                // 0x0058(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct StatSystem.NonTunableStat
// 0x0008 (0x0060 - 0x0058)
struct FNonTunableStat : public FBaseStat
{
	float                                              _baseValue;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R7PF[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct StatSystem.StatProperty
// 0x0030 (0x0088 - 0x0058)
struct FStatProperty : public FBaseStat
{
	bool                                               _useTunable;                                               // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WX8K[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _nonTunableValue;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _tunableValue;                                             // 0x0060(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
