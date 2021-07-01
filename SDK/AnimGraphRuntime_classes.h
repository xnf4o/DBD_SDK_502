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

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UAnimNotify_PlayMontageNotify : public UanimNotify
{
public:
	struct FName                                       notifyName;                                                // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JLQA[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       notifyName;                                                // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7EWV[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}



};

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UAnimSequencerInstance : public UanimInstance
{
public:
	unsigned char                                      UnknownData_W3MY[0x10];                                    // 0x0270(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}



};

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}



	void STATIC_K2_TwoBoneIK(const struct Fvector& RootPos, const struct Fvector& JointPos, const struct Fvector& EndPos, const struct Fvector& JointTarget, const struct Fvector& Effector, struct Fvector* OutJointPos, struct Fvector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	void STATIC_K2_StartProfilingTimer();
	struct Fvector STATIC_K2_MakePerlinNoiseVectorAndRemap(float x, float y, float z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct Fvector& TargetPosition, const struct Fvector& LookAtVector, bool bUseUpVector, const struct Fvector& UpVector, float ClampConeInDegree);
	float STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix);
	float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class UskeletalMeshComponent* component, const struct FName& SocketOrBoneNameA, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	struct Fvector STATIC_K2_DirectionBetweenSockets(class UskeletalMeshComponent* component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo);
	float STATIC_K2_CalculateVelocityFromSockets(float deltaSeconds, class UskeletalMeshComponent* component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpace, const struct Fvector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, AnimGraphRuntime_EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
	float STATIC_K2_CalculateVelocityFromPositionHistory(float deltaSeconds, const struct Fvector& position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax);
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                               // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBlendOut;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInterrupted;                                             // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                             // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                               // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKW1[0x30];                                    // 0x0080(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}



	void OnNotifyEndReceived(const struct FName& notifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(const struct FName& notifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(const struct Fguid& MontageInstanceId, class UAnimMontage* montage, bool bInterrupted);
	void OnMontageBlendingOut(const struct Fguid& MontageInstanceId, class UAnimMontage* montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class UskeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float playRate, float StartingPosition, const struct FName& StartingSection);
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USequencerAnimationSupport : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimGraphRuntime.SequencerAnimationSupport");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
