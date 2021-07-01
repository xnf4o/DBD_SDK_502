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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x0130 (FullSize[0x0340] - InheritedSize[0x0210])
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	struct FString                                     ObjectUID;                                                 // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapARPin_EMagicLeapAutoPinType               AutoPinType;                                               // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldPinActor;                                           // 0x0225(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PREF[0x2];                                     // 0x0226(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PinDataClass;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinned;                                  // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPersistentEntityPinLost;                                 // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct Fguid                                       PinnedCFUID;                                               // 0x0250(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedSceneComponent;                                      // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*                     PinData;                                                   // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TTO4[0xD0];                                    // 0x0270(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}



	void UnPin();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class Uactor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* state);
	bool GetPinnedPinID(struct Fguid* PinId);
	class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}



	void STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
	bool STATIC_IsTrackerValid();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetNumAvailableARPins(int* Count);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetClosestARPin(const struct Fvector& SearchPoint, struct Fguid* PinId);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetAvailableARPins(int NumRequested, TArray<struct Fguid>* Pins);
	struct FString STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& state);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_GetARPinState(const struct Fguid& PinId, struct FMagicLeapARPinState* state);
	bool STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct Fguid& PinId, struct Fvector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool STATIC_GetARPinPositionAndOrientation(const struct Fguid& PinId, struct Fvector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_DestroyTracker();
	MagicLeapARPin_EMagicLeapPassableWorldError STATIC_CreateTracker();
	void STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate);
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                              UpdateCheckFrequency;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        OnUpdatedEventTriggerDelta;                                // 0x0034(0x0010) (Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIRQ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		return ptr;
	}



};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct Fguid                                       PinnedID;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ComponentWorldTransform;                                   // 0x0040(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  PinTransform;                                              // 0x0070(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
