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

// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
struct UInteractiveWidgetInterface_HandleKeyUpEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
struct UInteractiveWidgetInterface_HandleKeyHoldEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
struct UInteractiveWidgetInterface_HandleKeyDownEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
struct UInteractiveWidgetInterface_HandleAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
struct UUIInputUtilities_ShouldUseAtlantaControls_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
struct UUIInputUtilities_IsInputKeyControlModePairValid_Params
{
	struct Fkey                                        inputKey;                                                  // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EControlMode                        controlMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
struct UUIInputUtilities_GetKeyFromUIAction_Params
{
	DBDInput_EUIActionType                             ActionType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fkey                                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
