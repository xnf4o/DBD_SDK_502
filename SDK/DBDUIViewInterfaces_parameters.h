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
// Parameters
//---------------------------------------------------------------------------

// Function DBDUIViewInterfaces.AddonViewInterface.SetData
struct UAddonViewInterface_SetData_Params
{
	struct FaddonViewData                              baseLoadoutPartViewData;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.AddonViewInterface.ClearData
struct UAddonViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
struct UEndGameCollapseBarViewInterface_StartEndGameScenario_Params
{
};

// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params
{
	float                                              Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
struct UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params
{
	bool                                               isSlowMode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
struct UEndGameCollapseBarViewInterface_InitEndGameScenario_Params
{
};

// Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
struct UEquippedItemViewInterface_SetData_Params
{
	struct FitemBundleViewData                         itemBundleData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
struct UEquippedItemViewInterface_SetActiveState_Params
{
	bool                                               isActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
struct UEquippedItemViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
struct UEquippedPowerViewInterface_SetData_Params
{
	struct FpowerBundleViewData                        powerBundleData;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
struct UEquippedPowerViewInterface_SetCarryingMode_Params
{
	bool                                               isCarrying;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
struct UEquippedPowerViewInterface_SetActiveState_Params
{
	bool                                               isActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
struct UEquippedPowerViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
struct UExampleViewInterface_SetExampleText_Params
{
	struct FString                                     text;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
struct UExampleViewInterface_SetExampleProgressRatio_Params
{
	float                                              ratio;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
struct UExternalEffectsViewInterface_ShowExternalPerk_Params
{
	struct FperkViewData                               perkViewData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
struct UExternalEffectsViewInterface_ShowExternalAddon_Params
{
	struct FaddonViewData                              addonViewData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
struct UGameManualViewInterface_SetCurrentManualMenuState_Params
{
	DBDUIViewInterfaces_EGameManualMenuState           menuState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
struct UGameManualViewInterface_SetCategoryData_Params
{
	struct FHelpCategoryData                           categoryData;                                              // (ConstParm, Parm, NativeAccessSpecifierPublic)
	TArray<struct FHelpTopicData>                      topicsData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
struct UGameManualViewInterface_GetCurrentManualMenuState_Params
{
	DBDUIViewInterfaces_EGameManualMenuState           ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HookCountViewInterface.SetData
struct UHookCountViewInterface_SetData_Params
{
	int                                                currentHookCount;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxHookCount;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                initialMaxHookCount;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
struct UHookCountViewInterface_InitWidget_Params
{
};

// Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
struct UHookCountViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
struct UHudAlertViewInterface_ShowStatusEffectAlert_Params
{
	struct FStatusEffectAlertViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
struct UHudAlertViewInterface_ShowScoreAlert_Params
{
	struct FScoreAlertViewData                         data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
struct UHudAlertViewInterface_FadeOut_Params
{
	float                                              delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
struct UHudAlertViewInterface_FadeIn_Params
{
};

// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectivePosition
struct UHudObjectiveViewInterface_SetHudObjectivePosition_Params
{
	bool                                               isHookCountDisplayed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectiveData
struct UHudObjectiveViewInterface_SetHudObjectiveData_Params
{
	struct FhudObjectiveViewData                       hudObjectiveViewData;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetCurrentHudObjectiveHighlight
struct UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Params
{
	bool                                               highlight;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.HudObjectiveViewInterface.ClearData
struct UHudObjectiveViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
struct UInteractionProgressViewInterface_UpdateInputProgress_Params
{
	float                                              progress;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              itemCharge;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
struct UInteractionProgressViewInterface_SetInputProgressPrompt_Params
{
	struct FInteractionProgressViewData                data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
struct UInteractionProgressViewInterface_HideInputProgressPrompt_Params
{
};

// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
struct UInteractionPromptsContainerViewInterface_RemovePrompt_Params
{
	struct FName                                       Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
struct UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params
{
};

// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
struct UInteractionPromptsContainerViewInterface_AddPrompt_Params
{
	struct FinteractionPromptViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
struct UItemBundleViewInterface_SetData_Params
{
	struct FitemBundleViewData                         itemBundleViewData;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
struct UItemBundleViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
struct UItemInteractionViewInterface_SetData_Params
{
	struct FitemBundleViewData                         itemBundleData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
struct UItemInteractionViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.ItemViewInterface.SetData
struct UItemViewInterface_SetData_Params
{
	struct FitemViewData                               itemViewData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ItemViewInterface.ClearData
struct UItemViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
struct ULeaningArrowsViewInterface_SetData_Params
{
	DBDSharedTypes_ELeanState                          leanState;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
struct UMatchResultViewInterface_UpdateWidget_Params
{
	struct FMatchResultViewData                        data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
struct UMatchResultViewInterface_PlayAnimationSequence_Params
{
};

// Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
struct UOfferingInteractionViewInterface_SetData_Params
{
	struct FofferingViewData                           OfferingData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
struct UOfferingInteractionViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.OfferingViewInterface.SetData
struct UOfferingViewInterface_SetData_Params
{
	struct FofferingViewData                           offeringViewData;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
struct UOfferingViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
struct UOnboardingMenuViewInterface_SetUIEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
struct UOnboardingMenuViewInterface_SetOnboardingMenuState_Params
{
	DBDUIViewInterfaces_EOnboardingMenuState           state;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
struct UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Params
{
	bool                                               ftue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
struct UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Params
{
	TScriptInterface<class UOnboardingTutorialViewInterface> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
struct UOnboardingMenuViewInterface_GetGameManualInterface_Params
{
	TScriptInterface<class UGameManualViewInterface>   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
struct UOnboardingTutorialViewInterface_UpdateProgress_Params
{
	TArray<struct FOnboardingStepViewData>             before;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOnboardingStepViewData>             after;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardWrapperViewData>              rewards;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
struct UOnboardingTutorialViewInterface_StopLoadingSpinner_Params
{
};

// Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
struct UOnboardingTutorialViewInterface_SetUIEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialDescription
struct UOnboardingTutorialViewInterface_SetTutorialDescription_Params
{
	struct FString                                     completedStepId;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
struct UOnboardingTutorialViewInterface_SetProgress_Params
{
	TArray<struct FOnboardingStepViewData>             progress;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
struct UPerksContainerViewInterface_GetPerkInterface_Params
{
	int                                                index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UPerkViewInterface>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
struct UPerkViewInterface_UpdatePerkCooldown_Params
{
	float                                              cooldownValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PerkViewInterface.SetData
struct UPerkViewInterface_SetData_Params
{
	struct FperkViewData                               perkViewData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PerkViewInterface.ClearData
struct UPerkViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.PingStatusViewInterface.SetData
struct UPingStatusViewInterface_SetData_Params
{
	DBDSharedTypes_EPingQuality                        pingQuality;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
struct UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params
{
	int                                                index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UPlayerStatusViewInterface> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
struct UPlayerStatusViewInterface_TriggerAfflictionHit_Params
{
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
struct UPlayerStatusViewInterface_SetTimerProgress_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDeepWound;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
struct UPlayerStatusViewInterface_SetData_Params
{
	struct FPlayerStatusViewData                       data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
struct UPlayerStatusViewInterface_PlayTimerAnimation_Params
{
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
struct UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params
{
};

// Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
struct UPlayerStatusViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
struct UPowerBundleViewInterface_SetData_Params
{
	struct FpowerBundleViewData                        powerBundleViewData;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
struct UPowerBundleViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.PowerViewInterface.SetData
struct UPowerViewInterface_SetData_Params
{
	struct FpowerViewData                              powerViewData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.PowerViewInterface.ClearData
struct UPowerViewInterface_ClearData_Params
{
};

// Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
struct UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Params
{
	struct FScreenIndicatorViewData                    data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
struct UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Params
{
	struct FString                                     Id;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
struct USkillCheckViewInterface_UpdateProgress_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
struct USkillCheckViewInterface_UpdatePositionOffset_Params
{
	int                                                x;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
struct USkillCheckViewInterface_ShowSkillCheckSuccess_Params
{
	bool                                               isBonus;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
struct USkillCheckViewInterface_ShowSkillCheckFail_Params
{
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
struct USkillCheckViewInterface_ShowSkillCheck_Params
{
	struct FSkillCheckViewData                         skillCheckData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
struct USkillCheckViewInterface_HideSkillCheck_Params
{
};

// Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
struct USkillCheckViewInterface_ApplyScaleFactor_Params
{
	float                                              scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
struct USpectateBarViewInterface_SetSpectatedName_Params
{
	struct FString                                     playerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
struct USpectateBarViewInterface_SetSpectateBarVisibility_Params
{
	bool                                               isVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
struct USpectateBarViewInterface_SetArrowsVisibility_Params
{
	bool                                               isVisible;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
struct UStartSequenceViewInterface_ShowStartSequence_Params
{
	struct FStartSequenceViewData                      data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
struct UStartSequenceViewInterface_HideStartSequence_Params
{
};

// Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
struct UStartSequenceViewInterface_GetIsStartSequenceVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
struct UStatusEffectViewInterface_ShowActiveStatusEffect_Params
{
	struct FStatusEffectViewData                       StatusEffectData;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
struct UStatusEffectViewInterface_RemoveExistingStatusEffect_Params
{
	struct FName                                       statusEffectID;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
struct UTemplateViewInterface_TemplateExampleFunction_Params
{
	struct FTemplateViewData                           templateData;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
struct UTestBuildFlagViewInterface_UpdateWidget_Params
{
	DBDSharedTypes_ETestBuildType                      testBuildType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
struct UTutorialHighlightViewInterface_SetTutorialHighlight_Params
{
	bool                                               show;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EHudComponent                       componentId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
struct UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params
{
	struct FNotifTutorialPopupViewData                 notifData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
struct UTutorialMysteryNoteViewInterface_HideMysteryNote_Params
{
};

// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
struct UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params
{
	struct FName                                       Id;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
struct UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params
{
};

// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
struct UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params
{
	struct FName                                       Id;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               removeAfterCompletion;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
struct UTutorialObjectivesViewInterface_AddTutorialObjective_Params
{
	struct FName                                       Id;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTutorialObjectivesViewData                 interactionPromptViewData;                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
struct UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params
{
	struct FNotifTutorialPopupViewData                 notifTutoData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
struct UTutorialPopupViewInterface_HideTutorialPopup_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
