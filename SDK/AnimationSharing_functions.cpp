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

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class Uactor*>          actors                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimSharingStateInstance::GetInstancedActors(TArray<class Uactor*>* actors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	UAnimSharingStateInstance_GetInstancedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (actors != nullptr)
		*actors = params.actors;

}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*               SharingSkeleton                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingManager::RegisterActorWithSkeletonBP(class Uactor* InActor, class USkeleton* SharingSkeleton)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	UAnimationSharingManager_RegisterActorWithSkeletonBP_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimationSharingManager* UAnimationSharingManager::STATIC_GetAnimationSharingManager(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	UAnimationSharingManager_GetAnimationSharingManager_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingSetup*  Setup                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::STATIC_CreateAnimationSharingManager(class UObject* worldContextObject, class UAnimationSharingSetup* Setup)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	UAnimationSharingManager_CreateAnimationSharingManager_Params params;
	params.worldContextObject = worldContextObject;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::STATIC_AnimationSharingEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	UAnimationSharingManager_AnimationSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  OnDemandState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingStateProcessor::ProcessActorState(int* OutState, class Uactor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	UAnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;

}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

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
