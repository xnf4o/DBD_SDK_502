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

// Enum DBDBots.EInteractionCancelInputModes
enum class DBDBots_EInteractionCancelInputModes : uint8_t
{
	EInteractionCancelInputModes__PressCancelInput = 0,
	EInteractionCancelInputModes__InvertWithStopInputFlow = 1,
	EInteractionCancelInputModes__EInteractionCancelInputModes_MAX = 2,

};

// Enum DBDBots.EInteractionSkillInputModes
enum class DBDBots_EInteractionSkillInputModes : uint8_t
{
	EInteractionSkillInputModes__Once = 0,
	EInteractionSkillInputModes__Hold = 1,
	EInteractionSkillInputModes__Toggle = 2,
	EInteractionSkillInputModes__ToggleHold = 3,
	EInteractionSkillInputModes__OneClickHold = 4,
	EInteractionSkillInputModes__EInteractionSkillInputModes_MAX = 5,

};

// Enum DBDBots.EInteractionTargetInSightModes
enum class DBDBots_EInteractionTargetInSightModes : uint8_t
{
	EInteractionTargetInSightModes__None = 0,
	EInteractionTargetInSightModes__MustBeInSight = 1,
	EInteractionTargetInSightModes__MustBeInSight_NoObstruction = 2,
	EInteractionTargetInSightModes__ActivateIfOutOfSight = 3,
	EInteractionTargetInSightModes__EInteractionTargetInSightModes_MAX = 4,

};

// Enum DBDBots.EInteractionTargetRequirements
enum class DBDBots_EInteractionTargetRequirements : uint8_t
{
	EInteractionTargetRequirements__BestTargetMustBeValid = 0,
	EInteractionTargetRequirements__AnyValidTarget = 1,
	EInteractionTargetRequirements__NoTarget = 2,
	EInteractionTargetRequirements__None = 3,
	EInteractionTargetRequirements__EInteractionTargetRequirements_MAX = 4,

};

// Enum DBDBots.EAIThrowProjectileModes
enum class DBDBots_EAIThrowProjectileModes : uint8_t
{
	EAIThrowProjectileModes__OneShot = 0,
	EAIThrowProjectileModes__Continuous = 1,
	EAIThrowProjectileModes__EAIThrowProjectileModes_MAX = 2,

};

// Enum DBDBots.EAIThrowPredictionModes
enum class DBDBots_EAIThrowPredictionModes : uint8_t
{
	EAIThrowPredictionModes__FindBestThrowPowerRatio = 0,
	EAIThrowPredictionModes__FullThrowPowerRatio = 1,
	EAIThrowPredictionModes__EAIThrowPredictionModes_MAX = 2,

};

// Enum DBDBots.EIsCamperStateOnFilter
enum class DBDBots_EIsCamperStateOnFilter : uint8_t
{
	EIsCamperStateOnFilter__OnBlackboardKey = 0,
	EIsCamperStateOnFilter__OnOthersThanSelf = 1,
	EIsCamperStateOnFilter__EIsCamperStateOnFilter_MAX = 2,

};

// Enum DBDBots.EIsInteractionAvailableOnFilter
enum class DBDBots_EIsInteractionAvailableOnFilter : uint8_t
{
	EIsInteractionAvailableOnFilter__Self = 0,
	EIsInteractionAvailableOnFilter__AnyFriend = 1,
	EIsInteractionAvailableOnFilter__EIsInteractionAvailableOnFilter_MAX = 2,

};

// Enum DBDBots.EDecoratorIsObjFocusedFilter
enum class DBDBots_EDecoratorIsObjFocusedFilter : uint8_t
{
	EDecoratorIsObjFocusedFilter__Self = 0,
	EDecoratorIsObjFocusedFilter__SelfNearest = 1,
	EDecoratorIsObjFocusedFilter__EDecoratorIsObjFocusedFilter_MAX = 2,

};

