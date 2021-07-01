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

// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              slasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLungeAttackStartCosmetic(class UdbdPlayer* slasherPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic");

	UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Params params;
	params.slasherPlayer = slasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              slasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLungeAttackEndCosmetic(class UdbdPlayer* slasherPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic");

	UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Params params;
	params.slasherPlayer = slasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              slasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChangedCosmetic(class UdbdPlayer* slasherPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic");

	UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Params params;
	params.slasherPlayer = slasherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              slasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPounceAttackOpenSubstateCosmetic::OnLocallyObservedChanged(class UdbdPlayer* slasherPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged");

	UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Params params;
	params.slasherPlayer = slasherPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              slasherPlayer                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPounceAttackOpenSubstateCosmetic::IsLungeAttackAugmented(class UdbdPlayer* slasherPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented");

	UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Params params;
	params.slasherPlayer = slasherPlayer;

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
