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

// Function AkAudio.AkAcousticPortal.OpenPortal
struct UAkAcousticPortal_OpenPortal_Params
{
};

// Function AkAudio.AkAcousticPortal.GetCurrentState
struct UAkAcousticPortal_GetCurrentState_Params
{
	AkAudio_EAkAcousticPortalState                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAcousticPortal.ClosePortal
struct UAkAcousticPortal_ClosePortal_Params
{
};

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct UAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct UAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
struct UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMinimumDuration
struct UAkAudioEvent_GetMinimumDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMaximumDuration
struct UAkAudioEvent_GetMaximumDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
struct UAkAudioEvent_GetMaxAttenuationRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetIsInfinite
struct UAkAudioEvent_GetIsInfinite_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.stop
struct UAkGameObject_stop_Params
{
};

// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
struct UAkGameObject_PostAssociatedAkEventAsync_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAssociatedAkEvent
struct UAkGameObject_PostAssociatedAkEvent_Params
{
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAkEventAsync
struct UAkGameObject_PostAkEventAsync_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAkEvent
struct UAkGameObject_PostAkEvent_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     in_EventName;                                              // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
	class UAkAuxBus*                                   AuxBus;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BusSendGain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPathLength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpotReflectors;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	class UAkSwitchValue*                              SwitchValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SwitchGroup;                                               // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SwitchState;                                               // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterpolationTimeMs;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RTPC;                                                      // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
	TArray<class UAkComponent*>                        Listeners;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
struct UAkComponent_SetEarlyReflectionsVolume_Params
{
	float                                              SendVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
struct UAkComponent_SetEarlyReflectionsAuxBus_Params
{
	struct FString                                     AuxBusName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	class UAkTrigger*                                  TriggerValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     trigger;                                                   // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
struct UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params
{
	int                                                PlayingID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
struct UAkComponent_PostAkEventAndWaitForEndAsync_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkComponent_PostAkEventAndWaitForEnd_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     in_EventName;                                              // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.GetRTPCValue
struct UAkComponent_GetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             InputValueType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             OutputValueType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RTPC;                                                      // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
struct UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetIsChecked
struct UAkCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetCheckedState
struct UAkCheckBox_SetCheckedState_Params
{
	SlateCore_ECheckBoxState                           InCheckedState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetAkItemId
struct UAkCheckBox_SetAkItemId_Params
{
	struct Fguid                                       itemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetAkBoolProperty
struct UAkCheckBox_SetAkBoolProperty_Params
{
	struct FString                                     ItemProperty;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.isPressed
struct UAkCheckBox_isPressed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.IsChecked
struct UAkCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetCheckedState
struct UAkCheckBox_GetCheckedState_Params
{
	SlateCore_ECheckBoxState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetAkProperty
struct UAkCheckBox_GetAkProperty_Params
{
	struct FString                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetAkItemId
struct UAkCheckBox_GetAkItemId_Params
{
	struct Fguid                                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct UAkGameplayStatics_UseEarlyReflections_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                                   AuxBus;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BusSendGain;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPathLength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpotReflectors;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
	struct FString                                     BankName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBankAsync
struct UAkGameplayStatics_UnloadBankAsync_Params
{
	class UAkAudioBank*                                bank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BankUnloadedCallback;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBank
struct UAkGameplayStatics_UnloadBank_Params
{
	class UAkAudioBank*                                bank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BankName;                                                  // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StopProfilerCapture
struct UAkGameplayStatics_StopProfilerCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopOutputCapture
struct UAkGameplayStatics_StopOutputCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StopAll
struct UAkGameplayStatics_StopAll_Params
{
};

// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
	struct FString                                     FileName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
	struct FString                                     FileName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDestroy;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
	class UAkSwitchValue*                              SwitchValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwitchGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwitchState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
	class UAkStateValue*                               StateValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       state;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
struct UAkGameplayStatics_SetSpeakerAngles_Params
{
	TArray<float>                                      SpeakerAngles;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceShareset;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterpolationTimeMs;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RTPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
struct UAkGameplayStatics_SetReflectionsOrder_Params
{
	int                                                Order;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RefreshPaths;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetPanningRule
struct UAkGameplayStatics_SetPanningRule_Params
{
	AkAudio_EPanningRule                               PanRule;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
{
	float                                              ScalingFactor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
	float                                              RefreshInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultiplePositions
struct UAkGameplayStatics_SetMultiplePositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkChannelMask>                      ChannelMasks;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<AkAudio_EAkChannelConfiguration>            ChannelMasks;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
struct UAkGameplayStatics_SetCurrentAudioCultureAsync_Params
{
	struct FString                                     AudioCulture;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Completed;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
struct UAkGameplayStatics_SetCurrentAudioCulture_Params
{
	struct FString                                     AudioCulture;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetBusConfig
struct UAkGameplayStatics_SetBusConfig_Params
{
	struct FString                                     BusName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkChannelConfiguration                    ChannelConfiguration;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
	class UAkTrigger*                                  TriggerValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       trigger;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAttached
struct UAkGameplayStatics_PostEventAttached_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
struct UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
struct UAkGameplayStatics_PostAndWaitForEndOfEvent_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadInitBank
struct UAkGameplayStatics_LoadInitBank_Params
{
};

// Function AkAudio.AkGameplayStatics.LoadBanks
struct UAkGameplayStatics_LoadBanks_Params
{
	TArray<class UAkAudioBank*>                        SoundBanks;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SynchronizeSoundBanks;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
	struct FString                                     BankName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBankAsync
struct UAkGameplayStatics_LoadBankAsync_Params
{
	class UAkAudioBank*                                bank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BankLoadedCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBank
struct UAkGameplayStatics_LoadBank_Params
{
	class UAkAudioBank*                                bank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BankName;                                                  // (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.IsGame
struct UAkGameplayStatics_IsGame_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.IsEditor
struct UAkGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
struct UAkGameplayStatics_GetSpeakerAngles_Params
{
	TArray<float>                                      SpeakerAngles;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightAngle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceShareset;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetRTPCValue
struct UAkGameplayStatics_GetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             InputValueType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             OutputValueType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RTPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
struct UAkGameplayStatics_GetCurrentAudioCulture_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
struct UAkGameplayStatics_GetAvailableAudioCultures_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
struct UAkGameplayStatics_GetAkMediaAssetUserData_Params
{
	class UAkMediaAsset*                               Instance;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      type;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ComponentCreated;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
struct UAkGameplayStatics_GetAkAudioTypeUserData_Params
{
	class UAkAudioType*                                Instance;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      type;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
struct UAkGameplayStatics_ExecuteActionOnPlayingID_Params
{
	AkAudio_EAkActionOnEventType                       ActionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkCurveInterpolation                      FadeCurve;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
struct UAkGameplayStatics_ExecuteActionOnEvent_Params
{
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkActionOnEventType                       ActionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkCurveInterpolation                      FadeCurve;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ClearBanks
struct UAkGameplayStatics_ClearBanks_Params
{
};

// Function AkAudio.AkGameplayStatics.CancelEventCallback
struct UAkGameplayStatics_CancelEventCallback_Params
{
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
	struct FString                                     MarkerText;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetType
struct UAkMIDIEventCallbackInfo_GetType_Params
{
	AkAudio_EAkMidiEventType                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
struct UAkMIDIEventCallbackInfo_GetProgramChange_Params
{
	struct FAkMidiProgramChange                        AsProgramChange;                                           // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
struct UAkMIDIEventCallbackInfo_GetPitchBend_Params
{
	struct FAkMidiPitchBend                            AsPitchBend;                                               // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
struct UAkMIDIEventCallbackInfo_GetNoteOn_Params
{
	struct FAkMidiNoteOnOff                            AsNoteOn;                                                  // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
struct UAkMIDIEventCallbackInfo_GetNoteOff_Params
{
	struct FAkMidiNoteOnOff                            AsNoteOff;                                                 // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
struct UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params
{
	struct FAkMidiNoteAftertouch                       AsNoteAftertouch;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
struct UAkMIDIEventCallbackInfo_GetGeneric_Params
{
	struct FAkMidiGeneric                              AsGeneric;                                                 // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
struct UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params
{
	struct FAkMidiChannelAftertouch                    AsChannelAftertouch;                                       // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
struct UAkMIDIEventCallbackInfo_GetChannel_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
struct UAkMIDIEventCallbackInfo_GetCc_Params
{
	struct FAkMidiCc                                   AsCc;                                                      // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGeometryComponent.UpdateGeometry
struct UAkGeometryComponent_UpdateGeometry_Params
{
};

// Function AkAudio.AkGeometryComponent.RemoveGeometry
struct UAkGeometryComponent_RemoveGeometry_Params
{
};

// Function AkAudio.AkGeometryComponent.ConvertMesh
struct UAkGeometryComponent_ConvertMesh_Params
{
};

// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
struct UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params
{
	struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl;                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params
{
	struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl;                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.SetSearchText
struct UAkItemBoolProperties_SetSearchText_Params
{
	struct FString                                     newText;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
struct UAkItemBoolProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.GetSearchText
struct UAkItemBoolProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params
{
	struct FAkPropertyToControl                        INAkPropertyToControl;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params
{
	struct FAkPropertyToControl                        INAkPropertyToControl;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.SetSearchText
struct UAkItemProperties_SetSearchText_Params
{
	struct FString                                     newText;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.GetSelectedProperty
struct UAkItemProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.GetSearchText
struct UAkItemProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
struct UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
struct UAkLuminInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
struct UAkMacInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
struct UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetValue
struct UAkSlider_SetValue_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetStepSize
struct UAkSlider_SetStepSize_Params
{
	float                                              InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetSliderHandleColor
struct UAkSlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetSliderBarColor
struct UAkSlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetLocked
struct UAkSlider_SetLocked_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetIndentHandle
struct UAkSlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetAkSliderItemProperty
struct UAkSlider_SetAkSliderItemProperty_Params
{
	struct FString                                     ItemProperty;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetAkSliderItemId
struct UAkSlider_SetAkSliderItemId_Params
{
	struct Fguid                                       itemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetValue
struct UAkSlider_GetValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetAkSliderItemProperty
struct UAkSlider_GetAkSliderItemProperty_Params
{
	struct FString                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetAkSliderItemId
struct UAkSlider_GetAkSliderItemId_Params
{
	struct Fguid                                       ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
struct UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Unsubscribe
struct UAkWaapiCalls_Unsubscribe_Params
{
	struct FAkWaapiSubscriptionId                      SubscriptionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UnsubscriptionDone;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
struct UAkWaapiCalls_SubscribeToWaapi_Params
{
	struct FAkWaapiUri                                 WaapiUri;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiOptions;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             CallBack;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkWaapiSubscriptionId                      SubscriptionId;                                            // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SubscriptionDone;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.SetSubscriptionID
struct UAkWaapiCalls_SetSubscriptionID_Params
{
	struct FAkWaapiSubscriptionId                      Subscription;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
struct UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params
{
	struct FScriptDelegate                             CallBack;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
struct UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params
{
	struct FScriptDelegate                             CallBack;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.GetSubscriptionID
struct UAkWaapiCalls_GetSubscriptionID_Params
{
	struct FAkWaapiSubscriptionId                      Subscription;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params
{
	struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params
{
	struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.CallWaapi
struct UAkWaapiCalls_CallWaapi_Params
{
	struct FAkWaapiUri                                 WaapiUri;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiArgs;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiOptions;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params
{
	struct FAkWaapiFieldNames                          INAkWaapiFieldNames;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params
{
	struct FAkWaapiFieldNames                          INAkWaapiFieldNames;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetStringField
struct UAkWaapiJsonManager_SetStringField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldValue;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetObjectField
struct UAkWaapiJsonManager_SetObjectField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          FieldValue;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetNumberField
struct UAkWaapiJsonManager_SetNumberField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              FieldValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetBoolField
struct UAkWaapiJsonManager_SetBoolField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               FieldValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
struct UAkWaapiJsonManager_SetArrayStringFields_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FieldStringValues;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
struct UAkWaapiJsonManager_SetArrayObjectFields_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>                  FieldObjectValues;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetStringField
struct UAkWaapiJsonManager_GetStringField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetObjectField
struct UAkWaapiJsonManager_GetObjectField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetNumberField
struct UAkWaapiJsonManager_GetNumberField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetIntegerField
struct UAkWaapiJsonManager_GetIntegerField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetBoolField
struct UAkWaapiJsonManager_GetBoolField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetArrayField
struct UAkWaapiJsonManager_GetArrayField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          target;                                                    // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>                  ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params
{
	struct FAKWaapiJsonObject                          INAKWaapiJsonObject;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params
{
	struct FAKWaapiJsonObject                          INAKWaapiJsonObject;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
struct UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params
{
	struct FAkWaapiUri                                 INAkWaapiUri;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
struct UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params
{
	struct FAkWaapiUri                                 INAkWaapiUri;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
struct UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.SetSearchText
struct UAkWwiseTree_SetSearchText_Params
{
	struct FString                                     newText;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.GetSelectedItem
struct UAkWwiseTree_GetSelectedItem_Params
{
	struct FAkWwiseObjectDetails                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.GetSearchText
struct UAkWwiseTree_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
struct UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               newValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAsync.PostEventAsync
struct UPostEventAsync_PostEventAsync_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostEventAsync*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAsync.PollPostEventFuture
struct UPostEventAsync_PollPostEventFuture_Params
{
};

// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
struct UPostEventAtLocationAsync_PostEventAtLocationAsync_Params
{
	class UObject*                                     worldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               akEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPostEventAtLocationAsync*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
struct UPostEventAtLocationAsync_PollPostEventFuture_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
