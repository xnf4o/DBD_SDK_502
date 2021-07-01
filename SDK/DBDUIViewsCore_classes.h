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

// Class DBDUIViewsCore.CoreBaseUserWidget
// 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
class UCoreBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_W4GE[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScaleBox*                                   ScaleContainer;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsInteractive;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EControlMode                        _controlMode;                                              // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDUIManagers_EScaleType                           ScaleType;                                                 // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0FQ0[0x5];                                     // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDInputManager*                            _inputManager;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RUQ4[0x50];                                    // 0x0288(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseUserWidget");
		return ptr;
	}



	void UpdateScale(float scale);
	void RegisterForInput();
	void OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode);
	void DeregisterFromInput();
};

// Class DBDUIViewsCore.CharacterTooltipWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCharacterTooltipWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CharacterTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCharacterTooltipViewData& characterViewData);
};

// Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UCoreBaseLoadoutPartWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_6KGC[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDImage*                                   ImageRarity;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   ImageIcon;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextStackCount;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget");
		return ptr;
	}



	void SetLoadoutStackCount(int stackCount);
	void SetLoadoutPartRarity(DBDSharedTypes_EItemRarity rarity);
	void SetLoadoutPartIcon(class UTexture2D* icon);
};

// Class DBDUIViewsCore.CoreAddonWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_3F59[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreAddonWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreBaseHudWidget
// 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{
public:
	float                                              FocusAnimationDuration;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationDelay;                                       // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FocusAnimationEasing;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D5UU[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusAnimationMaxOpacity;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationMinOpacity;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IJMJ[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseHudWidget");
		return ptr;
	}



	bool ShouldPlayFocusAnimation();
	void PlayFocusAnimation();
};

// Class DBDUIViewsCore.CoreButtonPromptWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreButtonPromptWidget : public UCoreBaseUserWidget
{
public:
	class UAkAudioEvent*                               CursorOverSfx;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorPressSfx;                                            // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorReleaseSfx;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _inputPromptText;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  _buttonTextField;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _buttonPromptTriggeredDelegate;                            // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreButtonPromptWidget");
		return ptr;
	}



	void SetText(const struct FText& text);
	void SetInputKey(const struct Fkey& key);
	void SetAction(DBDInput_EUIActionType ActionType);
	void EnablePrompts();
	void DisablePrompts();
};

// Class DBDUIViewsCore.CoreButtonWidget
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class UCoreButtonWidget : public UCoreBaseUserWidget
{
public:
	class UDBDButton*                                  HitzoneButton;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewsCore_EAnalogCursorStickiness             AnalogCursorStickiness;                                    // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZXIB[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreButtonWidget");
		return ptr;
	}



	void OnHitzoneUnhovered();
	void OnHitzoneHovered();
};

// Class DBDUIViewsCore.CoreRewardWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UCoreRewardWidget : public UUserWidget
{
public:
	class UDBDImage*                                   RewardIcon;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDButton*                                  HitZone;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreRewardWidget");
		return ptr;
	}



	class UDBDButton* GetHitZone();
	void ClearData();
};

// Class DBDUIViewsCore.CoreCharacterRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCharacterRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreCharacterRewardWidget");
		return ptr;
	}



	void SetData(const struct FcharacterRewardViewData& characterRewardViewData);
};

// Class DBDUIViewsCore.CoreCurrencyRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCurrencyRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreCurrencyRewardWidget");
		return ptr;
	}



	void SetData(const struct FcurrencyRewardViewData& currencyRewardViewData);
};

// Class DBDUIViewsCore.CoreCustomizationRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCustomizationRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreCustomizationRewardWidget");
		return ptr;
	}



	void SetData(const struct FcustomizationRewardViewData& customizationRewardViewData);
};

// Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
// 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_WYQL[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _progressBarInterpSpeed;                                   // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_40Q6[0x6C];                                    // 0x02FC(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget");
		return ptr;
	}



	void UpdateBarProgression(float progress);
	void PlayToZeroAnimation();
};

// Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerLeftCanvas;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerRightCanvas;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBoxSlot*                          _markerLeftBox;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBoxSlot*                          _markerRightBox;                                           // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X7SY[0x20];                                    // 0x0300(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedItemWidget
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UCoreEquippedItemWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_2M1D[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ItemDisappearSfx;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEquippedItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedPowerWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_0QEI[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEquippedPowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExampleWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreExampleWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_ECIA[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EditAnywhere;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnly;                                          // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditInstanceOnly;                                          // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditNoBlueprint;                                           // 0x0328(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnlyBlueprintReadOnly;                         // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleAnywhere;                                           // 0x0348(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleDefaultsOnly;                                       // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleInstanceOnly;                                       // 0x0368(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ExampleButtonClickDelegate;                                // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreExampleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExternalEffectsWidget
// 0x01B0 (FullSize[0x04A0] - InheritedSize[0x02F0])
class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_LTO7[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreAddonWidget*>                    AddonWidgets;                                              // 0x0308(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3E4V[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TScriptInterface<class UPerkViewInterface>> _perkViewInterfaces;                                       // 0x0320(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UAddonViewInterface>> _addonViewInterfaces;                                      // 0x0330(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3STP[0x160];                                   // 0x0340(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreExternalEffectsWidget");
		return ptr;
	}



	void HideExternalPerk(const struct FName& perkID);
	void HideExternalAddon(const struct FName& addonID);
};

// Class DBDUIViewsCore.CoreGameManualCategoryButton
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UCoreGameManualCategoryButton : public UCoreButtonWidget
{
public:
	class UDBDTextBlock*                               title;                                                     // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               description;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   icon;                                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   Background;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  BackgroundTexture;                                         // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreGameManualCategoryButton");
		return ptr;
	}



	void SetText(const struct FText& title, const struct FText& description);
};

// Class DBDUIViewsCore.CoreGameManualPanelWidget
// 0x00C8 (FullSize[0x03A0] - InheritedSize[0x02D8])
class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_SS1W[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDUIViewInterfaces_EGameManualMenuState           _currentSelectedManualMenu;                                // 0x02E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EHelpType                           _currentGameManualTopic;                                   // 0x02E1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2X4W[0x6];                                     // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelWidget*                                CategoryPanel;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               GameCategoryButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               SurvivorCategoryButton;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               KillerCategoryButton;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                TopicsPanel;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreTabContainerWidget*                     GameManualTopicsTabs;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentTitle;                                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentSubtitle;                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDRichTextBlock*                           GameManualContentText;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N65A[0x50];                                    // 0x0330(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _onSetOnboardingMenuSubtitleDelegate;                      // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _onResetOnboardingMenuSubtitleDelegate;                    // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreGameManualPanelWidget");
		return ptr;
	}



	void ToggleGameManualMenuState();
	void ShowHelpTopics(DBDSharedTypes_EHelpType categoryType);
	void SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState);
	void SetCurrentOnbardingMenuSubtitle();
	void OnTopicTabChanged(int TabIndex);
};

// Class DBDUIViewsCore.CoreHookCountWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreHookCountWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_3GBH[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHookCountWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudAlertWidget
// 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
class UCoreHudAlertWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_SCFY[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDisplayedItems;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondaryAlpha;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FullAlertDuration;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PendingAlertDuration;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AnimationDuration;                                         // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                AnimationEasing;                                           // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YW65[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTranslationY;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LSTL[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreHudScoreAlertItemClass;                                // 0x0318(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreHudStatusEffectAlertItemClass;                         // 0x0320(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  AlertContainer;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreBaseUserWidget*>                 _alerts;                                                   // 0x0330(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreBaseUserWidget*>                 _pendingAlerts;                                            // 0x0340(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudScoreAlertItem*>              _scoreAlertPool;                                           // 0x0350(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudStatusEffectAlertItem*>       _statusEffectAlertPool;                                    // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P4OZ[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudAlertWidget");
		return ptr;
	}



	void PopAlert();
	void OnPopAlertComplete(struct FUITweenInstance* tween);
	void OnClearAlertsComplete(struct FUITweenInstance* tween);
	float GetRemainingTime();
	TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
	TArray<class UCoreBaseUserWidget*> GetAlerts();
	void ClearAlerts();
};

// Class DBDUIViewsCore.CoreHudObjectiveWidget
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UCoreHudObjectiveWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_F0E2[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudObjectiveWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudScoreAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudScoreAlertItem");
		return ptr;
	}



	void SetData(const struct FScoreAlertViewData& data);
};

// Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem");
		return ptr;
	}



	void SetData(const struct FStatusEffectAlertViewData& data);
};

// Class DBDUIViewsCore.CoreInputPromptTextWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreInputPromptTextWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextField;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fkey                                        inputKey;                                                  // 0x02E8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       text;                                                      // 0x0308(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptTextWidget");
		return ptr;
	}



	void SetText(const struct FText& text);
	void SetInputKey(const struct Fkey& inputKey);
};

// Class DBDUIViewsCore.CoreInputPromptWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
public:
	struct FText                                       UnfoundInputKeyText;                                       // 0x02D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct Fkey                                        inputKey;                                                  // 0x02F0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptWidget");
		return ptr;
	}



	void SetInputKey(const struct Fkey& inputKey);
	void PromptNotFound();
	struct FText GetInputShortDisplayName();
	void DisplayPrompt();
};

// Class DBDUIViewsCore.CoreInteractionProgressWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_499C[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreStatusEffectIcon*>               Proficiencies;                                             // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionProgressWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptActionWidget
// 0x0040 (FullSize[0x0360] - InheritedSize[0x0320])
class UCoreInteractionPromptActionWidget : public UCoreInputPromptTextWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt2;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       IdleAnimationName;                                         // 0x0328(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DGRY[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        inputKey2;                                                 // 0x0338(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T0X0[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptActionWidget");
		return ptr;
	}



	void StopIdleAnimation();
	void SetInputKey2(const struct Fkey& inputKey2);
	void PlayIdleAnimation();
	bool HasSecondPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptActionMovementWidget
// 0x0050 (FullSize[0x03B0] - InheritedSize[0x0360])
class UCoreInteractionPromptActionMovementWidget : public UCoreInteractionPromptActionWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt3;                                              // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptWidget*                      InputPrompt4;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fkey                                        inputKey3;                                                 // 0x0370(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fkey                                        inputKey4;                                                 // 0x0390(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptActionMovementWidget");
		return ptr;
	}



	void SetInputKey4(const struct Fkey& inputKey4);
	void SetInputKey3(const struct Fkey& inputKey3);
	bool HasThirdPrompt();
	bool HasFourthPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
// 0x00A0 (FullSize[0x0390] - InheritedSize[0x02F0])
class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_V1BH[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDWrapBox*                                 CenterContainerBox;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDWrapBox*                                 ContainerBox;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InteractionPromptWidgetClass;                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedPrompts;                                       // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     SlotMargin;                                                // 0x031C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_06UR[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreInteractionPromptWidget*>        _promptWidgetPool;                                         // 0x0330(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreInteractionPromptWidget*> _displayedPromptsMap;                                      // 0x0340(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UCoreInteractionPromptWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptWidget");
		return ptr;
	}



	void SetData(const struct FinteractionPromptViewData& data);
	void ClearData();
};

// Class DBDUIViewsCore.CoreItemBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCoreItemBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_8OFK[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreItemInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_FQEJ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_2IB0[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreLeaningArrowsWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_ZHU7[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreLeaningArrowsWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreMatchResultWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreMatchResultWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_5W8M[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreMatchResultWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_A6VG[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOfferingInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_NN5D[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOfferingWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget");
		return ptr;
	}



	void SetOnboardingMenuTitle(const struct FText& menuTitle);
	void SetOnboardingMenuSubtitle(const struct FText& menuTitle);
	void SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle);
	void ResetOnboardingMenuSubtitle();
};

// Class DBDUIViewsCore.CoreOnboardingMenuWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_DKU2[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoreTabContainerWidget*                     OnboardingMenuTabs;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BackActionDelegate;                                        // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    TabSelectionChangedActionDelegate;                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J8H0[0x8];                                     // 0x0308(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuWidget");
		return ptr;
	}



	void OnOnboardingTabChanged(int TabIndex);
};

// Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
// 0x00D8 (FullSize[0x03C0] - InheritedSize[0x02E8])
class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
{
public:
	struct FScriptMulticastDelegate                    ButtonClickedDelegate;                                     // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetDataAnimationCompleteDelegate;                        // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               TitleText;                                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               DescriptionText;                                           // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   RoleIcon;                                                  // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             StateSwitcher;                                             // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   LockedImage;                                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   CompletedImage;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreRewardWrapperWidget*>            RewardWrappers;                                            // 0x0338(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOnboardingTutorialButtonViewData           ViewData;                                                  // 0x0348(0x0078) (BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget");
		return ptr;
	}



	void SetVisual();
	void SetUIEnabled(bool enabled);
	void SetData(const struct FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation);
	void OnRewardClicked();
};

// Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_A2ZN[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreOnboardingTutorialButtonWidget*> TutorialButtons;                                           // 0x02E0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    TutorialSelectedDelegate;                                  // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	TArray<struct FPendingStepData>                    _pendingData;                                              // 0x0300(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget");
		return ptr;
	}



	void NextPendingButtonUpdated();
	void CheckNextPendingButtonUpdate();
};

// Class DBDUIViewsCore.CorePerksContainerWidget
// 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
class UCorePerksContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BT9D[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class UPerkViewInterface>> _perkViewInterfaces;                                       // 0x0308(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePerksContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePerkWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_BBIG[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePerkWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePingStatusWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCorePingStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_4I1Q[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePingStatusWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_GG77[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePlayerStatusWidget*>             PlayerStatusWidgets;                                       // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class UPlayerStatusViewInterface>> _playerStatusViewInterfaces;                               // 0x0310(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusWidget
// 0x00D8 (FullSize[0x03C8] - InheritedSize[0x02F0])
class UCorePlayerStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_YS35[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ObsessionSfx;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPlayerStatusViewData                       _cachedViewData;                                           // 0x0300(0x0078) (BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H7CE[0x50];                                    // 0x0378(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusWidget");
		return ptr;
	}



	bool ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState);
	bool HasTimerProgressChanged(float newTimerProgress);
	bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	bool HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus NewPlayerState);
	bool HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState);
	bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	DBDSharedTypes_EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
};

// Class DBDUIViewsCore.CorePowerBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCorePowerBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_04A7[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePowerBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePowerWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_BAZC[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreProgressionRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreProgressionRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreProgressionRewardWidget");
		return ptr;
	}



	void SetData(const struct FprogressionRewardViewData& progressionRewardViewData);
};

// Class DBDUIViewsCore.CoreRewardWrapperWidget
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UCoreRewardWrapperWidget : public UUserWidget
{
public:
	class UClass*                                      CharacterRewardWidget;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CurrencyRewardWidget;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CustomizationRewardWidget;                                 // 0x0270(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ProgressionRewardWidget;                                   // 0x0278(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                RewardContainer;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreRewardWidget*                           _rewardWidget;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreRewardWrapperWidget");
		return ptr;
	}



	void SetData(const struct FRewardWrapperViewData& ViewData);
	class UCoreRewardWidget* GetRewardWidget();
	void ClearData();
};

// Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BRS9[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M1P9[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                container;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ScreenIndicatorClass;                                      // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class UCoreScreenIndicatorWidget*> _screenIndicatorsMap;                                      // 0x0310(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCoreScreenIndicatorWidget*>          _screenIndicatorsPool;                                     // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget");
		return ptr;
	}



	TMap<struct FString, class UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
	struct FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* Value);
};

// Class DBDUIViewsCore.CoreScreenIndicatorWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{
public:
	float                                              InactiveTime;                                              // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IndicatorPadding;                                          // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DistanceClamping;                                          // 0x02E4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceRatio;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceAlpha;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1BW[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorWidget");
		return ptr;
	}



	void SetData(const struct FScreenIndicatorViewData& data);
	void ClearData();
};

// Class DBDUIViewsCore.CoreSkillCheckWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreSkillCheckWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_AEIA[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreSkillCheckWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreSpectateBarWidget
// 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
class UCoreSpectateBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_0RNO[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _leaveButtonClickDelegate;                                 // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _leftArrowClickDelegate;                                   // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _rightArrowClickDelegate;                                  // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreSpectateBarWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStartSequenceWidget
// 0x00A0 (FullSize[0x0390] - InheritedSize[0x02F0])
class UCoreStartSequenceWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_JFBS[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeInDuration;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutDuration;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeInEasing;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeOutEasing;                                             // 0x0301(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MB3N[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EThemeColorId, struct FLinearColor> BorderColors;                                              // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultColor;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               ThemeNameTextfield;                                        // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      SeparatorImage;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MapNameTextfield;                                          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    StartSequenceFadeOutDelegate;                              // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStartSequenceWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStatusEffectIcon
// 0x0030 (FullSize[0x0308] - InheritedSize[0x02D8])
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_113S[0x30];                                    // 0x02D8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectIcon");
		return ptr;
	}



	void UpdateWidget();
	void UpdatePercentageFill(float percentage);
	void SetStatusEffectData(const struct FStatusEffectViewData& data);
	void SetInactiveTicks(int inactiveTicks);
	struct FStatusEffectViewData GetStatusEffectData();
	int GetInactiveTicks();
};

