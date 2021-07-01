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

// Enum DBDUIViewInterfaces.EGameManualMenuState
enum class DBDUIViewInterfaces_EGameManualMenuState : uint8_t
{
	EGameManualMenuState__Categories = 0,
	EGameManualMenuState__Topics   = 1,
	EGameManualMenuState__EGameManualMenuState_MAX = 2,

};

// Enum DBDUIViewInterfaces.ESingleHookState
enum class DBDUIViewInterfaces_ESingleHookState : uint8_t
{
	ESingleHookState__EMPTY        = 0,
	ESingleHookState__UNHOOKED     = 1,
	ESingleHookState__HOOKED       = 2,
	ESingleHookState__DISCONNECTED = 3,
	ESingleHookState__ESingleHookState_MAX = 4,

};

// Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
enum class DBDUIViewInterfaces_EHudStatusEffectAlertViewType : uint8_t
{
	EHudStatusEffectAlertViewType__Unhandled = 0,
	EHudStatusEffectAlertViewType__Perk = 1,
	EHudStatusEffectAlertViewType__Item = 2,
	EHudStatusEffectAlertViewType__Addon = 3,
	EHudStatusEffectAlertViewType__EHudStatusEffectAlertViewType_MAX = 4,

};

// Enum DBDUIViewInterfaces.EInteractionPromptType
enum class DBDUIViewInterfaces_EInteractionPromptType : uint8_t
{
	EInteractionPromptType__PressButton = 0,
	EInteractionPromptType__MashButton = 1,
	EInteractionPromptType__HoldButton = 2,
	EInteractionPromptType__AlternateTwoButtons = 3,
	EInteractionPromptType__WiggleThumbstick = 4,
	EInteractionPromptType__MovementAxes = 5,
	EInteractionPromptType__MovementKeys = 6,
	EInteractionPromptType__EInteractionPromptType_MAX = 7,

};

// Enum DBDUIViewInterfaces.EKillerResult
enum class DBDUIViewInterfaces_EKillerResult : uint8_t
{
	EKillerResult__DisgracefulDefeat = 0,
	EKillerResult__EntityDispleased = 1,
	EKillerResult__BrutalKiller    = 2,
	EKillerResult__RuthlessKiller  = 3,
	EKillerResult__MercilessKiller = 4,
	EKillerResult__EKillerResult_MAX = 5,

};

