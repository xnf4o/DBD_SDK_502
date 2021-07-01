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

// Enum DBDSharedTypes.ELeanState
enum class DBDSharedTypes_ELeanState : uint8_t
{
	ELeanState__NotLeaning         = 0,
	ELeanState__LeanLeft           = 1,
	ELeanState__LeanRight          = 2,
	ELeanState__ELeanState_MAX     = 3,

};

// Enum DBDSharedTypes.ECharacterDifficulty
enum class DBDSharedTypes_ECharacterDifficulty : uint8_t
{
	ECharacterDifficulty__VE_Easy  = 0,
	ECharacterDifficulty__VE_Intermediate = 1,
	ECharacterDifficulty__VE_Hard  = 2,
	ECharacterDifficulty__VE_MAX   = 3,

};

// Enum DBDSharedTypes.ESkillCheckCustomType
enum class DBDSharedTypes_ESkillCheckCustomType : uint8_t
{
	ESkillCheckCustomType__VE_None = 0,
	ESkillCheckCustomType__VE_OnPickedUp = 1,
	ESkillCheckCustomType__VE_OnAttacked = 2,
	ESkillCheckCustomType__VE_DecisiveStrikeWhileWiggling = 3,
	ESkillCheckCustomType__VE_GeneratorOvercharge1 = 4,
	ESkillCheckCustomType__VE_GeneratorOvercharge2 = 5,
	ESkillCheckCustomType__VE_GeneratorOvercharge3 = 6,
	ESkillCheckCustomType__VE_BrandNewPart = 7,
	ESkillCheckCustomType__VE_Struggle = 8,
	ESkillCheckCustomType__VE_OppressionPerkGeneratorKicked = 9,
	ESkillCheckCustomType__VE_SoulChemical = 10,
	ESkillCheckCustomType__VE_Wiggle = 11,
	ESkillCheckCustomType__VE_MAX  = 12,

};

// Enum DBDSharedTypes.EGender
enum class DBDSharedTypes_EGender : uint8_t
{
	EGender__VE_Male               = 0,
	EGender__VE_Female             = 1,
	EGender__VE_Multiple           = 2,
	EGender__VE_NotHuman           = 3,
	EGender__VE_Undefined          = 4,
	EGender__VE_MAX                = 5,

};

// Enum DBDSharedTypes.EAttackSubstate
enum class DBDSharedTypes_EAttackSubstate : uint8_t
{
	EAttackSubstate__VE_None       = 0,
	EAttackSubstate__VE_Open       = 1,
	EAttackSubstate__VE_Hitting    = 2,
	EAttackSubstate__VE_HitSucceed = 3,
	EAttackSubstate__VE_HitMiss    = 4,
	EAttackSubstate__VE_HitObstructed = 5,
	EAttackSubstate__VE_Done       = 6,
	EAttackSubstate__VE_MAX        = 7,

};

// Enum DBDSharedTypes.EDetectionZone
enum class DBDSharedTypes_EDetectionZone : uint8_t
{
	EDetectionZone__VE_None        = 0,
	EDetectionZone__VE_Slash       = 1,
	EDetectionZone__VE_Pounce      = 2,
	EDetectionZone__VE_Chainsaw    = 3,
	EDetectionZone__VE_Obstructed  = 4,
	EDetectionZone__VE_Interruption = 5,
	EDetectionZone__VE_ChainsawLockExtended = 6,
	EDetectionZone__VE_Damage      = 7,
	EDetectionZone__VE_ChainsawObstruction = 8,
	EDetectionZone__VE_Blink       = 9,
	EDetectionZone__VE_ChainsawDamageExtended = 10,
	EDetectionZone__VE_Stalker     = 11,
	EDetectionZone__VE_Lunge       = 12,
	EDetectionZone__VE_PowerAttack = 13,
	EDetectionZone__VE_MAX         = 14,
	EDetectionZone__VE_MAX01       = 15,

};

// Enum DBDSharedTypes.EAttackSuccess
enum class DBDSharedTypes_EAttackSuccess : uint8_t
{
	EAttackSuccess__VE_None        = 0,
	EAttackSuccess__VE_Success     = 1,
	EAttackSuccess__VE_Failure     = 2,
	EAttackSuccess__VE_Obstructed  = 3,
	EAttackSuccess__VE_MAX         = 4,

};