// Class DBDUIViewsCore.CoreStatusEffectWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreStatusEffectWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_LD33[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PrepooledItemAmount;                                       // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemsByColumn;                                             // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EvenColumnOffset;                                          // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreStatusEffectIconClass;                                 // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  StatusEffectContainer;                                     // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreStatusEffectIcon*>               _statusEffectPool;                                         // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _statusEffectOrder;                                        // 0x0328(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreStatusEffectIcon*>   _statusEffectMap;                                          // 0x0338(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectWidget");
		return ptr;
	}



	TMap<struct FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
};

// Class DBDUIViewsCore.CoreTabContainerWidget
// 0x0068 (FullSize[0x0340] - InheritedSize[0x02D8])
class UCoreTabContainerWidget : public UCoreBaseUserWidget
{
public:
	TArray<struct FTabWidgetData>                      TabsData;                                                  // 0x02D8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlignHorizontally;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EHCE[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     TabPadding;                                                // 0x02EC(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y47V[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTabClass;                                              // 0x0300(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  TabContainer;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UseControllerTabSwitching;                                 // 0x0310(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CanLoop;                                                   // 0x0311(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OLYQ[0x6];                                     // 0x0312(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _selectedTabChangedDelegate;                               // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	TArray<class UCoreTabWidget*>                      _tabs;                                                     // 0x0328(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T3HK[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTabContainerWidget");
		return ptr;
	}



	void SetAllTabsEnabled(bool enabled);
	void SelectTab(int TabIndex);
	void SelectPreviousTab();
	void SelectNextTab();
	void OnSelectedTabChanged(int newTabIndex);
	void Init();
	void Clear();
};

// Class DBDUIViewsCore.CoreTabWidget
// 0x09D8 (FullSize[0x0CC0] - InheritedSize[0x02E8])
class UCoreTabWidget : public UCoreButtonWidget
{
public:
	bool                                               IsUsingCustomWidgetStateStyles;                            // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_18R3[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTabStyle                                   WidgetDefaultStyle;                                        // 0x02F0(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FTabStyle                                   WidgetSelectedStyle;                                       // 0x0628(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FTabStyle                                   WidgetDisabledStyle;                                       // 0x0960(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int                                                TabIndex;                                                  // 0x0C98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V38J[0x4];                                     // 0x0C9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               TabTextField;                                              // 0x0CA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   TabImage;                                                  // 0x0CA8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _tabTriggeredDelegate;                                     // 0x0CB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTabWidget");
		return ptr;
	}



	void SetVisualState(DBDUIViewsCore_ETabWidgetState NewState);
	void ButtonClicked();
};

// Class DBDUIViewsCore.CoreTemplateWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UCoreTemplateWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_4KT6[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTemplateWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTestBuildFlagWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_OLBV[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  TopLineTextfield;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BottomLineTextfield;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTestBuildFlagWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_5SY8[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialObjectiveItem
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    TutorialObjectiveCompletedDelegate;                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectiveItem");
		return ptr;
	}



	void SetObjectiveCompleted(bool removeAfterCompletion);
	void InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData);
};

// Class DBDUIViewsCore.CoreTutorialObjectivesContainer
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_JVXG[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTutorialObjectiveItemClass;                            // 0x02F8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BasePooledInstanceAmount;                                  // 0x0300(0x0004) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PLMY[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGridPanel*                                  ObjectiveContainer;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreTutorialObjectiveItem*>          _objectivePool;                                            // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreTutorialObjectiveItem*> _objectiveItems;                                           // 0x0320(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectivesContainer");
		return ptr;
	}



	void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
};

