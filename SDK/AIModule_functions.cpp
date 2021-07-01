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

// Function AIModule.aiController.UseBlackboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    BlackboardComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UaiController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.UseBlackboard");

	UaiController_UseBlackboard_Params params;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;


	return params.ReturnValue;
}


// Function AIModule.aiController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.UnclaimTaskResource");

	UaiController_UnclaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPathFollowingComponent* NewPFComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.SetPathFollowingComponent");

	UaiController_SetPathFollowingComponent_Params params;
	params.NewPFComponent = NewPFComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::SetMoveBlockDetection(bool bEnable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.SetMoveBlockDetection");

	UaiController_SetMoveBlockDetection_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*           BTAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UaiController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.RunBehaviorTree");

	UaiController_RunBehaviorTree_Params params;
	params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardData*         BlackboardAsset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.OnUsingBlackBoard");

	UaiController_OnUsingBlackBoard_Params params;
	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet    NewlyClaimed                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FGameplayResourceSet    FreshlyReleased                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UaiController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.OnGameplayTaskResourcesClaimed");

	UaiController_OnGameplayTaskResourcesClaimed_Params params;
	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.MoveToLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 dest                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          acceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> UaiController::MoveToLocation(const struct Fvector& dest, float acceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* filterClass, bool bAllowPartialPath)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.MoveToLocation");

	UaiController_MoveToLocation_Params params;
	params.dest = dest;
	params.acceptanceRadius = acceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.filterClass = filterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  goal                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          acceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingRequestResult> UaiController::MoveToActor(class Uactor* goal, float acceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* filterClass, bool bAllowPartialPath)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.MoveToActor");

	UaiController_MoveToActor_Params params;
	params.goal = goal;
	params.acceptanceRadius = acceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.filterClass = filterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  NewFocus                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::K2_SetFocus(class Uactor* NewFocus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.K2_SetFocus");

	UaiController_K2_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 FP                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::K2_SetFocalPoint(const struct Fvector& FP)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.K2_SetFocalPoint");

	UaiController_K2_SetFocalPoint_Params params;
	params.FP = FP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
void UaiController::K2_ClearFocus()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.K2_ClearFocus");

	UaiController_K2_ClearFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.aiController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UaiController::HasPartialPath()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.HasPartialPath");

	UaiController_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPathFollowingComponent* UaiController::GetPathFollowingComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetPathFollowingComponent");

	UaiController_GetPathFollowingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingStatus> UaiController::GetMoveStatus()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetMoveStatus");

	UaiController_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UaiController::GetImmediateMoveDestination()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetImmediateMoveDestination");

	UaiController_GetImmediateMoveDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Uactor* UaiController::GetFocusActor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetFocusActor");

	UaiController_GetFocusActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UaiController::GetFocalPointOnActor(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetFocalPointOnActor");

	UaiController_GetFocalPointOnActor_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UaiController::GetFocalPoint()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetFocalPoint");

	UaiController_GetFocalPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAiPerceptionComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAiPerceptionComponent* UaiController::GetAIPerceptionComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.GetAIPerceptionComponent");

	UaiController_GetAIPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.aiController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UaiController::ClaimTaskResource(class UClass* ResourceClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.aiController.ClaimTaskResource");

	UaiController_ClaimTaskResource_Params params;
	params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AiPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnable                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::SetSenseEnabled(class UClass* SenseClass, bool bEnable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.SetSenseEnabled");

	UAiPerceptionComponent_SetSenseEnabled_Params params;
	params.SenseClass = SenseClass;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AiPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
void UAiPerceptionComponent::RequestStimuliListenerUpdate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.RequestStimuliListenerUpdate");

	UAiPerceptionComponent_RequestStimuliListenerUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AiPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::OnOwnerEndPlay(class Uactor* actor, TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.OnOwnerEndPlay");

	UAiPerceptionComponent_OnOwnerEndPlay_Params params;
	params.actor = actor;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AiPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class Uactor*>          OutActors                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::GetPerceivedHostileActors(TArray<class Uactor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.GetPerceivedHostileActors");

	UAiPerceptionComponent_GetPerceivedHostileActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AiPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          OutActors                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class Uactor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.GetPerceivedActors");

	UAiPerceptionComponent_GetPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AiPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          OutActors                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class Uactor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.GetKnownPerceivedActors");

	UAiPerceptionComponent_GetKnownPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AiPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  SenseToUse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          OutActors                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAiPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class Uactor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.GetCurrentlyPerceivedActors");

	UAiPerceptionComponent_GetCurrentlyPerceivedActors_Params params;
	params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function AIModule.AiPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorPerceptionBlueprintInfo Info                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAiPerceptionComponent::GetActorsPerception(class Uactor* actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.GetActorsPerception");

	UAiPerceptionComponent_GetActorsPerception_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;


	return params.ReturnValue;
}


// Function AIModule.AiPerceptionComponent.ForgetAll
// (Native, Public, BlueprintCallable)
void UAiPerceptionComponent::ForgetAll()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AiPerceptionComponent.ForgetAll");

	UAiPerceptionComponent_ForgetAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBrainComponent::StopLogic(const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	UBrainComponent_StopLogic_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.StartLogic
// (Native, Public, BlueprintCallable)
void UBrainComponent::StartLogic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StartLogic");

	UBrainComponent_StartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
void UBrainComponent::RestartLogic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	UBrainComponent_RestartLogic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsRunning()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	UBrainComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBrainComponent::IsPaused()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	UBrainComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FgameplayTag            InjectTag                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorAsset                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::SetDynamicSubtree(const struct FgameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	UBehaviorTreeComponent_SetDynamicSubtree_Params params;
	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FgameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FgameplayTag& CooldownTag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	UBehaviorTreeComponent_GetTagCooldownEndTime_Params params;
	params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FgameplayTag            CooldownTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CooldownDuration               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAddToExistingDuration         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FgameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	UBehaviorTreeComponent_AddCooldownTagDuration_Params params;
	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 VectorValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct Fvector& VectorValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	UBlackboardComponent_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 StringValue                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	UBlackboardComponent_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                VectorValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	UBlackboardComponent_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	UBlackboardComponent_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	UBlackboardComponent_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	UBlackboardComponent_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	UBlackboardComponent_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	UBlackboardComponent_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	UBlackboardComponent_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	UBlackboardComponent_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	UBlackboardComponent_IsVectorValueSet_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	UBlackboardComponent_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	UBlackboardComponent_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	UBlackboardComponent_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	UBlackboardComponent_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	UBlackboardComponent_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	UBlackboardComponent_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	UBlackboardComponent_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	UBlackboardComponent_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	UBlackboardComponent_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	UBlackboardComponent_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ResultRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	UBlackboardComponent_GetRotationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ResultLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct Fvector* ResultLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	UBlackboardComponent_GetLocationFromEntry_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;


	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlackboardComponent::ClearValue(const struct FName& KeyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	UBlackboardComponent_ClearValue_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathFollowingComponent::OnNavDataRegistered(class UNavigationData* NavData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	UPathFollowingComponent_OnNavDataRegistered_Params params;
	params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class Uactor*                  selfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UPathFollowingComponent::OnActorBump(class Uactor* selfActor, class Uactor* otherActor, const struct Fvector& normalImpulse, const struct FhitResult& hit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	UPathFollowingComponent_OnActorBump_Params params;
	params.selfActor = selfActor;
	params.otherActor = otherActor;
	params.normalImpulse = normalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UPathFollowingComponent::GetPathDestination()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	UPathFollowingComponent_GetPathDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingAction> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPathFollowingAction> UPathFollowingComponent::GetPathActionType()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	UPathFollowingComponent_GetPathActionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	UNavLinkProxy_SetSmartLinkEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  Agent                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLinkProxy::ResumePathFollowing(class Uactor* Agent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	UNavLinkProxy_ResumePathFollowing_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class Uactor*                  Agent                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLinkProxy::ReceiveSmartLinkReached(class Uactor* Agent, const struct Fvector& Destination)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	UNavLinkProxy_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLinkProxy::IsSmartLinkEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	UNavLinkProxy_IsSmartLinkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLinkProxy::HasMovingAgents()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	UNavLinkProxy_HasMovingAgents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	UPawnSensingComponent_SetSensingUpdatesEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSensingInterval             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	UPawnSensingComponent_SetSensingInterval_Params params;
	params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPeripheralVisionAngle       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	UPawnSensingComponent_SetPeripheralVisionAngle_Params params;
	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class Upawn* pawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params;
	params.pawn = pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class Upawn*                   instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class Upawn* instigator, const struct Fvector& location, float volume)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params;
	params.instigator = instigator;
	params.location = location;
	params.volume = volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	UPawnSensingComponent_GetPeripheralVisionCosine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	UPawnSensingComponent_GetPeripheralVisionAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params;
	params.MessageName = MessageName;
	params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	UBTTask_BlueprintBase_SetFinishOnMessage_Params params;
	params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveTickAI(class UaiController* OwnerController, class Upawn* ControlledPawn, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	UBTTask_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveTick(class Uactor* OwnerActor, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	UBTTask_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveExecuteAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	UBTTask_BlueprintBase_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveExecute(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	UBTTask_BlueprintBase_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveAbortAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	UBTTask_BlueprintBase_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::ReceiveAbort(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	UBTTask_BlueprintBase_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	UBTTask_BlueprintBase_IsTaskExecuting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	UBTTask_BlueprintBase_IsTaskAborting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	UBTTask_BlueprintBase_FinishExecute_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
void UBTTask_BlueprintBase::FinishAbort()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	UBTTask_BlueprintBase_FinishAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveTickAI(class UaiController* OwnerController, class Upawn* ControlledPawn, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	UBTService_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveTick(class Uactor* OwnerActor, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	UBTService_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveSearchStartAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	UBTService_BlueprintBase_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveSearchStart(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	UBTService_BlueprintBase_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveDeactivationAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	UBTService_BlueprintBase_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveDeactivation(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	UBTService_BlueprintBase_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveActivationAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	UBTService_BlueprintBase_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTService_BlueprintBase::ReceiveActivation(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	UBTService_BlueprintBase_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTService_BlueprintBase::IsServiceActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	UBTService_BlueprintBase_IsServiceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UanimInstance*           animInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UanimInstance* animInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params;
	params.animInstance = animInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*           BehaviorTree                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bNoCollisionFail               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Upawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* worldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct Fvector& location, const struct FRotator& rotation, bool bNoCollisionFail, class Uactor* owner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params;
	params.worldContextObject = worldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.location = location;
	params.rotation = rotation;
	params.bNoCollisionFail = bNoCollisionFail;
	params.owner = owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Ucontroller*             controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToLocation(class Ucontroller* controller, const struct Fvector& goal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params params;
	params.controller = controller;
	params.goal = goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Ucontroller*             controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SimpleMoveToActor(class Ucontroller* controller, class Uactor* goal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	UAIBlueprintHelperLibrary_SimpleMoveToActor_Params params;
	params.controller = controller;
	params.goal = goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Upawn*                   target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   message                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 MessageSource                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class Upawn* target, const struct FName& message, class UObject* MessageSource, bool bSuccess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	UAIBlueprintHelperLibrary_SendAIMessage_Params params;
	params.target = target;
	params.message = message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UanimInstance*           animInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UanimInstance* animInstance, bool bLockMovement, bool LockAILogic)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params;
	params.animInstance = animInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& rotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	UAIBlueprintHelperLibrary_IsValidAIRotation_Params params;
	params.rotation = rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Fvector                 location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct Fvector& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	UAIBlueprintHelperLibrary_IsValidAILocation_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Fvector                 DirectionVector                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct Fvector& DirectionVector)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	UAIBlueprintHelperLibrary_IsValidAIDirection_Params params;
	params.DirectionVector = DirectionVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class Ucontroller*             controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UAIBlueprintHelperLibrary::STATIC_GetCurrentPath(class Ucontroller* controller)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	UAIBlueprintHelperLibrary_GetCurrentPath_Params params;
	params.controller = controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class Uactor* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	UAIBlueprintHelperLibrary_GetBlackboard_Params params;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class Uactor*                  ControlledActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UaiController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UaiController* UAIBlueprintHelperLibrary::STATIC_GetAIController(class Uactor* ControlledActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	UAIBlueprintHelperLibrary_GetAIController_Params params;
	params.ControlledActor = ControlledActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          acceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* worldContextObject, class Upawn* pawn, const struct Fvector& Destination, class Uactor* TargetActor, float acceptanceRadius, bool bStopOnOverlap)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params;
	params.worldContextObject = worldContextObject;
	params.pawn = pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.acceptanceRadius = acceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	UAIPerceptionStimuliSourceComponent_RegisterForSense_Params params;
	params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* worldContextObject, class UAISenseEvent* PerceptionEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	UAIPerceptionSystem_ReportPerceptionEvent_Params params;
	params.worldContextObject = worldContextObject;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*           PerceptionEvent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	UAIPerceptionSystem_ReportEvent_Params params;
	params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIPerceptionSystem::STATIC_RegisterPerceptionStimuliSource(class UObject* worldContextObject, class UClass* Sense, class Uactor* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params params;
	params.worldContextObject = worldContextObject;
	params.Sense = Sense;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class Uactor* actor, TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params;
	params.actor = actor;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus             stimulus                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UAIPerceptionSystem::STATIC_GetSenseClassForStimulus(class UObject* worldContextObject, const struct FAIStimulus& stimulus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	UAIPerceptionSystem_GetSenseClassForStimulus_Params params;
	params.worldContextObject = worldContextObject;
	params.stimulus = stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>   EventsToProcess                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	UAISense_Blueprint_OnUpdate_Params params;
	params.EventsToProcess = EventsToProcess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class Uactor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAiPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerUpdated(class Uactor* ActorListener, class UAiPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	UAISense_Blueprint_OnListenerUpdated_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class Uactor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAiPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerUnregistered(class Uactor* ActorListener, class UAiPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	UAISense_Blueprint_OnListenerUnregistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class Uactor*                  ActorListener                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAiPerceptionComponent*  PerceptionComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::OnListenerRegistered(class Uactor* ActorListener, class UAiPerceptionComponent* PerceptionComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	UAISense_Blueprint_OnListenerRegistered_Params params;
	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   NewPawn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::K2_OnNewPawn(class Upawn* NewPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	UAISense_Blueprint_K2_OnNewPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAiPerceptionComponent*> ListenerComponents             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAiPerceptionComponent*>* ListenerComponents)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	UAISense_Blueprint_GetAllListenerComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class Uactor*>          ListenerActors                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Blueprint::GetAllListenerActors(TArray<class Uactor*>* ListenerActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	UAISense_Blueprint_GetAllListenerActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;

}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 EventLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Damage::STATIC_ReportDamageEvent(class UObject* worldContextObject, class Uactor* DamagedActor, class Uactor* instigator, float DamageAmount, const struct Fvector& EventLocation, const struct Fvector& HitLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	UAISense_Damage_ReportDamageEvent_Params params;
	params.worldContextObject = worldContextObject;
	params.DamagedActor = DamagedActor;
	params.instigator = instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   tag                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Hearing::STATIC_ReportNoiseEvent(class UObject* worldContextObject, const struct Fvector& NoiseLocation, float Loudness, class Uactor* instigator, float MaxRange, const struct FName& tag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	UAISense_Hearing_ReportNoiseEvent_Params params;
	params.worldContextObject = worldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.instigator = instigator;
	params.MaxRange = MaxRange;
	params.tag = tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Upawn*                   Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestPawnPredictionEvent(class Upawn* Requestor, class Uactor* PredictedActor, float PredictionTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	UAISense_Prediction_RequestPawnPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UaiController*           Requestor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  PredictedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PredictionTime                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAISense_Prediction::STATIC_RequestControllerPredictionEvent(class UaiController* Requestor, class Uactor* PredictedActor, float PredictionTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	UAISense_Prediction_RequestControllerPredictionEvent_Params params;
	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
void UAISystem::AILoggingVerbose()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	UAISystem_AILoggingVerbose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
void UAISystem::AIIgnorePlayers()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	UAISystem_AIIgnorePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UaiController*           controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 GoalLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  goalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          acceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseContinuosGoalTracking      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIOptionFlag> ProjectGoalOnNavigation        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_MoveTo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_MoveTo* UAITask_MoveTo::STATIC_AIMoveTo(class UaiController* controller, const struct Fvector& GoalLocation, class Uactor* goalActor, float acceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<AIModule_EAIOptionFlag> ProjectGoalOnNavigation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	UAITask_MoveTo_AIMoveTo_Params params;
	params.controller = controller;
	params.GoalLocation = GoalLocation;
	params.goalActor = goalActor;
	params.acceptanceRadius = acceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;
	params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
	params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UaiController*           controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_RunEQS*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAITask_RunEQS* UAITask_RunEQS::STATIC_RunEQS(class UaiController* controller, class UEnvQuery* QueryTemplate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	UAITask_RunEQS_RunEQS_Params params;
	params.controller = controller;
	params.QueryTemplate = QueryTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BlackboardAssetProvider.GetBlackboardAsset");

	UBlackboardAssetProvider_GetBlackboardAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveTickAI(class UaiController* OwnerController, class Upawn* ControlledPawn, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	UBTDecorator_BlueprintBase_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveTick(class Uactor* OwnerActor, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	UBTDecorator_BlueprintBase_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class UaiController* OwnerController, class Upawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EBTNodeResult> NodeResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class Uactor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UaiController*           OwnerController                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class UaiController* OwnerController, class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class Uactor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::PerformConditionCheck(class Uactor* OwnerActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	UBTDecorator_BlueprintBase_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	UBTFunctionLibrary_StopUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class Uactor* OwningActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	UBTFunctionLibrary_StartUsingExternalEvent_Params params;
	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct Fvector                 Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, const struct Fvector& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	UBTFunctionLibrary_SetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, const struct FString& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	UBTFunctionLibrary_SetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, const struct FRotator& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	UBTFunctionLibrary_SetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, class UObject* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	UBTFunctionLibrary_SetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, const struct FName& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	UBTFunctionLibrary_SetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, int Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	UBTFunctionLibrary_SetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, unsigned char Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, class UClass* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	UBTFunctionLibrary_SetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key, bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	UBTFunctionLibrary_SetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlackboardComponent* UBTFunctionLibrary::STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	UBTFunctionLibrary_GetOwnersBlackboard_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBehaviorTreeComponent* UBTFunctionLibrary::STATIC_GetOwnerComponent(class UBTNode* NodeOwner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	UBTFunctionLibrary_GetOwnerComponent_Params params;
	params.NodeOwner = NodeOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	UBTFunctionLibrary_GetBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	UBTFunctionLibrary_GetBlackboardValueAsString_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UBTFunctionLibrary::STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	UBTFunctionLibrary_GetBlackboardValueAsRotator_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UBTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	UBTFunctionLibrary_GetBlackboardValueAsObject_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	UBTFunctionLibrary_GetBlackboardValueAsName_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	UBTFunctionLibrary_GetBlackboardValueAsInt_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UBTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	UBTFunctionLibrary_GetBlackboardValueAsClass_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	UBTFunctionLibrary_GetBlackboardValueAsBool_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class Uactor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Uactor* UBTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	UBTFunctionLibrary_GetBlackboardValueAsActor_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector  key                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBTFunctionLibrary::STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	UBTFunctionLibrary_ClearBlackboardValue_Params params;
	params.NodeOwner = NodeOwner;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	UCrowdFollowingComponent_SuspendCrowdSteering_Params params;
	params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ResultingLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class Uactor* QuerierActor, struct Fvector* ResultingLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ResultingActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class Uactor* QuerierActor, class Uactor** ResultingActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct Fvector>         ResultingLocationSet           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class Uactor* QuerierActor, TArray<struct Fvector>* ResultingLocationSet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 QuerierObject                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  QuerierActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          ResultingActorsSet             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class Uactor* QuerierActor, TArray<class Uactor*>* ResultingActorsSet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params;
	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<struct Fvector>         ContextLocations               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct Fvector> ContextLocations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params;
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct Fvector                 GeneratedVector                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct Fvector& GeneratedVector)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params;
	params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class Uactor*                  GeneratedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class Uactor* GeneratedActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params;
	params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(const struct FName& ParamName, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct Fvector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct Fvector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class Uactor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class Uactor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct Fvector>         ResultLocations                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct Fvector>* ResultLocations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultLocations != nullptr)
		*ResultLocations = params.ResultLocations;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<class Uactor*>          ResultActors                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class Uactor*>* ResultActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultActors != nullptr)
		*ResultActors = params.ResultActors;


	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*               QueryTemplate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  WrapperClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQueryInstanceBlueprintWrapper* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::STATIC_RunEQSQuery(class UObject* worldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	UEnvQueryManager_RunEQSQuery_Params params;
	params.worldContextObject = worldContextObject;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::STATIC_SetLocalNavigationGridDensity(class UObject* worldContextObject, float CellSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	UNavLocalGridManager_SetLocalNavigationGridDensity_Params params;
	params.worldContextObject = worldContextObject;
	params.CellSize = CellSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLocalGridManager::STATIC_RemoveLocalNavigationGrid(class UObject* worldContextObject, int GridId, bool bRebuildGrids)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	UNavLocalGridManager_RemoveLocalNavigationGrid_Params params;
	params.worldContextObject = worldContextObject;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 end                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct Fvector>         PathPoints                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavLocalGridManager::STATIC_FindLocalNavigationGridPath(class UObject* worldContextObject, const struct Fvector& start, const struct Fvector& end, TArray<struct Fvector>* PathPoints)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	UNavLocalGridManager_FindLocalNavigationGridPath_Params params;
	params.worldContextObject = worldContextObject;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct Fvector>         Locations                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoints(class UObject* worldContextObject, TArray<struct Fvector> Locations, int Radius2D, float height, bool bRebuildGrids)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	UNavLocalGridManager_AddLocalNavigationGridForPoints_Params params;
	params.worldContextObject = worldContextObject;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.height = height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForPoint(class UObject* worldContextObject, const struct Fvector& location, int Radius2D, float height, bool bRebuildGrids)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	UNavLocalGridManager_AddLocalNavigationGridForPoint_Params params;
	params.worldContextObject = worldContextObject;
	params.location = location;
	params.Radius2D = Radius2D;
	params.height = height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleRadius                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForCapsule(class UObject* worldContextObject, const struct Fvector& location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float height, bool bRebuildGrids)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params params;
	params.worldContextObject = worldContextObject;
	params.location = location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.height = height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            Radius2D                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildGrids                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNavLocalGridManager::STATIC_AddLocalNavigationGridForBox(class UObject* worldContextObject, const struct Fvector& location, const struct Fvector& Extent, const struct FRotator& rotation, int Radius2D, float height, bool bRebuildGrids)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	UNavLocalGridManager_AddLocalNavigationGridForBox_Params params;
	params.worldContextObject = worldContextObject;
	params.location = location;
	params.Extent = Extent;
	params.rotation = rotation;
	params.Radius2D = Radius2D;
	params.height = height;
	params.bRebuildGrids = bRebuildGrids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<AIModule_EAIRequestPriority> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EAIRequestPriority> UPawnAction::GetActionPriority()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	UPawnAction_GetActionPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction::Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	UPawnAction_Finish_Params params;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPawnAction* UPawnAction::STATIC_CreateActionInstance(class UObject* worldContextObject, class UClass* ActionClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	UPawnAction_CreateActionInstance_Params params;
	params.worldContextObject = worldContextObject;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionTick(class Upawn* ControlledPawn, float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	UPawnAction_BlueprintBase_ActionTick_Params params;
	params.ControlledPawn = ControlledPawn;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionStart(class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	UPawnAction_BlueprintBase_ActionStart_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionResume(class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	UPawnAction_BlueprintBase_ActionResume_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionPause(class Upawn* ControlledPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	UPawnAction_BlueprintBase_ActionPause_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class Upawn*                   ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionResult> WithResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPawnAction_BlueprintBase::ActionFinished(class Upawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	UPawnAction_BlueprintBase_ActionFinished_Params params;
	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             NewAction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> priority, class UObject* instigator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	UPawnActionsComponent_K2_PushAction_Params params;
	params.NewAction = NewAction;
	params.priority = priority;
	params.instigator = instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*             Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EAIRequestPriority> priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPawnActionsComponent::STATIC_K2_PerformAction(class Upawn* pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> priority)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	UPawnActionsComponent_K2_PerformAction_Params params;
	params.pawn = pawn;
	params.Action = Action;
	params.priority = priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	UPawnActionsComponent_K2_ForceAbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<AIModule_EPawnActionAbortState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<AIModule_EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	UPawnActionsComponent_K2_AbortAction_Params params;
	params.ActionToAbort = ActionToAbort;

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
