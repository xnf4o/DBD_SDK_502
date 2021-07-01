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

// Class DBDAudio.AmbienceBoxComponent
// 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
class UAmbienceBoxComponent : public UBoxComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.AmbienceBoxComponent");
		return ptr;
	}



};

// Class DBDAudio.AnimNotify_PostInteractionSoundEvent
// 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
class UAnimNotify_PostInteractionSoundEvent : public UanimNotify
{
public:
	class UAkAudioEvent*                               soundEvent;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InteractionAudioClass[0x30];                               // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.AnimNotify_PostInteractionSoundEvent");
		return ptr;
	}



};

// Class DBDAudio.AudioUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAudioUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.AudioUtilities");
		return ptr;
	}



	void STATIC_PostAkAudioEvent(class UAkAudioEvent* AudioEvent);
};

// Class DBDAudio.InteractionAudioComponent
// 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
class UInteractionAudioComponent : public UactorComponent
{
public:
	class UAkComponent*                                _audioComponent;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNonTunableStat                             _audioRadius;                                              // 0x00C0(0x0060) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.InteractionAudioComponent");
		return ptr;
	}



	bool PostAkEvent(class UAkAudioEvent* akEvent);
};

// Class DBDAudio.LoadAsyncBankData
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class ULoadAsyncBankData : public UObject
{
public:
	class UAkAudioBank*                                bank;                                                      // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBankLoader*                            SoundBankLoader;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.LoadAsyncBankData");
		return ptr;
	}



};

// Class DBDAudio.SoundBankLoader
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class USoundBankLoader : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_ZFWA[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAkAudioBank*>                        _audioBanks;                                               // 0x0060(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ULoadAsyncBankData*>                  _asyncAudioBanksPendingLoadData;                           // 0x0070(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAudio.SoundBankLoader");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
