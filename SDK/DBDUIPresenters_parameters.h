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

// Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
struct UHudPresenter_OnPawnUnpossessed_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.HudPresenter.OnPawnPossessed
struct UHudPresenter_OnPawnPossessed_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.ExamplePresenter.OnButtonClick
struct UExamplePresenter_OnButtonClick_Params
{
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
struct UOnboardingMenuPresenter_OnSetUIEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnSelectedTabChanged
struct UOnboardingMenuPresenter_OnSelectedTabChanged_Params
{
	int                                                selectedTabIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
struct UOnboardingMenuPresenter_OnBackAction_Params
{
};

// Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
struct UOnboardingTutorialSubPresenter_OnSelectTutorial_Params
{
	struct FString                                     StepId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TutorialId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
struct USkillCheckPresenter_OnUpdateSkillCheckVisual_Params
{
	bool                                               isActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
struct USkillCheckPresenter_OnShowSkillCheckSuccess_Params
{
	bool                                               isBonus;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
struct USkillCheckPresenter_OnShowSkillCheckFail_Params
{
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
struct USkillCheckPresenter_OnShowSkillCheck_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
struct UUIConsoleCommands_DBD_ToggleTestWidget_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
struct UUIConsoleCommands_DBD_ToggleDPICurve_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
struct UUIConsoleCommands_DBD_SetMenuScaleFactor_Params
{
	float                                              scaleFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
struct UUIConsoleCommands_DBD_SetHudVisible_Params
{
	bool                                               isVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
struct UUIConsoleCommands_DBD_SetHudScaleFactor_Params
{
	float                                              scaleFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
struct UUIConsoleCommands_DBD_SetApplicationScale_Params
{
	float                                              applicationScale;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
