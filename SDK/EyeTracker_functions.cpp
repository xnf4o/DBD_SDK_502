﻿// Name: dbd, Version: 502

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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_IsStereoGazeDataAvailable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_IsEyeTrackerConnected()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTrackerStereoGazeData OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData     OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	UEyeTrackerFunctionLibrary_GetGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif