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

// Class AkAudio.AkAcousticPortal
// 0x0090 (FullSize[0x02F8] - InheritedSize[0x0268])
class UAkAcousticPortal : public Uvolume
{
public:
	AkAudio_EAkAcousticPortalState                     InitialState;                                              // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZC0W[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObstructionRefreshInterval;                                // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              ObstructionCollisionChannel;                               // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QIJ0[0x87];                                    // 0x0271(0x0087) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}



	void OpenPortal();
	AkAudio_EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// Class AkAudio.AkPortalComponent
// 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
class UAkPortalComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}



};

// Class AkAudio.AkAudioType
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAkAudioType : public UObject
{
public:
	uint32_t                                           ShortID;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XWHZ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             UserData;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAudioType");
		return ptr;
	}



};

// Class AkAudio.AkAcousticTexture
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAkAcousticTexture : public UAkAudioType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}



};

// Class AkAudio.AkAmbientSound
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UAkAmbientSound : public Uactor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0230(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                AkComponent;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopWhenOwnerIsDestroyed;                                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRB9[0x2E];                                    // 0x0242(0x002E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}



	void StopAmbientSound();
	void StartAmbientSound();
};

// Class AkAudio.AkAndroidInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkPlatformInfo
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UAkPlatformInfo : public UObject
{
public:
	unsigned char                                      UnknownData_FZ90[0x48];                                    // 0x0030(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkAndroidPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAndroidPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkAssetData
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UAkAssetData : public UObject
{
public:
	unsigned char                                      UnknownData_WKZS[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetData");
		return ptr;
	}



};

// Class AkAudio.AkAssetDataWithMedia
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	unsigned char                                      MediaList[0x10];                                           // 0x0070(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      UnknownData_794Y[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetDataWithMedia");
		return ptr;
	}



};

// Class AkAudio.AkAssetPlatformData
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                                CurrentAssetData;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetPlatformData");
		return ptr;
	}



};

// Class AkAudio.AkAssetBase
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                        PlatformAssetData;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O86R[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetBase");
		return ptr;
	}



};

// Class AkAudio.AkAudioBank
// 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                               AutoLoad;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NX32[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LocalizedPlatformAssetDataMap[0x50];                       // 0x0061(0x0050) UNKNOWN PROPERTY: MapProperty
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformAssetData;                         // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M8WK[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}



};

// Class AkAudio.AkAssetDataSwitchContainerData
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	unsigned char                                      GroupValue[0x30];                                          // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UAkGroupValue*                               DefaultGroupValue;                                         // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MediaList[0x10];                                           // 0x0068(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class UAkAssetDataSwitchContainerData*>     Children;                                                  // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2801[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainerData");
		return ptr;
	}



};

// Class AkAudio.AkAssetDataSwitchContainer
// 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*>     SwitchContainers;                                          // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                               DefaultGroupValue;                                         // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OW3I[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainer");
		return ptr;
	}



};

// Class AkAudio.AkAudioEventData
// 0x01C8 (FullSize[0x0280] - InheritedSize[0x00B8])
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                              MaxAttenuationRadius;                                      // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInfinite;                                                // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AX6D[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDuration;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDuration;                                           // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                            // 0x00C8(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      PostedEvents[0x50];                                        // 0x0118(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UserDefinedSends[0x50];                                    // 0x0168(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      PostedTriggers[0x50];                                      // 0x01B8(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      GroupValues[0x50];                                         // 0x0208(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_080L[0x28];                                    // 0x0258(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAudioEventData");
		return ptr;
	}



};

// Class AkAudio.AkAudioEvent
// 0x0088 (FullSize[0x00E8] - InheritedSize[0x0060])
class UAkAudioEvent : public UAkAssetBase
{
public:
	unsigned char                                      LocalizedPlatformAssetDataMap[0x50];                       // 0x0060(0x0050) UNKNOWN PROPERTY: MapProperty
	class UAkAudioBank*                                RequiredBank;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformData;                              // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxAttenuationRadius;                                      // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               IsInfinite;                                                // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7VNR[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDuration;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaximumDuration;                                           // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YD7C[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}



	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};

