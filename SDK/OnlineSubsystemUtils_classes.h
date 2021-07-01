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
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class UOnlineBeacon : public Uactor
{
public:
	unsigned char                                      UnknownData_0QFP[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x0238(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BeaconConnectionTimeout;                                   // 0x023C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                                  NetDriver;                                                 // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JHF8[0x20];                                    // 0x0248(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0060 (FullSize[0x02C8] - InheritedSize[0x0268])
class UOnlineBeaconClient : public UOnlineBeacon
{
public:
	class UOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                              BeaconConnection;                                          // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EBeaconConnectionState        ConnectionState;                                           // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TVFR[0x4F];                                    // 0x0279(0x004F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}



	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UOnlineBeaconHostObject : public Uactor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x0230(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UOnlineBeaconClient*>                 ClientActors;                                              // 0x0248(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}



	void STATIC_GetCachedAchievementProgress(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementID, bool* bFoundID, float* progress);
	void STATIC_GetCachedAchievementDescription(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementID, bool* bFoundID, struct FText* title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WAQ[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}



	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* worldContextObject, class UplayerController* playerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* worldContextObject, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PG65[0x38];                                    // 0x0058(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}



	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* worldContextObject, class UplayerController* playerController, const struct FName& AchievementName, float progress, int UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAQM[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}



	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* worldContextObject, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMO9[0x48];                                    // 0x0058(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}



	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* worldContextObject, class UplayerController* playerController, int PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDZF[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}



	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* worldContextObject, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RN67[0x30];                                    // 0x0058(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}



	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* worldContextObject, class UplayerController* playerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchId, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RHQH[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}



	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGG7[0x40];                                    // 0x0058(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}



	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& result);
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& result);
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& result);
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* worldContextObject, class UplayerController* playerController, int MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U3KW[0x38];                                    // 0x0058(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* worldContextObject, class UplayerController* playerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ISH[0x38];                                    // 0x0050(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class UplayerController* playerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYN4[0x60];                                    // 0x0050(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2");
		return ptr;
	}



	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class UplayerController* playerController);
	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQueryOwned(class UplayerController* playerController);
	class UInAppPurchaseCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchase(class UplayerController* playerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBNO[0x48];                                    // 0x0050(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class UplayerController* playerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UC9[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQuery(class UplayerController* playerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5AI[0x48];                                    // 0x0050(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24MC[0x60];                                    // 0x0050(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2");
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.IpConnection
// 0x00A0 (FullSize[0x1AE8] - InheritedSize[0x1A48])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_7VWX[0x50];                                    // 0x1A48(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SocketErrorDisconnectDelay;                                // 0x1A98(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7WX9[0x4C];                                    // 0x1A9C(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0070 (FullSize[0x07D0] - InheritedSize[0x0760])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0760(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0760(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60EP[0x3];                                     // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x0764(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYJA[0xC];                                     // 0x0768(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                     // 0x0774(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                        // 0x0778(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                     // 0x077C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                        // 0x0780(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GNL9[0x4];                                     // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MaxSecondsInReceive;                                       // 0x0788(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NbPacketsBetweenReceiveTimeTest;                           // 0x0790(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ResolutionConnectionTimeout;                               // 0x0794(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WLYI[0x38];                                    // 0x0798(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0100 (FullSize[0x0138] - InheritedSize[0x0038])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RT9M[0xE0];                                    // 0x0058(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}



	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* worldContextObject, class UplayerController* playerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}



	bool STATIC_WriteLeaderboardInteger(class UplayerController* playerController, const struct FName& statName, int StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7OFO[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class UplayerController* playerController, const struct FName& SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDJS[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class UplayerController* playerController, const struct FName& statName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z4I9[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}



	class ULogoutCallbackProxy* STATIC_Logout(class UObject* worldContextObject, class UplayerController* playerController);
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (FullSize[0x0320] - InheritedSize[0x0268])
class UOnlineBeaconHost : public UOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x0268(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPMW[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UOnlineBeaconClient*>                 ClientActors;                                              // 0x0270(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3DWZ[0xA0];                                    // 0x0280(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0108 (FullSize[0x0138] - InheritedSize[0x0030])
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                                // 0x0030(0x000C) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0706[0xFC];                                    // 0x003C(0x00FC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3E83[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0198 (FullSize[0x01C8] - InheritedSize[0x0030])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_33IT[0x190];                                   // 0x0030(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x01C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHandlingDisconnect;                                       // 0x01C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BXYN[0x6];                                     // 0x01C2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00C0 (FullSize[0x0388] - InheritedSize[0x02C8])
class UPartyBeaconClient : public UOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_Q4O5[0x30];                                    // 0x02C8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02F8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                           PendingReservation;                                        // 0x0308(0x0050) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EClientRequestType            requestType;                                               // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0359(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x035A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JYJI[0x2D];                                    // 0x035B(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}



	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0078 (FullSize[0x02D0] - InheritedSize[0x0258])
class UPartyBeaconHost : public UOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           state;                                                     // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RA2Y[0x60];                                    // 0x0260(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02C0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ZZ1[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02C4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02C8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N2TY[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTeams;                                                  // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumPlayersPerTeam;                                         // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TeamAssignmentMethod;                                      // 0x004C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReservedHostTeamNum;                                       // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ForceTeamNum;                                              // 0x005C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0060(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableRemovalRequests;                                    // 0x0061(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3KDN[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x0068(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KE8X[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFR4[0x28];                                    // 0x0058(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}



	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RMF8[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}



	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* worldContextObject, class UplayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00E8 (FullSize[0x03B0] - InheritedSize[0x02C8])
class USpectatorBeaconClient : public UOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_TSQJ[0x30];                                    // 0x02C8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02F8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpectatorReservation                       PendingReservation;                                        // 0x0308(0x0078) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_ESpectatorClientRequestType   requestType;                                               // 0x0380(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0381(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x0382(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E195[0x2D];                                    // 0x0383(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		return ptr;
	}



	void ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0078 (FullSize[0x02D0] - InheritedSize[0x0258])
class USpectatorBeaconHost : public UOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       state;                                                     // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_21CA[0x60];                                    // 0x0260(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02C0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q3C1[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02C4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02C8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QW7E[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0044(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NEKU[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpectatorReservation>               Reservations;                                              // 0x0048(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1OPN[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
class UTestBeaconClient : public UOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}



	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UTestBeaconHost : public UOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}



	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* worldContextObject, class UplayerController* playerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, int playerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, int* playerIndex);
	void STATIC_GetIsMyTurn(class UObject* worldContextObject, class UplayerController* playerController, const struct FString& MatchId, bool* bIsMyTurn);
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0060 (FullSize[0x0750] - InheritedSize[0x06F0])
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData_TRAC[0x60];                                    // 0x06F0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}



	bool IsIdling();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
