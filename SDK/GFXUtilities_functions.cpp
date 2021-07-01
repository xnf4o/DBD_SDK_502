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

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
// (Final, Native, Public, BlueprintCallable)
void UBatchMeshCommands::UpdateMaterials()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.UpdateMaterials");

	UBatchMeshCommands_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 newValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetVectorParameter(const struct FName& parameterName, const struct Fvector& newValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetVectorParameter");

	UBatchMeshCommands_SetVectorParameter_Params params;
	params.parameterName = parameterName;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Utexture*                newTexture                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetTextureParameter(const struct FName& parameterName, class Utexture* newTexture)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetTextureParameter");

	UBatchMeshCommands_SetTextureParameter_Params params;
	params.parameterName = parameterName;
	params.newTexture = newTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            newValue                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetStencilIntegerScalarParameter(const struct FName& parameterName, int newValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter");

	UBatchMeshCommands_SetStencilIntegerScalarParameter_Params params;
	params.parameterName = parameterName;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          newValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetScalarParameter(const struct FName& parameterName, float newValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetScalarParameter");

	UBatchMeshCommands_SetScalarParameter_Params params;
	params.parameterName = parameterName;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           inRenderInMainPass             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInMainPass(bool inRenderInMainPass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass");

	UBatchMeshCommands_SetRenderInMainPass_Params params;
	params.inRenderInMainPass = inRenderInMainPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           renderInCustomDepth            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInCustomDepth(bool renderInCustomDepth)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth");

	UBatchMeshCommands_SetRenderInCustomDepth_Params params;
	params.renderInCustomDepth = renderInCustomDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           renderInCustomColour           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetRenderInCustomColourNoDepth(bool renderInCustomColour)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth");

	UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params params;
	params.renderInCustomColour = renderInCustomColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           receivesDecals                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetReceivesDecals(bool receivesDecals)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetReceivesDecals");

	UBatchMeshCommands_SetReceivesDecals_Params params;
	params.receivesDecals = receivesDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 groupName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetMaterial(const struct FString& groupName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetMaterial");

	UBatchMeshCommands_SetMaterial_Params params;
	params.groupName = groupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FlightingChannels       lightingChannels               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetLightingChannelForAllMeshes(const struct FlightingChannels& lightingChannels)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes");

	UBatchMeshCommands_SetLightingChannelForAllMeshes_Params params;
	params.lightingChannels = lightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            stencilValue                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetCustomDepthStencilValue(int stencilValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue");

	UBatchMeshCommands_SetCustomDepthStencilValue_Params params;
	params.stencilValue = stencilValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetColourParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            newValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetColourParameter(const struct FName& parameterName, const struct FLinearColor& newValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetColourParameter");

	UBatchMeshCommands_SetColourParameter_Params params;
	params.parameterName = parameterName;
	params.newValue = newValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           castCinematicShadows           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetCastCinematicShadows(bool castCinematicShadows)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows");

	UBatchMeshCommands_SetCastCinematicShadows_Params params;
	params.castCinematicShadows = castCinematicShadows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UmaterialInterface*      materialInterface              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::SetAllToSameMaterial(class UmaterialInterface* materialInterface)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial");

	UBatchMeshCommands_SetAllToSameMaterial_Params params;
	params.materialInterface = materialInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.ResetMaterials
// (Final, Native, Public, BlueprintCallable)
void UBatchMeshCommands::ResetMaterials()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.ResetMaterials");

	UBatchMeshCommands_ResetMaterials_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          outValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBatchMeshCommands::CopyFirstScalarParameter(const struct FName& parameterName, float* outValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter");

	UBatchMeshCommands_CopyFirstScalarParameter_Params params;
	params.parameterName = parameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outValue != nullptr)
		*outValue = params.outValue;


	return params.ReturnValue;
}


// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.BatchSetVisibility");

	UBatchMeshCommands_BatchSetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           skip                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetSkipComponentAndChildrenTransformUpdate(bool skip)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate");

	UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params params;
	params.skip = skip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBatchMeshCommands::BatchSetComponentTickEnabled(bool enabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled");

	UBatchMeshCommands_BatchSetComponentTickEnabled_Params params;
	params.enabled = enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UprimitiveComponent*> ignoredPrimitives              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClippableProviderComponent::SetIgnoredPrimitives(TArray<class UprimitiveComponent*> ignoredPrimitives)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives");

	UClippableProviderComponent_SetIgnoredPrimitives_Params params;
	params.ignoredPrimitives = ignoredPrimitives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          contributionFactor             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDReflectionCaptureSpawnerComponent::SetContributionFactor(float contributionFactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor");

	UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Params params;
	params.contributionFactor = contributionFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          brightness                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDReflectionCaptureSpawnerComponent::SetBrightness(float brightness)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness");

	UDBDReflectionCaptureSpawnerComponent_SetBrightness_Params params;
	params.brightness = brightness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.GFXUtilities.ActivateVFX
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UskeletalMeshComponent*  skeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFXUtilities::STATIC_ActivateVFX(class UskeletalMeshComponent* skeletalMeshComponent, bool active)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.GFXUtilities.ActivateVFX");

	UGFXUtilities_ActivateVFX_Params params;
	params.skeletalMeshComponent = skeletalMeshComponent;
	params.active = active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isRandom                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetRandomizeLength(bool isRandom)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength");

	ULightIntensityTimelineComponent_SetRandomizeLength_Params params;
	params.isRandom = isRandom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newMinValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetMinLength(float newMinValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength");

	ULightIntensityTimelineComponent_SetMinLength_Params params;
	params.newMinValue = newMinValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newMaxValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetMaxLength(float newMaxValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength");

	ULightIntensityTimelineComponent_SetMaxLength_Params params;
	params.newMaxValue = newMaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
// (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::SetLightToMaxValue()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue");

	ULightIntensityTimelineComponent_SetLightToMaxValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*             lightcurve                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::SetLightCurve(class UCurveFloat* lightcurve)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve");

	ULightIntensityTimelineComponent_SetLightCurve_Params params;
	params.lightcurve = lightcurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.reset
// (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::reset()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.reset");

	ULightIntensityTimelineComponent_reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
// (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::RegisterForTick()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick");

	ULightIntensityTimelineComponent_RegisterForTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
// (Final, Native, Public, BlueprintCallable)
void ULightIntensityTimelineComponent::DeactivateTick()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick");

	ULightIntensityTimelineComponent_DeactivateTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialHelper*         matHelper                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   propName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::AddMaterialHelper(class UMaterialHelper* matHelper, const struct FName& propName, float multiplier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper");

	ULightIntensityTimelineComponent_AddMaterialHelper_Params params;
	params.matHelper = matHelper;
	params.propName = propName;
	params.multiplier = multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.LightIntensityTimelineComponent.AddLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULightComponent*         light                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightIntensityTimelineComponent::AddLight(class ULightComponent* light, float multiplier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.LightIntensityTimelineComponent.AddLight");

	ULightIntensityTimelineComponent_AddLight_Params params;
	params.light = light;
	params.multiplier = multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.MaterialHelper.RefreshMeshes
// (Final, Native, Public, BlueprintCallable)
void UMaterialHelper::RefreshMeshes()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.MaterialHelper.RefreshMeshes");

	UMaterialHelper_RefreshMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.MaterialHelper.RefreshMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          mc                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMaterialHelper::RefreshMesh(class UMeshComponent* mc)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.MaterialHelper.RefreshMesh");

	UMaterialHelper_RefreshMesh_Params params;
	params.mc = mc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GFXUtilities.OuterlineComponent.SetIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOuterlineComponent::SetIntensity(float intensity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GFXUtilities.OuterlineComponent.SetIntensity");

	UOuterlineComponent_SetIntensity_Params params;
	params.intensity = intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
