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

// Function MediaIOCore.MediaOutput.Validate
struct UMediaOutput_Validate_Params
{
	struct FString                                     OutFailureReason;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaOutput.CreateMediaCapture
struct UMediaOutput_CreateMediaCapture_Params
{
	class UMediaCapture*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
struct UMediaCapture_UpdateTextureRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.StopCapture
struct UMediaCapture_StopCapture_Params
{
	bool                                               bAllowPendingFrameToBeProcess;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.SetMediaOutput
struct UMediaCapture_SetMediaOutput_Params
{
	class UMediaOutput*                                InMediaOutput;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.GetState
struct UMediaCapture_GetState_Params
{
	MediaIOCore_EMediaCaptureState                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.GetDesiredSize
struct UMediaCapture_GetDesiredSize_Params
{
	struct FIntPoint                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
struct UMediaCapture_GetDesiredPixelFormat_Params
{
	TEnumAsByte<CoreUObject_EPixelFormat>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
struct UMediaCapture_CaptureTextureRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaCaptureOptions                        CaptureOptions;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
struct UMediaCapture_CaptureActiveSceneViewport_Params
{
	struct FMediaCaptureOptions                        CaptureOptions;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
