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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& parameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ULandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params;
	params.parameterName = parameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Utexture*                Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& parameterName, class Utexture* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ULandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params;
	params.parameterName = parameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   parameterName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& parameterName, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ULandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params;
	params.parameterName = parameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UmaterialInterface*      NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::EditorSetLandscapeMaterial(class UmaterialInterface* NewLandscapeMaterial)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ULandscapeProxy_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UsplineComponent*        InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartWidth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndWidth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartRoll                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndRoll                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::EditorApplySpline(class UsplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ULandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ULandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ULandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ULandscapeProxy_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ULandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ULandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)
void ULandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate");

	ULandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.Render
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           InIsHeightmap                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  InCombinedResult               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   InWeightmapLayerName           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* ULandscapeBlueprintBrushBase::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Render");

	ULandscapeBlueprintBrushBase_Render_Params params;
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;
	params.InWeightmapLayerName = InWeightmapLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              InLandscapeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint               InLandscapeSize                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint               InLandscapeRenderTargetSize    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.Initialize");

	ULandscapeBlueprintBrushBase_Initialize_Params params;
	params.InLandscapeTransform = InLandscapeTransform;
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      OutStreamableAssets            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<class UTexture2D*>* OutStreamableAssets)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies");

	ULandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStreamableAssets != nullptr)
		*OutStreamableAssets = params.OutStreamableAssets;

}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   InPaintLayerName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct Fvector& InLocation, const struct FName& InPaintLayerName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params;
	params.InLocation = InLocation;
	params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject* PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct Fvector& InLocation, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params;
	params.InLocation = InLocation;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscapeComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USplineMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
