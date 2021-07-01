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

// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent");

	UInteractiveWidgetInterface_HandleKeyUpEvent_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent");

	UInteractiveWidgetInterface_HandleKeyHoldEvent_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent");

	UInteractiveWidgetInterface_HandleKeyDownEvent_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAnalogInputEvent       InAnalogInputEvent             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent");

	UInteractiveWidgetInterface_HandleAnalogInputEvent_Params params;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUIInputUtilities::STATIC_ShouldUseAtlantaControls()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls");

	UUIInputUtilities_ShouldUseAtlantaControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_EControlMode    controlMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUIInputUtilities::STATIC_IsInputKeyControlModePairValid(const struct Fkey& inputKey, DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid");

	UUIInputUtilities_IsInputKeyControlModePairValid_Params params;
	params.inputKey = inputKey;
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// DBDInput_EUIActionType         ActionType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fkey                    ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fkey UUIInputUtilities::STATIC_GetKeyFromUIAction(DBDInput_EUIActionType ActionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.GetKeyFromUIAction");

	UUIInputUtilities_GetKeyFromUIAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
