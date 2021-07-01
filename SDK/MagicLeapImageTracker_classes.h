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

// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// 0x0080 (FullSize[0x0290] - InheritedSize[0x0210])
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	class UTexture2D*                                  TargetImageTexture;                                        // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     name;                                                      // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LongerDimension;                                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStationary;                                             // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseUnreliablePose;                                        // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_010P[0x2];                                     // 0x022E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSetImageTargetSucceeded;                                 // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetImageTargetFailed;                                    // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnImageTargetFound;                                        // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnImageTargetLost;                                         // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnImageTargetUnreliableTracking;                           // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MG66[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerComponent");
		return ptr;
	}



	bool SetTargetAsync(class UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary");
		return ptr;
	}



	void STATIC_SetMaxSimultaneousTargets(int MaxSimultaneousTargets);
	bool STATIC_IsImageTrackingEnabled();
	int STATIC_GetMaxSimultaneousTargets();
	void STATIC_EnableImageTracking(bool bEnable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
