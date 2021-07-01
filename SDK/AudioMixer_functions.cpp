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

// Function AudioMixer.SynthComponent.stop
// (Final, Native, Public, BlueprintCallable)
void USynthComponent::stop()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.stop");

	USynthComponent_stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SynthComponent.start
// (Final, Native, Public, BlueprintCallable)
void USynthComponent::start()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.start");

	USynthComponent_start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	USynthComponent_SetVolumeMultiplier_Params params;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmixBase*        Submix                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SendLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	USynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponent::IsPlaying()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	USynthComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InMegabytesToFree              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAudioMixerBlueprintLibrary::STATIC_TrimAudioCache(float InMegabytesToFree)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache");

	UAudioMixerBlueprintLibrary_TrimAudioCache_Params params;
	params.InMegabytesToFree = InMegabytesToFree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_EAudioRecordingExportType ExportType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 path                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundWave*              ExistingSoundWaveToOverwrite   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundWave*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundWave* UAudioMixerBlueprintLibrary::STATIC_StopRecordingOutput(class UObject* worldContextObject, Engine_EAudioRecordingExportType ExportType, const struct FString& name, const struct FString& path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	UAudioMixerBlueprintLibrary_StopRecordingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.ExportType = ExportType;
	params.name = name;
	params.path = path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToStopAnalyzing          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_StopAnalyzingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput");

	UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ExpectedDuration               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToRecord                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_StartRecordingOutput(class UObject* worldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	UAudioMixerBlueprintLibrary_StartRecordingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AudioMixer_EFFTSize            FFTSize                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AudioMixer_EFFTWindowType      WindowType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HopSize                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_StartAnalyzingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToAnalyze, AudioMixer_EFFTSize FFTSize, AudioMixer_EFFTPeakInterpolationMethod InterpolationMethod, AudioMixer_EFFTWindowType WindowType, float HopSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput");

	UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixToAnalyze = SubmixToAnalyze;
	params.FFTSize = FFTSize;
	params.InterpolationMethod = InterpolationMethod;
	params.WindowType = WindowType;
	params.HopSize = HopSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBypassed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.worldContextObject = worldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_ResumeRecordingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput");

	UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            InSoundSubmix                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_ReplaceSoundEffectSubmix(class UObject* worldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix");

	UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params params;
	params.worldContextObject = worldContextObject;
	params.InSoundSubmix = InSoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SubmixChainIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex");

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params params;
	params.worldContextObject = worldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixChainIndex = SubmixChainIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_RemoveSubmixEffectPreset(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset");

	UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params params;
	params.worldContextObject = worldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.worldContextObject = worldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* worldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*              SoundWave                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnLoadCompletion               (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback");

	UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params params;
	params.SoundWave = SoundWave;
	params.OnLoadCompletion = OnLoadCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback");

	UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToPause                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_PauseRecordingOutput(class UObject* worldContextObject, class USoundSubmix* SubmixToPause)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput");

	UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixToPause = SubmixToPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Phases                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_GetPhaseForFrequencies(class UObject* worldContextObject, TArray<float> Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies");

	UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params params;
	params.worldContextObject = worldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Phases != nullptr)
		*Phases = params.Phases;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.worldContextObject = worldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Frequencies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  Magnitudes                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SubmixToAnalyze                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_GetMagnitudeForFrequencies(class UObject* worldContextObject, TArray<float> Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies");

	UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params params;
	params.worldContextObject = worldContextObject;
	params.Frequencies = Frequencies;
	params.SubmixToAnalyze = SubmixToAnalyze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Magnitudes != nullptr)
		*Magnitudes = params.Magnitudes;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_ClearSubmixEffects(class UObject* worldContextObject, class USoundSubmix* SoundSubmix)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects");

	UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params params;
	params.worldContextObject = worldContextObject;
	params.SoundSubmix = SoundSubmix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSubmix*            SoundSubmix                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAudioMixerBlueprintLibrary::STATIC_AddSubmixEffect(class UObject* worldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect");

	UAudioMixerBlueprintLibrary_AddSubmixEffect_Params params;
	params.worldContextObject = worldContextObject;
	params.SoundSubmix = SoundSubmix;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSourcePresetChain* PresetChain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSourceEffectChainEntry Entry                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* worldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.worldContextObject = worldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* worldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.worldContextObject = worldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings settings                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& settings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	USubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.settings = settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");

	USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params params;
	params.Submix = Submix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	USubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	USubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DryLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");

	USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;
	params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbFastSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USubmixEffectReverbFastPreset::SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");

	USubmixEffectReverbFastPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
