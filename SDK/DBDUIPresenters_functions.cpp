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

// Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
// (Final, Native, Private)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudPresenter::OnPawnUnpossessed(class Upawn* pawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed");

	UHudPresenter_OnPawnUnpossessed_Params params;
	params.pawn = pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.HudPresenter.OnPawnPossessed
// (Final, Native, Private)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudPresenter::OnPawnPossessed(class Upawn* pawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnPossessed");

	UHudPresenter_OnPawnPossessed_Params params;
	params.pawn = pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.ExamplePresenter.OnButtonClick
// (Final, Native, Private)
void UExamplePresenter::OnButtonClick()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.ExamplePresenter.OnButtonClick");

	UExamplePresenter_OnButtonClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
// (Final, Native, Private)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingMenuPresenter::OnSetUIEnabled(bool enabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled");

	UOnboardingMenuPresenter_OnSetUIEnabled_Params params;
	params.enabled = enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.OnboardingMenuPresenter.OnSelectedTabChanged
// (Final, Native, Private)
// Parameters:
// int                            selectedTabIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingMenuPresenter::OnSelectedTabChanged(int selectedTabIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnSelectedTabChanged");

	UOnboardingMenuPresenter_OnSelectedTabChanged_Params params;
	params.selectedTabIndex = selectedTabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
// (Final, Native, Private)
void UOnboardingMenuPresenter::OnBackAction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction");

	UOnboardingMenuPresenter_OnBackAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
// (Final, Native, Private)
// Parameters:
// struct FString                 StepId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TutorialId                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingTutorialSubPresenter::OnSelectTutorial(const struct FString& StepId, const struct FString& TutorialId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial");

	UOnboardingTutorialSubPresenter_OnSelectTutorial_Params params;
	params.StepId = StepId;
	params.TutorialId = TutorialId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
// (Final, Native, Private)
// Parameters:
// bool                           isActive                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckPresenter::OnUpdateSkillCheckVisual(bool isActive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual");

	USkillCheckPresenter_OnUpdateSkillCheckVisual_Params params;
	params.isActive = isActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
// (Final, Native, Private)
// Parameters:
// bool                           isBonus                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckPresenter::OnShowSkillCheckSuccess(bool isBonus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess");

	USkillCheckPresenter_OnShowSkillCheckSuccess_Params params;
	params.isBonus = isBonus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
// (Final, Native, Private)
void USkillCheckPresenter::OnShowSkillCheckFail()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail");

	USkillCheckPresenter_OnShowSkillCheckFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
// (Final, Native, Private)
void USkillCheckPresenter::OnShowSkillCheck()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck");

	USkillCheckPresenter_OnShowSkillCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
// (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleTestWidget()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget");

	UUIConsoleCommands_DBD_ToggleTestWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
// (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleDPICurve()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve");

	UUIConsoleCommands_DBD_ToggleDPICurve_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
// (Final, Exec, Native, Public)
// Parameters:
// float                          scaleFactor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetMenuScaleFactor(float scaleFactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor");

	UUIConsoleCommands_DBD_SetMenuScaleFactor_Params params;
	params.scaleFactor = scaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
// (Final, Exec, Native, Public)
// Parameters:
// bool                           isVisible                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudVisible(bool isVisible)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible");

	UUIConsoleCommands_DBD_SetHudVisible_Params params;
	params.isVisible = isVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
// (Final, Exec, Native, Public)
// Parameters:
// float                          scaleFactor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudScaleFactor(float scaleFactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor");

	UUIConsoleCommands_DBD_SetHudScaleFactor_Params params;
	params.scaleFactor = scaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
// (Final, Exec, Native, Public)
// Parameters:
// float                          applicationScale               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetApplicationScale(float applicationScale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale");

	UUIConsoleCommands_DBD_SetApplicationScale_Params params;
	params.applicationScale = applicationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