// Class AkAudio.AkGameObject
// 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTL4[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkGameObject");
		return ptr;
	}



	void stop();
	void PostAssociatedAkEventAsync(class UObject* worldContextObject, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
	void PostAkEventAsync(class UObject* worldContextObject, class UAkAudioEvent* akEvent, int* PlayingID, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEvent(class UAkAudioEvent* akEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName);
};

// Class AkAudio.AkComponent
// 0x01D0 (FullSize[0x0400] - InheritedSize[0x0230])
class UAkComponent : public UAkGameObject
{
public:
	bool                                               bUseSpatialAudio;                                          // 0x0230(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6CR[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ECollisionChannel>              OcclusionCollisionChannel;                                 // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GOL[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EnableSpotReflectors : 1;                                  // 0x023C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CA30[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                     // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     EarlyReflectionAuxBusName;                                 // 0x0248(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                EarlyReflectionOrder;                                      // 0x0258(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EarlyReflectionBusSendGain;                                // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EarlyReflectionMaxPathLength;                              // 0x0260(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              roomReverbAuxBusGain;                                      // 0x0264(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                diffractionMaxEdges;                                       // 0x0268(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                diffractionMaxPaths;                                       // 0x026C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              diffractionMaxPathLength;                                  // 0x0270(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      DrawFirstOrderReflections : 1;                             // 0x0274(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawSecondOrderReflections : 1;                            // 0x0274(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawHigherOrderReflections : 1;                            // 0x0274(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DrawDiffraction : 1;                                       // 0x0274(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9ZZ[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               StopWhenOwnerDestroyed;                                    // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_57CF[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AttenuationScalingFactor;                                  // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionRefreshInterval;                                  // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseReverbVolumes;                                         // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldTransmitRelativeAngle;                               // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EWR8[0x2];                                     // 0x0286(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OcclusionAffect;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOcclusionDistance;                                      // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGOK[0x170];                                   // 0x0290(0x0170) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}



	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, const struct FString& RTPC);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const struct FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const struct FString& trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEventByName(const struct FString& in_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* akEvent, int* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent* akEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void GetRTPCValue(class UAkRtpc* RTPCValue, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, const struct FString& RTPC, int PlayingID);
	float GetAttenuationRadius();
};

// Class AkAudio.AkAudioInputComponent
// 0x0010 (FullSize[0x0410] - InheritedSize[0x0400])
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData_ZPC5[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}



	int PostAssociatedAudioInputEvent();
};

// Class AkAudio.AkAuxBus
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                                RequiredBank;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}



};

// Class AkAudio.AkCheckBox
// 0x0A68 (FullSize[0x0BA8] - InheritedSize[0x0140])
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData_AH63[0x398];                                   // 0x0140(0x0398) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x04D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETRC[0x3];                                     // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x04DC(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7N52[0x4];                                     // 0x04D9(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x04F0(0x05E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0AD0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0AD1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J64X[0x6];                                     // 0x0AD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                      // 0x0AD8(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x0AE8(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                     // 0x0B28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x0B38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0B48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4MTV[0x50];                                    // 0x0B58(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}



	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	void SetAkItemId(const struct Fguid& itemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool isPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct Fguid GetAkItemId();
};

