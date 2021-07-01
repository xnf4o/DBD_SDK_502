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

// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
// (Final, Native, Private)
// Parameters:
// bool                           isInStalkMode                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnStalkModeChanged(bool isInStalkMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged");

	UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params params;
	params.isInStalkMode = isInStalkMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
// (Final, Native, Private)
// Parameters:
// DBDSharedTypes_ELeanState      leanState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnLeanStateChanged(DBDSharedTypes_ELeanState leanState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged");

	UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params params;
	params.leanState = leanState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
// (Final, Native, Private)
// Parameters:
// bool                           isStealth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnIsStealthChanged(bool isStealth)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged");

	UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params params;
	params.isStealth = isStealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
// (Final, Native, Private)
// Parameters:
// class UchargeableComponent*    chargeableComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          percentCompletionChange        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          totalPercentComplete           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Authority_OnStalkChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged");

	UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params params;
	params.chargeableComponent = chargeableComponent;
	params.percentCompletionChange = percentCompletionChange;
	params.totalPercentComplete = totalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            gameplayTag                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Authority_OnPreAttackSuccess(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess");

	UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params params;
	params.gameplayTag = gameplayTag;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
