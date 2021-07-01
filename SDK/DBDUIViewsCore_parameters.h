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

// Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
struct UCoreBaseUserWidget_UpdateScale_Params
{
	float                                              scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
struct UCoreBaseUserWidget_RegisterForInput_Params
{
};

// Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
struct UCoreBaseUserWidget_OnControlModeChangedBP_Params
{
	DBDSharedTypes_EControlMode                        controlMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
struct UCoreBaseUserWidget_DeregisterFromInput_Params
{
};

// Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
struct UCharacterTooltipWidget_SetTooltipData_Params
{
	struct FCharacterTooltipViewData                   characterViewData;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
struct UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params
{
	int                                                stackCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params
{
	DBDSharedTypes_EItemRarity                         rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params
{
	class UTexture2D*                                  icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
struct UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
struct UCoreBaseHudWidget_PlayFocusAnimation_Params
{
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
struct UCoreButtonPromptWidget_SetText_Params
{
	struct FText                                       text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
struct UCoreButtonPromptWidget_SetInputKey_Params
{
	struct Fkey                                        key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
struct UCoreButtonPromptWidget_SetAction_Params
{
	DBDInput_EUIActionType                             ActionType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
struct UCoreButtonPromptWidget_EnablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
struct UCoreButtonPromptWidget_DisablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneUnhovered
struct UCoreButtonWidget_OnHitzoneUnhovered_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneHovered
struct UCoreButtonWidget_OnHitzoneHovered_Params
{
};

// Function DBDUIViewsCore.CoreRewardWidget.GetHitZone
struct UCoreRewardWidget_GetHitZone_Params
{
	class UDBDButton*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWidget.ClearData
struct UCoreRewardWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
struct UCoreCharacterRewardWidget_SetData_Params
{
	struct FcharacterRewardViewData                    characterRewardViewData;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData
struct UCoreCurrencyRewardWidget_SetData_Params
{
	struct FcurrencyRewardViewData                     currencyRewardViewData;                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
struct UCoreCustomizationRewardWidget_SetData_Params
{
	struct FcustomizationRewardViewData                customizationRewardViewData;                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
struct UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params
{
	float                                              progress;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
struct UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params
{
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
struct UCoreExternalEffectsWidget_HideExternalPerk_Params
{
	struct FName                                       perkID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
struct UCoreExternalEffectsWidget_HideExternalAddon_Params
{
	struct FName                                       addonID;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
struct UCoreGameManualCategoryButton_SetText_Params
{
	struct FText                                       title;                                                     // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FText                                       description;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
struct UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params
{
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
struct UCoreGameManualPanelWidget_ShowHelpTopics_Params
{
	DBDSharedTypes_EHelpType                           categoryType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
struct UCoreGameManualPanelWidget_SetGameManualMenuState_Params
{
	DBDUIViewInterfaces_EGameManualMenuState           menuState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
struct UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params
{
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged
struct UCoreGameManualPanelWidget_OnTopicTabChanged_Params
{
	int                                                TabIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
struct UCoreHudAlertWidget_PopAlert_Params
{
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
struct UCoreHudAlertWidget_OnPopAlertComplete_Params
{
	struct FUITweenInstance                            tween;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
struct UCoreHudAlertWidget_OnClearAlertsComplete_Params
{
	struct FUITweenInstance                            tween;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
struct UCoreHudAlertWidget_GetRemainingTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
struct UCoreHudAlertWidget_GetPendingAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
struct UCoreHudAlertWidget_GetAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
struct UCoreHudAlertWidget_ClearAlerts_Params
{
};

// Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
struct UCoreHudScoreAlertItem_SetData_Params
{
	struct FScoreAlertViewData                         data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
struct UCoreHudStatusEffectAlertItem_SetData_Params
{
	struct FStatusEffectAlertViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
struct UCoreInputPromptTextWidget_SetText_Params
{
	struct FText                                       text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
struct UCoreInputPromptTextWidget_SetInputKey_Params
{
	struct Fkey                                        inputKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
struct UCoreInputPromptWidget_SetInputKey_Params
{
	struct Fkey                                        inputKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
struct UCoreInputPromptWidget_PromptNotFound_Params
{
};

// Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
struct UCoreInputPromptWidget_GetInputShortDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
struct UCoreInputPromptWidget_DisplayPrompt_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
struct UCoreInteractionPromptActionWidget_StopIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
struct UCoreInteractionPromptActionWidget_SetInputKey2_Params
{
	struct Fkey                                        inputKey2;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
struct UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
struct UCoreInteractionPromptActionWidget_HasSecondPrompt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4
struct UCoreInteractionPromptActionMovementWidget_SetInputKey4_Params
{
	struct Fkey                                        inputKey4;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3
struct UCoreInteractionPromptActionMovementWidget_SetInputKey3_Params
{
	struct Fkey                                        inputKey3;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt
struct UCoreInteractionPromptActionMovementWidget_HasThirdPrompt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt
struct UCoreInteractionPromptActionMovementWidget_HasFourthPrompt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
struct UCoreInteractionPromptWidget_SetData_Params
{
	struct FinteractionPromptViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
struct UCoreInteractionPromptWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params
{
	struct FText                                       menuTitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params
{
	struct FText                                       menuTitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params
{
	struct FText                                       menuTitle;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       menuSubTitle;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
struct UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged
struct UCoreOnboardingMenuWidget_OnOnboardingTabChanged_Params
{
	int                                                TabIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
struct UCoreOnboardingTutorialButtonWidget_SetVisual_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
struct UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
struct UCoreOnboardingTutorialButtonWidget_SetData_Params
{
	struct FOnboardingTutorialButtonViewData           ViewData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               isRefreshingWithAnimation;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
struct UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
struct UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
struct UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params
{
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
struct UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params
{
	DBDSharedTypes_ESleepingUIState                    newSleepState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
struct UCorePlayerStatusWidget_HasTimerProgressChanged_Params
{
	float                                              newTimerProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
struct UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
struct UCorePlayerStatusWidget_HasPlayerStateChanged_Params
{
	DBDSharedTypes_EPlayerStatus                       NewPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
struct UCorePlayerStatusWidget_HasObsessionStateChanged_Params
{
	DBDSharedTypes_EObsessionUIState                   newObsessionState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
struct UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
struct UCorePlayerStatusWidget_GetPlayerStateChangeType_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStateChangeType              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData
struct UCoreProgressionRewardWidget_SetData_Params
{
	struct FprogressionRewardViewData                  progressionRewardViewData;                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
struct UCoreRewardWrapperWidget_SetData_Params
{
	struct FRewardWrapperViewData                      ViewData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
struct UCoreRewardWrapperWidget_GetRewardWidget_Params
{
	class UCoreRewardWidget*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
struct UCoreRewardWrapperWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
struct UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params
{
	TMap<struct FString, class UCoreScreenIndicatorWidget*> ReturnValue;                                               // (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
struct UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params
{
	class UCoreScreenIndicatorWidget*                  Value;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
struct UCoreScreenIndicatorWidget_SetData_Params
{
	struct FScreenIndicatorViewData                    data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
struct UCoreScreenIndicatorWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
struct UCoreStatusEffectIcon_UpdateWidget_Params
{
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
struct UCoreStatusEffectIcon_UpdatePercentageFill_Params
{
	float                                              percentage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
struct UCoreStatusEffectIcon_SetStatusEffectData_Params
{
	struct FStatusEffectViewData                       data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
struct UCoreStatusEffectIcon_SetInactiveTicks_Params
{
	int                                                inactiveTicks;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
struct UCoreStatusEffectIcon_GetStatusEffectData_Params
{
	struct FStatusEffectViewData                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
struct UCoreStatusEffectIcon_GetInactiveTicks_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
struct UCoreStatusEffectWidget_GetStatusEffectMap_Params
{
	TMap<struct FName, class UCoreStatusEffectIcon*>   ReturnValue;                                               // (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled
struct UCoreTabContainerWidget_SetAllTabsEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab
struct UCoreTabContainerWidget_SelectTab_Params
{
	int                                                TabIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab
struct UCoreTabContainerWidget_SelectPreviousTab_Params
{
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab
struct UCoreTabContainerWidget_SelectNextTab_Params
{
};

// Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged
struct UCoreTabContainerWidget_OnSelectedTabChanged_Params
{
	int                                                newTabIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.Init
struct UCoreTabContainerWidget_Init_Params
{
};

// Function DBDUIViewsCore.CoreTabContainerWidget.Clear
struct UCoreTabContainerWidget_Clear_Params
{
};

// Function DBDUIViewsCore.CoreTabWidget.SetVisualState
struct UCoreTabWidget_SetVisualState_Params
{
	DBDUIViewsCore_ETabWidgetState                     NewState;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabWidget.ButtonClicked
struct UCoreTabWidget_ButtonClicked_Params
{
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
struct UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params
{
	bool                                               removeAfterCompletion;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
struct UCoreTutorialObjectiveItem_InitObjective_Params
{
	struct FTutorialObjectivesViewData                 interactionsViewData;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
struct UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params
{
	class UCoreTutorialObjectiveItem*                  Item;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData
struct UCurrencyTooltipWidget_SetTooltipData_Params
{
	struct FCurrencyTooltipViewData                    currencyViewData;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
struct UCustomizationTooltipWidget_SetTooltipData_Params
{
	struct FCustomizationTooltipViewData               customizationViewData;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
struct UDBDImage_SetBrushFromTextureWithDefault_Params
{
	class UTexture2D*                                  texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               matchSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
struct UDBDRichTextBlock_SetIsUpperCase_Params
{
	bool                                               isUpperCase;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetHtmlText
struct UDBDRichTextBlock_SetHtmlText_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking
struct UDBDRichTextBlock_SetHasUndocking_Params
{
	bool                                               hasUndocking;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
struct UDBDRichTextBlock_OnSwitchDockStateChanged_Params
{
	bool                                               isDocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
struct UDBDRichTextBlock_GetIsUpperCase_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking
struct UDBDRichTextBlock_GetHasUndocking_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
struct UDBDScrollBox_UpdateDisplayPrompt_Params
{
};

// Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
struct UDBDScrollBox_OnControlModeChanged_Params
{
	DBDSharedTypes_EControlMode                        controlMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.isMouseOver
struct UDBDScrollBox_isMouseOver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
struct UDBDScrollBox_HandleControllerInput_Params
{
	float                                              analogValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
struct UDBDTextBlock_SetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   undockedProperties;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
struct UDBDTextBlock_SetIsUpperCase_Params
{
	bool                                               isUpperCase;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
struct UDBDTextBlock_SetHasUndocking_Params
{
	bool                                               hasUndocking;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
struct UDBDTextBlock_OnSwitchDockStateChanged_Params
{
	bool                                               isDocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
struct UDBDTextBlock_GetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
struct UDBDTextBlock_GetIsUpperCase_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
struct UDBDTextBlock_GetHasUndocking_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
struct UDBDTooltipManager_ShowCustomizationTooltip_Params
{
	struct FCustomizationTooltipViewData               tooltipViewData;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
struct UDBDTooltipManager_ShowCurrencyTooltip_Params
{
	struct FCurrencyTooltipViewData                    tooltipViewData;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
struct UDBDTooltipManager_ShowCharacterTooltip_Params
{
	struct FCharacterTooltipViewData                   tooltipViewData;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
struct UDBDTooltipManager_HideTooltip_Params
{
};

// Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
struct UDBDWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
struct UDBDWrapBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
struct UDBDWrapBox_AddChildToWrapBox_Params
{
	class UWidget*                                     content;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDWrapBoxSlot*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
struct UDBDWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
struct UDBDWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
struct UDBDWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
struct UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
struct UDBDWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.TestWidget.SetShowWorkbench
struct UTestWidget_SetShowWorkbench_Params
{
	bool                                               ShowWorkbench;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
