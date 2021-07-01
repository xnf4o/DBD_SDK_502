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

// Class Synthesis.ModularSynthPresetBank
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}



};

// Class Synthesis.ModularSynthLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}



	void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const struct FString& PresetName);
};

// Class Synthesis.ModularSynthComponent
// 0x06A0 (FullSize[0x0D90] - InheritedSize[0x06F0])
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                                // 0x06F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAGG[0x69C];                                   // 0x06F4(0x069C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}



	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(Synthesis_ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int OscIndex, Synthesis_ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int OscIndex, float Semitones);
	void SetOscPulsewidth(int OscIndex, float Pulsewidth);
	void SetOscOctave(int OscIndex, float Octave);
	void SetOscGainMod(int OscIndex, float OscGainMod);
	void SetOscGain(int OscIndex, float OscGain);
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod);
	void SetOscCents(int OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(Synthesis_ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(Synthesis_ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int LFOIndex, Synthesis_ESynthLFOType LFOType);
	void SetLFOPatch(int LFOIndex, Synthesis_ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int LFOIndex, Synthesis_ESynthLFOMode LFOMode);
	void SetLFOGainMod(int LFOIndex, float GainMod);
	void SetLFOGain(int LFOIndex, float Gain);
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(Synthesis_ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(Synthesis_ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(Synthesis_ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
};

// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_WZVA[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectBitCrusherSettings             settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectBitCrusherSettings& InSettings);
};

// Class Synthesis.SourceEffectChorusPreset
// 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_ADZZ[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectChorusSettings                 settings;                                                  // 0x0088(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectChorusSettings& InSettings);
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_L1DR[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectDynamicsProcessorSettings      settings;                                                  // 0x0098(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// Class Synthesis.EnvelopeFollowerListener
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UEnvelopeFollowerListener : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnEnvelopeFollowerUpdate;                                  // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LK8N[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}



};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_D9VQ[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectEnvelopeFollowerSettings       settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}



	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// Class Synthesis.SourceEffectEQPreset
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_OYSL[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectEQSettings                     settings;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectEQSettings& InSettings);
};

// Class Synthesis.SourceEffectFilterPreset
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_0UQF[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectFilterSettings                 settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_0L9P[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectFoldbackDistortionSettings     settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_7X7M[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectMidSideSpreaderSettings        settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// Class Synthesis.SourceEffectPannerPreset
// 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_MPEL[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectPannerSettings                 settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
};

// Class Synthesis.SourceEffectPhaserPreset
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_NOH0[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectPhaserSettings                 settings;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
};

// Class Synthesis.SourceEffectRingModulationPreset
// 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_N8HP[0x3C];                                    // 0x0048(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectRingModulationSettings         settings;                                                  // 0x0084(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0058 (FullSize[0x00A0] - InheritedSize[0x0048])
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_SAO2[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectSimpleDelaySettings            settings;                                                  // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
};

// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_TH7G[0x3C];                                    // 0x0048(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectStereoDelaySettings            settings;                                                  // 0x0084(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
};

// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_OWWV[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectWaveShaperSettings             settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
};

// Class Synthesis.AudioImpulseResponse
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                      ImpulseResponse;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumChannels;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SampleRate;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizationVolumeDb;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXQ6[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      IRData;                                                    // 0x0050(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		return ptr;
	}



};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectConvolutionReverbSettings      settings;                                                  // 0x0048(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UAudioImpulseResponse*                       ImpulseResponse;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESubmixEffectConvolutionReverbBlockSize  BlockSize;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHardwareAcceleration;                               // 0x0071(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPF2[0x4E];                                    // 0x0072(0x004E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// Class Synthesis.SubmixEffectDelayPreset
// 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_FS85[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectDelaySettings                  settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                           // 0x0088(0x000C) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3T1D[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float time);
	void SetDelay(float length);
	float GetMaxDelayInMilliseconds();
};

// Class Synthesis.SubmixEffectFilterPreset
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_557L[0x34];                                    // 0x0048(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectFilterSettings                 settings;                                                  // 0x007C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(Synthesis_ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(Synthesis_ESubmixFilterAlgorithm InAlgorithm);
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0048 (FullSize[0x0090] - InheritedSize[0x0048])
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_FTTF[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectFlexiverbSettings              settings;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
};

// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_I6J9[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectTapDelaySettings               settings;                                                  // 0x0088(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T5TI[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}



	void SetTap(int TapId, const struct FTapDelayInfo& TapInfo);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float time);
	void RemoveTap(int TapId);
	void GetTapIds(TArray<int>* TapIds);
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int* TapId);
};

// Class Synthesis.Synth2DSlider
// 0x03A0 (FullSize[0x04C8] - InheritedSize[0x0128])
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueY;                                                    // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueXDelegate;                                            // 0x0130(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OQ8Q[0x4];                                     // 0x0130(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             ValueYDelegate;                                            // 0x0144(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3S3X[0x4];                                     // 0x0144(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSynth2DSliderStyle                         WidgetStyle;                                               // 0x0158(0x02E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x0448(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x0449(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1DW[0x2];                                     // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x044C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0450(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJDV[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChangedX;                                           // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChangedY;                                           // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17B0[0x10];                                    // 0x04B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}



	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};

// Class Synthesis.GranularSynth
// 0x03C0 (FullSize[0x0AB0] - InheritedSize[0x06F0])
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                       // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QM01[0x3B8];                                   // 0x06F8(0x03B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}



	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, Synthesis_EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(Synthesis_EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// Class Synthesis.MonoWaveTableSynthPreset
// 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
class UMonoWaveTableSynthPreset : public UObject
{
public:
	struct FString                                     PresetName;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockKeyframesToGridBool : 1;                              // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KYDF[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LockKeyframesToGrid;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WaveTableResolution;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUE8[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRuntimeFloatCurve>                  WaveTable;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNormalizeWaveTables : 1;                                  // 0x0060(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X0IQ[0x117];                                   // 0x0061(0x0117) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		return ptr;
	}



};

// Class Synthesis.SynthComponentMonoWaveTable
// 0x0740 (FullSize[0x0E30] - InheritedSize[0x06F0])
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	struct FScriptMulticastDelegate                    OnTableAltered;                                            // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNumTablesChanged;                                        // 0x0700(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                             // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GZ14[0x718];                                   // 0x0718(0x0718) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		return ptr;
	}



	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(Synthesis_ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetLowPassFilterFrequency(float InNewFrequency);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int TableIndex, int KeyframeIndex, float newValue);
	bool SetCurveTangent(int TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(Synthesis_ECurveInterpolationType InterpolationType, int TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int GetNumTableEntries();
	int GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int TableIndex);
};

// Class Synthesis.SynthSamplePlayer
// 0x0130 (FullSize[0x0820] - InheritedSize[0x06F0])
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSampleLoaded;                                            // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSamplePlaybackProgress;                                  // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI7F[0x108];                                   // 0x0718(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}



	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, Synthesis_ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// Class Synthesis.SynthKnob
// 0x0320 (FullSize[0x0448] - InheritedSize[0x0128])
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                     // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                  // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseSpeed;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseFineTuneSpeed;                                        // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShowTooltipInfo : 1;                                       // 0x0138(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5ZC[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       parameterName;                                             // 0x0140(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ParameterUnits;                                            // 0x0158(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x0170(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UU6G[0x4];                                     // 0x0170(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_Z27S[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSynthKnobStyle                             WidgetStyle;                                               // 0x0188(0x0258) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x03E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_10UP[0x6];                                     // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6CW[0x10];                                    // 0x0438(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
