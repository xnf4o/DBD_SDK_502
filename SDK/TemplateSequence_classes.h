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

// Class TemplateSequence.TemplateSequence
// 0x00B8 (FullSize[0x0408] - InheritedSize[0x0350])
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BoundActorClass[0x30];                                     // 0x0358(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      BoundPreviewActor[0x30];                                   // 0x0388(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<struct Fguid, struct FName>                   BoundActorComponents;                                      // 0x03B8(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.TemplateSequence");
		return ptr;
	}



};

// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
class UCameraAnimationSequence : public UTemplateSequence
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.CameraAnimationSequence");
		return ptr;
	}



};

// Class TemplateSequence.TemplateSequenceActor
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UTemplateSequenceActor : public Uactor
{
public:
	unsigned char                                      UnknownData_GM2V[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x0238(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROSR[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTemplateSequencePlayer*                     SequencePlayer;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             TemplateSequence;                                          // 0x0258(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData        BindingOverride;                                           // 0x0278(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_00KN[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.TemplateSequenceActor");
		return ptr;
	}



	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class Uactor* actor);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (FullSize[0x0898] - InheritedSize[0x0890])
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData_SJFB[0x8];                                     // 0x0890(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.TemplateSequencePlayer");
		return ptr;
	}



	class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* worldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& settings, class UTemplateSequenceActor** OutActor);
};

// Class TemplateSequence.TemplateSequenceSection
// 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.TemplateSequenceSection");
		return ptr;
	}



};

// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TemplateSequence.TemplateSequenceTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
