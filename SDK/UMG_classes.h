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

// Class UMG.Visual
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Visual");
		return ptr;
	}



};

// Class UMG.Widget
// 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  slot;                                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             bIsEnabledDelegate;                                        // 0x0038(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYMD[0x4];                                     // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_OO1Q[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ToolTipText;                                               // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipTextDelegate;                                       // 0x0068(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDOG[0x4];                                     // 0x0068(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_NVQ5[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     ToolTipWidget;                                             // 0x0080(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                     // 0x0088(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQD5[0x4];                                     // 0x0088(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             VisibilityDelegate;                                        // 0x009C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NK3[0x4];                                     // 0x009C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FWidgetTransform                            RenderTransform;                                           // 0x00B0(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   RenderTransformPivot;                                      // 0x00CC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVariable : 1;                                           // 0x00D4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatedByConstructionScript : 1;                          // 0x00D4(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnabled : 1;                                            // 0x00D4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Cursor : 1;                                      // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYGV[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                      // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsVolatile : 1;                                           // 0x00E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<CoreUObject_EMouseCursor>              Cursor;                                                    // 0x00E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EWidgetClipping                          Clipping;                                                  // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               visibility;                                                // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RenderOpacity;                                             // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetNavigation*                           Navigation;                                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EFlowDirectionPreference                 FlowDirectionPreference;                                   // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLG0[0x27];                                    // 0x00F1(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyBinding*>                    NativeBindings;                                            // 0x0118(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Widget");
		return ptr;
	}



	void SetVisibility(UMG_ESlateVisibility Invisibility);
	void SetUserFocus(class UplayerController* playerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(SlateCore_EUINavigation direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(SlateCore_EUINavigation direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleCustom(SlateCore_EUINavigation direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleBase(SlateCore_EUINavigation direction, SlateCore_EUINavigationRule Rule);
	void SetNavigationRule(SlateCore_EUINavigation direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor);
	void SetClipping(SlateCore_EWidgetClipping InClipping);
	void SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool isVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class UplayerController* playerController);
	bool HasUserFocus(class UplayerController* playerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	UMG_ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	struct FText GetText__DelegateSignature();
	UMG_ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class UplayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<CoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UgameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	SlateCore_EWidgetClipping GetClipping();
	SlateCore_ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// Class UMG.UserWidget
// 0x0138 (FullSize[0x0260] - InheritedSize[0x0128])
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_WZN6[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0140(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGB5[0x4];                                     // 0x0140(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_GPQZ[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0158(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ForegroundColorDelegate;                                   // 0x0180(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6EA3[0x4];                                     // 0x0180(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FMargin                                     Padding;                                                   // 0x0194(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CE2C[0x4];                                     // 0x01A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                     // 0x01A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                    // 0x01B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                         // 0x01C8(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetTree*                                 WidgetTree;                                                // 0x01D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                priority;                                                  // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsKeyboardFocus : 1;                                // 0x01E4(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsFocusable : 1;                                          // 0x01E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopAction : 1;                                           // 0x01E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedTick : 1;                             // 0x01E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedPaint : 1;                            // 0x01E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66A8 : 2;                                      // 0x01E4(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bCookedWidgetTree : 1;                                     // 0x01E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EWN8[0xB];                                     // 0x01E5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_EWidgetTickFrequency                           TickFrequency;                                             // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HUCA[0x7];                                     // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputComponent*                             InputComponent;                                            // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                        // 0x0200(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8RTW[0x50];                                    // 0x0210(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}



	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* animation, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* animation, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& actionName, TEnumAsByte<Engine_EInputEvent> eventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class UplayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* animation);
	void OnAnimationFinished(class UWidgetAnimation* animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& actionName, TEnumAsByte<Engine_EInputEvent> eventType, bool bConsume, const struct FScriptDelegate& CallBack);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& actionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class Upawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* animation, const struct FScriptDelegate& Delegate, UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};

// Class UMG.PanelWidget
// 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                     // 0x0128(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FTNZ[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}



	bool RemoveChildAt(int index);
	bool RemoveChild(class UWidget* content);
	bool HasChild(class UWidget* content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* content);
	class UWidget* GetChildAt(int index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* content);
};

// Class UMG.ContentWidget
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}



	class UPanelSlot* SetContent(class UWidget* content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// Class UMG.button
// 0x0358 (FullSize[0x0498] - InheritedSize[0x0140])
class Ubutton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                WidgetStyle;                                               // 0x0148(0x02A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x03F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x0410(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x0411(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonPressMethod>          PressMethod;                                               // 0x0412(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0413(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53Z4[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLongPress;                                               // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimerHandle                                LongPressTimerHandle;                                      // 0x0478(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJ3L[0x18];                                    // 0x0480(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.button");
		return ptr;
	}



	void SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void OnLongPressTimerFinished();
	bool isPressed();
};

// Class UMG.image
// 0x0120 (FullSize[0x0248] - InheritedSize[0x0128])
class Uimage : public UWidget
{
public:
	struct FSlateBrush                                 brush;                                                     // 0x0128(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushDelegate;                                             // 0x01B8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZXGZ[0x4];                                     // 0x01B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FLinearColor                                ColorAndOpacity;                                           // 0x01CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x01DC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AT8R[0x4];                                     // 0x01DC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFlipForRightToLeftFlowDirection;                          // 0x01F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P88M[0x3];                                     // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x01F4(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UIVD[0x4];                                     // 0x01F1(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_7COG[0x40];                                    // 0x0208(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.image");
		return ptr;
	}



	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UmaterialInterface* MATERIAL);
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.TextLayoutWidget
// 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0128(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_ETextWrappingPolicy                          WrappingPolicy;                                            // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      AutoWrapText : 1;                                          // 0x012D(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NDT3[0x2];                                     // 0x012E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     Margin;                                                    // 0x0134(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentage;                                      // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}



	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
};

