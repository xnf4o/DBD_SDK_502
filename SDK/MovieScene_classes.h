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

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UMovieSceneSignedObject : public UObject
{
public:
	struct Fguid                                       Signature;                                                 // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2KIO[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0090 (FullSize[0x00E8] - InheritedSize[0x0058])
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                               // 0x0058(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BSGZ[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEasingSettings                   Easing;                                                    // 0x0060(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                       SectionRange;                                              // 0x0098(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                                PreRollFrames;                                             // 0x00A8(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                PostRollFrames;                                            // 0x00AC(0x0004) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                           // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                             // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                             // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W3KG[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              startTime;                                                 // 0x00BC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EndTime;                                                   // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PreRollTime;                                               // 0x00C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PostRollTime;                                              // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsInfinite : 1;                                           // 0x00CC(0x0001) BIT_FIELD (Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VOQT[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSupportsInfiniteRange;                                    // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType                BlendType;                                                 // 0x00D1(0x0002) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y6X6[0x15];                                    // 0x00D3(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



	void SetRowIndex(int NewRowIndex);
	void SetPreRollFrames(int InPreRollFrames);
	void SetPostRollFrames(int InPostRollFrames);
	void SetOverlapPriority(int NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(MovieScene_EMovieSceneCompletionMode InCompletionMode);
	void SetBlendType(MovieScene_EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool isActive();
	int GetRowIndex();
	int GetPreRollFrames();
	int GetPostRollFrames();
	int GetOverlapPriority();
	MovieScene_EMovieSceneCompletionMode GetCompletionMode();
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// Class MovieScene.MovieSceneTrack
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                               // 0x0058(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GS58[0x1];                                     // 0x005C(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsEvalDisabled;                                           // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZYA[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequence
// 0x02F8 (FullSize[0x0350] - InheritedSize[0x0058])
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate               PrecompiledEvaluationTemplate;                             // 0x0058(0x02F0) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	MovieScene_EMovieSceneCompletionMode               DefaultCompletionMode;                                     // 0x0348(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParentContextsAreSignificant;                             // 0x0349(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPlayableDirectly;                                         // 0x034A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1AAV[0x5];                                     // 0x034B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(const struct FName& InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(const struct FName& InBindingName);
};

// Class MovieScene.MovieSceneSequencePlayer
// 0x0860 (FullSize[0x0890] - InheritedSize[0x0030])
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_OSAV[0x3E0];                                   // 0x0030(0x03E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlay;                                                    // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                             // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStop;                                                    // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPause;                                                   // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieScene_EMovieScenePlayerStatus>    Status;                                                    // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0AD5[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bReversePlayback : 1;                                      // 0x0464(0x0001) BIT_FIELD (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DQC6[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         sequence;                                                  // 0x0468(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                                startTime;                                                 // 0x0470(0x0004) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DurationFrames;                                            // 0x0474(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentNumLoops;                                           // 0x0478(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R0D2[0x14];                                    // 0x047C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0490(0x0014) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RPQ1[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                      // 0x04A8(0x0320) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9GBJ[0x68];                                    // 0x07C8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequenceReplProperties           NetSyncProps;                                              // 0x0830(0x0010) (Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TScriptInterface<class UMovieScenePlaybackClient>  PlaybackClient;                                            // 0x0840(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TWTB[0x40];                                    // 0x0850(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}



	void StopAtCurrentTime();
	void stop();
	void SetTimeRange(float startTime, float duration);
	void SetPlayRate(float playRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const struct FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const struct FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	bool JumpToMarkedFrame(const struct FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// Class MovieScene.MovieSceneSubSection
// 0x0078 (FullSize[0x0160] - InheritedSize[0x00E8])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                                // 0x00E8(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartOffset;                                               // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeScale;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PreRollTime;                                               // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class Uactor>                       ActorToRecord;                                             // 0x0120(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EU3R[0x4];                                     // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetSequenceName;                                        // 0x0140(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                              TargetPathToRecordTo;                                      // 0x0150(0x0010) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}



	void SetSequence(class UMovieSceneSequence* sequence);
	class UMovieSceneSequence* GetSequence();
};

// Class MovieScene.MovieSceneSubTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneCustomClockSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneCustomClockSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneCustomClockSource");
		return ptr;
	}



	void OnTick(float deltaSeconds, float InPlayRate);
	void OnStopPlaying(const struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(const struct FQualifiedFrameTime& InStartTime);
	struct FFrameTime OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieScenePlaybackClient : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}



};

// Class MovieScene.MovieScene
// 0x0100 (FullSize[0x0158] - InheritedSize[0x0058])
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x0078(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                             // 0x0088(0x0050) (NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x00D8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            CameraCutTrack;                                            // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       SelectionRange;                                            // 0x00F0(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                       PlaybackRange;                                             // 0x0100(0x0010) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  TickResolution;                                            // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                                  DisplayRate;                                               // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EMovieSceneEvaluationType               EvaluationType;                                            // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MovieScene_EUpdateClockSource                      ClockSource;                                               // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L7S3[0x6];                                     // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             CustomClockSourcePath;                                     // 0x0128(0x0020) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneMarkedFrame>              MarkedFrames;                                              // 0x0148(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WR8T[0x58];                                    // 0x0040(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData_M5XV[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieScene_EMovieSceneBuiltInEasing                type;                                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDPD[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData_E7JJ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 curve;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneEasingFunction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}



	float OnEvaluate(float Interp);
};

// Class MovieScene.MovieSceneFolder
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                                // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1349[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                              // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                         // 0x0050(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ChildObjectBindingStrings;                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9T14[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}



};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneKeyProxy : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneTrack
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	bool                                               bHighPassFilter;                                           // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97W0[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x0068(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSection
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UTestMovieSceneSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSequence
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSubTrack
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                              // 0x0070(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.TestMovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSubSection
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieScene.TestMovieSceneSubSection");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