// Class AkAudio.AkChinookPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkChinookPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkChinookPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkMPXPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMPXPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkXSXPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXSXPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkGameplayStatics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}



	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class Uactor* actor);
	void STATIC_UseEarlyReflections(class Uactor* actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void STATIC_UnloadBankByName(const struct FString& BankName);
	void STATIC_UnloadBankAsync(class UAkAudioBank* bank, const struct FScriptDelegate& BankUnloadedCallback);
	void STATIC_UnloadBank(class UAkAudioBank* bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* worldContextObject);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* worldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class Uactor* actor);
	void STATIC_StartProfilerCapture(const struct FString& FileName);
	void STATIC_StartOutputCapture(const struct FString& FileName);
	void STATIC_StartAllAmbientSounds(class UObject* worldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* worldContextObject, class UAkAudioEvent* akEvent, const struct Fvector& location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
	void STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class Uactor* actor, const struct FName& SwitchGroup, const struct FName& SwitchState);
	void STATIC_SetState(class UAkStateValue* StateValue, const struct FName& StateGroup, const struct FName& state);
	void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset);
	void STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, class Uactor* actor, const struct FName& RTPC);
	void STATIC_SetReflectionsOrder(int Order, bool RefreshPaths);
	void STATIC_SetPanningRule(AkAudio_EPanningRule PanRule);
	void STATIC_SetOutputBusVolume(float BusVolume, class Uactor* actor);
	void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class Uactor* actor);
	void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType);
	void STATIC_SetCurrentAudioCultureAsync(const struct FString& AudioCulture, const struct FScriptDelegate& Completed);
	void STATIC_SetCurrentAudioCulture(const struct FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* worldContextObject);
	void STATIC_SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration);
	void STATIC_PostTrigger(class UAkTrigger* TriggerValue, class Uactor* actor, const struct FName& trigger);
	void STATIC_PostEventByName(const struct FString& EventName, class Uactor* actor, bool bStopWhenAttachedToDestroyed);
	int STATIC_PostEventAttached(class UAkAudioEvent* akEvent, class Uactor* actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct Fvector& location, const struct FRotator& Orientation, class UObject* worldContextObject);
	int STATIC_PostEventAtLocation(class UAkAudioEvent* akEvent, const struct Fvector& location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* worldContextObject);
	int STATIC_PostEvent(class UAkAudioEvent* akEvent, class Uactor* actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* akEvent, class Uactor* actor, int* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* akEvent, class Uactor* actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const struct FString& BankName);
	void STATIC_LoadBankAsync(class UAkAudioBank* bank, const struct FScriptDelegate& BankLoadedCallback);
	void STATIC_LoadBank(class UAkAudioBank* bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* worldContextObject);
	bool STATIC_IsGame(class UObject* worldContextObject);
	bool STATIC_IsEditor();
	void STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset);
	void STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, class Uactor* actor, const struct FName& RTPC);
	float STATIC_GetOcclusionScalingFactor();
	struct FString STATIC_GetCurrentAudioCulture();
	TArray<struct FString> STATIC_GetAvailableAudioCultures();
	class UObject* STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* type);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const struct FName& AttachPointName, const struct Fvector& location, TEnumAsByte<Engine_EAttachLocation> LocationType);
	class UObject* STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* type);
	void STATIC_ExecuteActionOnPlayingID(AkAudio_EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve);
	void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* akEvent, AkAudio_EAkActionOnEventType ActionType, class Uactor* actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID);
	void STATIC_ClearBanks();
	void STATIC_CancelEventCallback(const struct FScriptDelegate& PostEventCallback);
	void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
};

// Class AkAudio.AkCallbackInfo
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkEventCallbackInfo
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                eventId;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData_SVXI[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}



	AkAudio_EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};

// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                position;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              duration;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EstimatedDuration;                                         // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AudioNodeID;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MediaID;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStreaming;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PB4M[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                              SegmentInfo;                                               // 0x003C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	AkAudio_EAkCallbackType                            MusicSyncType;                                             // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DG2[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserCueName;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}



};

// Class AkAudio.AkGeometryComponent
// 0x0130 (FullSize[0x0340] - InheritedSize[0x0210])
class UAkGeometryComponent : public USceneComponent
{
public:
	AkAudio_EAkMeshType                                MeshType;                                                  // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXRU[0x3];                                     // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LOD;                                                       // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UmaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                                 // 0x0218(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride                  CollisionMeshSurfaceOverride;                              // 0x0268(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                    // 0x0278(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                     // 0x0278(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5P92[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      AssociatedRoom;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WUCZ[0x10];                                    // 0x0288(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkGeometryData                             GeometryData;                                              // 0x0298(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5LZC[0x58];                                    // 0x02E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkGeometryComponent");
		return ptr;
	}



	void UpdateGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};