// Class UMG.RichTextBlock
// 0x0580 (FullSize[0x06C8] - InheritedSize[0x0148])
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       text;                                                      // 0x0148(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  TextStyleSet;                                              // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              DecoratorClasses;                                          // 0x0168(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverrideDefaultStyle;                                     // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EAY2[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                  // 0x0180(0x0288) (Edit, Protected, NativeAccessSpecifierProtected)
	float                                              MinDesiredWidth;                                           // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BBNN[0x28C];                                   // 0x040C(0x028C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                        // 0x0698(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DC59[0x20];                                    // 0x06A8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}



	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetText(const struct FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// Class UMG.ScrollBox
// 0x07C8 (FullSize[0x0908] - InheritedSize[0x0140])
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x0140(0x0248) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x0388(0x0518) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x08A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      BarStyle;                                                  // 0x08A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x08B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               ScrollBarVisibility;                                       // 0x08B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EConsumeMouseWheel                       ConsumeMouseWheel;                                         // 0x08B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2W7C[0x1];                                     // 0x08B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x08B4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ScrollbarPadding;                                          // 0x08BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbar;                                       // 0x08CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbarTrack;                                  // 0x08CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowOverscroll;                                           // 0x08CE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateWheelScrolling;                                    // 0x08CF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EDescendantScrollDestination                 NavigationDestination;                                     // 0x08D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WY1W[0x3];                                     // 0x08D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavigationScrollPadding;                                   // 0x08D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EScrollWhenFocusChanges                      ScrollWhenFocusChanges;                                    // 0x08D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRightClickDragScrolling;                             // 0x08D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Z09[0x2];                                     // 0x08DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WheelScrollMultiplier;                                     // 0x08DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUserScrolled;                                            // 0x08E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AKH2[0x18];                                    // 0x08F0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}



	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollbarVisibility(UMG_ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation);
	void SetConsumeMouseWheel(SlateCore_EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// Class UMG.TextBlock
// 0x01A0 (FullSize[0x02E8] - InheritedSize[0x0148])
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       text;                                                      // 0x0148(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0160(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI68[0x4];                                     // 0x0160(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_ZDTC[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0178(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x01A0(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IF7F[0x4];                                     // 0x01A0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_86WV[0x4];                                     // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x01B8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StrikeBrush;                                               // 0x0210(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                             // 0x02B8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DR8[0x4];                                     // 0x02B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MinDesiredWidth;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrapWithInvalidationPanel;                                // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoWrapText;                                             // 0x02D1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimpleTextMode;                                           // 0x02D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MH8W[0x15];                                    // 0x02D3(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Class UMG.PanelSlot
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                    // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     content;                                                   // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}



};

// Class UMG.RichTextBlockDecorator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class URichTextBlockDecorator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}



};

// Class UMG.RichTextBlockImageDecorator
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}



};

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}



	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& Url);
};

// Class UMG.BackgroundBlur
// 0x00C0 (FullSize[0x0200] - InheritedSize[0x0140])
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                   // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAlphaToBlur;                                         // 0x0152(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSIH[0x1];                                     // 0x0153(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurStrength;                                              // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAutoRadiusCalculation;                            // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D34J[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BlurRadius;                                                // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                   // 0x0160(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5WQ[0x10];                                    // 0x01F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Class UMG.BackgroundBlurSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ED8J[0x16];                                    // 0x0052(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.PropertyBinding
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0038(0x0028) (NativeAccessSpecifierPublic)
	struct FName                                       DestinationProperty;                                       // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07HM[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}



};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}



	bool GetValue();
};

