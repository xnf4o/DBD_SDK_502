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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ULandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName                                       parameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ULandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName                                       parameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Utexture*                                    Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ULandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName                                       parameterName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ULandscapeProxy_EditorSetLandscapeMaterial_Params
{
	class UmaterialInterface*                          NewLandscapeMaterial;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ULandscapeProxy_EditorApplySpline_Params
{
	class UsplineComponent*                            InSplineComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndWidth;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartSideFalloff;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndSideFalloff;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartRoll;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubdivisions;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRaiseHeights;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLowerHeights;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
struct ULandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
{
	bool                                               InComponentScreenSizeToUseSubSections;                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
struct ULandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
{
	float                                              InUseTessellationComponentScreenSizeFalloff;               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
struct ULandscapeProxy_ChangeTessellationComponentScreenSize_Params
{
	float                                              InTessellationComponentScreenSize;                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ULandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ULandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
	float                                              InComponentScreenSizeToUseSubSections;                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ULandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
};

// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ULandscapeBlueprintBrushBase_Render_Params
{
	bool                                               InIsHeightmap;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      InCombinedResult;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InWeightmapLayerName;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ULandscapeBlueprintBrushBase_Initialize_Params
{
	struct FTransform                                  InLandscapeTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntPoint                                   InLandscapeSize;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   InLandscapeRenderTargetSize;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct ULandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
{
	TArray<class UTexture2D*>                          OutStreamableAssets;                                       // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
	int                                                InIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
	struct Fvector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InPaintLayerName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
	struct Fvector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
	class ULandscapeComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
	TArray<class USplineMeshComponent*>                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