// Enum DBDBots.ETunableComparison
enum class DBDBots_ETunableComparison : uint8_t
{
	ETunableComparison__Equal      = 0,
	ETunableComparison__NotEqual   = 1,
	ETunableComparison__Less       = 2,
	ETunableComparison__LessOrEqual = 3,
	ETunableComparison__Greater    = 4,
	ETunableComparison__GreaterOrEqual = 5,
	ETunableComparison__ETunableComparison_MAX = 6,

};

// Enum DBDBots.EFindInteractableCamperFilter
enum class DBDBots_EFindInteractableCamperFilter : uint8_t
{
	EFindInteractableCamperFilter__Crawling = 0,
	EFindInteractableCamperFilter__Standing = 1,
	EFindInteractableCamperFilter__GiveHelp = 2,
	EFindInteractableCamperFilter__RequestHelp = 3,
	EFindInteractableCamperFilter__RescuableBeingCarried = 4,
	EFindInteractableCamperFilter__EFindInteractableCamperFilter_MAX = 5,

};

// Enum DBDBots.EFindInteractorOpenConditions
enum class DBDBots_EFindInteractorOpenConditions : uint8_t
{
	EFindInteractorOpenConditions__AllGate_OpenedHatch = 0,
	EFindInteractorOpenConditions__All = 1,
	EFindInteractorOpenConditions__ClosedOnly = 2,
	EFindInteractorOpenConditions__OpenedOnly = 3,
	EFindInteractorOpenConditions__EFindInteractorOpenConditions_MAX = 4,

};

// Enum DBDBots.EFindInteractorExitOptions
enum class DBDBots_EFindInteractorExitOptions : uint8_t
{
	EFindInteractorExitOptions__All = 0,
	EFindInteractorExitOptions__HatchOnly = 1,
	EFindInteractorExitOptions__GateOnly = 2,
	EFindInteractorExitOptions__EFindInteractorExitOptions_MAX = 3,

};

// Enum DBDBots.EFindInteractableGeneratorStatusFilter
enum class DBDBots_EFindInteractableGeneratorStatusFilter : uint8_t
{
	EFindInteractableGeneratorStatusFilter__NeedRepair = 0,
	EFindInteractableGeneratorStatusFilter__CanBeDamaged = 1,
	EFindInteractableGeneratorStatusFilter__EFindInteractableGeneratorStatusFilter_MAX = 2,

};

// Enum DBDBots.EFindInteractableLockerStatusFilter
enum class DBDBots_EFindInteractableLockerStatusFilter : uint8_t
{
	EFindInteractableLockerStatusFilter__Empty = 0,
	EFindInteractableLockerStatusFilter__Occupied = 1,
	EFindInteractableLockerStatusFilter__Both = 2,
	EFindInteractableLockerStatusFilter__EFindInteractableLockerStatusFilter_MAX = 3,

};

// Enum DBDBots.EFindInteractableMeatHookStatus
enum class DBDBots_EFindInteractableMeatHookStatus : uint8_t
{
	EFindInteractableMeatHookStatus__HookedSurvivor = 0,
	EFindInteractableMeatHookStatus__Available = 1,
	EFindInteractableMeatHookStatus__EFindInteractableMeatHookStatus_MAX = 2,

};

// Enum DBDBots.EFindInteractablePalletIntentions
enum class DBDBots_EFindInteractablePalletIntentions : uint8_t
{
	EFindInteractablePalletIntentions__Fall = 0,
	EFindInteractablePalletIntentions__Raise = 1,
	EFindInteractablePalletIntentions__EFindInteractablePalletIntentions_MAX = 2,

};

// Enum DBDBots.EAINodeRelevancyOptions
enum class DBDBots_EAINodeRelevancyOptions : uint8_t
{
	EAINodeRelevancyOptions__OnEnter = 0,
	EAINodeRelevancyOptions__OnExit = 1,
	EAINodeRelevancyOptions__OnEnterAndExit = 2,
	EAINodeRelevancyOptions__OnTick = 3,
	EAINodeRelevancyOptions__EAINodeRelevancyOptions_MAX = 4,

};