// Class UMG.Border
// 0x0170 (FullSize[0x02B0] - InheritedSize[0x0140])
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowEffectWhenDisabled : 1;                               // 0x0142(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TGNF[0x1];                                     // 0x0143(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ContentColorAndOpacity;                                    // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                            // 0x0154(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRTR[0x4];                                     // 0x0154(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FMargin                                     Padding;                                                   // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Background;                                                // 0x0178(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BackgroundDelegate;                                        // 0x0208(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9JG[0x4];                                     // 0x0208(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FLinearColor                                BrushColor;                                                // 0x021C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushColorDelegate;                                        // 0x022C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WBIP[0x4];                                     // 0x022C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector2D                                   DesiredSizeScale;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipForRightToLeftFlowDirection;                          // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KD99[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x024C(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A446[0x4];                                     // 0x0249(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                      // 0x0260(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9VJO[0x4];                                     // 0x0260(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnMouseMoveEvent;                                          // 0x0274(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q07L[0x4];                                     // 0x0274(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                   // 0x0288(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY8J[0x4];                                     // 0x0288(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_U8J5[0x14];                                    // 0x029C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Border");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* texture);
	void SetBrushFromMaterial(class UmaterialInterface* MATERIAL);
	void SetBrushFromAsset(class USlateBrushAsset* asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.BorderSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JY8M[0x16];                                    // 0x0052(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.BrushBinding
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_ACG1[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}



	struct FSlateBrush GetValue();
};

// Class UMG.ButtonSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3WY[0x16];                                    // 0x0052(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.CanvasPanel
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_LQF5[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}



	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* content);
};

// Class UMG.CanvasPanelSlot
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                                // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                 // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C84M[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4E8W[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}



	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// Class UMG.Checkbox
// 0x06B0 (FullSize[0x07F0] - InheritedSize[0x0140])
class UCheckbox : public UContentWidget
{
public:
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJYS[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x0144(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MV3Q[0x4];                                     // 0x0141(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x0158(0x05E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0738(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedImage;                                            // 0x0740(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                     // 0x0748(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedPressedImage;                                     // 0x0750(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedImage;                                              // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedHoveredImage;                                       // 0x0760(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedPressedImage;                                       // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedImage;                                         // 0x0770(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                  // 0x0778(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                  // 0x0780(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0788(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SQG[0x3];                                     // 0x0789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x078C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YY7D[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x07A0(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x07C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPVC[0x7];                                     // 0x07C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                       // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JXR6[0x10];                                    // 0x07E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Checkbox");
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	bool isPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
};

// Class UMG.CheckedStateBinding
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_LDYZ[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}



	SlateCore_ECheckBoxState GetValue();
};

// Class UMG.CircularThrobber
// 0x00C0 (FullSize[0x01E8] - InheritedSize[0x0128])
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              radius;                                                    // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ1Z[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 image;                                                     // 0x0140(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bEnableRadius;                                             // 0x01D0(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X921[0x17];                                    // 0x01D1(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}



	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};

// Class UMG.ColorBinding
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_22HI[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}



	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// Class UMG.ComboBox
// 0x0038 (FullSize[0x0160] - InheritedSize[0x0128])
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                     // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0138(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6D1D[0x4];                                     // 0x0138(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bIsFocusable;                                              // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90IA[0x13];                                    // 0x014D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}



};

// Class UMG.ComboBoxString
// 0x0DB8 (FullSize[0x0EE0] - InheritedSize[0x0128])
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                            // 0x0128(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     SelectedOption;                                            // 0x0138(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                              WidgetStyle;                                               // 0x0148(0x0440) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ItemStyle;                                                 // 0x0588(0x0838) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     ContentPadding;                                            // 0x0DC0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxListHeight;                                             // 0x0DD0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDownArrow;                                              // 0x0DD4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableGamepadNavigationMode;                               // 0x0DD5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGN5[0x2];                                     // 0x0DD6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0DD8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0E30(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0E58(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPA3[0x3];                                     // 0x0E59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0E5C(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YI45[0x4];                                     // 0x0E59(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0E70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x0E80(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QB7K[0x50];                                    // 0x0E90(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}



	void SetSelectedOption(const struct FString& option);
	void SetSelectedIndex(int index);
	bool RemoveOption(const struct FString& option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& selectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool isOpen();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int index);
	int FindOptionIndex(const struct FString& option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& option);
};