// Class AkAudio.AkGroupValue
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UAkGroupValue : public UAkAudioType
{
public:
	uint32_t                                           GroupShortID;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97TA[0x14];                                    // 0x004C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkGroupValue");
		return ptr;
	}



};

// Class AkAudio.AkHololensInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkHololensInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings   AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkHololensInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkHololensPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkHololensPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkInitBankAssetData
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                       PluginInfos;                                               // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkInitBankAssetData");
		return ptr;
	}



};

// Class AkAudio.AkInitBank
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<struct FString>                             AvailableAudioCultures;                                    // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultLanguage;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkInitBank");
		return ptr;
	}



};

// Class AkAudio.AkIOSInitializationSettings
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                             AudioSession;                                              // 0x0098(0x000C) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUQD[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x00A8(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                          // 0x00D0(0x0034) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HCRP[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkIOSPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkIOSPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	struct FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// Class AkAudio.AkItemBoolProperties
// 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZES[0x20];                                    // 0x0148(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};

// Class AkAudio.AkItemPropertiesConv
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	struct FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};

// Class AkAudio.AkItemProperties
// 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                         // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY9I[0x20];                                    // 0x0148(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};

// Class AkAudio.AkLateReverbComponent
// 0x0040 (FullSize[0x0250] - InheritedSize[0x0210])
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      bEnable : 1;                                               // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YJBO[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              priority;                                                  // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZAT[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPLS[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}



};

// Class AkAudio.AkLinuxInitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkLinuxPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLinuxPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkLuminInitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkLuminInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLuminInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkLuminPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkLuminPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLuminPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkMacInitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkMacPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMacPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkMediaAssetData
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UAkMediaAssetData : public UObject
{
public:
	bool                                               IsStreamed;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseDeviceMemory;                                           // 0x0031(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJ18[0x16];                                    // 0x0032(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMediaAssetData");
		return ptr;
	}



};

// Class AkAudio.AkMediaAsset
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAkMediaAsset : public UObject
{
public:
	uint32_t                                           Id;                                                        // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLEQ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             UserData;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                           CurrentMediaAssetData;                                     // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XQ4I[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMediaAsset");
		return ptr;
	}



};

// Class AkAudio.AkLocalizedMediaAsset
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkLocalizedMediaAsset");
		return ptr;
	}



};

// Class AkAudio.AkExternalMediaAsset
// 0x0060 (FullSize[0x00C0] - InheritedSize[0x0060])
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	unsigned char                                      UnknownData_GE4H[0x60];                                    // 0x0060(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkExternalMediaAsset");
		return ptr;
	}



};

// Class AkAudio.AkPellegrinoPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPellegrinoPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkDPXPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkDPXPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkPS5PlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPS5PlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkPS4InitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0030(0x0060) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0090(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings        AdvancedSettings;                                          // 0x00B8(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkPS4PlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPS4PlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkPS5InitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkPS5InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0030(0x0060) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0090(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS5AdvancedInitializationSettings        AdvancedSettings;                                          // 0x00B8(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V28U[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkPS5InitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkDPXInitializationSettings
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkDPXInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkReverbVolume
// 0x0038 (FullSize[0x02A0] - InheritedSize[0x0268])
class UAkReverbVolume : public Uvolume
{
public:
	unsigned char                                      bEnabled : 1;                                              // 0x0268(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1V3[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0270(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0278(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                 // 0x0288(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x028C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              priority;                                                  // 0x0290(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L0JL[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkLateReverbComponent*                      LateReverbComponent;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}



};

// Class AkAudio.AkRoomComponent
// 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
class UAkRoomComponent : public UAkGameObject
{
public:
	unsigned char                                      bEnable : 1;                                               // 0x0230(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUXH[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkRoomComponent*                            NextLowerPriorityComponent;                                // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              priority;                                                  // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallOcclusion;                                             // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AuxSendLevel;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMM9[0x13];                                    // 0x024D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}



};

