// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::UpdateScale(float scale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale");

	UCoreBaseUserWidget_UpdateScale_Params params;
	params.scale = scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
// (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::RegisterForInput()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput");

	UCoreBaseUserWidget_RegisterForInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// DBDSharedTypes_EControlMode    controlMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP");

	UCoreBaseUserWidget_OnControlModeChangedBP_Params params;
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
// (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::DeregisterFromInput()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput");

	UCoreBaseUserWidget_DeregisterFromInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCharacterTooltipViewData characterViewData              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetTooltipData(const struct FCharacterTooltipViewData& characterViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData");

	UCharacterTooltipWidget_SetTooltipData_Params params;
	params.characterViewData = characterViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            stackCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int stackCount)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount");

	UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params;
	params.stackCount = stackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDSharedTypes_EItemRarity     rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(DBDSharedTypes_EItemRarity rarity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params;
	params.rarity = rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon(class UTexture2D* icon)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params;
	params.icon = icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation");

	UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreBaseHudWidget::PlayFocusAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation");

	UCoreBaseHudWidget_PlayFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetText(const struct FText& text)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetText");

	UCoreButtonPromptWidget_SetText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetInputKey(const struct Fkey& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey");

	UCoreButtonPromptWidget_SetInputKey_Params params;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// DBDInput_EUIActionType         ActionType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetAction(DBDInput_EUIActionType ActionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction");

	UCoreButtonPromptWidget_SetAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::EnablePrompts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts");

	UCoreButtonPromptWidget_EnablePrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::DisablePrompts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts");

	UCoreButtonPromptWidget_DisablePrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneUnhovered
// (Final, Native, Private)
void UCoreButtonWidget::OnHitzoneUnhovered()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneUnhovered");

	UCoreButtonWidget_OnHitzoneUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneHovered
// (Final, Native, Private)
void UCoreButtonWidget::OnHitzoneHovered()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnHitzoneHovered");

	UCoreButtonWidget_OnHitzoneHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreRewardWidget.GetHitZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDBDButton*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDButton* UCoreRewardWidget::GetHitZone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWidget.GetHitZone");

	UCoreRewardWidget_GetHitZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreRewardWidget.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreRewardWidget::ClearData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWidget.ClearData");

	UCoreRewardWidget_ClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FcharacterRewardViewData characterRewardViewData        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCharacterRewardWidget::SetData(const struct FcharacterRewardViewData& characterRewardViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData");

	UCoreCharacterRewardWidget_SetData_Params params;
	params.characterRewardViewData = characterRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FcurrencyRewardViewData currencyRewardViewData         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCurrencyRewardWidget::SetData(const struct FcurrencyRewardViewData& currencyRewardViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData");

	UCoreCurrencyRewardWidget_SetData_Params params;
	params.currencyRewardViewData = currencyRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FcustomizationRewardViewData customizationRewardViewData    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCustomizationRewardWidget::SetData(const struct FcustomizationRewardViewData& customizationRewardViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData");

	UCoreCustomizationRewardWidget_SetData_Params params;
	params.customizationRewardViewData = customizationRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float progress)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression");

	UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
// (Event, Protected, BlueprintEvent)
void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation");

	UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   perkID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalPerk(const struct FName& perkID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk");

	UCoreExternalEffectsWidget_HideExternalPerk_Params params;
	params.perkID = perkID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   addonID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalAddon(const struct FName& addonID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon");

	UCoreExternalEffectsWidget_HideExternalAddon_Params params;
	params.addonID = addonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   title                          (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FText                   description                    (ConstParm, Parm, NativeAccessSpecifierPublic)
void UCoreGameManualCategoryButton::SetText(const struct FText& title, const struct FText& description)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText");

	UCoreGameManualCategoryButton_SetText_Params params;
	params.title = title;
	params.description = description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
// (Final, Native, Protected, BlueprintCallable)
void UCoreGameManualPanelWidget::ToggleGameManualMenuState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState");

	UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDSharedTypes_EHelpType       categoryType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::ShowHelpTopics(DBDSharedTypes_EHelpType categoryType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics");

	UCoreGameManualPanelWidget_ShowHelpTopics_Params params;
	params.categoryType = categoryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDUIViewInterfaces_EGameManualMenuState menuState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState");

	UCoreGameManualPanelWidget_SetGameManualMenuState_Params params;
	params.menuState = menuState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
// (Final, Native, Protected, BlueprintCallable)
void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle");

	UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged
// (Final, Native, Protected)
// Parameters:
// int                            TabIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::OnTopicTabChanged(int TabIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged");

	UCoreGameManualPanelWidget_OnTopicTabChanged_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
// (Final, Native, Private)
void UCoreHudAlertWidget::PopAlert()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert");

	UCoreHudAlertWidget_PopAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FUITweenInstance        tween                          (Parm, OutParm, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnPopAlertComplete(struct FUITweenInstance* tween)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete");

	UCoreHudAlertWidget_OnPopAlertComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (tween != nullptr)
		*tween = params.tween;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FUITweenInstance        tween                          (Parm, OutParm, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnClearAlertsComplete(struct FUITweenInstance* tween)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete");

	UCoreHudAlertWidget_OnClearAlertsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (tween != nullptr)
		*tween = params.tween;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCoreHudAlertWidget::GetRemainingTime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime");

	UCoreHudAlertWidget_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCoreBaseUserWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts");

	UCoreHudAlertWidget_GetPendingAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCoreBaseUserWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts");

	UCoreHudAlertWidget_GetAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
// (Final, Native, Private)
void UCoreHudAlertWidget::ClearAlerts()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts");

	UCoreHudAlertWidget_ClearAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreAlertViewData     data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& data)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData");

	UCoreHudScoreAlertItem_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectAlertViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& data)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData");

	UCoreHudStatusEffectAlertItem_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetText(const struct FText& text)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText");

	UCoreInputPromptTextWidget_SetText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetInputKey(const struct Fkey& inputKey)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey");

	UCoreInputPromptTextWidget_SetInputKey_Params params;
	params.inputKey = inputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::SetInputKey(const struct Fkey& inputKey)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey");

	UCoreInputPromptWidget_SetInputKey_Params params;
	params.inputKey = inputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
// (Final, Native, Protected, BlueprintCallable)
void UCoreInputPromptWidget::PromptNotFound()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound");

	UCoreInputPromptWidget_PromptNotFound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UCoreInputPromptWidget::GetInputShortDisplayName()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName");

	UCoreInputPromptWidget_GetInputShortDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
// (Event, Protected, BlueprintEvent)
void UCoreInputPromptWidget::DisplayPrompt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt");

	UCoreInputPromptWidget_DisplayPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
// (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::StopIdleAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation");

	UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey2                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey2(const struct Fkey& inputKey2)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2");

	UCoreInteractionPromptActionWidget_SetInputKey2_Params params;
	params.inputKey2 = inputKey2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
// (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation");

	UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt");

	UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey4                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionMovementWidget::SetInputKey4(const struct Fkey& inputKey4)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4");

	UCoreInteractionPromptActionMovementWidget_SetInputKey4_Params params;
	params.inputKey4 = inputKey4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey3                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionMovementWidget::SetInputKey3(const struct Fkey& inputKey3)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3");

	UCoreInteractionPromptActionMovementWidget_SetInputKey3_Params params;
	params.inputKey3 = inputKey3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionMovementWidget::HasThirdPrompt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt");

	UCoreInteractionPromptActionMovementWidget_HasThirdPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionMovementWidget::HasFourthPrompt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt");

	UCoreInteractionPromptActionMovementWidget_HasFourthPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinteractionPromptViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::SetData(const struct FinteractionPromptViewData& data)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData");

	UCoreInteractionPromptWidget_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreInteractionPromptWidget::ClearData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData");

	UCoreInteractionPromptWidget_ClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   menuTitle                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(const struct FText& menuTitle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params params;
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   menuTitle                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(const struct FText& menuTitle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params params;
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   menuTitle                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   menuSubTitle                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params params;
	params.menuTitle = menuTitle;
	params.menuSubTitle = menuSubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle");

	UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged
// (Final, Native, Public)
// Parameters:
// int                            TabIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::OnOnboardingTabChanged(int TabIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged");

	UCoreOnboardingMenuWidget_OnOnboardingTabChanged_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
// (Final, Native, Protected, BlueprintCallable)
void UCoreOnboardingTutorialButtonWidget::SetVisual()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual");

	UCoreOnboardingTutorialButtonWidget_SetVisual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool enabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled");

	UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params params;
	params.enabled = enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FOnboardingTutorialButtonViewData ViewData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           isRefreshingWithAnimation      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetData(const struct FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData");

	UCoreOnboardingTutorialButtonWidget_SetData_Params params;
	params.ViewData = ViewData;
	params.isRefreshingWithAnimation = isRefreshingWithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
// (Final, Native, Private)
void UCoreOnboardingTutorialButtonWidget::OnRewardClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked");

	UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
// (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated");

	UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
// (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate");

	UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_ESleepingUIState newSleepState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation");

	UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params;
	params.newSleepState = newSleepState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          newTimerProgress               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged");

	UCorePlayerStatusWidget_HasTimerProgressChanged_Params params;
	params.newTimerProgress = newTimerProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged");

	UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_EPlayerStatus   NewPlayerState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus NewPlayerState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged");

	UCorePlayerStatusWidget_HasPlayerStateChanged_Params params;
	params.NewPlayerState = NewPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_EObsessionUIState newObsessionState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged");

	UCorePlayerStatusWidget_HasObsessionStateChanged_Params params;
	params.newObsessionState = newObsessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged");

	UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// DBDSharedTypes_EPlayerStateChangeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DBDSharedTypes_EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType");

	UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FprogressionRewardViewData progressionRewardViewData      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreProgressionRewardWidget::SetData(const struct FprogressionRewardViewData& progressionRewardViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData");

	UCoreProgressionRewardWidget_SetData_Params params;
	params.progressionRewardViewData = progressionRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRewardWrapperViewData  ViewData                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreRewardWrapperWidget::SetData(const struct FRewardWrapperViewData& ViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData");

	UCoreRewardWrapperWidget_SetData_Params params;
	params.ViewData = ViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCoreRewardWidget*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget");

	UCoreRewardWrapperWidget_GetRewardWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
// (Final, Native, Public, BlueprintCallable)
void UCoreRewardWrapperWidget::ClearData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData");

	UCoreRewardWrapperWidget_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TMap<struct FString, class UCoreScreenIndicatorWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FString, class UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap");

	UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCoreScreenIndicatorWidget* Value                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey");

	UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScreenIndicatorViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreScreenIndicatorWidget::SetData(const struct FScreenIndicatorViewData& data)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData");

	UCoreScreenIndicatorWidget_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreScreenIndicatorWidget::ClearData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData");

	UCoreScreenIndicatorWidget_ClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreStatusEffectIcon::UpdateWidget()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget");

	UCoreStatusEffectIcon_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percentage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::UpdatePercentageFill(float percentage)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill");

	UCoreStatusEffectIcon_UpdatePercentageFill_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStatusEffectViewData   data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& data)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData");

	UCoreStatusEffectIcon_SetStatusEffectData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            inactiveTicks                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetInactiveTicks(int inactiveTicks)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks");

	UCoreStatusEffectIcon_SetInactiveTicks_Params params;
	params.inactiveTicks = inactiveTicks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FStatusEffectViewData   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData");

	UCoreStatusEffectIcon_GetStatusEffectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCoreStatusEffectIcon::GetInactiveTicks()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks");

	UCoreStatusEffectIcon_GetInactiveTicks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, class UCoreStatusEffectIcon*> ReturnValue                    (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap");

	UCoreStatusEffectWidget_GetStatusEffectMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::SetAllTabsEnabled(bool enabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled");

	UCoreTabContainerWidget_SetAllTabsEnabled_Params params;
	params.enabled = enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TabIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::SelectTab(int TabIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab");

	UCoreTabContainerWidget_SelectTab_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab
// (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::SelectPreviousTab()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab");

	UCoreTabContainerWidget_SelectPreviousTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab
// (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::SelectNextTab()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab");

	UCoreTabContainerWidget_SelectNextTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged
// (Final, Native, Private)
// Parameters:
// int                            newTabIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::OnSelectedTabChanged(int newTabIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged");

	UCoreTabContainerWidget_OnSelectedTabChanged_Params params;
	params.newTabIndex = newTabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.Init
// (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::Init()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.Init");

	UCoreTabContainerWidget_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabContainerWidget.Clear
// (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::Clear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.Clear");

	UCoreTabContainerWidget_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabWidget.SetVisualState
// (Event, Protected, BlueprintEvent)
// Parameters:
// DBDUIViewsCore_ETabWidgetState NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabWidget::SetVisualState(DBDUIViewsCore_ETabWidgetState NewState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabWidget.SetVisualState");

	UCoreTabWidget_SetVisualState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTabWidget.ButtonClicked
// (Final, Native, Private)
void UCoreTabWidget::ButtonClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabWidget.ButtonClicked");

	UCoreTabWidget_ButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           removeAfterCompletion          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted");

	UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params;
	params.removeAfterCompletion = removeAfterCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTutorialObjectivesViewData interactionsViewData           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective");

	UCoreTutorialObjectiveItem_InitObjective_Params params;
	params.interactionsViewData = interactionsViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
// (Final, Native, Private)
// Parameters:
// class UCoreTutorialObjectiveItem* Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted");

	UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurrencyTooltipViewData currencyViewData               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCurrencyTooltipWidget::SetTooltipData(const struct FCurrencyTooltipViewData& currencyViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData");

	UCurrencyTooltipWidget_SetTooltipData_Params params;
	params.currencyViewData = currencyViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCustomizationTooltipViewData customizationViewData          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCustomizationTooltipWidget::SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData");

	UCustomizationTooltipWidget_SetTooltipData_Params params;
	params.customizationViewData = customizationViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           matchSize                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* texture, bool matchSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault");

	UDBDImage_SetBrushFromTextureWithDefault_Params params;
	params.texture = texture;
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isUpperCase                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase");

	UDBDRichTextBlock_SetIsUpperCase_Params params;
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDRichTextBlock.SetHtmlText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetHtmlText(const struct FText& InText)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetHtmlText");

	UDBDRichTextBlock_SetHtmlText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           hasUndocking                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetHasUndocking(bool hasUndocking)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking");

	UDBDRichTextBlock_SetHasUndocking_Params params;
	params.hasUndocking = hasUndocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           isDocked                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged");

	UDBDRichTextBlock_OnSwitchDockStateChanged_Params params;
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDRichTextBlock::GetIsUpperCase()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase");

	UDBDRichTextBlock_GetIsUpperCase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDRichTextBlock::GetHasUndocking()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking");

	UDBDRichTextBlock_GetHasUndocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
// (Final, Native, Protected, BlueprintCallable)
void UDBDScrollBox::UpdateDisplayPrompt()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt");

	UDBDScrollBox_UpdateDisplayPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDSharedTypes_EControlMode    controlMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::OnControlModeChanged(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged");

	UDBDScrollBox_OnControlModeChanged_Params params;
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDScrollBox.isMouseOver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDScrollBox::isMouseOver()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.isMouseOver");

	UDBDScrollBox_isMouseOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          analogValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::HandleControllerInput(float analogValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput");

	UDBDScrollBox_HandleControllerInput_Params params;
	params.analogValue = analogValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDBDTextDockingProperties undockedProperties             (Parm, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties");

	UDBDTextBlock_SetUndockedProperties_Params params;
	params.undockedProperties = undockedProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isUpperCase                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase");

	UDBDTextBlock_SetIsUpperCase_Params params;
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           hasUndocking                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetHasUndocking(bool hasUndocking)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking");

	UDBDTextBlock_SetHasUndocking_Params params;
	params.hasUndocking = hasUndocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           isDocked                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged");

	UDBDTextBlock_OnSwitchDockStateChanged_Params params;
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDBDTextDockingProperties ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDBDTextDockingProperties UDBDTextBlock::GetUndockedProperties()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties");

	UDBDTextBlock_GetUndockedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetIsUpperCase()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase");

	UDBDTextBlock_GetIsUpperCase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetHasUndocking()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking");

	UDBDTextBlock_GetHasUndocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCustomizationTooltipViewData tooltipViewData                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGeometry               triggerGeometry                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip");

	UDBDTooltipManager_ShowCustomizationTooltip_Params params;
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCurrencyTooltipViewData tooltipViewData                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGeometry               triggerGeometry                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCurrencyTooltip(const struct FCurrencyTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip");

	UDBDTooltipManager_ShowCurrencyTooltip_Params params;
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCharacterTooltipViewData tooltipViewData                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGeometry               triggerGeometry                (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip");

	UDBDTooltipManager_ShowCharacterTooltip_Params params;
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
// (Final, Native, Public, BlueprintCallable)
void UDBDTooltipManager::HideTooltip()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.HideTooltip");

	UDBDTooltipManager_HideTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding");

	UDBDWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment");

	UDBDWrapBox_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDBDWrapBoxSlot*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* content)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox");

	UDBDWrapBox_AddChildToWrapBox_Params params;
	params.content = content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment");

	UDBDWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding");

	UDBDWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment");

	UDBDWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan");

	UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace");

	UDBDWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.TestWidget.SetShowWorkbench
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShowWorkbench                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestWidget::SetShowWorkbench(bool ShowWorkbench)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.TestWidget.SetShowWorkbench");

	UTestWidget_SetShowWorkbench_Params params;
	params.ShowWorkbench = ShowWorkbench;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
