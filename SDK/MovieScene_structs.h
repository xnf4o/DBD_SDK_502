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

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,

};

// Enum MovieScene.EMovieSceneBlendType
enum class MovieScene_EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid  = 0,
	EMovieSceneBlendType__Absolute = 1,
	EMovieSceneBlendType__Additive = 2,
	EMovieSceneBlendType__Relative = 3,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 4,

};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class MovieScene_EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22,

};

// Enum MovieScene.EEvaluationMethod
enum class MovieScene_EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2,

};

// Enum MovieScene.EUpdateClockSource
enum class MovieScene_EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__RelativeTimecode = 3,
	EUpdateClockSource__Timecode   = 4,
	EUpdateClockSource__Custom     = 5,
	EUpdateClockSource__EUpdateClockSource_MAX = 6,

};

// Enum MovieScene.EMovieSceneEvaluationType
enum class MovieScene_EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2,

};

// Enum MovieScene.EMovieScenePlayerStatus
enum class MovieScene_EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7,

};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class MovieScene_EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2,

};

// Enum MovieScene.EMovieSceneCompletionMode
enum class MovieScene_EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3,

};

// Enum MovieScene.ESectionEvaluationFlags
enum class MovieScene_ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3,

};

// Enum MovieScene.EUpdatePositionMethod
enum class MovieScene_EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3,

};