// Class UMG.DragDropOperation
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UDragDropOperation : public UObject
{
public:
	struct FString                                     tag;                                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Payload;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DefaultDragVisual;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EDragPivot                                     Pivot;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NM0[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z25G[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDrop;                                                    // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragged;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}



	void Drop(const struct FPointerEvent& PointerEvent);
	void DraggedVisual(struct FVector2D* DesiredPosition, const struct FVector2D& DesiredSize);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Class UMG.DynamicEntryBoxBase
// 0x00C0 (FullSize[0x01E8] - InheritedSize[0x0128])
class UDynamicEntryBoxBase : public UWidget
{
public:
	UMG_EDynamicBoxType                                EntryBoxType;                                              // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_276V[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   EntrySpacing;                                              // 0x012C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LDTQ[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           SpacingPattern;                                            // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateChildSize                             EntrySizeRule;                                             // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        EntryHorizontalAlignment;                                  // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          EntryVerticalAlignment;                                    // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VDVI[0x2];                                     // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxElementSize;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YHAO[0x10];                                    // 0x0158(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserWidgetPool                             EntryWidgetPool;                                           // 0x0168(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}



	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// Class UMG.DynamicEntryBox
// 0x0008 (FullSize[0x01F0] - InheritedSize[0x01E8])
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                      EntryWidgetClass;                                          // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}



	void reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUserWidget* BP_CreateEntry();
};

// Class UMG.EditableText
// 0x0380 (FullSize[0x04A8] - InheritedSize[0x0128])
class UEditableText : public UWidget
{
public:
	struct FText                                       text;                                                      // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0140(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YN13[0x4];                                     // 0x0140(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_79KP[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       HintText;                                                  // 0x0158(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0170(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJNR[0x4];                                     // 0x0170(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_JD5I[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEditableTextStyle                          WidgetStyle;                                               // 0x0188(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x03C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageSelected;                                   // 0x03C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageComposing;                                  // 0x03D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CaretImage;                                                // 0x03D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x03E0(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0438(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isPassword;                                                // 0x0461(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJWL[0x2];                                     // 0x0462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0464(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0469(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x046A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x046B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x046C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x046D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x046E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x046F(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardTrigger                      VirtualKeyboardTrigger;                                    // 0x0470(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0471(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0473(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WAH[0x2];                                     // 0x0476(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXEA[0x10];                                    // 0x0498(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& text);
	struct FText GetText();
};

// Class UMG.EditableTextBox
// 0x09A8 (FullSize[0x0AD0] - InheritedSize[0x0128])
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       text;                                                      // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0140(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PYC[0x4];                                     // 0x0140(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_CQKZ[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0158(0x0860) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x09B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x09C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x09D8(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKCE[0x4];                                     // 0x09D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_37XW[0x4];                                     // 0x09EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x09F0(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x0A48(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0A58(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0A68(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x0A78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isPassword;                                                // 0x0A79(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BU45[0x2];                                     // 0x0A7A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x0A7C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0A80(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0A90(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0A91(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x0A92(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0A93(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0A94(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0A95(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x0A96(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x0A97(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardTrigger                      VirtualKeyboardTrigger;                                    // 0x0A98(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0A99(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0A9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0A9B(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZLQJ[0x2];                                     // 0x0A9E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0AA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0AB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAKH[0x10];                                    // 0x0AC0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};

// Class UMG.expandableArea
// 0x0248 (FullSize[0x0370] - InheritedSize[0x0128])
class UexpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData_3STF[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpandableAreaStyle                        Style;                                                     // 0x0130(0x0130) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0260(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderColor;                                               // 0x02F0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsExpanded;                                               // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VUS[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderPadding;                                             // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     AreaPadding;                                               // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                        // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                                     HeaderContent;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     BodyContent;                                               // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9Y4L[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.expandableArea");
		return ptr;
	}



	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}



	float GetValue();
};

// Class UMG.GridPanel
// 0x0030 (FullSize[0x0170] - InheritedSize[0x0140])
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                                // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      RowFill;                                                   // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBHJ[0x10];                                    // 0x0160(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}



	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* content, int InRow, int InColumn);
};

// Class UMG.GridSlot
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OK3[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowSpan;                                                   // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnSpan;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Nudge;                                                     // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B1Y2[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};

// Class UMG.HorizontalBox
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_9RSC[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}



	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* content);
};

// Class UMG.HorizontalBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_WGML[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EL4J[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.InputKeySelector
// 0x0648 (FullSize[0x0770] - InheritedSize[0x0128])
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                               // 0x0128(0x02A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x03D0(0x0288) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                                 SelectedKey;                                               // 0x0658(0x0028) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0680(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                    // 0x06D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x06E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KeySelectionText;                                          // 0x06F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       NoKeySpecifiedText;                                        // 0x0710(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAllowModifierKeys;                                        // 0x0728(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowGamepadKeys;                                         // 0x0729(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IAQ[0x6];                                     // 0x072A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct Fkey>                                EscapeKeys;                                                // 0x0730(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeySelected;                                             // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                   // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XTT[0x10];                                    // 0x0760(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}



	void SetTextBlockVisibility(UMG_ESlateVisibility Invisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEscapeKeys(TArray<struct Fkey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}



	int GetValue();
};

// Class UMG.InvalidationBox
// 0x0018 (FullSize[0x0158] - InheritedSize[0x0140])
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                 // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CacheRelativeTransforms;                                   // 0x0141(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D7ZK[0x16];                                    // 0x0142(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}



	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// Class UMG.UserListEntry
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUserListEntry : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}



	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// Class UMG.UserListEntryLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}



	bool STATIC_IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry);
	bool STATIC_IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry);
	class UListViewBase* STATIC_GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry);
};

// Class UMG.UserObjectListEntry
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUserObjectListEntry : public UUserListEntry
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}



	void OnListItemObjectSet(class UObject* ListItemObject);
};

// Class UMG.UserObjectListEntryLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}



	class UObject* STATIC_GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry);
};

