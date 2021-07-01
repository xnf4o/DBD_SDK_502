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

// Function Competence.BaseModifierContainer.Local_OnInstantiateModifierConditions
struct UBaseModifierContainer_Local_OnInstantiateModifierConditions_Params
{
};

// Function Competence.BaseModifierContainer.isApplicable
struct UBaseModifierContainer_isApplicable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
struct UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params
{
	class UClass*                                      conditionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventDrivenModifierCondition*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
struct UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params
{
};

// Function Competence.BaseModifierCondition.SetSubjectProviderClass
struct UBaseModifierCondition_SetSubjectProviderClass_Params
{
	class UClass*                                      subjectProviderClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
struct UBaseModifierCondition_OnRep_SubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.OnRep_OwningModifier
struct UBaseModifierCondition_OnRep_OwningModifier_Params
{
};

// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
struct UBaseModifierCondition_InitializeSubjectProviderClass_Params
{
};

// Function Competence.BaseModifierCondition.GetOwningActor
struct UBaseModifierCondition_GetOwningActor_Params
{
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.RangeBasedCondition.OnRep_Range
struct URangeBasedCondition_OnRep_Range_Params
{
};

// Function Competence.CompositeModifierCondition.OnRep_Conditions
struct UCompositeModifierCondition_OnRep_Conditions_Params
{
};

// Function Competence.ConditionFactory.Or
struct UConditionFactory_Or_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UOrModifierCondition*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.Not
struct UConditionFactory_Not_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UNotModifierCondition*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.IsTimerDone
struct UConditionFactory_IsTimerDone_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UTimerObject*                                timer;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIsTimerDoneCondition*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
struct UConditionFactory_CreateRangeBasedConditionWithSubject_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      conditionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      subjectProviderClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URangeBasedCondition*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.CreateRangeBasedCondition
struct UConditionFactory_CreateRangeBasedCondition_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      conditionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URangeBasedCondition*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
struct UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      conditionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      subjectProviderClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventDrivenModifierCondition*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
struct UConditionFactory_CreateAndReceiveConditionForBP_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      conditionType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventDrivenModifierCondition*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.ConditionFactory.And
struct UConditionFactory_And_Params
{
	TScriptInterface<class UconditionReceiver>         conditionReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAndModifierCondition*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.HasObjectState.SetState
struct UHasObjectState_SetState_Params
{
	struct FgameplayTag                                state;                                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
struct UHasObjectStateWithMaxDuration_SetMaxDuration_Params
{
	float                                              duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.IsTimerDoneCondition.SetTimer
struct UIsTimerDoneCondition_SetTimer_Params
{
	class UTimerObject*                                timer;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Competence.IsTimerDoneCondition.OnRep_Timer
struct UIsTimerDoneCondition_OnRep_Timer_Params
{
};

// Function Competence.NotModifierCondition.OnRep_Condition
struct UNotModifierCondition_OnRep_Condition_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
