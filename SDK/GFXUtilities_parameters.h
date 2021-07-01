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

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
struct UBatchMeshCommands_UpdateMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
struct UBatchMeshCommands_SetVectorParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     newValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
struct UBatchMeshCommands_SetTextureParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Utexture*                                    newTexture;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
struct UBatchMeshCommands_SetStencilIntegerScalarParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                newValue;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
struct UBatchMeshCommands_SetScalarParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              newValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
struct UBatchMeshCommands_SetRenderInMainPass_Params
{
	bool                                               inRenderInMainPass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
struct UBatchMeshCommands_SetRenderInCustomDepth_Params
{
	bool                                               renderInCustomDepth;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
struct UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params
{
	bool                                               renderInCustomColour;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
struct UBatchMeshCommands_SetReceivesDecals_Params
{
	bool                                               receivesDecals;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetMaterial
struct UBatchMeshCommands_SetMaterial_Params
{
	struct FString                                     groupName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
struct UBatchMeshCommands_SetLightingChannelForAllMeshes_Params
{
	struct FlightingChannels                           lightingChannels;                                          // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
struct UBatchMeshCommands_SetCustomDepthStencilValue_Params
{
	int                                                stencilValue;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetColourParameter
struct UBatchMeshCommands_SetColourParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                newValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
struct UBatchMeshCommands_SetCastCinematicShadows_Params
{
	bool                                               castCinematicShadows;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
struct UBatchMeshCommands_SetAllToSameMaterial_Params
{
	class UmaterialInterface*                          materialInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.ResetMaterials
struct UBatchMeshCommands_ResetMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
struct UBatchMeshCommands_CopyFirstScalarParameter_Params
{
	struct FName                                       parameterName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              outValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
struct UBatchMeshCommands_BatchSetVisibility_Params
{
	bool                                               bNewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
struct UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params
{
	bool                                               skip;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
struct UBatchMeshCommands_BatchSetComponentTickEnabled_Params
{
	bool                                               enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
struct UClippableProviderComponent_SetIgnoredPrimitives_Params
{
	TArray<class UprimitiveComponent*>                 ignoredPrimitives;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
struct UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Params
{
	float                                              contributionFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
struct UDBDReflectionCaptureSpawnerComponent_SetBrightness_Params
{
	float                                              brightness;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.GFXUtilities.ActivateVFX
struct UGFXUtilities_ActivateVFX_Params
{
	class UskeletalMeshComponent*                      skeletalMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               active;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
struct ULightIntensityTimelineComponent_SetRandomizeLength_Params
{
	bool                                               isRandom;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength
struct ULightIntensityTimelineComponent_SetMinLength_Params
{
	float                                              newMinValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
struct ULightIntensityTimelineComponent_SetMaxLength_Params
{
	float                                              newMaxValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
struct ULightIntensityTimelineComponent_SetLightToMaxValue_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
struct ULightIntensityTimelineComponent_SetLightCurve_Params
{
	class UCurveFloat*                                 lightcurve;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.reset
struct ULightIntensityTimelineComponent_reset_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
struct ULightIntensityTimelineComponent_RegisterForTick_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
struct ULightIntensityTimelineComponent_DeactivateTick_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
struct ULightIntensityTimelineComponent_AddMaterialHelper_Params
{
	class UMaterialHelper*                             matHelper;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       propName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddLight
struct ULightIntensityTimelineComponent_AddLight_Params
{
	class ULightComponent*                             light;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.MaterialHelper.RefreshMeshes
struct UMaterialHelper_RefreshMeshes_Params
{
};

// Function GFXUtilities.MaterialHelper.RefreshMesh
struct UMaterialHelper_RefreshMesh_Params
{
	class UMeshComponent*                              mc;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.OuterlineComponent.SetIntensity
struct UOuterlineComponent_SetIntensity_Params
{
	float                                              intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