// Enum DBDSharedTypes.EBlindType
enum class DBDSharedTypes_EBlindType : uint8_t
{
	EBlindType__VE_None            = 0,
	EBlindType__VE_Flashlight      = 1,
	EBlindType__VE_SacrificeSuspended = 2,
	EBlindType__VE_Firecracker     = 3,
	EBlindType__VE_MAX             = 4,

};

// Enum DBDSharedTypes.EStunType
enum class DBDSharedTypes_EStunType : uint8_t
{
	EStunType__VE_None             = 0,
	EStunType__VE_Bookshelf        = 1,
	EStunType__VE_BearTrap         = 2,
	EStunType__VE_Flashlight       = 3,
	EStunType__VE_WiggleFree       = 4,
	EStunType__VE_EvilWithin       = 5,
	EStunType__VE_Kicked           = 6,
	EStunType__VE_Closet           = 7,
	EStunType__VE_HarpoonRifle     = 8,
	EStunType__VE_GeneratorTrap    = 9,
	EStunType__VE_MAX              = 10,

};

// Enum DBDSharedTypes.EAttackType
enum class DBDSharedTypes_EAttackType : uint8_t
{
	EAttackType__VE_None           = 0,
	EAttackType__VE_Slash          = 1,
	EAttackType__VE_Pounce         = 2,
	EAttackType__VE_Chainsaw       = 3,
	EAttackType__VE_Blink          = 4,
	EAttackType__VE_LFChainsaw     = 5,
	EAttackType__VE_Ambush         = 6,
	EAttackType__VE_Frenzy         = 7,
	EAttackType__VE_GhostCrouch    = 8,
	EAttackType__VE_QatarDash      = 9,
	EAttackType__VE_OniBasicAttack = 10,
	EAttackType__VE_OniDemonBasicAttack = 11,
	EAttackType__VE_OniDemonPowerAttack = 12,
	EAttackType__VE_OniDemonDashAttack = 13,
	EAttackType__VE_ExecutionerTormentAttack = 14,
	EAttackType__VE_BlightDash     = 15,
	EAttackType__VE_TwinJump       = 16,
	EAttackType__VE_K24WhipAttack  = 17,
	EAttackType__VE_MAX            = 18,

};

// Enum DBDSharedTypes.EInteractionAnimation
enum class DBDSharedTypes_EInteractionAnimation : uint8_t
{
	EInteractionAnimation__VE_None = 0,
	EInteractionAnimation__VE_Generator = 1,
	EInteractionAnimation__VE_PullDownLeft = 2,
	EInteractionAnimation__VE_PullDownRight = 3,
	EInteractionAnimation__VE_Hiding = 4,
	EInteractionAnimation__VE_SearchCloset = 5,
	EInteractionAnimation__VE_HealingOther = 6,
	EInteractionAnimation__VE_OpenEscape = 7,
	EInteractionAnimation__VE_StruggleFree = 8,
	EInteractionAnimation__VE_HealOther = 9,
	EInteractionAnimation__VE_HealSelf = 10,
	EInteractionAnimation__VE_PickedUp = 11,
	EInteractionAnimation__VE_Unused01 = 12,
	EInteractionAnimation__VE_Dropped = 13,
	EInteractionAnimation__VE_Unused02 = 14,
	EInteractionAnimation__VE_BeingHooked = 15,
	EInteractionAnimation__VE_Sabotage = 16,
	EInteractionAnimation__VE_ChargeBlink = 17,
	EInteractionAnimation__VE_ThrowFirecracker = 18,
	EInteractionAnimation__VE_WakeUpOther = 19,
	EInteractionAnimation__VE_RemoveReverseBearTrap = 20,
	EInteractionAnimation__VE_DeadHard = 21,
	EInteractionAnimation__VE_DestroyPortal = 22,
	EInteractionAnimation__VE_OniDash = 23,
	EInteractionAnimation__VE_PickUpAnniversaryCrown = 24,
	EInteractionAnimation__VE_InteractWithGlyph = 25,
	EInteractionAnimation__VE_OpenChest = 26,
	EInteractionAnimation__VE_MAX  = 27,

};

// Enum DBDSharedTypes.ECamperState
enum class DBDSharedTypes_ECamperState : uint8_t
{
	ECamperState__VE_None          = 0,
	ECamperState__VE_Navigate      = 1,
	ECamperState__VE_Interact      = 2,
	ECamperState__VE_MAX           = 3,

};

