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

// Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UNetSynchedClock::Server_RequestServerTime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime");

	UNetSynchedClock_Server_RequestServerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// float                          serverTime                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNetSynchedClock::Client_ReportServerTime(float serverTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime");

	UNetSynchedClock_Client_ReportServerTime_Params params;
	params.serverTime = serverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct Fguid>           Fences                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNetworkFenceActor::Server_ClientPassedFence(TArray<struct Fguid> Fences)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence");

	UNetworkFenceActor_Server_ClientPassedFence_Params params;
	params.Fences = Fences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
// (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
// TArray<struct Fguid>           Fences                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNetworkFenceActor::Client_AllPassedFence(TArray<struct Fguid> Fences)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence");

	UNetworkFenceActor_Client_AllPassedFence_Params params;
	params.Fences = Fences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameplayTag            channel                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerCorrectionDisablerComponent::SetServerCorrectionEnabled(bool enabled, const struct FgameplayTag& channel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Params params;
	params.enabled = enabled;
	params.channel = channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameplayTag            channel                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled(bool enabled, const struct FgameplayTag& channel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Params params;
	params.enabled = enabled;
	params.channel = channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServerCorrectionDisablerComponent::GetServerCorrectionEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
// (Final, Native, Private)
// Parameters:
// struct FReplicationTimerData   oldData                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UTimerObject::OnRep_TimerDataUpdated(const struct FReplicationTimerData& oldData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated");

	UTimerObject_OnRep_TimerDataUpdated_Params params;
	params.oldData = oldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.TimerObject.IsTimerActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsTimerActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsTimerActive");

	UTimerObject_IsTimerActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsPaused()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsPaused");

	UTimerObject_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsDone()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsDone");

	UTimerObject_IsDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetRemainingTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetRemainingTimePercent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTimePercent");

	UTimerObject_GetRemainingTimePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetRemainingTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetRemainingTime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTime");

	UTimerObject_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetElapsedTimePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetElapsedTimePercent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTimePercent");

	UTimerObject_GetElapsedTimePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetElapsedTime()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTime");

	UTimerObject_GetElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetDuration");

	UTimerObject_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.CreateTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTimerObject*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UTimerObject::STATIC_CreateTimer(class Uactor* owner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.CreateTimer");

	UTimerObject_CreateTimer_Params params;
	params.owner = owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NetworkUtilities.TimerObject.Authority_Unpause
// (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Unpause()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Unpause");

	UTimerObject_Authority_Unpause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.TimerObject.Authority_Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTimerObject::Authority_Start(float duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Start");

	UTimerObject_Authority_Start_Params params;
	params.duration = duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.TimerObject.Authority_SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           paused                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTimerObject::Authority_SetPaused(bool paused)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_SetPaused");

	UTimerObject_Authority_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.TimerObject.Authority_Pause
// (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Pause()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Pause");

	UTimerObject_Authority_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetworkUtilities.TimerObject.Authority_Clear
// (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Clear()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Clear");

	UTimerObject_Authority_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
