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

// Function ScaleformUI.GFxMoviePlayer.start
struct UGFxMoviePlayer_start_Params
{
	bool                                               bRefresh;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetVisibility
struct UGFxMoviePlayer_SetVisibility_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	TEnumAsByte<ScaleformUI_EGFxScaleMode>             ScaleMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                x;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FTransform                                  ViewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
struct UGFxMoviePlayer_SetVariableValueArray_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            Value;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
struct UGFxMoviePlayer_SetVariableValue_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    Value;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	TEnumAsByte<ScaleformUI_EGFxTimingMode>            TimingMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetScale
struct UGFxMoviePlayer_SetScale_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XScale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YScale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetPosition
struct UGFxMoviePlayer_SetPosition_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              x;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FASPerspectiveTransform                     PerspectiveTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	bool                                               bPausePlayback;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	bool                                               bCanReceiveInput;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	bool                                               bCanReceiveFocus;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
struct UGFxMoviePlayer_SetFocusIgnoreKeys_Params
{
	TArray<struct Fkey>                                Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Utexture*                                    texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
struct UGFxMoviePlayer_SetDisplayTransform_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  DisplayTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
struct UGFxMoviePlayer_SetDisplayInfo_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASDisplayInfo                              Info;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
struct UGFxMoviePlayer_SetColorTransform_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASColorTransform                           UnrealColorTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
struct UGFxMoviePlayer_SetCaptureKeys_Params
{
	TArray<struct Fkey>                                Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	TEnumAsByte<ScaleformUI_EGFxAlign>                 Align;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
struct UGFxMoviePlayer_ReceiveGFxCommand_Params
{
	struct FString                                     Command;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Arguments;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.OpenMovie
struct UGFxMoviePlayer_OpenMovie_Params
{
	class USwfMovie*                                   SwfMovie;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ExternalScriptInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      RenderToTexture;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisplayWithHudOff;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartPaused;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.OnTick
struct UGFxMoviePlayer_OnTick_Params
{
	float                                              deltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.OnStart
struct UGFxMoviePlayer_OnStart_Params
{
};

// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function ScaleformUI.GFxMoviePlayer.LoadAndStart
struct UGFxMoviePlayer_LoadAndStart_Params
{
	struct FString                                     InSwfAssetName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefresh;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.Invoke
struct UGFxMoviePlayer_Invoke_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            Params;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
struct UGFxMoviePlayer_GotoAndStopI_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Frame;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
struct UGFxMoviePlayer_GotoAndStop_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Frame;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
struct UGFxMoviePlayer_GotoAndPlayI_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Frame;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
struct UGFxMoviePlayer_GotoAndPlay_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Frame;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetVisibility
struct UGFxMoviePlayer_GetVisibility_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetView3D
struct UGFxMoviePlayer_GetView3D_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
struct UGFxMoviePlayer_GetVariableValueArray_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
struct UGFxMoviePlayer_GetVariableValue_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetScale
struct UGFxMoviePlayer_GetScale_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              XScale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YScale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetPosition
struct UGFxMoviePlayer_GetPosition_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              x;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
struct UGFxMoviePlayer_GetPerspective3D_Params
{
	struct FASPerspectiveTransform                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
struct UGFxMoviePlayer_GetMovieClip_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
struct UGFxMoviePlayer_GetDisplayTransform_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
struct UGFxMoviePlayer_GetDisplayInfo_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASDisplayInfo                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
struct UGFxMoviePlayer_GetColorTransform_Params
{
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASColorTransform                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
	bool                                               Unload;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetScale
struct UGFxObject_SetScale_Params
{
	float                                              XScale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YScale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              x;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetMemberValueArray
struct UGFxObject_SetMemberValueArray_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            input;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetMemberValue
struct UGFxObject_SetMemberValue_Params
{
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    input;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetDisplayTransform
struct UGFxObject_SetDisplayTransform_Params
{
	struct FTransform                                  DisplayTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              UnrealDisplayInfo;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           UnrealColorTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.Invoke
struct UGFxObject_Invoke_Params
{
	struct FString                                     FunctionName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            Params;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                FrameNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	struct FString                                     FrameString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                FrameNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	struct FString                                     FrameString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetVisible
struct UGFxObject_GetVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetScale
struct UGFxObject_GetScale_Params
{
	float                                              XScale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YScale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              x;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetMemberValueArray
struct UGFxObject_GetMemberValueArray_Params
{
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetMemberValue
struct UGFxObject_GetMemberValue_Params
{
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetDisplayTransform
struct UGFxObject_GetDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
struct UScaleformBlueprintLibrary_OpenMovie_Params
{
	class USwfMovie*                                   Movie;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ExternalInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      RenderTexture;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisplayWithHudOff;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StartPaused;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxMoviePlayer*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
struct UScaleformBlueprintLibrary_InvokeNoParams_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
struct UScaleformBlueprintLibrary_Invoke_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASValue>                            Params;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FASValue                                    ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
struct UScaleformBlueprintLibrary_GetVariable_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariablePath;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
struct UScaleformBlueprintLibrary_GetMovieClip_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MovieClipName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
struct UScaleformBlueprintLibrary_GetMember_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MemberName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
struct UScaleformBlueprintLibrary_CloseMovie_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