// Class UMG.ListViewBase
// 0x0110 (FullSize[0x0238] - InheritedSize[0x0128])
class UListViewBase : public UWidget
{
public:
	class UClass*                                      EntryWidgetClass;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WheelScrollMultiplier;                                     // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableScrollAnimation;                                    // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableFixedLineOffset;                                    // 0x0135(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_14E8[0x2];                                     // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FixedLineScrollOffset;                                     // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RMUK[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BP_OnEntryGenerated;                                       // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnEntryReleased;                                        // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FUserWidgetPool                             EntryWidgetPool;                                           // 0x0160(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LTAZ[0x58];                                    // 0x01E0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}



	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollbarVisibility(UMG_ESlateVisibility Invisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// Class UMG.ListView
// 0x0150 (FullSize[0x0388] - InheritedSize[0x0238])
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData_XWNS[0xC0];                                    // 0x0238(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x02F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SlateCore_EConsumeMouseWheel                       ConsumeMouseWheel;                                         // 0x02FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClearSelectionOnClick;                                    // 0x02FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsFocusable;                                              // 0x02FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S9H9[0x3];                                     // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EntrySpacing;                                              // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReturnFocusToSelection;                                   // 0x0304(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D9D9[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             ListItems;                                                 // 0x0308(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KIR2[0x10];                                    // 0x0318(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BP_OnEntryInitialized;                                     // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemClicked;                                          // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemDoubleClicked;                                    // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemIsHoveredChanged;                                 // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemSelectionChanged;                                 // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemScrolledIntoView;                                 // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ListView");
		return ptr;
	}



	void SetSelectionMode(TEnumAsByte<Slate_ESelectionMode> SelectionMode);
	void SetSelectedIndex(int index);
	void ScrollIndexIntoView(int index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UListViewDesignerPreviewItem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}



};

// Class UMG.MenuAnchor
// 0x0040 (FullSize[0x0180] - InheritedSize[0x0140])
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                 // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                     // 0x0148(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_853V[0x4];                                     // 0x0148(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<SlateCore_EMenuPlacement>              Placement;                                                 // 0x015C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFitInWindow;                                              // 0x015D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDeferPaintingAfterWindowContent;                     // 0x015E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseApplicationMenuStack;                                   // 0x015F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZX6R[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}



	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(TEnumAsByte<SlateCore_EMenuPlacement> InPlacement);
	void open(bool bFocusMenu);
	bool isOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}



	TEnumAsByte<CoreUObject_EMouseCursor> GetValue();
};

// Class UMG.MovieScene2DTransformSection
// 0x0470 (FullSize[0x0558] - InheritedSize[0x00E8])
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	struct FMovieScene2DTransformMask                  TransformMask;                                             // 0x00E8(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EUWU[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     Translation[0x2];                                          // 0x00F0(0x0140) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     rotation;                                                  // 0x0230(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     scale[0x2];                                                // 0x02D0(0x0140) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                                // 0x0410(0x0140) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JY1[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginSection
// 0x0280 (FullSize[0x0368] - InheritedSize[0x00E8])
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     TopCurve;                                                  // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                 // 0x0188(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     RightCurve;                                                // 0x0228(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     BottomCurve;                                               // 0x02C8(0x00A0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                 // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2O1Y[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}



};

// Class UMG.MultiLineEditableText
// 0x0368 (FullSize[0x04B0] - InheritedSize[0x0148])
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       text;                                                      // 0x0148(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0160(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0178(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FU9[0x4];                                     // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_UDKY[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockStyle                             WidgetStyle;                                               // 0x0190(0x0288) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W401[0x7];                                     // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0420(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0478(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearTextSelectionOnFocusLoss;                             // 0x0479(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x047A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x047B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x047C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x047D(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x047E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NOH[0x1];                                     // 0x047F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3HC[0x10];                                    // 0x04A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}



	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.MultiLineEditableTextBox
// 0x0BF8 (FullSize[0x0D40] - InheritedSize[0x0148])
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       text;                                                      // 0x0148(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0160(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0178(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8O86[0x4];                                     // 0x0178(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_RTKD[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0190(0x0860) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x09F0(0x0288) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x0C78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0C79(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x0C7A(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0C7B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SNZL[0x4];                                     // 0x0C7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0C80(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0C88(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x0CE0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0CF0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0D00(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0D10(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0D20(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2RLK[0x10];                                    // 0x0D30(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}



	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.NamedSlot
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData_S0MN[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}



};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}



};

// Class UMG.NativeWidgetHost
// 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData_2XYC[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}



};

// Class UMG.Overlay
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_QK1C[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}



	class UOverlaySlot* AddChildToOverlay(class UWidget* content);
};

