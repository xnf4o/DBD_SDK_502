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

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}



	bool STATIC_SetMotionSourceForHand(InputCore_EControllerHand Hand, const struct FName& MotionSource);
	bool STATIC_SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode);
	bool STATIC_PlayLEDPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayLEDEffect(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayHapticPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity intensity);
	bool STATIC_PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool STATIC_PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity intensity);
	int STATIC_MaxSupportedMagicLeapControllers();
	bool STATIC_IsMLControllerConnected(const struct FName& MotionSource);
	void STATIC_InvertControllerMapping();
	struct FName STATIC_GetMotionSourceForHand(InputCore_EControllerHand Hand);
	MagicLeapController_EMagicLeapControllerType STATIC_GetMLControllerType(InputCore_EControllerHand Hand);
	InputCore_EControllerHand STATIC_GetHandForMotionSource(const struct FName& MotionSource);
	MagicLeapController_EMagicLeapControllerType STATIC_GetControllerType(const struct FName& MotionSource);
	MagicLeapController_EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
	bool STATIC_GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand);
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
class UMagicLeapTouchpadGesturesComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_0R2U[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTouchpadGestureStart;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureContinue;                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureEnd;                                      // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4RR[0x58];                                    // 0x00F0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
