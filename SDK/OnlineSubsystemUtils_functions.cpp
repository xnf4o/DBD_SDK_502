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

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UOnlineBeaconClient::ClientOnConnected()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	UOnlineBeaconClient_ClientOnConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementProgress(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementID, bool* bFoundID, float* progress)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");

	UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (progress != nullptr)
		*progress = params.progress;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   title                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   LockedDescription              (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   UnlockedDescription            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementDescription(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementID, bool* bFoundID, struct FText* title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");

	UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (title != nullptr)
		*title = params.title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;

}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievements(class UObject* worldContextObject, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	UAchievementQueryCallbackProxy_CacheAchievements_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievementDescriptions(class UObject* worldContextObject, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTag                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::STATIC_WriteAchievementProgress(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementName, float progress, int UserTag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	UAchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.AchievementName = AchievementName;
	params.progress = progress;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConnectionCallbackProxy* UConnectionCallbackProxy::STATIC_ConnectToService(class UObject* worldContextObject, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	UConnectionCallbackProxy_ConnectToService_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::STATIC_CreateSession(class UObject* worldContextObject, class UplayerController* playerController, int PublicConnections, bool bUseLAN)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	UCreateSessionCallbackProxy_CreateSession_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::STATIC_DestroySession(class UObject* worldContextObject, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	UDestroySessionCallbackProxy_DestroySession_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndMatchCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndMatchCallbackProxy* UEndMatchCallbackProxy::STATIC_EndMatch(class UObject* worldContextObject, class UplayerController* playerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchId, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	UEndMatchCallbackProxy_EndMatch_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchActor = MatchActor;
	params.MatchId = MatchId;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UEndTurnCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndTurnCallbackProxy* UEndTurnCallbackProxy::STATIC_EndTurn(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	UEndTurnCallbackProxy_EndTurn_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchId = MatchId;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFindSessionsCallbackProxy::STATIC_GetServerName(const struct FBlueprintSessionResult& result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	UFindSessionsCallbackProxy_GetServerName_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::STATIC_GetPingInMs(const struct FBlueprintSessionResult& result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	UFindSessionsCallbackProxy_GetPingInMs_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	UFindSessionsCallbackProxy_GetMaxPlayers_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& result)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	UFindSessionsCallbackProxy_GetCurrentPlayers_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::STATIC_FindSessions(class UObject* worldContextObject, class UplayerController* playerController, int MaxResults, bool bUseLAN)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	UFindSessionsCallbackProxy_FindSessions_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::STATIC_FindTurnBasedMatch(class UObject* worldContextObject, class UplayerController* playerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::STATIC_CreateProxyObjectForInAppPurchase(class UplayerController* playerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params;
	params.playerController = playerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::STATIC_CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params params;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::STATIC_CreateProxyObjectForInAppPurchaseQueryOwned(class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned");

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params params;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest2 ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::STATIC_CreateProxyObjectForInAppPurchase(class UplayerController* playerController, const struct FInAppPurchaseProductRequest2& ProductRequest)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase");

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params params;
	params.playerController = playerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseQuery(class UplayerController* playerController, TArray<struct FString> ProductIdentifiers)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.playerController = playerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::STATIC_CreateProxyObjectForInAppPurchaseQuery(class UplayerController* playerController, TArray<struct FString> ProductIdentifiers)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery");

	UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.playerController = playerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore");

	UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::STATIC_JoinSession(class UObject* worldContextObject, class UplayerController* playerController, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	UJoinSessionCallbackProxy_JoinSession_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   statName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StatValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULeaderboardBlueprintLibrary::STATIC_WriteLeaderboardInteger(class UplayerController* playerController, const struct FName& statName, int StatValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.playerController = playerController;
	params.statName = statName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::STATIC_CreateProxyObjectForFlush(class UplayerController* playerController, const struct FName& SessionName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params;
	params.playerController = playerController;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   statName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(class UplayerController* playerController, const struct FName& statName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params;
	params.playerController = playerController;
	params.statName = statName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutCallbackProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULogoutCallbackProxy* ULogoutCallbackProxy::STATIC_Logout(class UObject* worldContextObject, class UplayerController* playerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	ULogoutCallbackProxy_Logout_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	UPartyBeaconClient_ServerUpdateReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       Reservation                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	UPartyBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	UPartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PartyLeader                    (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	UPartyBeaconClient_ServerCancelReservationRequest_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	UPartyBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
void UPartyBeaconClient::ClientSendReservationFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	UPartyBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	UPartyBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	UPartyBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::STATIC_QuitMatch(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	UQuitMatchCallbackProxy_QuitMatch_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchId = MatchId;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::STATIC_ShowExternalLoginUI(class UObject* worldContextObject, class UplayerController* InPlayerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	UShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.worldContextObject = worldContextObject;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpectatorReservation   Reservation                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void USpectatorBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	USpectatorBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        Spectator                      (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectatorBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	USpectatorBeaconClient_ServerCancelReservationRequest_Params params;
	params.Spectator = Spectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectatorBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");

	USpectatorBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// (Net, NetReliable, Native, Event, Public, NetClient)
void USpectatorBeaconClient::ClientSendReservationFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");

	USpectatorBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectatorBeaconClient::ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");

	USpectatorBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectatorBeaconClient::ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");

	USpectatorBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UTestBeaconClient::ServerPong()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");

	UTestBeaconClient_ServerPong_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)
void UTestBeaconClient::ClientPing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");

	UTestBeaconClient_ClientPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* worldContextObject, class UplayerController* playerController, class UObject* Object)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");

	UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerDisplayName              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetPlayerDisplayName(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, int playerIndex, struct FString* PlayerDisplayName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");

	UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchId = MatchId;
	params.playerIndex = playerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            playerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetMyPlayerIndex(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, int* playerIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");

	UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (playerIndex != nullptr)
		*playerIndex = params.playerIndex;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UplayerController*       playerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::STATIC_GetIsMyTurn(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, bool* bIsMyTurn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");

	UTurnBasedBlueprintLibrary_GetIsMyTurn_Params params;
	params.worldContextObject = worldContextObject;
	params.playerController = playerController;
	params.MatchId = MatchId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;

}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoipListenerSynthComponent::IsIdling()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");

	UVoipListenerSynthComponent_IsIdling_Params params;

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
