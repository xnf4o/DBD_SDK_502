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

// Function AIModule.aiController.UseBlackboard
struct UaiController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                        BlackboardComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.UnclaimTaskResource
struct UaiController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.SetPathFollowingComponent
struct UaiController_SetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     NewPFComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.SetMoveBlockDetection
struct UaiController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.RunBehaviorTree
struct UaiController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.OnUsingBlackBoard
struct UaiController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.OnGameplayTaskResourcesClaimed
struct UaiController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                              // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayResourceSet                        FreshlyReleased;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.MoveToLocation
struct UaiController_MoveToLocation_Params
{
	struct Fvector                                     dest;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              acceptanceRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopOnOverlap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePathfinding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProjectDestinationToNavigation;                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStrafe;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      filterClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowPartialPath;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPathFollowingRequestResult>  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.MoveToActor
struct UaiController_MoveToActor_Params
{
	class Uactor*                                      goal;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              acceptanceRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopOnOverlap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePathfinding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanStrafe;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      filterClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowPartialPath;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPathFollowingRequestResult>  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.K2_SetFocus
struct UaiController_K2_SetFocus_Params
{
	class Uactor*                                      NewFocus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.K2_SetFocalPoint
struct UaiController_K2_SetFocalPoint_Params
{
	struct Fvector                                     FP;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.K2_ClearFocus
struct UaiController_K2_ClearFocus_Params
{
};

// Function AIModule.aiController.HasPartialPath
struct UaiController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetPathFollowingComponent
struct UaiController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetMoveStatus
struct UaiController_GetMoveStatus_Params
{
	TEnumAsByte<AIModule_EPathFollowingStatus>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetImmediateMoveDestination
struct UaiController_GetImmediateMoveDestination_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetFocusActor
struct UaiController_GetFocusActor_Params
{
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetFocalPointOnActor
struct UaiController_GetFocalPointOnActor_Params
{
	class Uactor*                                      actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetFocalPoint
struct UaiController_GetFocalPoint_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.GetAIPerceptionComponent
struct UaiController_GetAIPerceptionComponent_Params
{
	class UAiPerceptionComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.aiController.ClaimTaskResource
struct UaiController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.SetSenseEnabled
struct UAiPerceptionComponent_SetSenseEnabled_Params
{
	class UClass*                                      SenseClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.RequestStimuliListenerUpdate
struct UAiPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AiPerceptionComponent.OnOwnerEndPlay
struct UAiPerceptionComponent_OnOwnerEndPlay_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.GetPerceivedHostileActors
struct UAiPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class Uactor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.GetPerceivedActors
struct UAiPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.GetKnownPerceivedActors
struct UAiPerceptionComponent_GetKnownPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.GetCurrentlyPerceivedActors
struct UAiPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.GetActorsPerception
struct UAiPerceptionComponent_GetActorsPerception_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorPerceptionBlueprintInfo               Info;                                                      // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AiPerceptionComponent.ForgetAll
struct UAiPerceptionComponent_ForgetAll_Params
{
};

// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BrainComponent.StartLogic
struct UBrainComponent_StartLogic_Params
{
};

// Function AIModule.BrainComponent.RestartLogic
struct UBrainComponent_RestartLogic_Params
{
};

// Function AIModule.BrainComponent.IsRunning
struct UBrainComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BrainComponent.IsPaused
struct UBrainComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FgameplayTag                                InjectTag;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               BehaviorAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FgameplayTag                                CooldownTag;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FgameplayTag                                CooldownTag;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     VectorValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StringValue;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    VectorValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnumValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ClassValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ResultRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ResultLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct UPathFollowingComponent_OnNavDataRegistered_Params
{
	class UNavigationData*                             NavData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
	class Uactor*                                      selfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<AIModule_EPathFollowingAction>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
struct UNavLinkProxy_SetSmartLinkEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLinkProxy.ResumePathFollowing
struct UNavLinkProxy_ResumePathFollowing_Params
{
	class Uactor*                                      Agent;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
struct UNavLinkProxy_ReceiveSmartLinkReached_Params
{
	class Uactor*                                      Agent;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     Destination;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
struct UNavLinkProxy_IsSmartLinkEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLinkProxy.HasMovingAgents
struct UNavLinkProxy_HasMovingAgents_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class Upawn*                                       instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequestID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UBTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
	class UanimInstance*                               animInstance;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnlockMovement;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UnlockAILogic;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PawnClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               BehaviorTree;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bNoCollisionFail;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
struct UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params
{
	class Ucontroller*                                 controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     goal;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
struct UAIBlueprintHelperLibrary_SimpleMoveToActor_Params
{
	class Ucontroller*                                 controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      goal;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
	class Upawn*                                       target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       message;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     MessageSource;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
	class UanimInstance*                               animInstance;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockMovement;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LockAILogic;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
	struct Fvector                                     DirectionVector;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
struct UAIBlueprintHelperLibrary_GetCurrentPath_Params
{
	class Ucontroller*                                 controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationPath*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
	class Uactor*                                      target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
	class Uactor*                                      ControlledActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UaiController*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     Destination;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              acceptanceRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopOnOverlap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIAsyncTaskBlueprintProxy*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISenseEvent*                               PerceptionEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
	class UAISenseEvent*                               PerceptionEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Sense;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                                 stimulus;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<class UAISenseEvent*>                       EventsToProcess;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
	class Uactor*                                      ActorListener;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAiPerceptionComponent*                      PerceptionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	class Uactor*                                      ActorListener;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAiPerceptionComponent*                      PerceptionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
	class Uactor*                                      ActorListener;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAiPerceptionComponent*                      PerceptionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	class Upawn*                                       NewPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAiPerceptionComponent*>              ListenerComponents;                                        // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class Uactor*>                              ListenerActors;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     EventLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     NoiseLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Loudness;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       tag;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	class Upawn*                                       Requestor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      PredictedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PredictionTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	class UaiController*                               Requestor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      PredictedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PredictionTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
	class UaiController*                               controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     GoalLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      goalActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              acceptanceRadius;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIOptionFlag>                StopOnOverlap;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIOptionFlag>                AcceptPartialPath;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePathfinding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockAILogic;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseContinuosGoalTracking;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIOptionFlag>                ProjectGoalOnNavigation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAITask_MoveTo*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.AITask_RunEQS.RunEQS
struct UAITask_RunEQS_RunEQS_Params
{
	class UaiController*                               controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                                   QueryTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAITask_RunEQS*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
struct UBlackboardAssetProvider_GetBlackboardAsset_Params
{
	class UBlackboardData*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBTNodeResult>                NodeResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EBTNodeResult>                NodeResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class UaiController*                               OwnerController;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class Uactor*                                      OwnerActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      OwningActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct Fvector                                     Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRotator                                    Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	unsigned char                                      Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClass*                                      Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTreeComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
	class UBTNode*                                     NodeOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      QuerierActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ResultingLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
	class UObject*                                     QuerierObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      QuerierActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ResultingActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
	class UObject*                                     QuerierObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      QuerierActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             ResultingLocationSet;                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
	class UObject*                                     QuerierObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      QuerierActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              ResultingActorsSet;                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct Fvector>                             ContextLocations;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct Fvector                                     GeneratedVector;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class Uactor*                                      GeneratedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
	struct FName                                       ParamName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct Fvector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class Uactor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params
{
	TArray<struct Fvector>                             ResultLocations;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params
{
	TArray<class Uactor*>                              ResultActors;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryStatus>              QueryStatus;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                                   QueryTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Querier;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WrapperClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct UNavLocalGridManager_SetLocalNavigationGridDensity_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct UNavLocalGridManager_RemoveLocalNavigationGrid_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GridId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildGrids;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct UNavLocalGridManager_FindLocalNavigationGridPath_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     start;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     end;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             PathPoints;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
struct UNavLocalGridManager_AddLocalNavigationGridForPoints_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             Locations;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Radius2D;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              height;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildGrids;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct UNavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Radius2D;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              height;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildGrids;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleHalfHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Radius2D;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              height;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildGrids;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct UNavLocalGridManager_AddLocalNavigationGridForBox_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     Extent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Radius2D;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              height;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildGrids;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<AIModule_EAIRequestPriority>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
	TEnumAsByte<AIModule_EPawnActionResult>            WithResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActionClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              deltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
	class Upawn*                                       ControlledPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionResult>            WithResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
	class UPawnAction*                                 NewAction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIRequestPriority>           priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 Action;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIRequestPriority>           priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionAbortState>        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionAbortState>        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