// Class UMG.OverlaySlot
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_2NQA[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ED5M[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ProgressBar
// 0x0230 (FullSize[0x0358] - InheritedSize[0x0128])
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x0128(0x01B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x02E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImage;                                           // 0x02E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            FillImage;                                                 // 0x02F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MarqueeImage;                                              // 0x02F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x0304(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                                // 0x0305(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDVL[0x2];                                     // 0x0306(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   BorderPadding;                                             // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PercentDelegate;                                           // 0x0310(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B23L[0x4];                                     // 0x0310(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x0324(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x0334(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7I4[0x4];                                     // 0x0334(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_CQNX[0x10];                                    // 0x0348(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}



	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class UMG.RetainerBox
// 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
class URetainerBox : public UContentWidget
{
public:
	bool                                               RenderOnInvalidation;                                      // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RenderOnPhase;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAGV[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Phase;                                                     // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseCount;                                                // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCLF[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          EffectMaterial;                                            // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TextureParameter;                                          // 0x0158(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y38G[0x14];                                    // 0x0164(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}



	void SetTextureParameter(const struct FName& TextureParameter);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UmaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.SafeZone
// 0x0018 (FullSize[0x0158] - InheritedSize[0x0140])
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                   // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadRight;                                                  // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadTop;                                                    // 0x0142(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadBottom;                                                 // 0x0143(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QXI[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}



	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Class UMG.SafeZoneSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3XB1[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     SafeAreaScale;                                             // 0x0044(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VAlign;                                                    // 0x0055(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0QN[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}



};

// Class UMG.ScaleBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<Slate_EStretch>                        Stretch;                                                   // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EStretchDirection>               StretchDirection;                                          // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6VR[0x2];                                     // 0x0142(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserSpecifiedScale;                                        // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreInheritedScale;                                      // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ISEF[0x17];                                    // 0x0149(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}



	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<Slate_EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Class UMG.ScaleBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YZV[0x16];                                    // 0x0052(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Scrollbar
// 0x0550 (FullSize[0x0678] - InheritedSize[0x0128])
class UScrollbar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                               // 0x0128(0x0518) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0640(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbar;                                      // 0x0648(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbarTrack;                                 // 0x0649(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x064A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HC5O[0x1];                                     // 0x064B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Thickness;                                                 // 0x064C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0654(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GVYS[0x14];                                    // 0x0664(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Scrollbar");
		return ptr;
	}



	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.ScrollBoxSlot
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUXN[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SizeBox
// 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData_HLHO[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidthOverride;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredHeight;                                          // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredWidth;                                           // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredHeight;                                          // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAspectRatio;                                            // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAspectRatio;                                            // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_WidthOverride : 1;                               // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HeightOverride : 1;                              // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                             // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                            // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                             // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                            // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinAspectRatio : 1;                              // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                              // 0x0170(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RE89[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}



	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// Class UMG.SizeBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76OV[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2V6J[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}



	struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
	struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
	float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
	float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
	void STATIC_ScreenToWidgetLocal(class UObject* worldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);
	void STATIC_ScreenToWidgetAbsolute(class UObject* worldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
	void STATIC_ScreenToViewport(class UObject* worldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* worldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* worldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// Class UMG.SlateVectorArtData
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint32_t>                                   IndexData;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMin;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMax;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}



};

// Class UMG.SlateAccessibleWidgetData
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateAccessibleBehavior                       AccessibleBehavior;                                        // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateAccessibleBehavior                       AccessibleSummaryBehavior;                                 // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9X4[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AccessibleText;                                            // 0x0038(0x0018) (NativeAccessSpecifierPublic)
	struct FScriptDelegate                             AccessibleTextDelegate;                                    // 0x0050(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLFX[0x4];                                     // 0x0050(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_PBK1[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AccessibleSummaryText;                                     // 0x0068(0x0018) (NativeAccessSpecifierPublic)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                             // 0x0080(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GARF[0x4];                                     // 0x0080(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_1LY0[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}



};

// Class UMG.Slider
// 0x0420 (FullSize[0x0548] - InheritedSize[0x0128])
class USlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x012C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H22E[0x4];                                     // 0x012C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MinValue;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0148(0x0370) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x04B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9BG[0x3];                                     // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x04BC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x04CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x04DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x04DD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MouseUsesStep;                                             // 0x04DE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresControllerLock;                                    // 0x04DF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                  // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x04E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PP1C[0x3];                                     // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJHO[0x10];                                    // 0x0538(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Slider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};

// Class UMG.Spacer
// 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                      // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SS4D[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}



	void SetSize(const struct FVector2D& InSize);
};

// Class UMG.SpinBox
// 0x0440 (FullSize[0x0568] - InheritedSize[0x0128])
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                     // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x012C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGU0[0x4];                                     // 0x012C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSpinBoxStyle                               WidgetStyle;                                               // 0x0140(0x0310) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0450(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFractionalDigits;                                       // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxFractionalDigits;                                       // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUsesDeltaSnap;                                      // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWOZ[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              delta;                                                     // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderExponent;                                            // 0x0468(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HD5D[0x4];                                     // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0470(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x04C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNWX[0x3];                                     // 0x04C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDesiredWidth;                                           // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x04D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x04D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZAM[0x6];                                     // 0x04D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x04D8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                          // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                     // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                       // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinValue : 1;                                    // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxValue : 1;                                    // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MinSliderValue : 1;                              // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                              // 0x0540(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GVU5[0x3];                                     // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                            // 0x054C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                            // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A0G7[0x14];                                    // 0x0554(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}



	void SetValue(float newValue);
	void SetMinValue(float newValue);
	void SetMinSliderValue(float newValue);
	void SetMinFractionalDigits(int newValue);
	void SetMaxValue(float newValue);
	void SetMaxSliderValue(float newValue);
	void SetMaxFractionalDigits(int newValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDelta(float newValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TextBinding
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_TI5H[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}



	struct FText GetTextValue();
	struct FString GetStringValue();
};

// Class UMG.Throbber
// 0x00B0 (FullSize[0x01D8] - InheritedSize[0x0128])
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x012C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x012D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x012E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDNF[0x1];                                     // 0x012F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 image;                                                     // 0x0138(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6H44[0x10];                                    // 0x01C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}



	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.TileView
// 0x0020 (FullSize[0x03A8] - InheritedSize[0x0388])
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                               // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EntryWidth;                                                // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_EListItemAlignment                           TileAlignment;                                             // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWrapHorizontalNavigation;                                 // 0x0391(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WZZ1[0x16];                                    // 0x0392(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.TileView");
		return ptr;
	}



	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};

// Class UMG.TreeView
// 0x0060 (FullSize[0x03E8] - InheritedSize[0x0388])
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData_QRG8[0x10];                                    // 0x0388(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             BP_OnGetItemChildren;                                      // 0x0398(0x0010) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IXW3[0x4];                                     // 0x0388(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_QJI7[0x4];                                     // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BP_OnItemExpansionChanged;                                 // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AHME[0x28];                                    // 0x03C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}



	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// Class UMG.UMGSequencePlayer
// 0x0788 (FullSize[0x07B8] - InheritedSize[0x0030])
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_ZMR6[0x3E0];                                   // 0x0030(0x03E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            animation;                                                 // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NABM[0x3A0];                                   // 0x0418(0x03A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}



	void SetUserTag(const struct FName& InUserTag);
	struct FName GetUserTag();
};