// Class DBDUIViewsCore.CoreTutorialPopupWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_5SAC[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ClosePopupSfx;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _notifTutoConfirmButtonClickDelegate;                      // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialPopupWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CurrencyTooltipWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCurrencyTooltipWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CurrencyTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCurrencyTooltipViewData& currencyViewData);
};

// Class DBDUIViewsCore.CustomizationTooltipWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCustomizationTooltipWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CustomizationTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData);
};

// Class DBDUIViewsCore.DBDButton
// 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
class UDBDButton : public Ubutton
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDButton");
		return ptr;
	}



};

// Class DBDUIViewsCore.DBDImage
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class UDBDImage : public Uimage
{
public:
	class UTexture2D*                                  DefaultImage;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDImage");
		return ptr;
	}



	void SetBrushFromTextureWithDefault(class UTexture2D* texture, bool matchSize);
};

// Class DBDUIViewsCore.DBDRichTextBlock
// 0x0018 (FullSize[0x06E0] - InheritedSize[0x06C8])
class UDBDRichTextBlock : public URichTextBlock
{
public:
	bool                                               _debugPreviewUndockedState;                                // 0x06C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_35MQ[0xF];                                     // 0x06C9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isUpperCase;                                              // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1ERC[0x6];                                     // 0x06DA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDRichTextBlock");
		return ptr;
	}



	void SetIsUpperCase(bool isUpperCase);
	void SetHtmlText(const struct FText& InText);
	void SetHasUndocking(bool hasUndocking);
	void OnSwitchDockStateChanged(bool isDocked);
	bool GetIsUpperCase();
	bool GetHasUndocking();
};

// Class DBDUIViewsCore.DBDScrollBox
// 0x0030 (FullSize[0x0938] - InheritedSize[0x0908])
class UDBDScrollBox : public UScrollBox
{
public:
	bool                                               _useControllerScroll;                                      // 0x0908(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _shouldScrollOnMouseOver;                                  // 0x0909(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2C0H[0x2];                                     // 0x090A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _scrollSpeed;                                              // 0x090C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _displayPrompt;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       _displayPromptText;                                        // 0x0918(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoClear, Protected, NativeAccessSpecifierProtected)
	DBDUIViewsCore_EShowScrollDisplayPrompt            _showDisplayPrompt;                                        // 0x0930(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OZFN[0x7];                                     // 0x0931(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDScrollBox");
		return ptr;
	}



	void UpdateDisplayPrompt();
	void OnControlModeChanged(DBDSharedTypes_EControlMode controlMode);
	bool isMouseOver();
	void HandleControllerInput(float analogValue);
};

// Class DBDUIViewsCore.DBDTextBlock
// 0x00A0 (FullSize[0x0388] - InheritedSize[0x02E8])
class UDBDTextBlock : public UTextBlock
{
public:
	bool                                               _debugPreviewUndockedState;                                // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WGI7[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USwitchDockStateManager*                     _switchDockStateManager;                                   // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUpperCase;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DZ3V[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTextDockingProperties                   _undockedProperties;                                       // 0x0300(0x0040) (Edit, BlueprintVisible, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QIAJ[0x48];                                    // 0x0340(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDTextBlock");
		return ptr;
	}



	void SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties);
	void SetIsUpperCase(bool isUpperCase);
	void SetHasUndocking(bool hasUndocking);
	void OnSwitchDockStateChanged(bool isDocked);
	struct FDBDTextDockingProperties GetUndockedProperties();
	bool GetIsUpperCase();
	bool GetHasUndocking();
};

// Class DBDUIViewsCore.DBDTooltipManager
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UDBDTooltipManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_NDGC[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 _currentTooltip;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDTooltipManager");
		return ptr;
	}



	void ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCurrencyTooltip(const struct FCurrencyTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void HideTooltip();
};

// Class DBDUIViewsCore.DBDWrapBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UDBDWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x014D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQZZ[0x12];                                    // 0x014E(0x0012) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDWrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* content);
};

// Class DBDUIViewsCore.DBDWrapBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UDBDWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XVSL[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C94U[0xE];                                     // 0x005A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDWrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class DBDUIViewsCore.TestWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTestWidget : public UUserWidget
{
public:
	class UPanelWidget*                                Workbench;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShowWorkbench;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HETI[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.TestWidget");
		return ptr;
	}



	void SetShowWorkbench(bool ShowWorkbench);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