// Enum DBDSharedTypes.EAnimNotifyType
enum class DBDSharedTypes_EAnimNotifyType : uint8_t
{
	EAnimNotifyType__VE_None       = 0,
	EAnimNotifyType__VE_Pickup     = 1,
	EAnimNotifyType__VE_Release    = 2,
	EAnimNotifyType__VE_MAX        = 3,

};

// Enum DBDSharedTypes.EKillerMoodInfluence
enum class DBDSharedTypes_EKillerMoodInfluence : uint8_t
{
	EKillerMoodInfluence__VE_None  = 0,
	EKillerMoodInfluence__VE_Chuckles = 1,
	EKillerMoodInfluence__VE_Banshee = 2,
	EKillerMoodInfluence__VE_Hillbilly = 3,
	EKillerMoodInfluence__VE_Nurse = 4,
	EKillerMoodInfluence__VE_Shape = 5,
	EKillerMoodInfluence__VE_MAX   = 6,

};

// Enum DBDSharedTypes.EKillerAbilities
enum class DBDSharedTypes_EKillerAbilities : uint8_t
{
	EKillerAbilities__VE_None      = 0,
	EKillerAbilities__VE_SpawnTraps = 1,
	EKillerAbilities__VE_Cloak     = 2,
	EKillerAbilities__VE_Chainsaw  = 3,
	EKillerAbilities__VE_Blink     = 4,
	EKillerAbilities__VE_PhantomTrap = 5,
	EKillerAbilities__VE_Stalker   = 6,
	EKillerAbilities__VE_Killer07Ability = 7,
	EKillerAbilities__VE_Killer08Ability = 8,
	EKillerAbilities__VE_LFChainsaw = 9,
	EKillerAbilities__VE_InduceDreams = 10,
	EKillerAbilities__VE_ReverseBearTrap = 11,
	EKillerAbilities__VE_GasBomb   = 12,
	EKillerAbilities__VE_PhaseWalk = 13,
	EKillerAbilities__VE_Frenzy    = 14,
	EKillerAbilities__VE_Vomit     = 15,
	EKillerAbilities__VE_GhostStalker = 16,
	EKillerAbilities__VE_GroundPortals = 17,
	EKillerAbilities__VE_DemonMode = 18,
	EKillerAbilities__VE_HarpoonRifle = 19,
	EKillerAbilities__VE_TormentMode = 20,
	EKillerAbilities__VE_K21Power  = 21,
	EKillerAbilities__VE_K22Power  = 22,
	EKillerAbilities__VE_ThrowingKnives = 23,
	EKillerAbilities__VE_K24Power  = 24,
	EKillerAbilities__VE_MAX       = 25,

};

// Enum DBDSharedTypes.EGameState
enum class DBDSharedTypes_EGameState : uint8_t
{
	EGameState__VE_Active          = 0,
	EGameState__VE_Dead            = 1,
	EGameState__VE_Escaped         = 2,
	EGameState__VE_EscapedInjured  = 3,
	EGameState__VE_Sacrificed      = 4,
	EGameState__VE_None            = 5,
	EGameState__VE_Disconnected    = 6,
	EGameState__VE_ManuallyLeftMatch = 7,
	EGameState__VE_MAX             = 8,

};

// Enum DBDSharedTypes.EPlayerTeam
enum class DBDSharedTypes_EPlayerTeam : uint8_t
{
	EPlayerTeam__VE_None           = 0,
	EPlayerTeam__VE_Killer         = 1,
	EPlayerTeam__VE_Survivor       = 2,
	EPlayerTeam__VE_MAX            = 3,

};

// Enum DBDSharedTypes.EPawnType
enum class DBDSharedTypes_EPawnType : uint8_t
{
	EPawnType__VE_None             = 0,
	EPawnType__VE_Killer           = 1,
	EPawnType__VE_Survivor         = 2,
	EPawnType__VE_Sidekick         = 3,
	EPawnType__VE_MAX              = 4,

};

// Enum DBDSharedTypes.EPlayerRole
enum class DBDSharedTypes_EPlayerRole : uint8_t
{
	EPlayerRole__VE_None           = 0,
	EPlayerRole__VE_Slasher        = 1,
	EPlayerRole__VE_Camper         = 2,
	EPlayerRole__VE_Observer       = 3,
	EPlayerRole__MAX               = 4,
	EPlayerRole__EPlayerRole_MAX   = 5,

};