// Enum MovieScene.ESpawnOwnership
enum class MovieScene_ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieScene_EMovieSceneCompletionMode               CompletionMode;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
struct FMovieSceneEasingSettings
{
	int                                                AutoEaseInDuration;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AutoEaseOutDuration;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseIn;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bManualEaseIn;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NKYY[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ManualEaseInDuration;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseOut;                                                   // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bManualEaseOut;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHQG[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ManualEaseOutDuration;                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
struct FMovieSceneFrameRange
{
	unsigned char                                      UnknownData_6GYD[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
struct FOptionalMovieSceneBlendType
{
	MovieScene_EMovieSceneBlendType                    BlendType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsValid;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                            // 0x0000(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEvalNearestSection : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEvaluateInPreroll : 1;                                    // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEvaluateInPostroll : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEvaluateNearestSection : 1;                               // 0x0000(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4ZE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData_SQDS[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0060
struct FSectionEvaluationDataTree
{
	unsigned char                                      UnknownData_SAG8[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0088
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData_KH3Y[0x88];                                    // 0x0000(0x0088) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData_SKB1[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x000C
struct FMovieSceneEvaluationGroupLUTIndex
{
	int                                                LUTOffset;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumInitPtrs;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumEvalPtrs;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
struct FMovieSceneSequenceInstanceDataPtr
{
	unsigned char                                      UnknownData_J40C[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0060
struct FMovieSceneTrackFieldData
{
	unsigned char                                      UnknownData_VM38[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0060
struct FMovieSceneSubSectionFieldData
{
	unsigned char                                      UnknownData_EW6L[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0020
struct FMovieSceneEvaluationTrackSegments
{
	TArray<int>                                        SegmentIdentifierToIndex;                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneSegment>                  SortedSegments;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x00F8
struct FMovieSceneEvaluationTrack
{
	struct Fguid                                       ObjectBindingId;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           EvaluationPriority;                                        // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EEvaluationMethod                       EvaluationMethod;                                          // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OOI1[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEvaluationTrackSegments          Segments;                                                  // 0x0018(0x0020) (NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            SourceTrack;                                               // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSectionEvaluationDataTree                  EvaluationTree;                                            // 0x0040(0x0060) (NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                            // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                             // 0x00B0(0x0038) (NativeAccessSpecifierPrivate)
	struct FName                                       EvaluationGroup;                                           // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bEvaluateInPreroll : 1;                                    // 0x00F4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bEvaluateInPostroll : 1;                                   // 0x00F4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bTearDownPriority : 1;                                     // 0x00F4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BYKH[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceId;                                                // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                           // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
struct FMovieSceneSegmentIdentifier
{
	int                                                IdentifierIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier                SegmentID;                                                 // 0x0008(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID                       SequenceId;                                                // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                           // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SectionIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey                    key;                                                       // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           SetupIndex;                                                // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           TearDownIndex;                                             // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0070
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneOrderedEvaluationKey>     ActiveEntities;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FMovieSceneSequenceID, uint32_t>       SubTemplateSerialNumbers;                                  // 0x0020(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FMovieSceneFrameRange>               Ranges;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationMetaData>       Metadata;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// 0x000C
struct FMovieSceneTimeTransform
{
	float                                              TimeScale;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  Offset;                                                    // 0x0004(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// 0x0008
struct FMovieSceneTimeWarping
{
	struct FFrameNumber                                start;                                                     // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                end;                                                       // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// 0x0014
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform                    LinearTransform;                                           // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTimeWarping                      Warping;                                                   // 0x000C(0x0008) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0020
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform                    LinearTransform;                                           // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEHZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneNestedSequenceTransform>  NestedTransforms;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00F0
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath                             sequence;                                                  // 0x0000(0x0020) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                   // 0x0020(0x0020) (NativeAccessSpecifierPublic)
	struct FFrameRate                                  TickResolution;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                   // 0x0048(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       PlayRange;                                                 // 0x004C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       FullPlayRange;                                             // 0x005C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       UnwarpedPlayRange;                                         // 0x006C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       PreRollRange;                                              // 0x007C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       PostRollRange;                                             // 0x008C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                HierarchicalBias;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceInstanceDataPtr          InstanceData;                                              // 0x00A0(0x0018) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDAX[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       SubSectionSignature;                                       // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceTransform                OuterToInnerTransform;                                     // 0x00D0(0x0020) (NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                  // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SPC8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneSequenceID>               Children;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                              // 0x0000(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                 // 0x0050(0x0050) (NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                       // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SDIS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct Fguid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                           // 0x0008(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct Fguid, struct FMovieSceneFrameRange>   SubSectionRanges;                                          // 0x0058(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x02F0
struct FMovieSceneEvaluationTemplate
{
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                    // 0x0000(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P3EI[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEvaluationField                  EvaluationField;                                           // 0x00A0(0x0030) (NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                 // 0x00D0(0x00A0) (NativeAccessSpecifierPublic)
	struct Fguid                                       SequenceSignature;                                         // 0x0170(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationTemplateSerialNumber   TemplateSerialNumber;                                      // 0x0180(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GVSJ[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneTemplateGenerationLedger         TemplateLedger;                                            // 0x0188(0x00A8) (NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackFieldData                   TrackFieldData;                                            // 0x0230(0x0060) (NativeAccessSpecifierPrivate)
	struct FMovieSceneSubSectionFieldData              SubSectionFieldData;                                       // 0x0290(0x0060) (NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0004
struct FMovieSceneSequenceLoopCount
{
	int                                                Value;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0014
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      bAutoPlay : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY6X[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequenceLoopCount                LoopCount;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              playRate;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              startTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomStartTime : 1;                                      // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRestoreState : 1;                                         // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableMovementInput : 1;                                 // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLookAtInput : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHidePlayer : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHideHud : 1;                                              // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableCameraCuts : 1;                                    // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPauseAtEnd : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMZE[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0010
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime                                  LastKnownPosition;                                         // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieScene_EMovieScenePlayerStatus>    LastKnownStatus;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2VZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastKnownNumLoops;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0024
struct FMovieSceneSectionParameters
{
	struct FFrameNumber                                StartFrameOffset;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanLoop;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YERO[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameNumber                                EndFrameOffset;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                FirstLoopStartFrameOffset;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HierarchicalBias;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreRollTime;                                               // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostRollTime;                                              // 0x0020(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
struct FMovieSceneSpawnable
{
	struct FTransform                                  SpawnTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FName>                               tags;                                                      // 0x0030(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bContinuouslyRespawn;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_437L[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       guid;                                                      // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D0AU[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     name;                                                      // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     ObjectTemplate;                                            // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct Fguid>                               ChildPossessables;                                         // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_ESpawnOwnership                         Ownership;                                                 // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KDLU[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       levelName;                                                 // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0018
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber                                FrameNumber;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3EJN[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Label;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieSceneObjectBindingID
{
	int                                                SequenceId;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneObjectBindingSpace           Space;                                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CQ0C[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       guid;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID                  ObjectBindingId;                                           // 0x0000(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      Object;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverridesDefault;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDE0[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData_ZR92[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0010 (0x0020 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	MovieScene_EMovieSceneCompletionMode               CompletionMode;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXTF[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UMovieSceneSection>           SourceSectionPtr;                                          // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q4FQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
struct FMovieSceneChannel
{
	unsigned char                                      UnknownData_SP8E[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0320
struct FMovieSceneRootEvaluationTemplateInstance
{
	unsigned char                                      UnknownData_809M[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                         // 0x0018(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6H7A[0x2B8];                                   // 0x0068(0x02B8) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
struct FMovieScenePossessable
{
	TArray<struct FName>                               tags;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       guid;                                                      // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     name;                                                      // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      PossessedObjectClass;                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fguid                                       ParentGuid;                                                // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct Fguid                                       ObjectGuid;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     BindingName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                    // 0x0020(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// 0x0010
struct FMovieSceneObjectBindingIDs
{
	TArray<struct FMovieSceneObjectBindingID>          IDs;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               DefaultValue;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasDefaultValue;                                          // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_39ZI[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       values;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7CF1[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
struct FMovieSceneTangentData
{
	float                                              ArriveTangent;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangent;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArriveTangentWeight;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangentWeight;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveTangentWeightMode>    TangentWeightMode;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTTL[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
struct FMovieSceneFloatValue
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTangentData                      Tangent;                                                   // 0x0004(0x0014) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveInterpMode>           InterpMode;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveTangentMode>          TangentMode;                                               // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PaddingByte;                                               // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XLHZ[0x1];                                     // 0x001B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000 (0x0060 - 0x0060)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PreInfinityExtrap;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ERichCurveExtrapolation>        PostInfinityExtrap;                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVJD[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatValue>               values;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DefaultValue;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasDefaultValue;                                          // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8U7U[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneKeyHandleMap                     KeyHandles;                                                // 0x0038(0x0060) (Transient, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  TickResolution;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DefaultValue;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasDefaultValue;                                          // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97PH[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        values;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J0O2[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0038
struct FMovieScenePropertySectionData
{
	struct FName                                       propertyName;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVHR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PropertyPath;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionName;                                              // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotifyFunctionName;                                        // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0020(0x0038) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
struct FMovieSceneSequenceInstanceData
{
	unsigned char                                      UnknownData_QJCB[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
struct FMovieSceneEvaluationOperand
{
	struct Fguid                                       ObjectBindingId;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                       SequenceId;                                                // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// 0x0010
struct FMovieSceneSectionGroup
{
	TArray<TWeakObjectPtr<class UMovieSceneSection>>   Sections;                                                  // 0x0000(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00F0
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                           // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	TArray<struct FString>                             PinnedNodes;                                               // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             ViewStart;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             ViewEnd;                                                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             WorkStart;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             WorkEnd;                                                   // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MarkedFrames[0x50];                                        // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FFloatRange                                 WorkingRange;                                              // 0x00D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                                 ViewRange;                                                 // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
struct FMovieSceneTimecodeSource
{
	struct FTimecode                                   Timecode;                                                  // 0x0000(0x0014) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                DeltaFrame;                                                // 0x0014(0x0004) (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0090 (0x0098 - 0x0008)
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      DefaultValue;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bHasDefaultValue;                                          // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WD8V[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              values;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                       Enum;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J9UT[0x60];                                    // 0x0038(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData_ZL2U[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
struct FMovieSceneSubSectionData
{
	TWeakObjectPtr<class UMovieSceneSubSection>        Section;                                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ObjectBindingId;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieScene_ESectionEvaluationFlags                 Flags;                                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKLU[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData_LFSG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                time;                                                      // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7VU[0x1C];                                    // 0x000C(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0050
struct FGeneratedMovieSceneKeyStruct
{
	unsigned char                                      UnknownData_D7T9[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0038
struct FMovieSceneObjectPathChannelKeyValue
{
	unsigned char                                      SoftPtr[0x30];                                             // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UObject*                                     HardPtr;                                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x00C0 (0x00C8 - 0x0008)
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
	class UClass*                                      PropertyClass;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> values;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectPathChannelKeyValue        DefaultValue;                                              // 0x0030(0x0038) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ALKH[0x60];                                    // 0x0068(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ForcedTime;                                                // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieScene_ESectionEvaluationFlags                 Flags;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVVS[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// 0x0010
struct FMovieSceneWarpCounter
{
	TArray<uint32_t>                                   WarpCounts;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000 (0x0020 - 0x0020)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0004
struct FMovieSceneTrackDisplayOptions
{
	unsigned char                                      bShowVerticalFrames : 1;                                   // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CF2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