// Enum DBDUIViewInterfaces.EOnboardingMenuState
enum class DBDUIViewInterfaces_EOnboardingMenuState : uint8_t
{
	EOnboardingMenuState__Tutorial = 0,
	EOnboardingMenuState__GameManual = 1,
	EOnboardingMenuState__EOnboardingMenuState_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewInterfaces.baseLoadoutPartViewData
// 0x0030
struct FbaseLoadoutPartViewData
{
	struct FName                                       itemId;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZF3H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CIVG[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.addonViewData
// 0x0008 (0x0038 - 0x0030)
struct FaddonViewData : public FbaseLoadoutPartViewData
{
	float                                              Cooldown;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D6JJ[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.RewardViewData
// 0x0002
struct FRewardViewData
{
	bool                                               IsLocked;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHighlighted;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.CharacterTooltipViewData
// 0x0058
struct FCharacterTooltipViewData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       Biography;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       DLCTitle;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	int                                                level;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNewInStore;                                              // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInStore;                                        // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDLCPurchasable;                                          // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ECharacterDifficulty                Difficulty;                                                // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ONK[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.characterRewardViewData
// 0x0076 (0x0078 - 0x0002)
struct FcharacterRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_M1RO[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6QT[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                prestige;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BQI[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterTooltipViewData                   tooltipData;                                               // 0x0020(0x0058) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.CurrencyTooltipViewData
// 0x0038
struct FCurrencyTooltipViewData
{
	DBDSharedTypes_ECurrencyType                       currencyType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0N5P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Amount;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CurrencyDescription;                                       // 0x0008(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       EndTiming;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.currencyRewardViewData
// 0x0046 (0x0048 - 0x0002)
struct FcurrencyRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_42L4[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrencyAmount;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ECurrencyType                       currencyType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F9NY[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurrencyTooltipViewData                    tooltipData;                                               // 0x0010(0x0038) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PriceViewData
// 0x0010
struct FPriceViewData
{
	DBDSharedTypes_ECurrencyType                       currencyType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS0S[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Price;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Discount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAffordable;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8M1T[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.CustomizationTooltipViewData
// 0x00A8
struct FCustomizationTooltipViewData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       ParentName;                                                // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FText                                       RarityPartInfo;                                            // 0x0030(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       CollectionDisplayName;                                     // 0x0048(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0060(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       RoleCategoryInfo;                                          // 0x0078(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnbreakable;                                             // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0093(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         AssociatedRole;                                            // 0x0094(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0095(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_840T[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPriceViewData>                      Prices;                                                    // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.customizationRewardViewData
// 0x00BE (0x00C0 - 0x0002)
struct FcustomizationRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_O4XD[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnbreakable;                                             // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLZO[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomizationTooltipViewData               tooltipData;                                               // 0x0018(0x00A8) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.perkViewData
// 0x0010 (0x0040 - 0x0030)
struct FperkViewData : public FbaseLoadoutPartViewData
{
	int                                                level;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FPY[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                stackCount;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.itemViewData
// 0x0038 (0x0068 - 0x0030)
struct FitemViewData : public FbaseLoadoutPartViewData
{
	bool                                               IsEnergyTypeValid;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJW4[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              energyLevel;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T4YI[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        inputKey;                                                  // 0x0040(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BIK[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
// 0x0100
struct FStatusEffectAlertViewData
{
	struct FString                                     StatusEffectName;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  StatusEffectIcon;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EHudStatusEffectAlertViewType  SourceViewType;                                            // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6KTK[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FperkViewData                               perkViewData;                                              // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FitemViewData                               itemViewData;                                              // 0x0060(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addonViewData;                                             // 0x00C8(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
// 0x0020
struct FScoreAlertViewData
{
	DBDSharedTypes_EDBDScoreCategory                   ScoreType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CE4G[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     title;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scoreValue;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              progress;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.hudObjectiveViewData
// 0x0008
struct FhudObjectiveViewData
{
	DBDSharedTypes_EPlayerTeam                         playerTeam;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHatchOpen;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KMI[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                nbGeneratorsLeft;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
// 0x0028
struct FStatusEffectViewData
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_019T[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VC32[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                level;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentage;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZRMA[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
// 0x0040
struct FInteractionProgressViewData
{
	struct FString                                     message;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondaryMessage;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           barColor;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           ChargeBarColor;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIcon;                                                  // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIconCharge;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMMV[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ItemIcon;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatusEffectViewData>               Proficiencies;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.interactionPromptViewData
// 0x00B0
struct FinteractionPromptViewData
{
	struct FName                                       Id;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GA2W[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EInteractionPromptType         type;                                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OM1K[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        InputKey1;                                                 // 0x0028(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fkey                                        inputKey2;                                                 // 0x0048(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fkey                                        inputKey3;                                                 // 0x0068(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fkey                                        inputKey4;                                                 // 0x0088(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlaceInCenter;                                             // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XL2[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.itemBundleViewData
// 0x00D8
struct FitemBundleViewData
{
	struct FitemViewData                               Item;                                                      // 0x0000(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon1;                                                    // 0x0068(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon2;                                                    // 0x00A0(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.MatchResultViewData
// 0x0008
struct FMatchResultViewData
{
	bool                                               isSlasher;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          SurvivorResult;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EKillerResult                  KillerResult;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F17W[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
// 0x0030
struct FNotifTutorialPopupViewData
{
	struct FString                                     title;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  icon;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  image;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.offeringViewData
// 0x0008 (0x0038 - 0x0030)
struct FofferingViewData : public FbaseLoadoutPartViewData
{
	int                                                stackCount;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemAvailability                   Availability;                                              // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7UP[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.progressionRewardViewData
// 0x000A (0x000C - 0x0002)
struct FprogressionRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_TGDY[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ProgressionAmount;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EProgressionType                    currencyType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5EK6[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.RewardWrapperViewData
// 0x0198
struct FRewardWrapperViewData
{
	DBDSharedTypes_ERewardType                         RewardType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0U65[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FcharacterRewardViewData                    characterRewardViewData;                                   // 0x0008(0x0078) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FcurrencyRewardViewData                     currencyRewardViewData;                                    // 0x0080(0x0048) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FcustomizationRewardViewData                customizationRewardViewData;                               // 0x00C8(0x00C0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FprogressionRewardViewData                  progressionRewardViewData;                                 // 0x0188(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZ8X[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.OnboardingTutorialViewData
// 0x0078
struct FOnboardingTutorialViewData
{
	struct FString                                     TutorialId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Completed;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MainRewardClaimed;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_14HL[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRewardWrapperViewData>              MainRewards;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardWrapperViewData>              AlternativeRewards;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingTutorialType             TutorialType;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingTutorialButtonStyle      ButtonStyle;                                               // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LNBJ[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0058(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  icon;                                                      // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.OnboardingStepViewData
// 0x0028
struct FOnboardingStepViewData
{
	struct FString                                     StepId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingStepStatus               Status;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B1DA[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FOnboardingTutorialViewData>         Tutorials;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.DoctorStatusData
// 0x0001
struct FDoctorStatusData
{
	DBDSharedTypes_EAfflictionLevel                    AfflictionLevel;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ExecutionerStatusData
// 0x0004
struct FExecutionerStatusData
{
	float                                              AgonyProgress;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.GhostStatusData
// 0x0008
struct FGhostStatusData
{
	bool                                               IsExposed;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GWB[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StalkingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.NightmareStatusData
// 0x000C
struct FNightmareStatusData
{
	DBDSharedTypes_ESleepingUIState                    SleepingState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P3J[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SleepingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SleepProtectionRemainingDuration;                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PigStatusData
// 0x0008
struct FPigStatusData
{
	DBDSharedTypes_EReverseBearTrapUIState             ReverseBearTrapState;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_983K[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PlagueStatusData
// 0x0008
struct FPlagueStatusData
{
	DBDSharedTypes_ESicknessLevel                      SicknessLevel;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQ6E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SicknessProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TwinsStatusData
// 0x0001
struct FTwinsStatusData
{
	bool                                               TwinsActive;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TricksterStatusData
// 0x000C
struct FTricksterStatusData
{
	float                                              CurrentLacerationLevel;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumLacerationLevel;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerousLacerationLevel;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasRecentlyDamagedByLaceration;                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVYI[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.K24StatusData
// 0x0001
struct FK24StatusData
{
	bool                                               IsContaminated;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
// 0x0078
struct FPlayerStatusViewData
{
	struct FString                                     playerName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGender                             Gender;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JC5Z[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  PlayerPortraitIcon;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PlayerPortraitIconOverride;                                // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStatus                       PlayerStatusState;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LNZ[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDeepWound;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isBroken;                                                  // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocalPlayerAKiller;                                      // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EObsessionUIState                   ObsessionState;                                            // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                drainStage;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoctorStatusData                           DoctorStatusData;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TIOR[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExecutionerStatusData                      ExecutionerStatusData;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGhostStatusData                            GhostStatusData;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FNightmareStatusData                        NightmareStatusData;                                       // 0x0048(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPigStatusData                              PigStatusData;                                             // 0x0054(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlagueStatusData                           PlagueStatusData;                                          // 0x005C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwinsStatusData                            TwinsStatusData;                                           // 0x0064(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0RO[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTricksterStatusData                        TricksterStatusData;                                       // 0x0068(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FK24StatusData                              K24StatusData;                                             // 0x0074(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U74F[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.powerViewData
// 0x0030 (0x0060 - 0x0030)
struct FpowerViewData : public FbaseLoadoutPartViewData
{
	struct Fkey                                        inputKey;                                                  // 0x0030(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRechargeable;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isActivated;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0KZ[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressValue;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCountDisplayForced;                                      // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WZ1W[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.powerBundleViewData
// 0x00D0
struct FpowerBundleViewData
{
	struct FpowerViewData                              Power;                                                     // 0x0000(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon1;                                                    // 0x0060(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FaddonViewData                              addon2;                                                    // 0x0098(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScreenIndicatorViewData
// 0x0030
struct FScreenIndicatorViewData
{
	struct FString                                     Id;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInFront;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FWQB[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScreenPosition;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              distance;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IndicatorIcon;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EHudScreenIndicatorType             IndicatorType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F784[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
// 0x0038
struct FSkillCheckViewData
{
	struct Fkey                                        inputKey;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaStart;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaLength;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusAreaStart;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusAreaLength;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHexed;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSpectating;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReversed;                                                // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMirrored;                                                // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInsane;                                                  // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3CZ[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
// 0x0028
struct FStartSequenceViewData
{
	struct FString                                     themeName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mapName;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EThemeColorId                       ThemeColorId;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5P09[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.TemplateViewData
// 0x0001
struct FTemplateViewData
{
	unsigned char                                      UnknownData_HJNO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.TutorialObjectivesViewData
// 0x0170
struct FTutorialObjectivesViewData
{
	struct FString                                     description;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FinteractionPromptViewData                  PrimaryInteractionPromptViewData;                          // 0x0010(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FinteractionPromptViewData                  SecondaryInteractionPromptViewData;                        // 0x00C0(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