// Enum DBDSharedTypes.EDBDScoreCategory
enum class DBDSharedTypes_EDBDScoreCategory : uint8_t
{
	EDBDScoreCategory__DBD_CamperScoreCat_Objectives = 0,
	EDBDScoreCategory__DBD_CamperScoreCat_Survival = 1,
	EDBDScoreCategory__DBD_CamperScoreCat_Altruism = 2,
	EDBDScoreCategory__DBD_CamperScoreCat_Boldness = 3,
	EDBDScoreCategory__DBD_SlasherScoreCat_Brutality = 4,
	EDBDScoreCategory__DBD_SlasherScoreCat_Deviousness = 5,
	EDBDScoreCategory__DBD_SlasherScoreCat_Hunter = 6,
	EDBDScoreCategory__DBD_SlasherScoreCat_Sacrifice = 7,
	EDBDScoreCategory__DBD_CamperScoreCat_Untracked = 8,
	EDBDScoreCategory__DBD_CamperScoreCat_Streak = 9,
	EDBDScoreCategory__DBD_ScoreCat_SpecialEvents = 10,
	EDBDScoreCategory__Count       = 11,
	EDBDScoreCategory__EDBDScoreCategory_MAX = 12,

};

// Enum DBDSharedTypes.EFriendshipStatus
enum class DBDSharedTypes_EFriendshipStatus : uint8_t
{
	EFriendshipStatus__None        = 0,
	EFriendshipStatus__RequestSent = 1,
	EFriendshipStatus__RequestReceived = 2,
	EFriendshipStatus__Friend      = 3,
	EFriendshipStatus__EFriendshipStatus_MAX = 4,

};

// Enum DBDSharedTypes.EFriendSuggestionType
enum class DBDSharedTypes_EFriendSuggestionType : uint8_t
{
	EFriendSuggestionType__None    = 0,
	EFriendSuggestionType__Facebook = 1,
	EFriendSuggestionType__Google  = 2,
	EFriendSuggestionType__EFriendSuggestionType_MAX = 3,

};

// Enum DBDSharedTypes.EStatusEffectType
enum class DBDSharedTypes_EStatusEffectType : uint8_t
{
	EStatusEffectType__None        = 0,
	EStatusEffectType__Buff        = 1,
	EStatusEffectType__Debuff      = 2,
	EStatusEffectType__EStatusEffectType_MAX = 3,

};

// Enum DBDSharedTypes.EHelpType
enum class DBDSharedTypes_EHelpType : uint8_t
{
	EHelpType__General             = 0,
	EHelpType__Survivor            = 1,
	EHelpType__Killer              = 2,
	EHelpType__EHelpType_MAX       = 3,

};

// Enum DBDSharedTypes.EBarColor
enum class DBDSharedTypes_EBarColor : uint8_t
{
	EBarColor__Default             = 0,
	EBarColor__Yellow              = 1,
	EBarColor__Red                 = 2,
	EBarColor__EBarColor_MAX       = 3,

};

// Enum DBDSharedTypes.EHudScreenIndicatorType
enum class DBDSharedTypes_EHudScreenIndicatorType : uint8_t
{
	EHudScreenIndicatorType__None  = 0,
	EHudScreenIndicatorType__LoudNoise = 1,
	EHudScreenIndicatorType__StealthBroken = 2,
	EHudScreenIndicatorType__Objective = 3,
	EHudScreenIndicatorType__EHudScreenIndicatorType_MAX = 4,

};

// Enum DBDSharedTypes.EHudParentContainerType
enum class DBDSharedTypes_EHudParentContainerType : uint8_t
{
	EHudParentContainerType__Widget = 0,
	EHudParentContainerType__Outer = 1,
	EHudParentContainerType__Spectate = 2,
	EHudParentContainerType__EHudParentContainerType_MAX = 3,

};

// Enum DBDSharedTypes.EItemAvailability
enum class DBDSharedTypes_EItemAvailability : uint8_t
{
	EItemAvailability__Available   = 0,
	EItemAvailability__Disabled    = 1,
	EItemAvailability__Retired     = 2,
	EItemAvailability__EItemAvailability_MAX = 3,

};

