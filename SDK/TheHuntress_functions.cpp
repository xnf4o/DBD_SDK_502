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

// Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHatchetLauncher::IsLaunchedHatchetFullyCharged()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged");

	UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHatchetRack::SetMovableHatchetVisibility(bool Visible)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.HatchetRack.SetMovableHatchetVisibility");

	UHatchetRack_SetMovableHatchetVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTheHuntressPower*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTheHuntressPower* UHatchetThrow::GetOwningHatchetSpawner()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner");

	UHatchetThrow_GetOwningHatchetSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UReloadHatchet::IsInteractionPossible_Shared(class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared");

	UReloadHatchet_IsInteractionPossible_Shared_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTheHuntressPower::StartHatchetShineCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic");

	UTheHuntressPower_StartHatchetShineCosmetic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          percentStrength                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheHuntressPower::SetPercentThrowStrength(float percentStrength)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.SetPercentThrowStrength");

	UTheHuntressPower_SetPercentThrowStrength_Params params;
	params.percentStrength = percentStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.TheHuntressPower.SetHatchetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Visible                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheHuntressPower::SetHatchetVisible(bool Visible)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.SetHatchetVisible");

	UTheHuntressPower_SetHatchetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
// (Event, Public, BlueprintEvent)
void UTheHuntressPower::PrintDebugThrowInfo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo");

	UTheHuntressPower_PrintDebugThrowInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheHuntressPower::IsHatchetThrowFullyCharged()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged");

	UTheHuntressPower_IsHatchetThrowFullyCharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.HasHatchet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheHuntressPower::HasHatchet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.HasHatchet");

	UTheHuntressPower_HasHatchet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetOwningKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UslasherPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UslasherPlayer* UTheHuntressPower::GetOwningKiller()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetOwningKiller");

	UTheHuntressPower_GetOwningKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBaseProjectileLauncher* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBaseProjectileLauncher* UTheHuntressPower::GetHatchetProjectileLauncher()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher");

	UTheHuntressPower_GetHatchetProjectileLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetHatchetCooldown
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UHatchetCooldown*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHatchetCooldown* UTheHuntressPower::GetHatchetCooldown()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetHatchetCooldown");

	UTheHuntressPower_GetHatchetCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UTheHuntressPower::GetAkAudioHatchetSpawner()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner");

	UTheHuntressPower_GetAkAudioHatchetSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTheHuntressPower::Cosmetic_OnThrowInteractionStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart");

	UTheHuntressPower_Cosmetic_OnThrowInteractionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled");

	UTheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