// Class UMG.UniformGridPanel
// 0x0028 (FullSize[0x0168] - InheritedSize[0x0140])
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                               // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotWidth;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotHeight;                                      // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3K0Z[0x10];                                    // 0x0158(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}



	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* content, int InRow, int InColumn);
};

// Class UMG.UniformGridSlot
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFPW[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAJ2[0xC];                                     // 0x004C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};

// Class UMG.VerticalBox
// 0x0010 (FullSize[0x0150] - InheritedSize[0x0140])
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_V8Q9[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}



	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* content);
};

// Class UMG.VerticalBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                             Size;                                                      // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GUN9[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SPE[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Viewport
// 0x0028 (FullSize[0x0168] - InheritedSize[0x0140])
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                           // 0x0140(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJEF[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}



	class Uactor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& rotation);
	void SetViewLocation(const struct Fvector& location);
	struct FRotator GetViewRotation();
	class Uworld* GetViewportWorld();
	struct Fvector GetViewLocation();
};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}



	UMG_ESlateVisibility GetValue();
};

// Class UMG.WidgetAnimation
// 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                         // 0x0358(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLegacyFinishOnStop;                                       // 0x0368(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LAXF[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayLabel;                                              // 0x0370(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}



	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
};

// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}



};

// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    Finished;                                                  // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AE0D[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}



	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}



	class UWidget* GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0078 (FullSize[0x03B0] - InheritedSize[0x0338])
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                                // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTemplate : 1;                                        // 0x0340(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDynamicCreation : 1;                                 // 0x0340(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bValidTemplate : 1;                                        // 0x0340(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bTemplateInitialized : 1;                                  // 0x0340(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bCookedTemplate : 1;                                       // 0x0340(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bClassRequiresNativeTick : 1;                              // 0x0340(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8CUZ[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                  // 0x0348(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>                    Animations;                                                // 0x0358(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               NamedSlots;                                                // 0x0368(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TemplateAsset[0x30];                                       // 0x0378(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UUserWidget*                                 Template;                                                  // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}



};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}



	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, Engine_EWindowTitleBarMode mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	void STATIC_SetInputMode_UIOnlyEx(class UplayerController* playerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class UplayerController* target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class UplayerController* playerController);
	void STATIC_SetInputMode_GameAndUIEx(class UplayerController* playerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class UplayerController* target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool STATIC_SetHardwareCursor(class UObject* worldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetColorVisionDeficiencyType(SlateCore_EColorVisionDeficiency type, float severity, bool correctDeficiency, bool showCorrectionWithDeficiency);
	void STATIC_SetBrushResourceToTexture(struct FSlateBrush* brush, class UTexture2D* texture);
	void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* brush, class UmaterialInterface* MATERIAL);
	void STATIC_RestorePreviousWindowTitleBarState();
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* texture, int Width, int height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UmaterialInterface* MATERIAL, int Width, int height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	void STATIC_GetSafeZonePadding(class UObject* worldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& brush);
	class UmaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& brush);
	class UObject* STATIC_GetBrushResource(const struct FSlateBrush& brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* worldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
	void STATIC_GetAllWidgetsOfClass(class UObject* worldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& text, const struct FVector2D& position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	void STATIC_DrawText(struct FPaintContext* Context, const struct FString& InString, const struct FVector2D& position, const struct FLinearColor& Tint);
	void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& position, const struct FVector2D& Size, class USlateBrushAsset* brush, const struct FLinearColor& Tint);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct Fkey& DragKey);
	struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct Fkey& DragKey);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* STATIC_Create(class UObject* worldContextObject, class UClass* WidgetType, class UplayerController* owningPlayer);
	struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void STATIC_CancelDragDrop();
};