// Enum DBDSharedTypes.ELoadoutItemType
enum class DBDSharedTypes_ELoadoutItemType : uint8_t
{
	ELoadoutItemType__None         = 0,
	ELoadoutItemType__Medkit       = 1,
	ELoadoutItemType__Toolbox      = 2,
	ELoadoutItemType__Flashlight   = 3,
	ELoadoutItemType__Key          = 4,
	ELoadoutItemType__Map          = 5,
	ELoadoutItemType__Firecracker  = 6,
	ELoadoutItemType__Flashbang    = 7,
	ELoadoutItemType__Count        = 8,
	ELoadoutItemType__ELoadoutItemType_MAX = 9,

};

// Enum DBDSharedTypes.EItemRarity
enum class DBDSharedTypes_EItemRarity : uint8_t
{
	EItemRarity__Common            = 0,
	EItemRarity__Uncommon          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__VeryRare          = 3,
	EItemRarity__UltraRare         = 4,
	EItemRarity__Artifact          = 5,
	EItemRarity__Spectral          = 6,
	EItemRarity__Teachable         = 7,
	EItemRarity__SpecialEvent      = 8,
	EItemRarity__Legendary         = 9,
	EItemRarity__Count             = 10,
	EItemRarity__None              = 11,
	EItemRarity__EItemRarity_MAX   = 12,

};

// Enum DBDSharedTypes.EOnboardingTutorialType
enum class DBDSharedTypes_EOnboardingTutorialType : uint8_t
{
	EOnboardingTutorialType__TutorialLevel = 0,
	EOnboardingTutorialType__BotMatchLevel = 1,
	EOnboardingTutorialType__FinalReward = 2,
	EOnboardingTutorialType__EOnboardingTutorialType_MAX = 3,

};

// Enum DBDSharedTypes.EOnboardingTutorialButtonStyle
enum class DBDSharedTypes_EOnboardingTutorialButtonStyle : uint8_t
{
	EOnboardingTutorialButtonStyle__Default = 0,
	EOnboardingTutorialButtonStyle__Survivor = 1,
	EOnboardingTutorialButtonStyle__Killer = 2,
	EOnboardingTutorialButtonStyle__Reward = 3,
	EOnboardingTutorialButtonStyle__EOnboardingTutorialButtonStyle_MAX = 4,

};

// Enum DBDSharedTypes.EOnboardingStepStatus
enum class DBDSharedTypes_EOnboardingStepStatus : uint8_t
{
	EOnboardingStepStatus__Unavailable = 0,
	EOnboardingStepStatus__Open    = 1,
	EOnboardingStepStatus__Completed = 2,
	EOnboardingStepStatus__EOnboardingStepStatus_MAX = 3,

};

// Enum DBDSharedTypes.EPingQuality
enum class DBDSharedTypes_EPingQuality : uint8_t
{
	EPingQuality__Good             = 0,
	EPingQuality__Bad              = 1,
	EPingQuality__Awful            = 2,
	EPingQuality__EPingQuality_MAX = 3,

};

// Enum DBDSharedTypes.EPlayerStateChangeType
enum class DBDSharedTypes_EPlayerStateChangeType : uint8_t
{
	EPlayerStateChangeType__None   = 0,
	EPlayerStateChangeType__Negative = 1,
	EPlayerStateChangeType__Neutral = 2,
	EPlayerStateChangeType__Positive = 3,
	EPlayerStateChangeType__EPlayerStateChangeType_MAX = 4,

};

// Enum DBDSharedTypes.ESicknessLevel
enum class DBDSharedTypes_ESicknessLevel : uint8_t
{
	ESicknessLevel__Off            = 0,
	ESicknessLevel__InProgress     = 1,
	ESicknessLevel__Full           = 2,
	ESicknessLevel__ESicknessLevel_MAX = 3,

};

// Enum DBDSharedTypes.EAfflictionLevel
enum class DBDSharedTypes_EAfflictionLevel : uint8_t
{
	EAfflictionLevel__Off          = 0,
	EAfflictionLevel__Level1       = 1,
	EAfflictionLevel__Level2       = 2,
	EAfflictionLevel__Level3       = 3,
	EAfflictionLevel__EAfflictionLevel_MAX = 4,

};

// Enum DBDSharedTypes.EBloodDisplayType
enum class DBDSharedTypes_EBloodDisplayType : uint8_t
{
	EBloodDisplayType__Hidden      = 0,
	EBloodDisplayType__Bottom      = 1,
	EBloodDisplayType__Top         = 2,
	EBloodDisplayType__EBloodDisplayType_MAX = 3,

};

