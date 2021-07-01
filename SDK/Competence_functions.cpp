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

// Function Competence.BaseModifierContainer.Local_OnInstantiateModifierConditions
// (Event, Protected, BlueprintEvent)
void UBaseModifierContainer::Local_OnInstantiateModifierConditions()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.Local_OnInstantiateModifierConditions");

	UBaseModifierContainer_Local_OnInstantiateModifierConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierContainer.isApplicable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseModifierContainer::isApplicable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.isApplicable");

	UBaseModifierContainer_isApplicable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  conditionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventDrivenModifierCondition* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(class UClass* conditionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition");

	UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params params;
	params.conditionType = conditionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions");

	UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierCondition.SetSubjectProviderClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseModifierCondition::SetSubjectProviderClass(class UClass* subjectProviderClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.SetSubjectProviderClass");

	UBaseModifierCondition_SetSubjectProviderClass_Params params;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
// (Final, Native, Private)
void UBaseModifierCondition::OnRep_SubjectProviderClass()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass");

	UBaseModifierCondition_OnRep_SubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierCondition.OnRep_OwningModifier
// (Final, Native, Private)
void UBaseModifierCondition::OnRep_OwningModifier()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_OwningModifier");

	UBaseModifierCondition_OnRep_OwningModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
// (Native, Event, Protected, BlueprintEvent)
void UBaseModifierCondition::InitializeSubjectProviderClass()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass");

	UBaseModifierCondition_InitializeSubjectProviderClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.BaseModifierCondition.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Uactor* UBaseModifierCondition::GetOwningActor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.GetOwningActor");

	UBaseModifierCondition_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.RangeBasedCondition.OnRep_Range
// (Final, Native, Private)
void URangeBasedCondition::OnRep_Range()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.RangeBasedCondition.OnRep_Range");

	URangeBasedCondition_OnRep_Range_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.CompositeModifierCondition.OnRep_Conditions
// (Final, Native, Private)
void UCompositeModifierCondition::OnRep_Conditions()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.CompositeModifierCondition.OnRep_Conditions");

	UCompositeModifierCondition_OnRep_Conditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.ConditionFactory.Or
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UOrModifierCondition*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOrModifierCondition* UConditionFactory::STATIC_Or(const TScriptInterface<class UconditionReceiver>& conditionReceiver)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Or");

	UConditionFactory_Or_Params params;
	params.conditionReceiver = conditionReceiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.Not
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UNotModifierCondition*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNotModifierCondition* UConditionFactory::STATIC_Not(const TScriptInterface<class UconditionReceiver>& conditionReceiver)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Not");

	UConditionFactory_Not_Params params;
	params.conditionReceiver = conditionReceiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.IsTimerDone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UTimerObject*            timer                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UIsTimerDoneCondition*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UIsTimerDoneCondition* UConditionFactory::STATIC_IsTimerDone(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UTimerObject* timer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.IsTimerDone");

	UConditionFactory_IsTimerDone_Params params;
	params.conditionReceiver = conditionReceiver;
	params.timer = timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UClass*                  conditionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          range                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URangeBasedCondition*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedConditionWithSubject(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, float range, class UClass* subjectProviderClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject");

	UConditionFactory_CreateRangeBasedConditionWithSubject_Params params;
	params.conditionReceiver = conditionReceiver;
	params.conditionType = conditionType;
	params.range = range;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.CreateRangeBasedCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UClass*                  conditionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          range                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URangeBasedCondition*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedCondition(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, float range)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedCondition");

	UConditionFactory_CreateRangeBasedCondition_Params params;
	params.conditionReceiver = conditionReceiver;
	params.conditionType = conditionType;
	params.range = range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UClass*                  conditionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  subjectProviderClass           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventDrivenModifierCondition* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionWithSubjectForBP(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, class UClass* subjectProviderClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP");

	UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params params;
	params.conditionReceiver = conditionReceiver;
	params.conditionType = conditionType;
	params.subjectProviderClass = subjectProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UClass*                  conditionType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventDrivenModifierCondition* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionForBP(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionForBP");

	UConditionFactory_CreateAndReceiveConditionForBP_Params params;
	params.conditionReceiver = conditionReceiver;
	params.conditionType = conditionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.ConditionFactory.And
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UconditionReceiver> conditionReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UAndModifierCondition*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAndModifierCondition* UConditionFactory::STATIC_And(const TScriptInterface<class UconditionReceiver>& conditionReceiver)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.ConditionFactory.And");

	UConditionFactory_And_Params params;
	params.conditionReceiver = conditionReceiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Competence.HasObjectState.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FgameplayTag            state                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasObjectState::SetState(const struct FgameplayTag& state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.HasObjectState.SetState");

	UHasObjectState_SetState_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasObjectStateWithMaxDuration::SetMaxDuration(float duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration");

	UHasObjectStateWithMaxDuration_SetMaxDuration_Params params;
	params.duration = duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.IsTimerDoneCondition.SetTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimerObject*            timer                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsTimerDoneCondition::SetTimer(class UTimerObject* timer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.SetTimer");

	UIsTimerDoneCondition_SetTimer_Params params;
	params.timer = timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.IsTimerDoneCondition.OnRep_Timer
// (Final, Native, Private)
void UIsTimerDoneCondition::OnRep_Timer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.OnRep_Timer");

	UIsTimerDoneCondition_OnRep_Timer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Competence.NotModifierCondition.OnRep_Condition
// (Final, Native, Private)
void UNotModifierCondition::OnRep_Condition()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Competence.NotModifierCondition.OnRep_Condition");

	UNotModifierCondition_OnRep_Condition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