// Class AkAudio.AkRtpc
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAkRtpc : public UAkAudioType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkRtpc");
		return ptr;
	}



};

// Class AkAudio.AkSettings
// 0x0130 (FullSize[0x0160] - InheritedSize[0x0030])
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                              // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9DAP[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   WwiseProjectPath;                                          // 0x0038(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WwiseSoundDataFolder;                                      // 0x0048(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bAutoConnectToWAAPI;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DefaultOcclusionCollisionChannel;                          // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8XGE[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AkGeometryMap[0x50];                                       // 0x005A(0x0050) UNKNOWN PROPERTY: MapProperty
	bool                                               SplitSwitchContainerMedia;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseEventBasedPackaging;                                    // 0x00B1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableAutomaticAssetSynchronization;                       // 0x00B2(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7OM[0x5];                                     // 0x00B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CommandletCommitMessage;                                   // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               UnrealCultureToWwiseCulture;                               // 0x00C8(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               AskedToUseNewAssetManagement;                              // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMultiCoreRendering;                                 // 0x0119(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MigratedEnableMultiCoreRendering;                          // 0x011A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FixupRedirectorsDuringMigration;                           // 0x011B(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVOZ[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0120(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0130(0x0010) (Config, Deprecated, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0PI[0x20];                                    // 0x0140(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}



};

// Class AkAudio.AkSettingsPerUser
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                              // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   WwiseMacInstallationPath;                                  // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     WaapiIPAddress;                                            // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           WaapiPort;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoSyncSelection;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OL0[0x1];                                     // 0x0065(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               SoundDataGenerationSkipLanguage;                           // 0x0066(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HT1[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}



};

// Class AkAudio.AkSlider
// 0x0458 (FullSize[0x0580] - InheritedSize[0x0128])
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x012C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07KN[0x4];                                     // 0x012C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSliderStyle                                WidgetStyle;                                               // 0x0140(0x0370) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X90L[0x3];                                     // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x04B4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x04C4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x04D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYEU[0x2];                                     // 0x04D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x04DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XWYB[0x3];                                     // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkPropertyToControl                        ThePropertyToControl;                                      // 0x04E0(0x0010) (Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                       ItemToControl;                                             // 0x04F0(0x0040) (Edit, Config, EditConst, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDropped;                                             // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                         // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NBNU[0x20];                                    // 0x0560(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct Fguid& itemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct Fguid GetAkSliderItemId();
};

// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
class UAkSpatialAudioVolume : public Uvolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                       // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                      LateReverb;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                            Room;                                                      // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}



};

// Class AkAudio.AkSpotReflector
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UAkSpotReflector : public Uactor
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                     // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EarlyReflectionAuxBusName;                                 // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                          AcousticTexture;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceScalingFactor;                                     // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              level;                                                     // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}



};

// Class AkAudio.AkStadiaInitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkStadiaInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkStadiaInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkQuailInitializationSettings
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UAkQuailInitializationSettings : public UAkStadiaInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkQuailInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkStadiaPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkStadiaPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkStadiaPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkQuailPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkQuailPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkStateValue
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAkStateValue : public UAkGroupValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkStateValue");
		return ptr;
	}



};

// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0040 (FullSize[0x0250] - InheritedSize[0x0210])
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	unsigned char                                      bEnableSurfaceReflectors : 1;                              // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTXG[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAkPoly>                             AcousticPolys;                                             // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffraction : 1;                                    // 0x0228(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                     // 0x0228(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS85[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      AssociatedRoom;                                            // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FL2I[0x18];                                    // 0x0238(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}



	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// Class AkAudio.AkSwitchInitializationSettings
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection   CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                          // 0x00C0(0x0038) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkSwitchPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSwitchPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkSwitchValue
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UAkSwitchValue : public UAkGroupValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkSwitchValue");
		return ptr;
	}



};

// Class AkAudio.AkTrigger
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAkTrigger : public UAkAudioType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkTrigger");
		return ptr;
	}



};

