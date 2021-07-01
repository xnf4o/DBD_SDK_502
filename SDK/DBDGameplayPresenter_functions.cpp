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

// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
// (Final, Native, Private)
void USurvivorStatusComponent::OnValidatedInteractionStarted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted");

	USurvivorStatusComponent_OnValidatedInteractionStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
// (Final, Native, Private)
void USurvivorStatusComponent::OnValidatedInteractionEnded()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded");

	USurvivorStatusComponent_OnValidatedInteractionEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperDamageState oldDamageState                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperDamageState newDamageState                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnSuvivorDamaged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState newDamageState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged");

	USurvivorStatusComponent_OnSuvivorDamaged_Params params;
	params.oldDamageState = oldDamageState;
	params.newDamageState = newDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
// (Event, Public, BlueprintEvent)
void USurvivorStatusComponent::OnSurivorStatusChange()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange");

	USurvivorStatusComponent_OnSurivorStatusChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
// (Final, Native, Private)
// Parameters:
// bool                           isRunningAndMoving             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnRunningAndMovementChanged(bool isRunningAndMoving)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged");

	USurvivorStatusComponent_OnRunningAndMovementChanged_Params params;
	params.isRunningAndMoving = isRunningAndMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_ECamperImmobilizeState oldImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DeadByDaylight_ECamperImmobilizeState newImmobilizeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged");

	USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Params params;
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
// (Final, Native, Private)
void USurvivorStatusComponent::OnHookedStateChanged()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged");

	USurvivorStatusComponent_OnHookedStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
// (Final, Native, Private)
void USurvivorStatusComponent::OnGuidedStateChanged()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged");

	USurvivorStatusComponent_OnGuidedStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
// (Final, Native, Private)
// Parameters:
// bool                           IsCrouched                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnCrouchChanged(bool IsCrouched)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged");

	USurvivorStatusComponent_OnCrouchChanged_Params params;
	params.IsCrouched = IsCrouched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsSleeping()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping");

	USurvivorStatusComponent_IsSleeping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsRunning()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning");

	USurvivorStatusComponent_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsInjured()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured");

	USurvivorStatusComponent_IsInjured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHooked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked");

	USurvivorStatusComponent_IsHooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHiding()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding");

	USurvivorStatusComponent_IsHiding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHealing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing");

	USurvivorStatusComponent_IsHealing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHarpooned()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned");

	USurvivorStatusComponent_IsHarpooned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsGettingStrangled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled");

	USurvivorStatusComponent_IsGettingStrangled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsGettingSacrificed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed");

	USurvivorStatusComponent_IsGettingSacrificed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsDying()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying");

	USurvivorStatusComponent_IsDying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.isDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::isDead()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.isDead");

	USurvivorStatusComponent_isDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsCrouching()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching");

	USurvivorStatusComponent_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsCaptured()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured");

	USurvivorStatusComponent_IsCaptured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          currentMovementSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentMovementSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          maximumMovementSpeed           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed");

	USurvivorStatusComponent_GetMovementSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (currentMovementSpeed != nullptr)
		*currentMovementSpeed = params.currentMovementSpeed;
	if (percentMovementSpeed != nullptr)
		*percentMovementSpeed = params.percentMovementSpeed;
	if (maximumMovementSpeed != nullptr)
		*maximumMovementSpeed = params.maximumMovementSpeed;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
