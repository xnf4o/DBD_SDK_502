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

// Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
// (Final, Native, Protected)
void UPlayerAnimInstance::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay");

	UPlayerAnimInstance_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
// (Native, Protected)
void UPlayerAnimInstance::OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted");

	UPlayerAnimInstance_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.PlayerAnimInstance.HasBeenNotified
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   animNotify                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerAnimInstance::HasBeenNotified(const struct FName& animNotify)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.HasBeenNotified");

	UPlayerAnimInstance_HasBeenNotified_Params params;
	params.animNotify = animNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UdbdPlayer*              ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* UPlayerAnimInstance::GetOwningPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer");

	UPlayerAnimInstance_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UcamperPlayer*           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UcamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor");

	UBaseSurvivorAnimInstance_GetOwningSurvivor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// DBDAnimation_EArmIkMode        newMode                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UArmIKSurvivorSubAnimInstance::ChangeMode(DBDAnimation_EArmIkMode newMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode");

	UArmIKSurvivorSubAnimInstance_ChangeMode_Params params;
	params.newMode = newMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UslasherPlayer*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UslasherPlayer* UBaseKillerAnimInstance::GetOwningKiller()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller");

	UBaseKillerAnimInstance_GetOwningKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
// (Final, Exec, Native, Private)
// Parameters:
// int                            animPOV                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseKillerAnimInstance::DBD_ForceAnimPOV(int animPOV)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV");

	UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params params;
	params.animPOV = animPOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UslasherPlayer*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UslasherPlayer* UBaseKillerAttackSubAnimInstance::GetOwningKiller()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller");

	UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDBDMenuPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDMenuPlayer* UBaseMenuAnimInstance::GetOwningMenuPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer");

	UBaseMenuAnimInstance_GetOwningMenuPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
// (Final, Native, Private)
// Parameters:
// bool                           searched                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChestAnimInstance::OnSearchedChanged(bool searched)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.ChestAnimInstance.OnSearchedChanged");

	UChestAnimInstance_OnSearchedChanged_Params params;
	params.searched = searched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorAnimInstance::SetSkillCheckSuccess(bool Success)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess");

	UGeneratorAnimInstance_SetSkillCheckSuccess_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
// (Final, Native, Protected, BlueprintCallable)
void UHealSurvivorSubAnimInstance::ResetHealerSkillCheckFailed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed");

	UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
// (Final, Native, Protected)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              healer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHealSurvivorSubAnimInstance::OnHealerSkillCheckResponseAesthetic(bool Success, class UdbdPlayer* healer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic");

	UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params params;
	params.Success = Success;
	params.healer = healer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(class UdbdPlayer* target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted");

	ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params params;
	params.target = target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          chaseTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(class UdbdPlayer* target, float chaseTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded");

	ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params params;
	params.target = target;
	params.chaseTime = chaseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.PalletAnimInstance.OnKillerSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPalletAnimInstance::OnKillerSet(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.PalletAnimInstance.OnKillerSet");

	UPalletAnimInstance_OnKillerSet_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
// (Final, Native, Protected, BlueprintCallable)
void UScreamSurvivorSubAnimInstance::ResetScreamTrigger()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger");

	UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
// (Native, Public, BlueprintCallable)
void USkillCheckFailureTracker::ResetSkillCheckFailed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed");

	USkillCheckFailureTracker_ResetSkillCheckFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
// (Native, Protected, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckFailureTracker::OnSkillCheckFailed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed");

	USkillCheckFailureTracker_OnSkillCheckFailed_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorAnimInstance::SetAudioRummageAkEvent(const struct FName& distance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent");

	USurvivorAnimInstance_SetAudioRummageAkEvent_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
// (Event, Public, BlueprintCallable, BlueprintEvent)
void USurvivorAnimInstance::OnInfectiousFrightScream()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream");

	USurvivorAnimInstance_OnInfectiousFrightScream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   montageID                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorAnimInstance::IsPlayingMontageByName(const struct FName& montageID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName");

	USurvivorAnimInstance_IsPlayingMontageByName_Params params;
	params.montageID = montageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorAnimInstance::AddAudioRepairRateRadius(int distance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius");

	USurvivorAnimInstance_AddAudioRepairRateRadius_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.Turn180Component.Server_SetSettings
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTurn180Settings        settings                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
void UTurn180Component::Server_SetSettings(float timestamp, const struct FTurn180Settings& settings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.Turn180Component.Server_SetSettings");

	UTurn180Component_Server_SetSettings_Params params;
	params.timestamp = timestamp;
	params.settings = settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
// (Final, Native, Private, BlueprintCallable)
void UWakerObjectAnimInstance::ResetReappearTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer");

	UWakerObjectAnimInstance_ResetReappearTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.WakerObjectAnimInstance.OnReappear
// (Event, Protected, BlueprintEvent)
void UWakerObjectAnimInstance::OnReappear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.OnReappear");

	UWakerObjectAnimInstance_OnReappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWakerObjectAnimInstance::GetWakerObjectStarted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted");

	UWakerObjectAnimInstance_GetWakerObjectStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWakerObjectAnimInstance::GetWakerObjectChargeComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete");

	UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWakerObjectAnimInstance::GetWakerObjectCharge()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge");

	UWakerObjectAnimInstance_GetWakerObjectCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWakerObject*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWakerObject* UWakerObjectAnimInstance::GetWakerObject()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject");

	UWakerObjectAnimInstance_GetWakerObject_Params params;

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
