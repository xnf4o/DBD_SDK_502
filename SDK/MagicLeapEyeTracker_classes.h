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

// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary");
		return ptr;
	}



	bool STATIC_GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
	MagicLeapEyeTracker_EMagicLeapEyeTrackingCalibrationStatus STATIC_GetCalibrationStatus();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