// Enum DBDBots.EAIInvestigateSteps
enum class DBDBots_EAIInvestigateSteps : uint8_t
{
	EAIInvestigateSteps__None      = 0,
	EAIInvestigateSteps__ToInvestigation = 1,
	EAIInvestigateSteps__Investigating = 2,
	EAIInvestigateSteps__EAIInvestigateSteps_MAX = 3,

};

// Enum DBDBots.EExtMoveToStrafeFocusOptions
enum class DBDBots_EExtMoveToStrafeFocusOptions : uint8_t
{
	EExtMoveToStrafeFocusOptions__Never = 0,
	EExtMoveToStrafeFocusOptions__NearFocus = 1,
	EExtMoveToStrafeFocusOptions__NearGoal = 2,
	EExtMoveToStrafeFocusOptions__Always = 3,
	EExtMoveToStrafeFocusOptions__Intermittent = 4,
	EExtMoveToStrafeFocusOptions__EExtMoveToStrafeFocusOptions_MAX = 5,

};

// Enum DBDBots.ETaskInputPressModes
enum class DBDBots_ETaskInputPressModes : uint8_t
{
	ETaskInputPressModes__Once     = 0,
	ETaskInputPressModes__Loop     = 1,
	ETaskInputPressModes__Hold     = 2,
	ETaskInputPressModes__ETaskInputPressModes_MAX = 3,

};

// Enum DBDBots.EAIPressureZoneLevel
enum class DBDBots_EAIPressureZoneLevel : uint8_t
{
	EAIPressureZoneLevel__LMin     = 0,
	EAIPressureZoneLevel__L01      = 1,
	EAIPressureZoneLevel__L02      = 2,
	EAIPressureZoneLevel__LMax     = 3,
	EAIPressureZoneLevel__EAIPressureZoneLevel_MAX = 4,

};

// Enum DBDBots.EAIGameState
enum class DBDBots_EAIGameState : uint8_t
{
	EAIGameState__VeryEarly        = 0,
	EAIGameState__Early            = 1,
	EAIGameState__Mid              = 2,
	EAIGameState__Late             = 3,
	EAIGameState__VeryLate         = 4,
	EAIGameState__MAX              = 5,
	EAIGameState__EAIGameState_MAX = 6,

};

// Enum DBDBots.EAIObjectiveState
enum class DBDBots_EAIObjectiveState : uint8_t
{
	EAIObjectiveState__Early       = 0,
	EAIObjectiveState__Mid         = 1,
	EAIObjectiveState__Last        = 2,
	EAIObjectiveState__Completed   = 3,
	EAIObjectiveState__EAIObjectiveState_MAX = 4,

};

// Enum DBDBots.EAIDangerState
enum class DBDBots_EAIDangerState : uint8_t
{
	EAIDangerState__Safe           = 0,
	EAIDangerState__Unsafe         = 1,
	EAIDangerState__Dire           = 2,
	EAIDangerState__EAIDangerState_MAX = 3,

};

// Enum DBDBots.ENavLinkPlayerStates
enum class DBDBots_ENavLinkPlayerStates : uint8_t
{
	ENavLinkPlayerStates__RequestStart = 0,
	ENavLinkPlayerStates__MoveStart = 1,
	ENavLinkPlayerStates__Using    = 2,
	ENavLinkPlayerStates__MoveEnd  = 3,
	ENavLinkPlayerStates__Release  = 4,
	ENavLinkPlayerStates__ENavLinkPlayerStates_MAX = 5,

};

// Enum DBDBots.EPathBuildResult
enum class DBDBots_EPathBuildResult : uint8_t
{
	EPathBuildResult__None         = 0,
	EPathBuildResult__Failed       = 1,
	EPathBuildResult__Succeeded    = 2,
	EPathBuildResult__Partial      = 3,
	EPathBuildResult__InProgress   = 4,
	EPathBuildResult__EPathBuildResult_MAX = 5,

};