// Class AkAudio.AkTVOSInitializationSettings
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class UAkTVOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                             AudioSession;                                              // 0x0098(0x000C) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH81[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x00A8(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                          // 0x00D0(0x0034) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NULN[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkTVOSInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkTVOSPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkTVOSPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWaapiCalls
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}



	struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& CallBack, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int Id);
	bool STATIC_RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& CallBack);
	bool STATIC_RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& CallBack);
	int STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	struct FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};

// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	struct FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// Class AkAudio.AkWaapiJsonManager
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}



	struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& target);
	struct FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	int STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& target);
	struct FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	struct FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};

// Class AkAudio.AkWaapiUriConv
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}



	struct FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	struct FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};

// Class AkAudio.AkWindowsInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkWin32PlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWin32PlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWin64PlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWin64PlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWindowsPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWindowsPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWinGDKInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkWinGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                            // 0x0030(0x0068) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWinGDKAdvancedInitializationSettings     AdvancedSettings;                                          // 0x00C0(0x0040) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWinGDKInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkWinAnvilInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWinAnvilInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkWinGDKPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWinGDKPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWinAnvilPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWinAnvilPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkWwiseTree
// 0x0040 (FullSize[0x0168] - InheritedSize[0x0128])
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH3E[0x20];                                    // 0x0148(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}



	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};

// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (FullSize[0x0188] - InheritedSize[0x0128])
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemDragged;                                             // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AFZ[0x40];                                    // 0x0148(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkXboxOneGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0030(0x0060) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKApuHeapInitializationSettings  ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYQT[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOneGDKInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOneAnvilInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOneGDKPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOneAnvilPlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkXboxOneInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkXboxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0030(0x0060) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings     ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings    AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2L3G[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkXboxOnePlatformInfo
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXboxOnePlatformInfo");
		return ptr;
	}



};

// Class AkAudio.AkXSXInitializationSettings
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UAkXSXInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                            // 0x0030(0x0060) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXApuHeapInitializationSettings         ApuHeapSettings;                                           // 0x0090(0x0008) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                     // 0x0098(0x0028) (Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXAdvancedInitializationSettings        AdvancedSettings;                                          // 0x00C0(0x003C) (Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7N6S[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkXSXInitializationSettings");
		return ptr;
	}



	void MigrateMultiCoreRendering(bool newValue);
};

// Class AkAudio.AkMPXInitializationSettings
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.AkMPXInitializationSettings");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                    // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                            // 0x00A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_70C5[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     param;                                                     // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayOnReverse : 1;                                        // 0x00A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                             // 0x00A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I9M0[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0VH[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}



};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MR0H[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_G2W3[0x40];                                    // 0x00E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               event;                                                     // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RetriggerEvent;                                            // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0G2L[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScrubTailLengthMs;                                         // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               StopAtSectionEnd;                                          // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6RRJ[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0140(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EQZD[0x20];                                    // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSourceDuration;                                         // 0x0170(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O91H[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MaxDurationSourceID;                                       // 0x0178(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KBKB[0x48];                                    // 0x0188(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkTrack
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsAMasterTrack : 1;                                       // 0x0070(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W47X[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0168 (FullSize[0x0250] - InheritedSize[0x00E8])
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                                     RTPC;                                                      // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     name;                                                      // 0x00F0(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                                  FloatCurve;                                                // 0x0100(0x0080) (Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                           // 0x0180(0x0030) (Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                     RTPCChannel;                                               // 0x01B0(0x00A0) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}



};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}



};

// Class AkAudio.PostEventAsync
// 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D361[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.PostEventAsync");
		return ptr;
	}



	class UPostEventAsync* STATIC_PostEventAsync(class UObject* worldContextObject, class UAkAudioEvent* akEvent, class Uactor* actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// Class AkAudio.PostEventAtLocationAsync
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBIT[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AkAudio.PostEventAtLocationAsync");
		return ptr;
	}



	class UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(class UObject* worldContextObject, class UAkAudioEvent* akEvent, const struct Fvector& location, const struct FRotator& Orientation);
	void PollPostEventFuture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
