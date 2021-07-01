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

// Class MagicLeap.InAppPurchaseComponent
// 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
class UInAppPurchaseComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    InAppPurchaseLogMessage;                                   // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetItemsDetailsSuccess;                                    // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetItemsDetailsFailure;                                    // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PurchaseConfirmationSuccess;                               // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PurchaseConfirmationFailure;                               // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetPurchaseHistorySuccess;                                 // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GetPurchaseHistoryFailure;                                 // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCV3[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.InAppPurchaseComponent");
		return ptr;
	}



	bool TryPurchaseItemAsync(const struct FPurchaseItemDetails& ItemDetails);
	bool TryGetPurchaseHistoryAsync(int InNumPages);
	bool TryGetItemsDetailsAsync(TArray<struct FString> itemIds);
	void PurchaseConfirmationSuccess__DelegateSignature(const struct FPurchaseConfirmation& PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(const struct FString& LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation> PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails> ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// 0x0050 (FullSize[0x0198] - InheritedSize[0x0148])
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
public:
	struct FScriptMulticastDelegate                    DeviceHasReactivatedDelegate;                              // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DeviceWillEnterRealityModeDelegate;                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DeviceWillGoInStandbyDelegate;                             // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FocusLostDelegate;                                         // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FocusGainedDelegate;                                       // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.LuminApplicationLifecycleComponent");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// 0x0090 (FullSize[0x01D8] - InheritedSize[0x0148])
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
public:
	struct FScriptMulticastDelegate                    OnHeadTrackingLost;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecovered;                                   // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingRecoveryFailed;                              // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHeadTrackingNewSessionStarted;                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0N6B[0x50];                                    // 0x0188(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapHMDFunctionLibrary");
		return ptr;
	}



	void STATIC_SetStabilizationDepthActor(class Uactor* InStabilizationDepthActor, bool bSetFocusActor);
	void STATIC_SetFocusActor(class Uactor* InFocusActor, bool bSetStabilizationActor);
	void STATIC_SetBaseRotation(const struct FRotator& InBaseRotation);
	void STATIC_SetBasePosition(const struct Fvector& InBasePosition);
	void STATIC_SetBaseOrientation(const struct FQuat& InBaseOrientation);
	bool STATIC_SetAppReady();
	bool STATIC_IsRunningOnMagicLeapHMD();
	int STATIC_GetPlatformAPILevel();
	int STATIC_GetMLSDKVersionRevision();
	int STATIC_GetMLSDKVersionMinor();
	int STATIC_GetMLSDKVersionMajor();
	struct FString STATIC_GetMLSDKVersion();
	int STATIC_GetMinimumAPILevel();
	bool STATIC_GetHeadTrackingState(struct FMagicLeapHeadTrackingState* state);
	bool STATIC_GetHeadTrackingMapEvents();
	bool STATIC_GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo* PerformanceInfo);
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// 0x0090 (FullSize[0x02A0] - InheritedSize[0x0210])
class UMagicLeapMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_WTMZ[0x8];                                     // 0x0210(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                      // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               ScanWorld;                                                 // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeap_EMagicLeapMeshType                       MeshType;                                                  // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JUMG[0x6];                                     // 0x022A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BoundingVolume;                                            // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeap_EMagicLeapMeshLOD                        LevelOfDetail;                                             // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z2NY[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PerimeterOfGapsToFill;                                     // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Planarize;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LAYA[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisconnectedSectionArea;                                   // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestNormals;                                            // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestVertexConfidence;                                   // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeap_EMagicLeapMeshVertexColorMode            VertexColorMode;                                           // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KYLT[0x5];                                     // 0x024B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct Fcolor>                              BlockVertexColors;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceZero;                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceOne;                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RemoveOverlappingTriangles;                                // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NTV9[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMRMeshComponent*                            MRMesh;                                                    // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BricksPerFrame;                                            // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RLQ[0xC];                                     // 0x0294(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapMeshTrackerComponent");
		return ptr;
	}



	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(const struct Fguid& Id, TArray<struct Fvector> Vertices, TArray<int> Triangles, TArray<struct Fvector> Normals, TArray<float> Confidence);
	int GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(const TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>& Selector);
};

// Class MagicLeap.MagicLeapSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UMagicLeapSettings : public UObject
{
public:
	bool                                               bEnableZI;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseVulkanForZI;                                           // 0x0031(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMLAudioForZI;                                          // 0x0032(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P094[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapSettings");
		return ptr;
	}



};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapMeshBlockSelectorInterface");
		return ptr;
	}



	void SelectMeshBlocks(const struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
};

// Class MagicLeap.MagicLeapRaycastComponent
// 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
class UMagicLeapRaycastComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_X49Q[0x68];                                    // 0x00B8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapRaycastComponent");
		return ptr;
	}



	bool RequestRaycast(const struct FMagicLeapRaycastQueryParams& RequestParams, const struct FScriptDelegate& ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& hitResult);
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeap.MagicLeapRaycastFunctionLibrary");
		return ptr;
	}



	struct FMagicLeapRaycastQueryParams STATIC_MakeRaycastQueryParams(const struct Fvector& position, const struct Fvector& direction, const struct Fvector& UpVector, int Width, int height, float HorizontalFovDegrees, bool CollideWithUnobserved, int UserData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
