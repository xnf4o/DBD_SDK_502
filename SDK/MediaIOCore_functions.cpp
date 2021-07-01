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

// Function MediaIOCore.MediaOutput.Validate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 OutFailureReason               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaOutput::Validate(struct FString* OutFailureReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.Validate");

	UMediaOutput_Validate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = params.OutFailureReason;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaOutput.CreateMediaCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaCapture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaCapture* UMediaOutput::CreateMediaCapture()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.CreateMediaCapture");

	UMediaOutput_CreateMediaCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D");

	UMediaCapture_UpdateTextureRenderTarget2D_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowPendingFrameToBeProcess  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.StopCapture");

	UMediaCapture_StopCapture_Params params;
	params.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaIOCore.MediaCapture.SetMediaOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOutput*            InMediaOutput                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.SetMediaOutput");

	UMediaCapture_SetMediaOutput_Params params;
	params.InMediaOutput = InMediaOutput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MediaIOCore.MediaCapture.GetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// MediaIOCore_EMediaCaptureState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MediaIOCore_EMediaCaptureState UMediaCapture::GetState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetState");

	UMediaCapture_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UMediaCapture::GetDesiredSize()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredSize");

	UMediaCapture_GetDesiredSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<CoreUObject_EPixelFormat> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EPixelFormat> UMediaCapture::GetDesiredPixelFormat()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredPixelFormat");

	UMediaCapture_GetDesiredPixelFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  RenderTarget                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaCaptureOptions    CaptureOptions                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D");

	UMediaCapture_CaptureTextureRenderTarget2D_Params params;
	params.RenderTarget = RenderTarget;
	params.CaptureOptions = CaptureOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaCaptureOptions    CaptureOptions                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport");

	UMediaCapture_CaptureActiveSceneViewport_Params params;
	params.CaptureOptions = CaptureOptions;

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