// Enum DBDSharedTypes.EPlayerStatus
enum class DBDSharedTypes_EPlayerStatus : uint8_t
{
	EPlayerStatus__Default         = 0,
	EPlayerStatus__Hook            = 1,
	EPlayerStatus__Trap            = 2,
	EPlayerStatus__Dead            = 3,
	EPlayerStatus__Escaped         = 4,
	EPlayerStatus__Injured         = 5,
	EPlayerStatus__Crawling        = 6,
	EPlayerStatus__Sacrificed      = 7,
	EPlayerStatus__Disconnected    = 8,
	EPlayerStatus__InDeathBed      = 9,
	EPlayerStatus__EPlayerStatus_MAX = 10,

};

// Enum DBDSharedTypes.EReverseBearTrapUIState
enum class DBDSharedTypes_EReverseBearTrapUIState : uint8_t
{
	EReverseBearTrapUIState__Off   = 0,
	EReverseBearTrapUIState__Stage1 = 1,
	EReverseBearTrapUIState__Stage2 = 2,
	EReverseBearTrapUIState__EReverseBearTrapUIState_MAX = 3,

};

// Enum DBDSharedTypes.ESleepingUIState
enum class DBDSharedTypes_ESleepingUIState : uint8_t
{
	ESleepingUIState__Off          = 0,
	ESleepingUIState__FallingAsleep = 1,
	ESleepingUIState__Asleep       = 2,
	ESleepingUIState__ESleepingUIState_MAX = 3,

};

// Enum DBDSharedTypes.EObsessionUIState
enum class DBDSharedTypes_EObsessionUIState : uint8_t
{
	EObsessionUIState__Off         = 0,
	EObsessionUIState__Target      = 1,
	EObsessionUIState__Chased      = 2,
	EObsessionUIState__Dead        = 3,
	EObsessionUIState__EObsessionUIState_MAX = 4,

};

// Enum DBDSharedTypes.EThemeColorId
enum class DBDSharedTypes_EThemeColorId : uint8_t
{
	EThemeColorId__Invalid         = 0,
	EThemeColorId__Blue            = 1,
	EThemeColorId__Green           = 2,
	EThemeColorId__Yellow          = 3,
	EThemeColorId__EThemeColorId_MAX = 4,

};

// Enum DBDSharedTypes.EProgressionType
enum class DBDSharedTypes_EProgressionType : uint8_t
{
	EProgressionType__None         = 0,
	EProgressionType__Stars        = 1,
	EProgressionType__EProgressionType_MAX = 2,

};

// Enum DBDSharedTypes.ECurrencyType
enum class DBDSharedTypes_ECurrencyType : uint8_t
{
	ECurrencyType__None            = 0,
	ECurrencyType__BloodPoints     = 1,
	ECurrencyType__FearTokens      = 2,
	ECurrencyType__Cells           = 3,
	ECurrencyType__HalloweenCoins  = 4,
	ECurrencyType__LunarNewYearCoins = 5,
	ECurrencyType__HalloweenEventCurrency = 6,
	ECurrencyType__ECurrencyType_MAX = 7,

};

// Enum DBDSharedTypes.ERewardType
enum class DBDSharedTypes_ERewardType : uint8_t
{
	ERewardType__None              = 0,
	ERewardType__Character         = 1,
	ERewardType__Currency          = 2,
	ERewardType__Customization     = 3,
	ERewardType__Progression       = 4,
	ERewardType__ERewardType_MAX   = 5,

};

