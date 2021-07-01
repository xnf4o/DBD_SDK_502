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

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData_NITQ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      TransformOriginActor;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  TransformOrigin;                                           // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULevelSequenceMetaData : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequence
// 0x0150 (FullSize[0x04A0] - InheritedSize[0x0350])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0358(0x0050) (Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences             BindingReferences;                                         // 0x03A8(0x00A0) (Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x0448(0x0050) (Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DirectorClass;                                             // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



	void RemoveMetaDataByClass(class UClass* InClass);
	class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
	class UObject* FindMetaDataByClass(class UClass* InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BYZ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              BurnInClass;                                               // 0x0038(0x0020) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*            settings;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}



	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// Class LevelSequence.LevelSequenceActor
// 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
class ULevelSequenceActor : public Uactor
{
public:
	unsigned char                                      UnknownData_QH5W[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0240(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L12D[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             LevelSequence;                                             // 0x0260(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              AdditionalEventReceivers;                                  // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceCameraSettings                CameraSettings;                                            // 0x0290(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EULX[0x6];                                     // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoPlay : 1;                                             // 0x02A8(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideInstanceData : 1;                                 // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReplicatePlayback : 1;                                    // 0x02A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNOK[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     DefaultInstanceData;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                            // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShowBurnin;                                               // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JCBJ[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<class Uactor*> AdditionalReceivers);
	void SetBindingByTag(const struct FName& BindingTag, TArray<class Uactor*> actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class Uactor*> actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(const struct FName& tag, class Uactor* actor);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class Uactor* actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const struct FName& tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(const struct FName& tag);
	void AddBindingByTag(const struct FName& BindingTag, class Uactor* actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class Uactor* actor, bool bAllowBindingsFromAsset);
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x00C8 (FullSize[0x0328] - InheritedSize[0x0260])
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                          // 0x0260(0x00C0) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                         LevelSequenceActor;                                        // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}



	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};

// Class LevelSequence.LevelSequenceDirector
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        player;                                                    // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}



	void OnCreated();
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}



};

// Class LevelSequence.LevelSequencePlayer
// 0x0128 (FullSize[0x09B8] - InheritedSize[0x0890])
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                               // 0x0890(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4XY[0x118];                                   // 0x08A0(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* worldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& settings, class ULevelSequenceActor** OutActor);
};

// Class LevelSequence.LevelSequenceMediaController
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class ULevelSequenceMediaController : public Uactor
{
public:
	unsigned char                                      UnknownData_C3JB[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequenceActor*                         sequence;                                                  // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                             MediaComponent;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ServerStartTimeSeconds;                                    // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8044[0xC];                                     // 0x024C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LevelSequence.LevelSequenceMediaController");
		return ptr;
	}



	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ULevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
