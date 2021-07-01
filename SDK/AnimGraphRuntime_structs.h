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
// Enums
//---------------------------------------------------------------------------

// Enum AnimGraphRuntime.ESphericalLimitType
enum class AnimGraphRuntime_ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimGraphRuntime_EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5,

};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimGraphRuntime_EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimGraphRuntime_EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2,

};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class AnimGraphRuntime_EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend = 0,
	EBlendListTransitionType__Inertialization = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX = 2,

};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class AnimGraphRuntime_EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class AnimGraphRuntime_EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3,

};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class AnimGraphRuntime_EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2,

};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class AnimGraphRuntime_ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2,

};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class AnimGraphRuntime_EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,

};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class AnimGraphRuntime_EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,

};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class AnimGraphRuntime_EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5,

};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class AnimGraphRuntime_EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class AnimGraphRuntime_EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2,

};

// Enum AnimGraphRuntime.EPoseDriverType
enum class AnimGraphRuntime_EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3,

};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class AnimGraphRuntime_ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2,

};

// Enum AnimGraphRuntime.ERefPoseType
enum class AnimGraphRuntime_ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,

};

// Enum AnimGraphRuntime.ESimulationSpace
enum class AnimGraphRuntime_ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3,

};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class AnimGraphRuntime_EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3,

};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class AnimGraphRuntime_ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3,

};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class AnimGraphRuntime_ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None          = 0,
	ESplineBoneAxis__X             = 1,
	ESplineBoneAxis__Y             = 2,
	ESplineBoneAxis__Z             = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 4,

};

// Enum AnimGraphRuntime.ERotationComponent
enum class AnimGraphRuntime_ERotationComponent : uint8_t
{
	ERotationComponent__EulerX     = 0,
	ERotationComponent__EulerY     = 1,
	ERotationComponent__EulerZ     = 2,
	ERotationComponent__QuaternionAngle = 3,
	ERotationComponent__SwingAngle = 4,
	ERotationComponent__TwistAngle = 5,
	ERotationComponent__ERotationComponent_MAX = 6,

};

// Enum AnimGraphRuntime.EEasingFuncType
enum class AnimGraphRuntime_EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear        = 0,
	EEasingFuncType__Sinusoidal    = 1,
	EEasingFuncType__Cubic         = 2,
	EEasingFuncType__QuadraticInOut = 3,
	EEasingFuncType__CubicInOut    = 4,
	EEasingFuncType__HermiteCubic  = 5,
	EEasingFuncType__QuarticInOut  = 6,
	EEasingFuncType__QuinticInOut  = 7,
	EEasingFuncType__CircularIn    = 8,
	EEasingFuncType__CircularOut   = 9,
	EEasingFuncType__CircularInOut = 10,
	EEasingFuncType__ExpIn         = 11,
	EEasingFuncType__ExpOut        = 12,
	EEasingFuncType__ExpInOut      = 13,
	EEasingFuncType__CustomCurve   = 14,
	EEasingFuncType__EEasingFuncType_MAX = 15,

};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class AnimGraphRuntime_ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
	ERBFNormalizeMethod__AlwaysNormalize = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian = 2,
	ERBFNormalizeMethod__NoNormalization = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX = 4,

};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class AnimGraphRuntime_ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__TwistAngle = 3,
	ERBFDistanceMethod__DefaultMethod = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 5,

};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class AnimGraphRuntime_ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__DefaultFunction = 5,
	ERBFFunctionType__ERBFFunctionType_MAX = 6,

};

// Enum AnimGraphRuntime.ERBFSolverType
enum class AnimGraphRuntime_ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive       = 0,
	ERBFSolverType__Interpolative  = 1,
	ERBFSolverType__ERBFSolverType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00C0 (0x00D0 - 0x0010)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                               // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimAlphaInputType                         AlphaInputType;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                         // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLSN[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                            // 0x0038(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                            // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                       // 0x008C(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5VX[0x14];                                    // 0x00BC(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              x;                                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              y;                                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              z;                                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              playRate;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                       // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RHWC[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartPosition;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             Blendspace;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JGDJ[0x88];                                    // 0x0050(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                        // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00E0 (0x01C0 - 0x00E0)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData_6UWO[0x60];                                    // 0x00E0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPoseLink                                   BasePose;                                                  // 0x0140(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSocketName;                                          // 0x0154(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PivotSocketName;                                           // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     LookAtLocation;                                            // 0x016C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     SocketAxis;                                                // 0x0178(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_558E[0x38];                                    // 0x0188(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
