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

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                          SectionToKey;                                              // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       propertyName;                                              // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W5G9[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PropertyPath;                                              // 0x0078(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneTransformOrigin : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}



	struct FTransform BP_GetTransformOrigin();
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct Fguid                                       ConstraintId;                                              // 0x00E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID                  ConstraintBindingID;                                       // 0x00F8(0x0018) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}



	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                          // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachComponentName;                                       // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentLocationRule;                                    // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentRotationRule;                                    // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAttachmentRule                             AttachmentScaleRule;                                       // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentLocationRule;                                    // 0x012B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentRotationRule;                                    // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EDetachmentRule                             DetachmentScaleRule;                                       // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6B7Y[0x2];                                     // 0x012E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                        // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x00A8 (FullSize[0x01B8] - InheritedSize[0x0110])
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel                     TimingCurve;                                               // 0x0110(0x00A0) (NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     FrontAxisEnum;                                             // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MovieSceneTracks_EMovieScene3DPathSection_Axis     UpAxisEnum;                                                // 0x01B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5186[0x2];                                     // 0x01B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceUpright : 1;                                         // 0x01B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJ13[0x3];                                     // 0x01B5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0650 (FullSize[0x0738] - InheritedSize[0x00E8])
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	struct FMovieSceneTransformMask                    TransformMask;                                             // 0x00E8(0x0004) (NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O347[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     Translation[0x3];                                          // 0x00F0(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     rotation[0x3];                                             // 0x02D0(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     scale[0x3];                                                // 0x04B0(0x01E0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     ManualWeight;                                              // 0x0690(0x00A0) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9FQE[0x4];                                     // 0x0730(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseQuaternionInterpolation;                               // 0x0734(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LDCO[0x3];                                     // 0x0735(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0148 (FullSize[0x0230] - InheritedSize[0x00E8])
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData               ActorReferenceData;                                        // 0x00E8(0x00B8) (NativeAccessSpecifierPrivate)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x01A0(0x0080) (Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ActorGuidStrings;                                          // 0x0220(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0260 (FullSize[0x0348] - InheritedSize[0x00E8])
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x00F0(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioStartTime;                                            // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioDilationFactor;                                       // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AudioVolume;                                               // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OCVZ[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     SoundVolume;                                               // 0x0108(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                           // 0x01A8(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData               AttachActorData;                                           // 0x0248(0x00B8) (NativeAccessSpecifierPrivate)
	bool                                               bSuppressSubtitles;                                        // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOverrideAttenuation;                                      // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YLU0[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           AttenuationSettings;                                       // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             OnQueueSubtitles;                                          // 0x0310(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3CHS[0x4];                                     // 0x0310(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_XOH3[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                           // 0x0328(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                    // 0x0338(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}



	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class USoundBase* InSound);
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                             // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                              // 0x00E8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9HTR[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneBoolChannel                      BoolCurve;                                                 // 0x00F0(0x0090) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      ByteCurve;                                                 // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                  // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                                 CameraAnim;                                                // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              playRate;                                                  // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayScale;                                                 // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendInTime;                                               // 0x0118(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              blendOutTime;                                              // 0x011C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLooping;                                                  // 0x0120(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QLIA[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                        // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct Fguid                                       CameraGuid;                                                // 0x00E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                           // 0x00F8(0x0018) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}



	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                               bCanBlend;                                                 // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7Q5[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0068(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                 // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      ShakeClass;                                                // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayScale;                                                 // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x0114(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGFH[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0118(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EK68[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                       // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0028 (FullSize[0x0188] - InheritedSize[0x0160])
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FString                                     ShotDisplayName;                                           // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayName;                                               // 0x0170(0x0018) (Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}



	void SetShotDisplayName(const struct FString& InShotDisplayName);
	struct FString GetShotDisplayName();
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0280 (FullSize[0x0368] - InheritedSize[0x00E8])
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     RedCurve;                                                  // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     GreenCurve;                                                // 0x0188(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     BlueCurve;                                                 // 0x0228(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     AlphaCurve;                                                // 0x02C8(0x00A0) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                             // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8WP9[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FMovieSceneByteChannel                      EnumCurve;                                                 // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	struct FMovieSceneEvent                            event;                                                     // 0x00E8(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0100 (FullSize[0x01E8] - InheritedSize[0x00E8])
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                    // 0x00E8(0x0078) (Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0160(0x0088) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1JO[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieSceneTracks_EFireEventsAtPosition             EventPosition;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1AU2[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                            // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0088 (FullSize[0x0170] - InheritedSize[0x00E8])
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	struct FMovieSceneEventChannel                     EventChannel;                                              // 0x00E8(0x0088) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x00E8(0x00A0) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (FullSize[0x01A0] - InheritedSize[0x0188])
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                 // 0x0188(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFadeAudio : 1;                                            // 0x0198(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGUH[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0090 (FullSize[0x0178] - InheritedSize[0x00E8])
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel                   IntegerCurve;                                              // 0x00E8(0x0090) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	MovieSceneTracks_ELevelVisibility                  visibility;                                                // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OE3Z[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x00F0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}



	void SetVisibility(MovieSceneTracks_ELevelVisibility Invisibility);
	void SetLevelNames(TArray<struct FName> InLevelNames);
	MovieSceneTracks_ELevelVisibility GetVisibility();
	TArray<struct FName> GetLevelNames();
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	class UMaterialParameterCollection*                MPC;                                                       // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int                                                MaterialIndex;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PLME[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                ObjectChannel;                                             // 0x00E8(0x00C8) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	class UClass*                                      PropertyClass;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0060 (FullSize[0x0148] - InheritedSize[0x00E8])
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FBoolParameterNameAndCurve>          BoolParameterNamesAndCurves;                               // 0x00E8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                             // 0x00F8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector2DParameterNameAndCurves>     Vector2DParameterNamesAndCurves;                           // 0x0108(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                             // 0x0118(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                              // 0x0128(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTransformParameterNameAndCurves>    TransformParameterNamesAndCurves;                          // 0x0138(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel                  ParticleKeys;                                              // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                          // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x00C8 (FullSize[0x01B0] - InheritedSize[0x00E8])
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel                MaterialChannel;                                           // 0x00E8(0x00C8) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	int                                                MaterialIndex;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSOJ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0108 (FullSize[0x01F0] - InheritedSize[0x00E8])
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                    // 0x00E8(0x00D8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSequence;                                              // 0x01C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                           animation;                                                 // 0x01C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x01D0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndOffset;                                                 // 0x01D4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              playRate;                                                  // 0x01D8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReverse : 1;                                              // 0x01DC(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MQHH[0x3];                                     // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x01E0(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MQ3V[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseLegacySectionIndexBlend;                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q4QU[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fguid                                       ObjectGuid;                                                // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x00A0 (FullSize[0x0188] - InheritedSize[0x00E8])
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel                    StringCurve;                                               // 0x00E8(0x00A0) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0288 (FullSize[0x0370] - InheritedSize[0x00E8])
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     Curves[0x4];                                               // 0x00E8(0x0280) (NativeAccessSpecifierPrivate)
	int                                                ChannelsUsed;                                              // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HJ5Y[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E8L7[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
