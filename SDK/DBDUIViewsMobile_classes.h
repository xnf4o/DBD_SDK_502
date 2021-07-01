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
// Classes
//---------------------------------------------------------------------------

// Class DBDUIViewsMobile.FriendsMenuUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFriendsMenuUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.FriendsMenuUtilities");
		return ptr;
	}



};

// Class DBDUIViewsMobile.MobileBaseUserWidget
// 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
class UMobileBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_9HWT[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     HighlightWidget;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _tutorialAnimationName;                                    // 0x0278(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _tutorialNumberOfLoops;                                    // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SCN4[0x78];                                    // 0x0288(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.MobileBaseUserWidget");
		return ptr;
	}



	void TutorialAnimationFinished();
	void TryBroadcastOnHighlightWidgetClicked();
	void TriggerTutorialVisuals();
	void PropagateOnHighlightWidgetClicked(const struct FName& OnBoardingId);
	void OnSynchronizeProperties();
	bool IsInTutorialState();
	void FinishTutorialVisuals();
};

// Class DBDUIViewsMobile.UMGBaseButtonWidget
// 0x0130 (FullSize[0x0430] - InheritedSize[0x0300])
class UUMGBaseButtonWidget : public UMobileBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBaseButtonClickedEvent;                                  // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonPressedEvent;                                  // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonReleasedEvent;                                 // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonLongPressEvent;                                // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class Ubutton*                                     button;                                                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      IconPicture;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ButtonLabel;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 ButtonPictureBrush;                                        // 0x0358(0x0090) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       buttonText;                                                // 0x03E8(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnPressSound;                                              // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnClickSound;                                              // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnLongPressSound;                                          // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnReleaseSound;                                            // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnHoveredSound;                                            // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_51TC[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGBaseButtonWidget");
		return ptr;
	}



	void OnBaseButtonReleased__DelegateSignature();
	void OnBaseButtonPressed__DelegateSignature();
	void OnBaseButtonLongPress__DelegateSignature();
	void OnBaseButtonClicked__DelegateSignature();
	void HandleButtonReleasedEvent();
	void HandleButtonPressedEvent();
	void HandleButtonLongPressEvent();
	void HandleButtonHoveredEvent();
	void HandleButtonClickedEvent();
};

// Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget
// 0x0048 (FullSize[0x0348] - InheritedSize[0x0300])
class UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
{
public:
	unsigned char                                      UnknownData_WJUE[0x18];                                    // 0x0300(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMGFriendButtonWidget*                      InviteToPartyButton;                                       // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      MuteButton;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      UnmuteButton;                                              // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      RemoveFriendButton;                                        // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AB8L[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget");
		return ptr;
	}



	void HandleActionTriggered(DBDUIViewsMobile_EActionOnFriendType ActionType);
};

// Class DBDUIViewsMobile.UMGBaseFriendListElement
// 0x00C0 (FullSize[0x03C0] - InheritedSize[0x0300])
class UUMGBaseFriendListElement : public UMobileBaseUserWidget
{
public:
	class Uimage*                                      StatusPicture;                                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FriendName;                                                // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FriendStatus;                                              // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                SelectionHighlight;                                        // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Ubutton*                                     ItemSelectionButton;                                       // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                                  ContextualMenuPosition;                                    // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAtlantaFriendUIData                        _cachedFriendData;                                         // 0x0330(0x0068) (Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  FriendUIStatusDataTable;                                   // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7GLB[0x20];                                    // 0x03A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGBaseFriendListElement");
		return ptr;
	}



	void TriggerActionOnThisFriend(DBDUIViewsMobile_EActionOnFriendType ActionType);
};

