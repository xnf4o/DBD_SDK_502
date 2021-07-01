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

// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
class UVRNotificationsComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                            // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                     // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                           // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                    // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                                // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                      // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                                // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}



};

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}



	void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
	void STATIC_SetWorldToMetersScale(class UObject* worldContext, float NewScale);
	void STATIC_SetTrackingOrigin(TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> origin);
	void STATIC_SetSpectatorScreenTexture(class Utexture* InTexture);
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void STATIC_SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode mode);
	void STATIC_SetClippingPlanes(float Near, float Far);
	void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<HeadMountedDisplay_EOrientPositionSelector> Options);
	bool STATIC_IsSpectatorScreenModeControllable();
	bool STATIC_IsInLowPersistenceMode();
	bool STATIC_IsHeadMountedDisplayEnabled();
	bool STATIC_IsHeadMountedDisplayConnected();
	bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	bool STATIC_HasValidTrackingPosition();
	float STATIC_GetWorldToMetersScale(class UObject* worldContext);
	void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* worldContext);
	void STATIC_GetTrackingSensorParameters(struct Fvector* origin, struct FRotator* rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* distance, float* NearPlane, float* FarPlane, bool* isActive, int index);
	TEnumAsByte<HeadMountedDisplay_EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	float STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters(struct Fvector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float STATIC_GetPixelDensity();
	void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct Fvector* DevicePosition);
	int STATIC_GetNumOfTrackingSensors();
	TEnumAsByte<HeadMountedDisplay_EHMDWornState> STATIC_GetHMDWornState();
	struct FName STATIC_GetHMDDeviceName();
	void STATIC_GetDeviceWorldPose(class UObject* worldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct Fvector* position);
	void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct Fvector* position);
	TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, HeadMountedDisplay_EXRTrackedDeviceType DeviceType);
	void STATIC_EnableLowPersistenceMode(bool bEnable);
	bool STATIC_EnableHMD(bool bEnable);
	void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};

// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C8 (FullSize[0x04F0] - InheritedSize[0x0428])
class UMotionControllerComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_411C[0x8];                                     // 0x0428(0x0008) Fix Super Size
	struct FName                                       MotionSource;                                              // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                              // 0x043C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMCS[0x3];                                     // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	HeadMountedDisplay_ETrackingStatus                 CurrentTrackingStatus;                                     // 0x0440(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDeviceModel;                                       // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T15Z[0x2];                                     // 0x0442(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DisplayModelSource;                                        // 0x0444(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CustomDisplayMesh;                                         // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  DisplayMeshMaterialOverrides;                              // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U66S[0x68];                                    // 0x0468(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         DisplayComponent;                                          // 0x04D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LRUN[0x18];                                    // 0x04D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}



	void SetTrackingSource(InputCore_EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	InputCore_EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
	struct Fvector GetHandJointPosition(int jointIndex, bool* bValueFound);
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}



	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool STATIC_IsMotionTrackingEnabledForSource(int playerIndex, const struct FName& SourceName);
	bool STATIC_IsMotionTrackingEnabledForDevice(int playerIndex, InputCore_EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	bool STATIC_IsMotionSourceTracking(int playerIndex, const struct FName& SourceName);
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	struct FName STATIC_GetActiveTrackingSystemName();
	TArray<struct FName> STATIC_EnumerateMotionSources();
	bool STATIC_EnableMotionTrackingOfSource(int playerIndex, const struct FName& SourceName);
	bool STATIC_EnableMotionTrackingOfDevice(int playerIndex, InputCore_EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfSource(int playerIndex, const struct FName& SourceName);
	void STATIC_DisableMotionTrackingOfDevice(int playerIndex, InputCore_EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int playerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}



	class UprimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class Uactor* target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UprimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class Uactor* target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07IZ[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         SpawnedComponent;                                          // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}



	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class Uactor* target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UprimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class Uactor* target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UprimitiveComponent** NewComponent);
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary");
		return ptr;
	}



	void STATIC_ShowLoadingScreen();
	void STATIC_SetLoadingScreen(class Utexture* texture, const struct FVector2D& scale, const struct Fvector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void STATIC_HideLoadingScreen();
	void STATIC_ClearLoadingScreenSplashes();
	void STATIC_AddLoadingScreenSplash(class Utexture* texture, const struct Fvector& Translation, const struct FRotator& rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
