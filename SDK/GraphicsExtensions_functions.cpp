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

// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void UGMAdaptiveShadowMapControllerComponent::RebuildAtlas()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas");

	UGMAdaptiveShadowMapControllerComponent_RebuildAtlas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGMAdaptiveShadowMapControllerComponent::IsControllerDonePreallocatingTiles()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles");

	UGMAdaptiveShadowMapControllerComponent_IsControllerDonePreallocatingTiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGMAdaptiveShadowMapControllerComponent::GetTileSize()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize");

	UGMAdaptiveShadowMapControllerComponent_GetTileSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGMAdaptiveShadowMapControllerComponent::GetTileCountY()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY");

	UGMAdaptiveShadowMapControllerComponent_GetTileCountY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGMAdaptiveShadowMapControllerComponent::GetTileCountX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX");

	UGMAdaptiveShadowMapControllerComponent_GetTileCountX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void UGMAdaptiveShadowMapControllerComponent::DumpDebugInfo()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo");

	UGMAdaptiveShadowMapControllerComponent_DumpDebugInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 BoundingSphereCenter           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BoundingSphereRadius           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGMAdaptiveShadowMapSourceComponent::SetLightRadiusWithBounds(const struct Fvector& BoundingSphereCenter, float BoundingSphereRadius)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds");

	UGMAdaptiveShadowMapSourceComponent_SetLightRadiusWithBounds_Params params;
	params.BoundingSphereCenter = BoundingSphereCenter;
	params.BoundingSphereRadius = BoundingSphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