// Class DBDUIViewsMobile.UMGBaseTabButtonWidget
// 0x0070 (FullSize[0x04A0] - InheritedSize[0x0430])
class UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget
{
public:
	unsigned char                                      UnknownData_GF8S[0x18];                                    // 0x0430(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URichTextBlock*                              TabText;                                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NotificationCountText;                                     // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                NotificationPanel;                                         // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      TabButtonSelected;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      TabIndex;                                                  // 0x0468(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YDJ7[0x7];                                     // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleOfTab;                                                // 0x0470(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L6M9[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _tabTextParameter;                                         // 0x0490(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGBaseTabButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGBaseTabListWidget
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UUMGBaseTabListWidget : public UMobileBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGBaseTabListWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGExpandableListWidget
// 0x00A0 (FullSize[0x03A0] - InheritedSize[0x0300])
class UUMGExpandableListWidget : public UMobileBaseUserWidget
{
public:
	bool                                               ShouldHideExpandableListIfEmpty;                           // 0x0300(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsExtendedAtStart;                                         // 0x0301(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TK1[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVerticalBox*                                ItemContainer;                                             // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CategorieName;                                             // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ItemCount;                                                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UexpandableArea*                             expandableArea;                                            // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       HeaderTitle;                                               // 0x0328(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XFUD[0x8];                                     // 0x0340(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUserWidget*>                         _childWidgets;                                             // 0x0348(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WX1P[0x48];                                    // 0x0358(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGExpandableListWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendBaseTabListWidget
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UUMGFriendBaseTabListWidget : public UUMGBaseTabListWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendBaseTabListWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendButtonWidget
// 0x0020 (FullSize[0x0450] - InheritedSize[0x0430])
class UUMGFriendButtonWidget : public UUMGBaseButtonWidget
{
public:
	class UCanvasPanel*                                InteractableButtonStatePanel;                              // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                NonInteractableButtonStatePanel;                           // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NonInteractableExplanationText;                            // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractable;                                           // 0x0448(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VTPR[0x7];                                     // 0x0449(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendContextualMenuWidget
// 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
class UUMGFriendContextualMenuWidget : public UUMGBaseFriendListContextualMenuWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendContextualMenuWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendElementWidget
// 0x01D8 (FullSize[0x0598] - InheritedSize[0x03C0])
class UUMGFriendElementWidget : public UUMGBaseFriendListElement
{
public:
	class Uimage*                                      FavoriteSlot;                                              // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Ubutton*                                     FavoriteButton;                                            // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      SelectionImage;                                            // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      SelectedPicture;                                           // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      FriendIcon;                                                // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 UnFavoriteBrush;                                           // 0x03E8(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 FavoriteBrush;                                             // 0x0478(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 MutedBrush;                                                // 0x0508(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendElementWidget");
		return ptr;
	}



	void HandleSelectionButton();
	void HandleFavoriteButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendListTabWidget
// 0x0018 (FullSize[0x0318] - InheritedSize[0x0300])
class UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    SentInviteToParty;                                         // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    ConnectedFriendsExpandableList;                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    DisconnectedFriendsExpandableList;                         // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendListTabWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendPartyListElementWidget
// 0x0138 (FullSize[0x06D0] - InheritedSize[0x0598])
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
{
public:
	class UWidgetSwitcher*                             ButtonOrStatusSwitcher;                                    // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Ubutton*                                     CancelInviteButton;                                        // 0x05A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      PartyStatusImage;                                          // 0x05A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 IconNotReady;                                              // 0x05B0(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 IconReady;                                                 // 0x0640(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendPartyListElementWidget");
		return ptr;
	}



	void HandleCancelInviteButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendSearchBarWidget
// 0x0040 (FullSize[0x0340] - InheritedSize[0x0300])
class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget
{
public:
	unsigned char                                      UnknownData_3PBS[0x30];                                    // 0x0300(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditableTextBox*                            InputTextField;                                            // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Ubutton*                                     SearchButton;                                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendSearchBarWidget");
		return ptr;
	}



	void HandleTextInputChanged(const struct FText& textInput);
	void HandleSearchButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendTabButtonWidget
// 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
class UUMGFriendTabButtonWidget : public UUMGBaseTabButtonWidget
{
public:
	unsigned char                                      UnknownData_CNQO[0x50];                                    // 0x04A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGFriendTabButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGRequestsListTabWidget
// 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
class UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    FriendRequestExpandableList;                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    PendingExpandableList;                                     // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGRequestsListTabWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGSuggestionsListTabWidget
// 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
class UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    PlayedWithFriendsExpandableList;                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    SocialFriendsExpandableList;                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsMobile.UMGSuggestionsListTabWidget");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
