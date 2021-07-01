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

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition");

	UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetWorldToMetersScale(class UObject* worldContext, float NewScale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params params;
	params.worldContext = worldContext;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetTrackingOrigin(TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> origin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params params;
	params.origin = origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Utexture*                InTexture                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenTexture(class Utexture* InTexture)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               EyeRectMin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               EyeRectMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               TextureRectMin                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               TextureRectMax                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDrawEyeFirst                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClearBlack                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseAlpha                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params params;
	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;
	params.bUseAlpha = bUseAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// HeadMountedDisplay_ESpectatorScreenMode mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode mode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params params;
	params.mode = mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Near                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Far                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_SetClippingPlanes(float Near, float Far)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params params;
	params.Near = Near;
	params.Far = Far;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params params;
	params.Yaw = Yaw;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_IsSpectatorScreenModeControllable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_IsInLowPersistenceMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayConnected()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_HasValidTrackingPosition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHeadMountedDisplayFunctionLibrary::STATIC_GetWorldToMetersScale(class UObject* worldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params params;
	params.worldContext = worldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bUseFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasFocus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingToWorldTransform(class UObject* worldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params params;
	params.worldContext = worldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Fvector                 origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          LeftFOV                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RightFOV                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TopFOV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BottomFOV                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingSensorParameters(struct Fvector* origin, struct FRotator* rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* distance, float* NearPlane, float* FarPlane, bool* isActive, int index)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (origin != nullptr)
		*origin = params.origin;
	if (rotation != nullptr)
		*rotation = params.rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (distance != nullptr)
		*distance = params.distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (isActive != nullptr)
		*isActive = params.isActive;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingOrigin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHeadMountedDisplayFunctionLibrary::STATIC_GetScreenPercentage()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Fvector                 CameraOrigin                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                CameraRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          HFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VFOV                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CameraDistance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NearPlane                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FarPlane                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetPositionalTrackingCameraParameters(struct Fvector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHeadMountedDisplayFunctionLibrary::STATIC_GetPixelDensity()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct Fvector                 DevicePosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct Fvector* DevicePosition)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UHeadMountedDisplayFunctionLibrary::STATIC_GetNumOfTrackingSensors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<HeadMountedDisplay_EHMDWornState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<HeadMountedDisplay_EHMDWornState> UHeadMountedDisplayFunctionLibrary::STATIC_GetHMDWornState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UHeadMountedDisplayFunctionLibrary::STATIC_GetHMDDeviceName()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetDeviceWorldPose(class UObject* worldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct Fvector* position)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params params;
	params.worldContext = worldContext;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (position != nullptr)
		*position = params.position;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIsTracked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bHasPositionalTracking         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct Fvector* position)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params params;
	params.XRDeviceId = XRDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (position != nullptr)
		*position = params.position;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SystemId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// HeadMountedDisplay_EXRTrackedDeviceType DeviceType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FXRDeviceId>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::STATIC_EnumerateTrackedDevices(const struct FName& SystemId, HeadMountedDisplay_EXRTrackedDeviceType DeviceType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params params;
	params.SystemId = SystemId;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_EnableLowPersistenceMode(bool bEnable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadMountedDisplayFunctionLibrary::STATIC_EnableHMD(bool bEnable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	UHeadMountedDisplayFunctionLibrary_EnableHMD_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              ExternalTrackingTransform      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UHeadMountedDisplayFunctionLibrary::STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD");

	UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params params;
	params.ExternalTrackingTransform = ExternalTrackingTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// InputCore_EControllerHand      NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetTrackingSource(InputCore_EControllerHand NewSource)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	UMotionControllerComponent_SetTrackingSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetTrackingMotionSource(const struct FName& NewSource)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	UMotionControllerComponent_SetTrackingMotionSource_Params params;
	params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowControllerModel           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	UMotionControllerComponent_SetShowDeviceModel_Params params;
	params.bShowControllerModel = bShowControllerModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewDisplayModelSource          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetDisplayModelSource(const struct FName& NewDisplayModelSource)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	UMotionControllerComponent_SetDisplayModelSource_Params params;
	params.NewDisplayModelSource = NewDisplayModelSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewDisplayMesh                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	UMotionControllerComponent_SetCustomDisplayMesh_Params params;
	params.NewDisplayMesh = NewDisplayMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPlayer                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionControllerComponent::SetAssociatedPlayerIndex(int NewPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	UMotionControllerComponent_SetAssociatedPlayerIndex_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (Event, Protected, BlueprintEvent)
void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	UMotionControllerComponent_OnMotionControllerUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionControllerComponent::IsTracked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	UMotionControllerComponent_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// InputCore_EControllerHand      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
InputCore_EControllerHand UMotionControllerComponent::GetTrackingSource()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	UMotionControllerComponent_GetTrackingSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMotionControllerComponent::GetParameterValue(const struct FName& InName, bool* bValueFound)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	UMotionControllerComponent_GetParameterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            jointIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bValueFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UMotionControllerComponent::GetHandJointPosition(int jointIndex, bool* bValueFound)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	UMotionControllerComponent_GetHandJointPosition_Params params;
	params.jointIndex = jointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForSource(int playerIndex, const struct FName& SourceName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params params;
	params.playerIndex = playerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForDevice(int playerIndex, InputCore_EControllerHand Hand)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackedDeviceCountManagementNecessary()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionSourceTracking(int playerIndex, const struct FName& SourceName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params params;
	params.playerIndex = playerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMotionTrackingEnabledControllerCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMaximumMotionTrackedControllerCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMotionTrackedDeviceFunctionLibrary::STATIC_GetActiveTrackingSystemName()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::STATIC_EnumerateMotionSources()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfSource(int playerIndex, const struct FName& SourceName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params params;
	params.playerIndex = playerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfDevice(int playerIndex, InputCore_EControllerHand Hand)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SourceName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfSource(int playerIndex, const struct FName& SourceName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params params;
	params.playerIndex = playerIndex;
	params.SourceName = SourceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// InputCore_EControllerHand      Hand                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfDevice(int playerIndex, InputCore_EControllerHand Hand)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params params;
	params.playerIndex = playerIndex;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfControllersForPlayer(int playerIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params params;
	params.playerIndex = playerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfAllControllers()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params params;
	params.MotionControllerComponent = MotionControllerComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FXRDeviceId             XRDeviceId                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UprimitiveComponent* UXRAssetFunctionLibrary::STATIC_AddNamedDeviceVisualizationComponentBlocking(class Uactor* target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params params;
	params.target = target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UprimitiveComponent* UXRAssetFunctionLibrary::STATIC_AddDeviceVisualizationComponentBlocking(class Uactor* target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params params;
	params.target = target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SystemName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DeviceName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FXRDeviceId             XRDeviceId                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::STATIC_AddNamedDeviceVisualizationComponentAsync(class Uactor* target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UprimitiveComponent** NewComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params params;
	params.target = target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;
	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId             XRDeviceId                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     NewComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::STATIC_AddDeviceVisualizationComponentAsync(class Uactor* target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UprimitiveComponent** NewComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params params;
	params.target = target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;


	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
void UXRLoadingScreenFunctionLibrary::STATIC_ShowLoadingScreen()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen");

	UXRLoadingScreenFunctionLibrary_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class Utexture*                texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowLoadingMovie              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShowOnSet                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UXRLoadingScreenFunctionLibrary::STATIC_SetLoadingScreen(class Utexture* texture, const struct FVector2D& scale, const struct Fvector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen");

	UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params params;
	params.texture = texture;
	params.scale = scale;
	params.Offset = Offset;
	params.bShowLoadingMovie = bShowLoadingMovie;
	params.bShowOnSet = bShowOnSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
void UXRLoadingScreenFunctionLibrary::STATIC_HideLoadingScreen()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen");

	UXRLoadingScreenFunctionLibrary_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
// (Final, Native, Static, Public, BlueprintCallable)
void UXRLoadingScreenFunctionLibrary::STATIC_ClearLoadingScreenSplashes()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes");

	UXRLoadingScreenFunctionLibrary_ClearLoadingScreenSplashes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class Utexture*                texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Translation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UXRLoadingScreenFunctionLibrary::STATIC_AddLoadingScreenSplash(class Utexture* texture, const struct Fvector& Translation, const struct FRotator& rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash");

	UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params params;
	params.texture = texture;
	params.Translation = Translation;
	params.rotation = rotation;
	params.Size = Size;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
