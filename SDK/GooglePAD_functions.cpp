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

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_ShowCellularDataConfirmation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestRemoval(const struct FString& name)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");

	UGooglePADFunctionLibrary_RequestRemoval_Params params;
	params.name = name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestInfo(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");

	UGooglePADFunctionLibrary_RequestInfo_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");

	UGooglePADFunctionLibrary_RequestDownload_Params params;
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            state                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::STATIC_ReleaseDownloadState(int state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::STATIC_ReleaseAssetPackLocation(int location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            state                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::STATIC_GetTotalBytesToDownload(int state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADStorageMethod ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADStorageMethod UGooglePADFunctionLibrary::STATIC_GetStorageMethod(int location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");

	UGooglePADFunctionLibrary_GetStorageMethod_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// GooglePAD_EGooglePADCellularDataConfirmStatus Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            state                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADDownloadStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADDownloadStatus UGooglePADFunctionLibrary::STATIC_GetDownloadStatus(int state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            state                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetDownloadState(const struct FString& name, int* state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");

	UGooglePADFunctionLibrary_GetDownloadState_Params params;
	params.name = name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (state != nullptr)
		*state = params.state;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            state                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::STATIC_GetBytesDownloaded(int state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGooglePADFunctionLibrary::STATIC_GetAssetsPath(int location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");

	UGooglePADFunctionLibrary_GetAssetsPath_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetAssetPackLocation(const struct FString& name, int* location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params;
	params.name = name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (location != nullptr)
		*location = params.location;


	return params.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         AssetPacks                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// GooglePAD_EGooglePADErrorCode  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_CancelDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");

	UGooglePADFunctionLibrary_CancelDownload_Params params;
	params.AssetPacks = AssetPacks;

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
