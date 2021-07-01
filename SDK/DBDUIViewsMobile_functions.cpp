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

// Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished
// (Final, Native, Private)
void UMobileBaseUserWidget::TutorialAnimationFinished()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished");

	UMobileBaseUserWidget_TutorialAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked
// (Final, Native, Protected, BlueprintCallable)
void UMobileBaseUserWidget::TryBroadcastOnHighlightWidgetClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked");

	UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals
// (Native, Public, BlueprintCallable)
void UMobileBaseUserWidget::TriggerTutorialVisuals()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals");

	UMobileBaseUserWidget_TriggerTutorialVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked
// (Final, Native, Public)
// Parameters:
// struct FName                   OnBoardingId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMobileBaseUserWidget::PropagateOnHighlightWidgetClicked(const struct FName& OnBoardingId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked");

	UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Params params;
	params.OnBoardingId = OnBoardingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
void UMobileBaseUserWidget::OnSynchronizeProperties()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties");

	UMobileBaseUserWidget_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobileBaseUserWidget::IsInTutorialState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState");

	UMobileBaseUserWidget_IsInTutorialState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals
// (Native, Public, BlueprintCallable)
void UMobileBaseUserWidget::FinishTutorialVisuals()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals");

	UMobileBaseUserWidget_FinishTutorialVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonReleased__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature");

	UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonPressed__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature");

	UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonLongPress__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature");

	UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonClicked__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature");

	UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent
// (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonReleasedEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent");

	UUMGBaseButtonWidget_HandleButtonReleasedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent
// (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonPressedEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent");

	UUMGBaseButtonWidget_HandleButtonPressedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent
// (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonLongPressEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent");

	UUMGBaseButtonWidget_HandleButtonLongPressEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent
// (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonHoveredEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent");

	UUMGBaseButtonWidget_HandleButtonHoveredEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent
// (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonClickedEvent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent");

	UUMGBaseButtonWidget_HandleButtonClickedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDUIViewsMobile_EActionOnFriendType ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGBaseFriendListContextualMenuWidget::HandleActionTriggered(DBDUIViewsMobile_EActionOnFriendType ActionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered");

	UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// DBDUIViewsMobile_EActionOnFriendType ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGBaseFriendListElement::TriggerActionOnThisFriend(DBDUIViewsMobile_EActionOnFriendType ActionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend");

	UUMGBaseFriendListElement_TriggerActionOnThisFriend_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton
// (Final, Native, Protected)
void UUMGFriendElementWidget::HandleSelectionButton()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton");

	UUMGFriendElementWidget_HandleSelectionButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked
// (Final, Native, Protected, BlueprintCallable)
void UUMGFriendElementWidget::HandleFavoriteButtonClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked");

	UUMGFriendElementWidget_HandleFavoriteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked
// (Final, Native, Protected)
void UUMGFriendPartyListElementWidget::HandleCancelInviteButtonClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked");

	UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   textInput                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUMGFriendSearchBarWidget::HandleTextInputChanged(const struct FText& textInput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged");

	UUMGFriendSearchBarWidget_HandleTextInputChanged_Params params;
	params.textInput = textInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked
// (Final, Native, Private)
void UUMGFriendSearchBarWidget::HandleSearchButtonClicked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked");

	UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
