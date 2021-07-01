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

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (Final, Native, Public, BlueprintCallable)
void UFieldSystemComponent::ResetFieldSystem()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	UFieldSystemComponent_ResetFieldSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool enabled, const struct Fvector& position, const struct Fvector& direction, float radius, float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params;
	params.enabled = enabled;
	params.position = position;
	params.direction = direction;
	params.radius = radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStrainField(bool enabled, const struct Fvector& position, float radius, float Magnitude, int Iterations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	UFieldSystemComponent_ApplyStrainField_Params params;
	params.enabled = enabled;
	params.position = position;
	params.radius = radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyStayDynamicField(bool enabled, const struct Fvector& position, float radius)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	UFieldSystemComponent_ApplyStayDynamicField_Params params;
	params.enabled = enabled;
	params.position = position;
	params.radius = radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool enabled, const struct Fvector& position, float radius, float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params;
	params.enabled = enabled;
	params.position = position;
	params.radius = radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyRadialForce(bool enabled, const struct Fvector& position, float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	UFieldSystemComponent_ApplyRadialForce_Params params;
	params.enabled = enabled;
	params.position = position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldPhysicsType> target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    Metadata                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyPhysicsField(bool enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> target, class UFieldSystemMetaData* Metadata, class UFieldNodeBase* Field)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	UFieldSystemComponent_ApplyPhysicsField_Params params;
	params.enabled = enabled;
	params.target = target;
	params.Metadata = Metadata;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::ApplyLinearForce(bool enabled, const struct Fvector& direction, float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	UFieldSystemComponent_ApplyLinearForce_Params params;
	params.enabled = enabled;
	params.direction = direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldPhysicsType> target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*    Metadata                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFieldSystemComponent::AddFieldCommand(bool enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> target, class UFieldSystemMetaData* Metadata, class UFieldNodeBase* Field)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	UFieldSystemComponent_AddFieldCommand_Params params;
	params.enabled = enabled;
	params.target = target;
	params.Metadata = Metadata;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Iterations                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataIteration* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int Iterations)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	UFieldSystemMetaDataIteration_SetMetaDataIteration_Params params;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<FieldSystemCore_EFieldResolutionType> ResolutionType                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaDataProcessingResolution* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<FieldSystemCore_EFieldResolutionType> ResolutionType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params;
	params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformInteger*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformInteger* UUniformInteger::SetUniformInteger(int Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	UUniformInteger_SetUniformInteger_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InteriorValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ExteriorValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialIntMask*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialIntMask* URadialIntMask::SetRadialIntMask(float radius, const struct Fvector& position, int InteriorValue, int ExteriorValue, TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	URadialIntMask_SetRadialIntMask_Params params;
	params.radius = radius;
	params.position = position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformScalar*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	UUniformScalar_SetUniformScalar_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialFalloff*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float radius, const struct Fvector& position, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	URadialFalloff_SetRadialFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.radius = radius;
	params.position = position;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlaneFalloff*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float distance, const struct Fvector& position, const struct Fvector& normal, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	UPlaneFalloff_SetPlaneFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.distance = distance;
	params.position = position;
	params.normal = normal;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBoxFalloff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	UBoxFalloff_SetBoxFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          MinRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UNoiseField*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	UNoiseField_SetNoiseField_Params params;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformVector*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct Fvector& direction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	UUniformVector_SetUniformVector_Params params;
	params.Magnitude = Magnitude;
	params.direction = direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URadialVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct Fvector& position)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	URadialVector_SetRadialVector_Params params;
	params.Magnitude = Magnitude;
	params.position = position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URandomVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	URandomVector_SetRandomVector_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          RightField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          LeftField                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOperatorField*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<FieldSystemCore_EFieldOperationType> Operation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	UOperatorField_SetOperatorField_Params params;
	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeFloat*         FloatField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToIntegerField*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	UToIntegerField_SetToIntegerField_Params params;
	params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeInt*           IntegerField                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToFloatField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	UToFloatField_SetToFloatField_Params params;
	params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeBase*          Culling                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*          Field                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCullingField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	UCullingField_SetCullingField_Params params;
	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UReturnResultsTerminal*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	UReturnResultsTerminal_SetReturnResultsTerminal_Params params;

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