// Class UMG.WidgetComponent
// 0x0128 (FullSize[0x05A0] - InheritedSize[0x0478])
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_WMN8[0x8];                                     // 0x0478(0x0008) Fix Super Size
	class UClass*                                      WidgetClass;                                               // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   DrawSize;                                                  // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManuallyRedraw;                                           // 0x0490(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRedrawRequested;                                          // 0x0491(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XNT5[0x2];                                     // 0x0492(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RedrawTime;                                                // 0x0494(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8VLR[0x8];                                     // 0x0498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   CurrentDrawSize;                                           // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawAtDesiredSize;                                        // 0x04A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0QL2[0x3];                                     // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Pivot;                                                     // 0x04AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReceiveHardwareInput;                                     // 0x04B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWindowFocusable;                                          // 0x04B5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWindowVisibility                              WindowVisibility;                                          // 0x04B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bApplyGammaCorrection;                                     // 0x04B7(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocalPlayer*                                OwnerPlayer;                                               // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BackgroundColor;                                           // 0x04C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TintColorAndOpacity;                                       // 0x04D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityFromTexture;                                        // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetBlendMode                               BlendMode;                                                 // 0x04E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTwoSided;                                               // 0x04E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TickWhenOffscreen;                                         // 0x04E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GMMS[0x1];                                     // 0x04E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Widget;                                                    // 0x04E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PSHD[0x20];                                    // 0x04F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  BodySetup;                                                 // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          TranslucentMaterial;                                       // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          TranslucentMaterial_OneSided;                              // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          OpaqueMaterial;                                            // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          OpaqueMaterial_OneSided;                                   // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          MaskedMaterial;                                            // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          MaskedMaterial_OneSided;                                   // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAddedToScreen;                                            // 0x0558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEditTimeUsable;                                           // 0x0559(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DMW1[0x2];                                     // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SharedLayerName;                                           // 0x055C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LayerZOrder;                                               // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetGeometryMode                            GeometryMode;                                              // 0x056C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KR09[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CylinderArcAngle;                                          // 0x0570(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_628K[0x2C];                                    // 0x0574(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}



	void SetWindowVisibility(UMG_EWindowVisibility Invisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(UMG_EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(UMG_EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	UMG_EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	UMG_EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	UMG_EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};

// Class UMG.WidgetInteractionComponent
// 0x0200 (FullSize[0x0410] - InheritedSize[0x0210])
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                    // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJ6Q[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VirtualUserIndex;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerIndex;                                              // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45CS[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionDistance;                                       // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EWidgetInteractionSource                       InteractionSource;                                         // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHitTesting;                                         // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                                // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GCUG[0x1];                                     // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                DebugColor;                                                // 0x0244(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G88V[0x7C];                                    // 0x0254(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FhitResult                                  CustomHitResult;                                           // 0x02D0(0x0090) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   LocalHitLocation;                                          // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LastLocalHitLocation;                                      // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                            HoveredWidgetComponent;                                    // 0x0370(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FhitResult                                  LastHitResult;                                             // 0x0378(0x0090) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetInteractable;                              // 0x0408(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetFocusable;                                 // 0x0409(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetHitTestVisible;                            // 0x040A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P9Y7[0x5];                                     // 0x040B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}



	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(const struct FhitResult& hitResult);
	bool SendKeyChar(const struct FString& characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct Fkey& key);
	bool ReleaseKey(const struct Fkey& key);
	void PressPointerKey(const struct Fkey& key);
	bool PressKey(const struct Fkey& key, bool bRepeat);
	bool PressAndReleaseKey(const struct Fkey& key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FhitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}



	class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
	class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
	class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
	class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
	class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* worldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class UplayerController* playerController, const struct Fvector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
	struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* worldContextObject);
	struct FVector2D STATIC_GetViewportSize(class UObject* worldContextObject);
	float STATIC_GetViewportScale(class UObject* worldContextObject);
	struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class UplayerController* playerController);
	bool STATIC_GetMousePositionScaledByDPI(class UplayerController* player, float* LocationX, float* LocationY);
	struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* worldContextObject);
	struct FVector2D STATIC_GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                        // 0x0030(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Down;                                                      // 0x005C(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       left;                                                      // 0x0088(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Right;                                                     // 0x00B4(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Next;                                                      // 0x00E0(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       previous;                                                  // 0x010C(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}



};

// Class UMG.WidgetSwitcher
// 0x0018 (FullSize[0x0158] - InheritedSize[0x0140])
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                         // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXMH[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex(int index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_N8KR[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJYF[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WidgetTree
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}



};

// Class UMG.WindowTitleBarArea
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                     // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoubleClickTogglesFullscreen;                             // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JM3V[0x1E];                                    // 0x0142(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R1XV[0x16];                                    // 0x0052(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WrapBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OYLZ[0x13];                                    // 0x014D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* content);
};

// Class UMG.WrapBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4Y8[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SBL[0xE];                                     // 0x005A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
