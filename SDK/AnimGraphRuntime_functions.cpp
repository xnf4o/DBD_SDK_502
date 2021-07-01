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

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct Fvector                 RootPos                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 JointPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 JointTarget                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 Effector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 OutJointPos                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 OutEndPos                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct Fvector& RootPos, const struct Fvector& JointPos, const struct Fvector& EndPos, const struct Fvector& JointTarget, const struct Fvector& Effector, struct Fvector* OutJointPos, struct Fvector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
void UKismetAnimationLibrary::STATIC_K2_StartProfilingTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");

	UKismetAnimationLibrary_K2_StartProfilingTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          x                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinX                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxX                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinY                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxY                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinZ                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxZ                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float x, float y, float z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.x = x;
	params.y = y;
	params.z = z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;
	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct Fvector                 TargetPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 LookAtVector                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct Fvector& TargetPosition, const struct Fvector& LookAtVector, bool bUseUpVector, const struct Fvector& UpVector, float ClampConeInDegree)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bLog                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LogPrefix                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");

	UKismetAnimationLibrary_K2_EndProfilingTimer_Params params;
	params.bLog = bLog;
	params.LogPrefix = LogPrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UskeletalMeshComponent*  component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameA              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceA                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameB              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceB                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemapRange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutRangeMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutRangeMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class UskeletalMeshComponent* component, const struct FName& SocketOrBoneNameA, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");

	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;
	params.component = component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UskeletalMeshComponent*  component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameFrom           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameTo             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets(class UskeletalMeshComponent* component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");

	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;
	params.component = component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UskeletalMeshComponent*  component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReferenceSocketOrBone          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 OffsetInBoneSpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AnimGraphRuntime_EEasingFuncType EasingType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRuntimeFloatCurve      CustomCurve                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromSockets(float deltaSeconds, class UskeletalMeshComponent* component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpace, const struct Fvector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, AnimGraphRuntime_EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");

	UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params;
	params.deltaSeconds = deltaSeconds;
	params.component = component;
	params.SocketOrBoneName = SocketOrBoneName;
	params.ReferenceSocketOrBone = ReferenceSocketOrBone;
	params.SocketSpace = SocketSpace;
	params.OffsetInBoneSpace = OffsetInBoneSpace;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;
	params.EasingType = EasingType;
	params.CustomCurve = CustomCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          deltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::STATIC_K2_CalculateVelocityFromPositionHistory(float deltaSeconds, const struct Fvector& position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");

	UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params;
	params.deltaSeconds = deltaSeconds;
	params.position = position;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   notifyName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& notifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.notifyName = notifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   notifyName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& notifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.notifyName = notifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct Fguid                   MontageInstanceId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnMontageEnded(const struct Fguid& MontageInstanceId, class UAnimMontage* montage, bool bInterrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.MontageInstanceId = MontageInstanceId;
	params.montage = montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct Fguid                   MontageInstanceId              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnMontageBlendingOut(const struct Fguid& MontageInstanceId, class UAnimMontage* montage, bool bInterrupted)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.MontageInstanceId = MontageInstanceId;
	params.montage = montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UskeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          playRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class UskeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float playRate, float StartingPosition, const struct FName& StartingSection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.playRate = playRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

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