struct FRotationRetargetingInfo
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IRY[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  source;                                                    // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  target;                                                    // 0x0040(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERotationComponent                RotationComponent;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QRQT[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     TwistAxis;                                                 // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAbsoluteAngle;                                         // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTY4[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SourceMinimum;                                             // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceMaximum;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMinimum;                                             // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMaximum;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EEasingFuncType                   EasingType;                                                // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34XW[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          CustomCurve;                                               // 0x0098(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               bFlipEasing;                                               // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4IW[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EasingWeight;                                              // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClamp;                                                    // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWHB[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
struct FAnimPhysConstraintSetup
{
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearXLimitType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearYLimitType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysLinearConstraintType     LinearZLimitType;                                          // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MFHQ[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     LinearAxesMin;                                             // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     LinearAxesMax;                                             // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysAngularConstraintType    AngularConstraintType;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimPhysTwistAxis                          TwistAxis;                                                 // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimPhysTwistAxis                          AngularTargetAxis;                                         // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5AO4[0x1];                                     // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConeAngle;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     AngularLimitsMin;                                          // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     AngularLimitsMax;                                          // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     AngularTarget;                                             // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0028
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                               // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     SphereLocalOffset;                                         // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LimitRadius;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESphericalLimitType               LimitType;                                                 // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3U7A[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0050
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                               // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFY8[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PlaneTransform;                                            // 0x0020(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0390 (0x0460 - 0x00D0)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDampingOverride;                                    // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RNKQ[0x68];                                    // 0x00D8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              RelativeSpaceBone;                                         // 0x0140(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHardLinkChain;                                            // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQTM[0x3];                                     // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoundBone;                                                 // 0x0158(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEnd;                                                  // 0x016C(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     BoxExtents;                                                // 0x0180(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     LocalJointOffset;                                          // 0x018C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     GravityOverride;                                           // 0x019C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearSpringConstant;                                      // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularSpringConstant;                                     // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindScale;                                                 // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearAccScale;                                   // 0x01B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearVelScale;                                   // 0x01C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentAppliedLinearAccClamp;                            // 0x01CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularBiasOverride;                                       // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPreUpdate;                              // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPostUpdate;                             // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                           // 0x01E4(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00XY[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                           // 0x0230(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereCollisionRadius;                                     // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ExternalForce;                                             // 0x0244(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                              // 0x0250(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAnimPhysCollisionType                      CollisionType;                                             // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EAnimPhysSimSpaceType             SimulationSpace;                                           // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X159[0x2];                                     // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseSphericalLimits : 1;                                   // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsePlanarLimit : 1;                                       // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoUpdate : 1;                                             // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoEval : 1;                                               // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideLinearDamping : 1;                                // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAngularBias : 1;                                  // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAngularDamping : 1;                               // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableWind : 1;                                           // 0x0264(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RIFB : 1;                                      // 0x0265(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bUseGravityOverride : 1;                                   // 0x0265(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearSpring : 1;                                         // 0x0265(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularSpring : 1;                                        // 0x0265(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChain : 1;                                                // 0x0265(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CWF[0xA];                                     // 0x0266(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotationRetargetingInfo                    RetargetingSettings;                                       // 0x0270(0x0130) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y22I[0xC0];                                    // 0x03A0(0x00C0) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00C0 (0x00D0 - 0x0010)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0034(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                            // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                       // 0x0094(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MP7O[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_EAnimAlphaInputType                         AlphaInputType;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                         // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRLO[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x002C
struct FAngularRangeLimit
{
	struct Fvector                                     LimitMin;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     LimitMax;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              Bone;                                                      // 0x0018(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00F0 - 0x00D0)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                        // 0x00D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             AngularOffsets;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x002C
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                                // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0014(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBlendTranslation;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRotation;                                            // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendScale;                                               // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PMJK[0x1];                                     // 0x002B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                         // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V200[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6TT[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              TransformsSpace;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D40R[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0088 (0x0098 - 0x0010)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendTime;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EBlendListTransitionType          TransitionType;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAlphaBlendOption                           BlendType;                                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetChildOnActivation;                                   // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TPLW[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomBlendCurve;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNPW[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0QV2[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00B0 - 0x0098)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                           // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveEnumValue;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66GL[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UAB[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x00E8 - 0x00E0)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JW30[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0060 (0x0130 - 0x00D0)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHJZ[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DrivingCurve;                                              // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMin;                                                  // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       parameterName;                                             // 0x0104(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x0110(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EDrivenDestinationMode            DestinationMode;                                           // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EDrivenBoneModificationMode       ModificationMode;                                          // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EComponentType>                 SourceComponent;                                           // 0x0126(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseRange : 1;                                             // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationX : 1;                             // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY : 1;                             // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ : 1;                             // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX : 1;                                // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY : 1;                                // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ : 1;                                // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX : 1;                                   // 0x0127(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY : 1;                                   // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ : 1;                                   // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJQX[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0050
struct FSocketReference
{
	unsigned char                                      UnknownData_ECM6[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SocketName;                                                // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3U5[0x14];                                    // 0x003C(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0070
struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OW8O[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoneReference;                                             // 0x0004(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U34R[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSocketReference                            SocketReference;                                           // 0x0020(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00D0 (0x01A0 - 0x00D0)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct Fvector                                     EffectorLocation;                                          // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorLocationSpace;                                     // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7C8[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           EffectorTarget;                                            // 0x00E0(0x0070) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TipBone;                                                   // 0x0150(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              rootBone;                                                  // 0x0164(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartFromTail;                                            // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRotationLimit;                                      // 0x0181(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_901W[0x6];                                     // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      RotationLimitPerJoints;                                    // 0x0188(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YMLH[0x8];                                     // 0x0198(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x0020
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                                // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EConstraintOffsetOption           OffsetOption;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimationCore_ETransformConstraintType             TransformType;                                             // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        PerAxis;                                                   // 0x0016(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XOLP[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0048 (0x0118 - 0x00D0)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHXG[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FConstraint>                         ConstraintSetup;                                           // 0x00E8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ConstraintWeights;                                         // 0x00F8(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7NI[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0030 (0x0100 - 0x00D0)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x00E4(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                          // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                             // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                                // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ControlSpace;                                              // 0x00FB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EHE[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0038 (0x0108 - 0x00D0)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                                // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                                // 0x00E4(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                          // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                             // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                                // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ECopyBoneDeltaMode                CopyMode;                                                  // 0x00FB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TranslationMultiplier;                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationMultiplier;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0130 (0x0140 - 0x0010)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class UskeletalMeshComponent>       SourceMeshComponent;                                       // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAttachedParent;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyCurves;                                               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTUC[0x126];                                   // 0x001A(0x0126) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SourceBinding;                                             // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                               // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00E0 (0x01B0 - 0x00D0)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  EffectorTransform;                                         // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                           EffectorTarget;                                            // 0x0100(0x0070) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TipBone;                                                   // 0x0170(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              rootBone;                                                  // 0x0184(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                 // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorTransformSpace;                                    // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneRotationSource>            EffectorRotationSource;                                    // 0x01A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Q79[0xE];                                     // 0x01A2(0x000E) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0068 (0x0138 - 0x00D0)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                               // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandFK;                                                // 0x00E4(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHandIK;                                               // 0x00F8(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandIK;                                                // 0x010C(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IKBonesToMove;                                             // 0x0120(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandFKWeight;                                              // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VF3[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           BlendPoses;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>                     LayerSetup;                                                // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceRotationBlend;                                   // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceScaleBlend;                                      // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECurveBlendOption>              CurveBlendOption;                                          // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRootMotionBasedOnRootBone;                           // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AR4T[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LODThreshold;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REO3[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                       // 0x0060(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fguid                                       SkeletonGuid;                                              // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fguid                                       VirtualBoneGuid;                                           // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MGFC[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x0034
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                                // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              FKFootBone;                                                // 0x0014(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumBonesInLimb;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRotationAngle;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     FootBoneForwardAxis;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     HingeRotationAxis;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRotationLimit;                                      // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableKneeTwistCorrection;                                // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x0100 - 0x00D0)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                            // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                            // 0x00D8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H29K[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
struct FAnimLegIKData
{
	unsigned char                                      UnknownData_DMRD[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
struct FIKChain
{
	unsigned char                                      UnknownData_LGU3[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x0040
struct FIKChainLink
{
	unsigned char                                      UnknownData_3B27[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x0100 (0x01D0 - 0x00D0)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MY6G[0xC];                                     // 0x00E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           LookAtTarget;                                              // 0x00F0(0x0070) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     LookAtLocation;                                            // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                       LookAt_Axis;                                               // 0x016C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseLookUpAxis;                                            // 0x017C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EInterpolationBlend>  InterpolationType;                                         // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NWQ5[0x2];                                     // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAxis                                       LookUp_Axis;                                               // 0x0180(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LookAtClamp;                                               // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTime;                                         // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTriggerThreashold;                            // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BOH8[0x34];                                    // 0x019C(0x0034) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceAdditive;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66P4[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x0110 - 0x00D0)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     Translation;                                               // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     scale;                                                     // 0x00FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> TranslationMode;                                           // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> RotationMode;                                              // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_EBoneModificationMode> ScaleMode;                                                 // 0x010A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              TranslationSpace;                                          // 0x010B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              RotationSpace;                                             // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              ScaleSpace;                                                // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZZF[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<float>                                      CurveValues;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1WTC[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EModifyCurveApplyMode             ApplyMode;                                                 // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWF5[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      DesiredAlphas;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URH8[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAdditiveNode;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalizeAlpha;                                           // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I67V[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0040 (0x0110 - 0x00D0)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                             // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              DisplaySpace;                                              // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeToRefPose;                                        // 0x00E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6O8[0x2];                                     // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     Translation;                                               // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     scale;                                                     // 0x0100(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P8NH[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DK8O[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FRotationLimit
{
	struct Fvector                                     LimitMin;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     LimitMax;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x0098 - 0x0078)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	Engine_EAlphaBlendOption                           BlendOption;                                               // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R113[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CustomCurve;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0020 (0x0098 - 0x0078)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                  // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoseWeight;                                                // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D5ED[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x002C
struct FRBFParams
{
	int                                                TargetDimensions;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFSolverType                    SolverType;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SB2G[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              radius;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFFunctionType                  Function;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFDistanceMethod                DistanceMethod;                                            // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneAxis>                      TwistAxis;                                                 // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5D3G[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeightThreshold;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFNormalizeMethod               NormalizeMethod;                                           // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_33P5[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     MedianReference;                                           // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MedianMin;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MedianMax;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	struct Fvector                                     TargetTranslation;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetScale;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFDistanceMethod                DistanceMethod;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFFunctionType                  FunctionType;                                              // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                         // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5W53[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  CustomCurve;                                               // 0x0028(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       DrivenName;                                                // 0x00A8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W4IQ[0x8];                                     // 0x00B4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsHidden;                                                 // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PYY[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00B8 (0x0130 - 0x0078)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                                // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      SourceBones;                                               // 0x0088(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                            // 0x0098(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_129H[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              EvalSpaceBone;                                             // 0x00E8(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRBFParams                                  RBFParams;                                                 // 0x00FC(0x002C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EPoseDriverSource                 DriveSource;                                               // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EPoseDriverOutput                 DriveOutput;                                               // 0x0129(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyDriveSelectedBones : 1;                               // 0x012A(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SD16[0x5];                                     // 0x012B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x00A0 (0x00B0 - 0x0010)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName                                       SnapshotName;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_623R[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPoseSnapshot                               Snapshot;                                                  // 0x0020(0x0040) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESnapshotSourceMode               mode;                                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SBT[0x4F];                                    // 0x0061(0x004F) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               sequence;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToPlay;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLoopCount;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoopCount;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlayRate;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayRate;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4K0O[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAlphaBlend                                 BlendIn;                                                   // 0x0020(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0068 (0x0078 - 0x0010)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1MN[0x50];                                    // 0x0020(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShuffleMode;                                              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MH06[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0018 - 0x0010)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<AnimGraphRuntime_ERefPoseType>         RefPoseType;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WY1Y[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00E0 - 0x00D0)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_JWCB[0x10];                                    // 0x00D0(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x04E0 (0x05B0 - 0x00D0)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                      // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4ML[0xA0];                                    // 0x00D8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     OverrideWorldGravity;                                      // 0x0178(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ExternalForce;                                             // 0x0184(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearAccScale;                                   // 0x0190(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearVelScale;                                   // 0x019C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentAppliedLinearAccClamp;                            // 0x01A8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedBoundsScale;                                         // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              BaseBoneRef;                                               // 0x01B8(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OverlapChannel;                                            // 0x01CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESimulationSpace                  SimulationSpace;                                           // 0x01CD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;             // 0x01CE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94ZR[0x1];                                     // 0x01CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableWorldGeometry : 1;                                  // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideWorldGravity : 1;                                 // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTransferBoneVelocities : 1;                               // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                            // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                 // 0x01D0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYRB[0x3];                                     // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverIterations                           OverrideSolverIterations;                                  // 0x01D4(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FA1X[0x3C4];                                   // 0x01EC(0x03C4) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// 0x04D0 (0x05A0 - 0x00D0)
struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                      // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     OverrideWorldGravity;                                      // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ExternalForce;                                             // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearAccScale;                                   // 0x00F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentLinearVelScale;                                   // 0x00FC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ComponentAppliedLinearAccClamp;                            // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedBoundsScale;                                         // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              BaseBoneRef;                                               // 0x0118(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OverlapChannel;                                            // 0x012C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESimulationSpace                  SimulationSpace;                                           // 0x012D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;             // 0x012E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableWorldGeometry : 1;                                  // 0x012F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideWorldGravity : 1;                                 // 0x012F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTransferBoneVelocities : 1;                               // 0x012F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                            // 0x012F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                 // 0x012F(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSolverIterations                           OverrideSolverIterations;                                  // 0x0130(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OV3[0x458];                                   // 0x0148(0x0458) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00A0 - 0x0010)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        PitchScaleBiasClamp;                                       // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        YawScaleBiasClamp;                                         // 0x0058(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MeshToComponent;                                           // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48L8[0xC];                                     // 0x0094(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0030 (0x0100 - 0x00D0)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                                // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              SourceBone;                                                // 0x00E4(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneAxis>                      RotationAxisToRefer;                                       // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                               // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S386[0x2];                                     // 0x00FE(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00B0 (0x0190 - 0x00E0)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                            // 0x0100(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                            // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                       // 0x0154(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXTR[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_EAnimAlphaInputType                         AlphaInputType;                                            // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                         // 0x0189(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CDP6[0x6];                                     // 0x018A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0070 (0x0080 - 0x0010)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                 // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DefaultChainLength;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainStartBone;                                            // 0x0024(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEndBone;                                              // 0x0038(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     TargetLocation;                                            // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9P5D[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0060(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_EScaleChainInitialLength          ChainInitialLength;                                        // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8UZ[0x17];                                    // 0x0069(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           sequence;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplicitTime;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoop;                                               // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleportToExplicitTime;                                   // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AnimGraphRuntime_ESequenceEvalReinit>  ReinitializationBehavior;                                  // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QK0K[0x1];                                     // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartPosition;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AU3Q[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   source;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUpdateSourcePose;                                   // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UO6X[0x23];                                    // 0x002D(0x0023) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x01A0 (0x0270 - 0x00D0)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                 // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              EndBone;                                                   // 0x00E4(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ESplineBoneAxis                   BoneAxis;                                                  // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCalculateSpline;                                      // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KLM[0x2];                                     // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PointCount;                                                // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ControlPoints;                                             // 0x0100(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Roll;                                                      // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistStart;                                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistEnd;                                                  // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_42ZL[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAlphaBlend                                 TwistBlend;                                                // 0x0120(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Stretch;                                                   // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                    // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJF7[0x118];                                   // 0x0158(0x0118) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0018
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                      // 0x0000(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                RefSkeletonIndex;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0068 (0x0138 - 0x00D0)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                                // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxDisplacement;                                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                             // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorResetThresh;                                          // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQH3[0x3C];                                    // 0x00F4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLimitDisplacement : 1;                                    // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateX : 1;                                           // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateY : 1;                                           // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateZ : 1;                                           // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateX : 1;                                              // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateY : 1;                                              // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateZ : 1;                                              // 0x0130(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FM6J[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0038 - 0x0038)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x01A0 (0x0270 - 0x00D0)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData_3L1A[0x30];                                    // 0x00D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              TrailBone;                                                 // 0x0100(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ChainLength;                                               // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_EAxis>                     ChainBoneAxis;                                             // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInvertChainBoneAxis : 1;                                  // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitStretch : 1;                                         // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitRotation : 1;                                        // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsePlanarLimit : 1;                                       // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bActorSpaceFakeVel : 1;                                    // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReorientParentToChild : 1;                                // 0x0119(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2VZW[0x2];                                     // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDeltaTime;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelaxationSpeedScale;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XFYT[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                      // 0x0128(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        RelaxationSpeedScaleInputProcessor;                        // 0x01B0(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FRotationLimit>                      RotationLimits;                                            // 0x01E0(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             RotationOffsets;                                           // 0x01F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                              // 0x0200(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchLimit;                                              // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     FakeVelocity;                                              // 0x0214(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              BaseJoint;                                                 // 0x0220(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LastBoneRotationAnimAlphaBlend;                            // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DLIT[0x38];                                    // 0x0238(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0024
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                      // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       Axis;                                                      // 0x0014(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0080 (0x0150 - 0x00D0)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                 // 0x00D0(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                         TwistFrame;                                                // 0x00F4(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       TwistPlaneNormalAxis;                                      // 0x0118(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                  // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                               // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                               // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimCurveParam                             curve;                                                     // 0x0134(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1C6T[0xC];                                     // 0x0144(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0140 (0x0210 - 0x00D0)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                    // 0x00D0(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartStretchRatio;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStretchScale;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     EffectorLocation;                                          // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCYK[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           EffectorTarget;                                            // 0x0100(0x0070) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     JointTargetLocation;                                       // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPGR[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           JointTarget;                                               // 0x0180(0x0070) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       TwistAxis;                                                 // 0x01F0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              EffectorLocationSpace;                                     // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              JointTargetLocationSpace;                                  // 0x0201(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStretching : 1;                                      // 0x0202(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                        // 0x0202(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMaintainEffectorRelRot : 1;                               // 0x0202(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTwist : 1;                                           // 0x0202(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z5RP[0xD];                                     // 0x0203(0x000D) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                         // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                         // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	Engine_EAnimAlphaInputType                         AlphaInputType;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlphaBoolEnabled : 1;                                     // 0x0031(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZQV : 2;                                      // 0x0031(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bResetChildOnActivation : 1;                               // 0x0031(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5C03[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alpha;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                            // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                       // 0x0094(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0SF[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x0270 (0x0950 - 0x06E0)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData_I2HX[0x270];                                   // 0x06E0(0x0270) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FPositionHistory
{
	TArray<struct Fvector>                             Positions;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              range;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LV9H[0x1C];                                    // 0x0014(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      values;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              scaleFactor;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                         // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCM3[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  CustomCurve;                                               // 0x0018(0x0080) (Edit, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFDistanceMethod                DistanceMethod;                                            // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AnimGraphRuntime_ERBFFunctionType                  FunctionType;                                              // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13JJ[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
