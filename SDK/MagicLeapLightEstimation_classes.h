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

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UMagicLeapLightingTrackingComponent : public UactorComponent
{
public:
	bool                                               UseGlobalAmbience;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseColorTemp;                                              // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6X3C[0xE];                                     // 0x00BA(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent");
		return ptr;
	}



};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsTrackerValid();
	bool STATIC_GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState);
	bool STATIC_GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState);
	void STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
