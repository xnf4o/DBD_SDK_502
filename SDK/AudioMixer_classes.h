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

// Class AudioMixer.SynthComponent
// 0x04E0 (FullSize[0x06F0] - InheritedSize[0x0210])
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0210(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                               // 0x0210(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpatialization : 1;                                  // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAttenuation : 1;                                  // 0x0210(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNO3[0x3];                                     // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOutputToBusOnly : 1;                                      // 0x0214(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RFHD[0x3];                                     // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                      // 0x0220(0x03A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // 0x05C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ConcurrencySet[0x50];                                      // 0x05C8(0x0050) UNKNOWN PROPERTY: SetProperty
	class USoundClass*                                 SoundClass;                                                // 0x0618(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                         // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                            SoundSubmix;                                               // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                          // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                  // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulation                            Modulation;                                                // 0x0650(0x0010) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                         // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                            // 0x0670(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPreviewSound : 1;                                       // 0x0670(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JFS[0x3];                                     // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EnvelopeFollowerAttackTime;                                // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerReleaseTime;                               // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QWZ7[0x4];                                     // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAudioEnvelopeValue;                                      // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C60H[0x20];                                    // 0x0690(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USynthSound*                                 Synth;                                                     // 0x06B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             AudioComponent;                                            // 0x06B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PD8L[0x30];                                    // 0x06C0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}



	void stop();
	void start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	bool IsPlaying();
};

// Class AudioMixer.AudioGenerator
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData_8DP5[0x80];                                    // 0x0030(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}



};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}



	float STATIC_TrimAudioCache(float InMegabytesToFree);
	class USoundWave* STATIC_StopRecordingOutput(class UObject* worldContextObject, Engine_EAudioRecordingExportType ExportType, const struct FString& name, const struct FString& path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void STATIC_StopAnalyzingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject* worldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void STATIC_StartAnalyzingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToAnalyze, AudioMixer_EFFTSize FFTSize, AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod, AudioMixer_EFFTWindowType WindowType, float HopSize);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToPause);
	void STATIC_ReplaceSoundEffectSubmix(class UObject* worldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex);
	void STATIC_RemoveSubmixEffectPreset(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* worldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion);
	void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void STATIC_PauseRecordingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToPause);
	void STATIC_GetPhaseForFrequencies(class UObject* worldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject* worldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void STATIC_ClearSubmixEffects(class UObject* worldContextObject, class USoundSubmix* SoundSubmix);
	void STATIC_ClearMasterSubmixEffects(class UObject* worldContextObject);
	int STATIC_AddSubmixEffect(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_AddSourceEffectToPresetChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* worldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_P5AR[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectDynamicsProcessorSettings      settings;                                                  // 0x00C0(0x0050) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_QMMP[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectSubmixEQSettings               settings;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (FullSize[0x00D8] - InheritedSize[0x0048])
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_TCAW[0x5C];                                    // 0x0048(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectReverbSettings                 settings;                                                  // 0x00A4(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}



	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_4NAI[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectReverbFastSettings             settings;                                                  // 0x00A8(0x0038) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}



	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
};

// Class AudioMixer.SynthSound
// 0x0020 (FullSize[0x0390] - InheritedSize[0x0370])
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                      // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3O2O[0x18];                                    // 0x0378(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
