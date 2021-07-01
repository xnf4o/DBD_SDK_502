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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
struct UInAppPurchaseComponent_TryPurchaseItemAsync_Params
{
	struct FPurchaseItemDetails                        ItemDetails;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
struct UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
{
	int                                                InNumPages;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
struct UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params
{
	TArray<struct FString>                             itemIds;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
{
	struct FPurchaseConfirmation                       PurchaseConfirmations;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
struct UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
{
	struct FString                                     LogMessage;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseConfirmation>               PurchaseHistory;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseItemDetails>                ItemsDetails;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params
{
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
struct UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
{
	class Uactor*                                      InStabilizationDepthActor;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetFocusActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
struct UMagicLeapHMDFunctionLibrary_SetFocusActor_Params
{
	class Uactor*                                      InFocusActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetStabilizationActor;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
struct UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params
{
	struct FRotator                                    InBaseRotation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
struct UMagicLeapHMDFunctionLibrary_SetBasePosition_Params
{
	struct Fvector                                     InBasePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
struct UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
{
	struct FQuat                                       InBaseOrientation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
struct UMagicLeapHMDFunctionLibrary_SetAppReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
struct UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
struct UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
struct UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
{
	struct FMagicLeapHeadTrackingState                 state;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
struct UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params
{
	struct FMagicLeapGraphicsClientPerformanceInfo     PerformanceInfo;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
struct UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo                  NewMeshInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
struct UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
{
	struct Fguid                                       Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             Vertices;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             Normals;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Confidence;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
struct UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
struct UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
struct UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Params
{
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
struct UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
struct UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params
{
	TScriptInterface<class UMagicLeapMeshBlockSelectorInterface> Selector;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
struct UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo                  NewMeshInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
struct UMagicLeapRaycastComponent_RequestRaycast_Params
{
	struct FMagicLeapRaycastQueryParams                RequestParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ResultDelegate;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
struct UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
{
	struct FMagicLeapRaycastHitResult                  hitResult;                                                 // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
struct UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
{
	struct Fvector                                     position;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     UpVector;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalFovDegrees;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CollideWithUnobserved;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserData;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapRaycastQueryParams                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
