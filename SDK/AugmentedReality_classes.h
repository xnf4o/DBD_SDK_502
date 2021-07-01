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

// Class AugmentedReality.ARSessionConfig
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UARSessionConfig : public UDataAsset
{
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateCollisionForMeshData;                             // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateNavMeshForMeshData;                               // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMeshDataForOcclusion;                                  // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRenderMeshDataInWireframe;                                // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrackSceneObjects;                                        // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePersonSegmentationForOcclusion;                        // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARWorldAlignment                 WorldAlignment;                                            // 0x003F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARSessionType                    SessionType;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARPlaneDetectionMode             PlaneDetectionMode;                                        // 0x0041(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHorizontalPlaneDetection;                                 // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bVerticalPlaneDetection;                                   // 0x0043(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutoFocus;                                          // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARLightEstimationMode            LightEstimationMode;                                       // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARFrameSyncMode                  FrameSyncMode;                                             // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraOverlay;                             // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraTracking;                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetCameraTracking;                                      // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetTrackedObjects;                                      // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PIKK[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UARCandidateImage*>                   CandidateImages;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxNumSimultaneousImagesTracked;                           // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                               // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QC72[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              WorldMapData;                                              // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FARVideoFormat                              DesiredVideoFormat;                                        // 0x0088(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AugmentedReality_EARFaceTrackingDirection          FaceTrackingDirection;                                     // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARFaceTrackingUpdate             FaceTrackingUpdate;                                        // 0x0095(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZF1V[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                        // 0x0098(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARSessionTrackingFeature         EnabledSessionTrackingFeature;                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QSMO[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}



	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	AugmentedReality_EARWorldAlignment GetWorldAlignment();
	AugmentedReality_EARSessionType GetSessionType();
	AugmentedReality_EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	AugmentedReality_EARLightEstimationMode GetLightEstimationMode();
	AugmentedReality_EARFrameSyncMode GetFrameSyncMode();
	AugmentedReality_EARFaceTrackingUpdate GetFaceTrackingUpdate();
	AugmentedReality_EARFaceTrackingDirection GetFaceTrackingDirection();
	AugmentedReality_EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	AugmentedReality_EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// Class AugmentedReality.ARLightEstimate
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UARLightEstimate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}



};

// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AmbientColorTemperatureKelvin;                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                AmbientColor;                                              // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}



	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};

// Class AugmentedReality.ARCandidateImage
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     FriendlyName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Width;                                                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              height;                                                    // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARCandidateImageOrientation      Orientation;                                               // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G0W1[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}



	float GetPhysicalWidth();
	float GetPhysicalHeight();
	AugmentedReality_EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}



	void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
	void STATIC_StopARSession();
	void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
	void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	void STATIC_RemovePin(class UARPin* PinToRemove);
	class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);
	class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	void STATIC_PauseARSession();
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct Fvector& start, const struct Fvector& end, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType);
	bool STATIC_IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature);
	bool STATIC_IsARSupported();
	AugmentedReality_EARWorldMappingState STATIC_GetWorldMappingStatus();
	AugmentedReality_EARTrackingQualityReason STATIC_GetTrackingQualityReason();
	AugmentedReality_EARTrackingQuality STATIC_GetTrackingQuality();
	TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType);
	class UARSessionConfig* STATIC_GetSessionConfig();
	TArray<struct Fvector> STATIC_GetPointCloud();
	class UARTextureCameraImage* STATIC_GetPersonSegmentationImage();
	class UARTextureCameraImage* STATIC_GetPersonSegmentationDepthImage();
	class UARLightEstimate* STATIC_GetCurrentLightEstimate();
	class UARTextureCameraImage* STATIC_GetCameraImage();
	class UARTextureCameraDepth* STATIC_GetCameraDepth();
	struct FARSessionStatus STATIC_GetARSessionStatus();
	TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();
	TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
	TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();
	TArray<class UARPin*> STATIC_GetAllPins();
	TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
	void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* worldContextObject, const struct FLinearColor& color, float OutlineThickness, float PersistForSeconds);
	void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* worldContextObject, const struct FLinearColor& color, float scale, float PersistForSeconds);
	class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth);
	bool STATIC_AddManualEnvironmentCaptureProbe(const struct Fvector& location, const struct Fvector& Extent);
};

// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}



	class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
	AugmentedReality_EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
	struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
	float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_XJH9[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}



};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailed;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P94C[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* worldContextObject);
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailed;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKN2[0x28];                                    // 0x0078(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* worldContextObject, const struct Fvector& location, const struct Fvector& Extent);
};

// Class AugmentedReality.AROriginActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UAROriginActor : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}



};

// Class AugmentedReality.ARPin
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                                  LocalToTrackingTransform;                                  // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                                  LocalToAlignedTrackingTransform;                           // 0x0070(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	AugmentedReality_EARTrackingState                  TrackingState;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K77F[0x27];                                    // 0x00A1(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                      // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WRUG[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}



	AugmentedReality_EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class Uworld* world, const struct FLinearColor& color, float scale, float PersistForSeconds);
};

// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
class UARSharedWorldGameMode : public UGameMode
{
public:
	int                                                BufferSizePerChunk;                                        // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7V9J[0x64];                                    // 0x032C(0x0064) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}



	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class UARSharedWorldGameState* GetARSharedWorldGameState();
};

// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (FullSize[0x02E0] - InheritedSize[0x02A8])
class UARSharedWorldGameState : public UgameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                          // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ARWorldData;                                               // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesTotal;                                    // 0x02C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesTotal;                                         // 0x02CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesDelivered;                                // 0x02D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesDelivered;                                     // 0x02D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5W9M[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}



	void K2_OnARWorldMapIsReady();
};

// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
class UARSharedWorldPlayerController : public UplayerController
{
public:
	unsigned char                                      UnknownData_IUMX[0x8];                                     // 0x0588(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}



	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};

// Class AugmentedReality.ARSkyLight
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class UARSkyLight : public USkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                              // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BGDX[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}



	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

// Class AugmentedReality.ARTexture
// 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
class UARTexture : public Utexture
{
public:
	AugmentedReality_EARTextureType                    TextureType;                                               // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMON[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              timestamp;                                                 // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ExternalTextureGuid;                                       // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UARTextureCameraImage : public UARTexture
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UARTextureCameraDepth : public UARTexture
{
public:
	AugmentedReality_EARDepthQuality                   DepthQuality;                                              // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARDepthAccuracy                  DepthAccuracy;                                             // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTemporallySmoothed;                                     // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79DR[0x5];                                     // 0x00E3(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}



};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	AugmentedReality_EARTextureType                    TextureType;                                               // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DY3S[0x3];                                     // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              timestamp;                                                 // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ExternalTextureGuid;                                       // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UARTraceResultDummy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedGeometry
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UARTrackedGeometry : public UObject
{
public:
	struct Fguid                                       UniqueID;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  LocalToTrackingTransform;                                  // 0x0040(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                                  LocalToAlignedTrackingTransform;                           // 0x0070(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AugmentedReality_EARTrackingState                  TrackingState;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WXMV[0xF];                                     // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMRMeshComponent*                            UnderlyingMesh;                                            // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AugmentedReality_EARObjectClassification           ObjectClassification;                                      // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XTUB[0x17];                                    // 0x00B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastUpdateFrameNumber;                                     // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YBFR[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DebugName;                                                 // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FR1A[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}



	bool IsTracked();
	class UMRMeshComponent* GetUnderlyingMesh();
	AugmentedReality_EARTrackingState GetTrackingState();
	AugmentedReality_EARObjectClassification GetObjectClassification();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};

// Class AugmentedReality.ARPlaneGeometry
// 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	AugmentedReality_EARPlaneOrientation               Orientation;                                               // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1DO9[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     center;                                                    // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     Extent;                                                    // 0x0100(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K1L5[0x14];                                    // 0x010C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UARPlaneGeometry*                            SubsumedBy;                                                // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PAPF[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}



	class UARPlaneGeometry* GetSubsumedBy();
	AugmentedReality_EARPlaneOrientation GetOrientation();
	struct Fvector GetExtent();
	struct Fvector GetCenter();
	TArray<struct Fvector> GetBoundaryPolygonInLocalSpace();
};

// Class AugmentedReality.ARTrackedPoint
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UARTrackedPoint : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedImage
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                           DetectedImage;                                             // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   EstimatedSize;                                             // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}



	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// Class AugmentedReality.ARTrackedQRCode
// 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
class UARTrackedQRCode : public UARTrackedImage
{
public:
	struct FString                                     QRCode;                                                    // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                version;                                                   // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHHZ[0xC];                                     // 0x0114(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		return ptr;
	}



};

// Class AugmentedReality.ARFaceGeometry
// 0x00F0 (FullSize[0x01E0] - InheritedSize[0x00F0])
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct Fvector                                     LookAtTarget;                                              // 0x00F0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTracked;                                                // 0x00FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPN8[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<AugmentedReality_EARFaceBlendShape, float>    BlendShapes;                                               // 0x0100(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JG1A[0x90];                                    // 0x0150(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}



	struct FTransform GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye);
	float GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape);
	TMap<AugmentedReality_EARFaceBlendShape, float> GetBlendShapes();
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData_AHPJ[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                 // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OLW4[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}



	struct Fvector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// Class AugmentedReality.ARTrackedObject
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                          DetectedObject;                                            // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7X6Z[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}



	class UARCandidateObject* GetDetectedObject();
};

// Class AugmentedReality.ARTrackedPose
// 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
class UARTrackedPose : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData_HKG1[0x50];                                    // 0x00F0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}



	struct FARPose3D GetTrackedPoseData();
};

// Class AugmentedReality.ARTrackableNotifyComponent
// 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
class UARTrackableNotifyComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAddTrackedGeometry;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedGeometry;                                   // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedGeometry;                                   // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedPlane;                                         // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPlane;                                      // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPlane;                                      // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedPoint;                                         // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedPoint;                                      // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedPoint;                                      // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedImage;                                         // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedImage;                                      // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedImage;                                      // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedFace;                                          // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedFace;                                       // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedFace;                                       // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedEnvProbe;                                      // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedEnvProbe;                                   // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedEnvProbe;                                   // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAddTrackedObject;                                        // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUpdateTrackedObject;                                     // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveTrackedObject;                                     // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}



};

// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UARTypesDummyClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}



};

// Class AugmentedReality.ARCandidateObject
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     FriendlyName;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fbox                                        BoundingBox;                                               // 0x0058(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SZ1F[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}



	void SetFriendlyName(const struct FString& NewName);
	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(const struct Fbox& InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct Fbox GetBoundingBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
