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

// Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
struct UNetSynchedClock_Server_RequestServerTime_Params
{
};

// Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
struct UNetSynchedClock_Client_ReportServerTime_Params
{
	float                                              serverTime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
struct UNetworkFenceActor_Server_ClientPassedFence_Params
{
	TArray<struct Fguid>                               Fences;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
struct UNetworkFenceActor_Client_AllPassedFence_Params
{
	TArray<struct Fguid>                               Fences;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
struct UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Params
{
	bool                                               enabled;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameplayTag                                channel;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
struct UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Params
{
	bool                                               enabled;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameplayTag                                channel;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
struct UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
struct UTimerObject_OnRep_TimerDataUpdated_Params
{
	struct FReplicationTimerData                       oldData;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.IsTimerActive
struct UTimerObject_IsTimerActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.IsPaused
struct UTimerObject_IsPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.IsDone
struct UTimerObject_IsDone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.GetRemainingTimePercent
struct UTimerObject_GetRemainingTimePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.GetRemainingTime
struct UTimerObject_GetRemainingTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.GetElapsedTimePercent
struct UTimerObject_GetElapsedTimePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.GetElapsedTime
struct UTimerObject_GetElapsedTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.GetDuration
struct UTimerObject_GetDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.CreateTimer
struct UTimerObject_CreateTimer_Params
{
	class Uactor*                                      owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTimerObject*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.Authority_Unpause
struct UTimerObject_Authority_Unpause_Params
{
};

// Function NetworkUtilities.TimerObject.Authority_Start
struct UTimerObject_Authority_Start_Params
{
	float                                              duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.Authority_SetPaused
struct UTimerObject_Authority_SetPaused_Params
{
	bool                                               paused;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetworkUtilities.TimerObject.Authority_Pause
struct UTimerObject_Authority_Pause_Params
{
};

// Function NetworkUtilities.TimerObject.Authority_Clear
struct UTimerObject_Authority_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
