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

// Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
// (Final, Native, Private)
void UChainsawRevInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay");

	UChainsawRevInteraction_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
// (Final, Native, Private)
void UhillbillyChainsawOverheatComponent::OnRep_IsChainsawOverheating()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating");

	UhillbillyChainsawOverheatComponent_OnRep_IsChainsawOverheating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UhillbillyChainsawOverheatComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.OnLevelReadyToPlay");

	UhillbillyChainsawOverheatComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnHeatChargeUpdate
// (Final, Native, Private)
// Parameters:
// float                          currentCharge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          previosCharge                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UhillbillyChainsawOverheatComponent::OnHeatChargeUpdate(float currentCharge, float previosCharge)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.OnHeatChargeUpdate");

	UhillbillyChainsawOverheatComponent_OnHeatChargeUpdate_Params params;
	params.currentCharge = currentCharge;
	params.previosCharge = previosCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.isChainsawOverheating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UhillbillyChainsawOverheatComponent::isChainsawOverheating()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.isChainsawOverheating");

	UhillbillyChainsawOverheatComponent_isChainsawOverheating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
// (Final, Native, Private)
void UhillbillyChainsawOverheatComponent::Authority_OnHeatChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull");

	UhillbillyChainsawOverheatComponent_Authority_OnHeatChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
// (Final, Native, Private)
void UhillbillyChainsawOverheatComponent::Authority_OnHeatChargeEmpty()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty");

	UhillbillyChainsawOverheatComponent_Authority_OnHeatChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UhillbillyChainsawOverheatComponent* hillbillyChainsawOverheatComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHillbillyOverheatPresentationItemProgressComponent::SetHillbillyChainsawOverheatComponent(class UhillbillyChainsawOverheatComponent* hillbillyChainsawOverheatComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent");

	UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Params params;
	params.hillbillyChainsawOverheatComponent = hillbillyChainsawOverheatComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue
// (Final, Native, Private)
void ULightbornBlindFailedIndicatorCondition::OnRep_ReplicatedIsTrue()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue");

	ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
