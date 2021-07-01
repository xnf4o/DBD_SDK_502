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

// Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished
struct UMobileBaseUserWidget_TutorialAnimationFinished_Params
{
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked
struct UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Params
{
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals
struct UMobileBaseUserWidget_TriggerTutorialVisuals_Params
{
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked
struct UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Params
{
	struct FName                                       OnBoardingId;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties
struct UMobileBaseUserWidget_OnSynchronizeProperties_Params
{
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState
struct UMobileBaseUserWidget_IsInTutorialState_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals
struct UMobileBaseUserWidget_FinishTutorialVisuals_Params
{
};

// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature
struct UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature_Params
{
};

// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature
struct UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature_Params
{
};

// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature
struct UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature_Params
{
};

// DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature
struct UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature_Params
{
};

// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent
struct UUMGBaseButtonWidget_HandleButtonReleasedEvent_Params
{
};

// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent
struct UUMGBaseButtonWidget_HandleButtonPressedEvent_Params
{
};

// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent
struct UUMGBaseButtonWidget_HandleButtonLongPressEvent_Params
{
};

// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent
struct UUMGBaseButtonWidget_HandleButtonHoveredEvent_Params
{
};

// Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent
struct UUMGBaseButtonWidget_HandleButtonClickedEvent_Params
{
};

// Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered
struct UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Params
{
	DBDUIViewsMobile_EActionOnFriendType               ActionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend
struct UUMGBaseFriendListElement_TriggerActionOnThisFriend_Params
{
	DBDUIViewsMobile_EActionOnFriendType               ActionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton
struct UUMGFriendElementWidget_HandleSelectionButton_Params
{
};

// Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked
struct UUMGFriendElementWidget_HandleFavoriteButtonClicked_Params
{
};

// Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked
struct UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Params
{
};

// Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged
struct UUMGFriendSearchBarWidget_HandleTextInputChanged_Params
{
	struct FText                                       textInput;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked
struct UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