// Enum DBDSharedTypes.ETutorialObjectivePlayerActionMapping
enum class DBDSharedTypes_ETutorialObjectivePlayerActionMapping : uint8_t
{
	ETutorialObjectivePlayerActionMapping__None = 0,
	ETutorialObjectivePlayerActionMapping__Action_Camper = 1,
	ETutorialObjectivePlayerActionMapping__Interact_Camper = 2,
	ETutorialObjectivePlayerActionMapping__Interact_Slasher = 3,
	ETutorialObjectivePlayerActionMapping__Run_Camper = 4,
	ETutorialObjectivePlayerActionMapping__Attack_Slasher = 5,
	ETutorialObjectivePlayerActionMapping__SecondaryAction_Camper = 6,
	ETutorialObjectivePlayerActionMapping__ItemUse_Camper = 7,
	ETutorialObjectivePlayerActionMapping__Crouch = 8,
	ETutorialObjectivePlayerActionMapping__ItemDrop_Camper = 9,
	ETutorialObjectivePlayerActionMapping__ItemUse_Slasher = 10,
	ETutorialObjectivePlayerActionMapping__ItemDrop_Slasher = 11,
	ETutorialObjectivePlayerActionMapping__Mash_Camper = 12,
	ETutorialObjectivePlayerActionMapping__FastInteract_Camper = 13,
	ETutorialObjectivePlayerActionMapping__SecondaryAction_Slasher = 14,
	ETutorialObjectivePlayerActionMapping__Action_Slasher = 15,
	ETutorialObjectivePlayerActionMapping__Struggle = 16,
	ETutorialObjectivePlayerActionMapping__MoveAxes = 17,
	ETutorialObjectivePlayerActionMapping__LookAxes = 18,
	ETutorialObjectivePlayerActionMapping__Count = 19,
	ETutorialObjectivePlayerActionMapping__ETutorialObjectivePlayerActionMapping_MAX = 20,

};

// Enum DBDSharedTypes.EHudComponent
enum class DBDSharedTypes_EHudComponent : uint8_t
{
	EHudComponent__ACTION_PROMPT   = 0,
	EHudComponent__ACTION_PROGRESS_BAR = 1,
	EHudComponent__GENERATOR_ICON  = 2,
	EHudComponent__HATCH_ICON      = 3,
	EHudComponent__LOCAL_PLAYER_STATUS = 4,
	EHudComponent__OTHER_PLAYER_STATUSES = 5,
	EHudComponent__CROUCH_BUTTON   = 6,
	EHudComponent__CENTER_INTERACT_BUTTON = 7,
	EHudComponent__DIRECTIONAL_STICK = 8,
	EHudComponent__WIGGLE_BUTTONS  = 9,
	EHudComponent__STRUGGLE_BUTTONS = 10,
	EHudComponent__POWER_BUTTON    = 11,
	EHudComponent__ATTACK_BUTTON   = 12,
	EHudComponent__OBJECTIVES      = 13,
	EHudComponent__LOUD_NOISE_INDICATOR = 14,
	EHudComponent__EHudComponent_MAX = 15,

};

// Enum DBDSharedTypes.ETestBuildType
enum class DBDSharedTypes_ETestBuildType : uint8_t
{
	ETestBuildType__None           = 0,
	ETestBuildType__PublicTestBuild = 1,
	ETestBuildType__PaxBuild       = 2,
	ETestBuildType__ConsolePreAlphaBuild = 3,
	ETestBuildType__ETestBuildType_MAX = 4,

};

// Enum DBDSharedTypes.EControlMode
enum class DBDSharedTypes_EControlMode : uint8_t
{
	EControlMode__MOUSE_KB         = 0,
	EControlMode__XBOX             = 1,
	EControlMode__PS               = 2,
	EControlMode__VITA             = 3,
	EControlMode__SWITCH           = 4,
	EControlMode__STADIA           = 5,
	EControlMode__SWITCH_PRO       = 6,
	EControlMode__UNDEFINED        = 7,
	EControlMode__EControlMode_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDSharedTypes.FriendData
// 0x0060
struct FFriendData
{
	unsigned char                                      UnknownData_TXDF[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDSharedTypes.HelpCategoryData
// 0x0048 (0x0050 - 0x0008)
struct FHelpCategoryData : public FDBDTableRowBase
{
	DBDSharedTypes_EHelpType                           type;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHG0[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       title;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TopicIds;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDSharedTypes.HelpContextMappingData
// 0x0020 (0x0028 - 0x0008)
struct FHelpContextMappingData : public FDBDTableRowBase
{
	struct FString                                     ContextName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TopicIds;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDSharedTypes.HelpTopicData
// 0x0090 (0x0098 - 0x0008)
struct FHelpTopicData : public FDBDTableRowBase
{
	struct FText                                       title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     iconPath;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     videoId;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      icon[0x30];                                                // 0x0068(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DBDSharedTypes.RarityMaterialData
// 0x0010 (0x0018 - 0x0008)
struct FRarityMaterialData : public FDBDTableRowBase
{
	DBDSharedTypes_EItemRarity                         rarity;                                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S914[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
