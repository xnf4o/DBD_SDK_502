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

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients");

	UMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne");

	UMagicLeapSharedWorldGameMode_SelectChosenOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature");

	UMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
// (BlueprintAuthorityOnly, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapSharedWorldSharedData NewSharedWorldData             (Parm, OutParm, NativeAccessSpecifierPublic)
void UMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData");

	UMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = params.NewSharedWorldData;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
// (Final, Native, Private)
void UMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData");

	UMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
// (Final, Native, Private)
void UMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms");

	UMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature");

	UMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform");

	UMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData");

	UMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params params;
	params.LocalWorldReplicationData = LocalWorldReplicationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms");

	UMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params params;
	params.InAlignmentTransforms = InAlignmentTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne");

	UMagicLeapSharedWorldPlayerController_IsChosenOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// bool                           bChosenOne                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne");

	UMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params params;
	params.bChosenOne = bChosenOne;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
// (Net, NetReliable, Native, Event, Public, NetClient)
void UMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData");

	UMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer");

	UMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params params;

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