// Enum DBDBots.EAIFleeLoopStrategy
enum class DBDBots_EAIFleeLoopStrategy : uint8_t
{
	EAIFleeLoopStrategy__LoseKiller = 0,
	EAIFleeLoopStrategy__WasteTime = 1,
	EAIFleeLoopStrategy__EAIFleeLoopStrategy_MAX = 2,

};

// Enum DBDBots.EAIFleePathStrategy
enum class DBDBots_EAIFleePathStrategy : uint8_t
{
	EAIFleePathStrategy__None      = 0,
	EAIFleePathStrategy__KeepGoal  = 1,
	EAIFleePathStrategy__Away      = 2,
	EAIFleePathStrategy__Loop      = 3,
	EAIFleePathStrategy__AwayLOS   = 4,
	EAIFleePathStrategy__EAIFleePathStrategy_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDBots.TargetMoveAwayToFastInfo
// 0x0064
struct FTargetMoveAwayToFastInfo
{
	float                                              AccumulatedTime;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownUntilTime;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDetectedStimulus                         stimulus;                                                  // 0x0008(0x005C) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.AIRandomByDistancePercentagesAtTime
// 0x0030
struct FAIRandomByDistancePercentagesAtTime
{
	struct FAITunableParameter                         PercentageAtStartDistance;                                 // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         PercentageAtEndDistance;                                   // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         AtRelativeTime;                                            // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.AIGoal
// 0x0018
struct FAIGoal
{
	class UObject*                                     source;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     MetaGoal;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     goal;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.AIGoalWeight
// 0x0030
struct FAIGoalWeight
{
	struct FAIGoal                                     GoalInfo;                                                  // 0x0000(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5IT7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     WeightDebug;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.AIGoalWeightContainer
// 0x0010
struct FAIGoalWeightContainer
{
	TArray<struct FAIGoalWeight>                       WeightedGoals;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.DangerStateGameStateMapContainer
// 0x0050
struct FDangerStateGameStateMapContainer
{
	TMap<DBDBots_EAIDangerState, DBDBots_EAIGameState> map;                                                       // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.GameStatePressureZoneLevelMapContainer
// 0x0050
struct FGameStatePressureZoneLevelMapContainer
{
	TMap<DBDBots_EAIGameState, DBDBots_EAIPressureZoneLevel> map;                                                       // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.RelevantNodeMemory
// 0x0018
struct FRelevantNodeMemory
{
	class UBTNode*                                     Node;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49MT[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDBots.MindFocusObjectEntry
// 0x0078
struct FMindFocusObjectEntry
{
	TArray<class UObject*>                             FocusedBy;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusedStartTime;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4W4L[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, float>                          CooldownMap;                                               // 0x0018(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXYA[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDBots.WeightedWishedObjectMapContainer
// 0x0050
struct FWeightedWishedObjectMapContainer
{
	TMap<class UObject*, float>                        WeightedWishedObjectMap;                                   // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.MoveLinkPlayerInfo
// 0x0028
struct FMoveLinkPlayerInfo
{
	unsigned char                                      UnknownData_QSKW[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDBots.AISkillPerk
// 0x0038
struct FAISkillPerk
{
	struct FDataTableDropdown                          perkID;                                                    // 0x0000(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAISkill*                                    Skill;                                                     // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.NavLinkInteractPlayerSetup
// 0x0028
struct FNavLinkInteractPlayerSetup
{
	DeadByDaylight_EPawnInputPressTypes                input;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L8BY[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             InteractionIDs;                                            // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         InputTimeDeviationInChase;                                 // 0x0018(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.GameStateEvadeLoopStrategyMapContainer
// 0x0050
struct FGameStateEvadeLoopStrategyMapContainer
{
	TMap<DBDBots_EAIGameState, DBDBots_EAIFleeLoopStrategy> map;                                                       // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.ExplorableTileInfo
// 0x002C
struct FExplorableTileInfo
{
	struct Fguid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fbox                                        Bounds;                                                    // 0x0010(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDBots.NavMovePathPoint
// 0x0014
struct FNavMovePathPoint
{
	unsigned char                                      UnknownData_X3O6[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
