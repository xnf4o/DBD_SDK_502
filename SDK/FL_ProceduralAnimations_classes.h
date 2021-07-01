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

// BlueprintGeneratedClass FL_ProceduralAnimations.FL_ProceduralAnimations_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFL_ProceduralAnimations_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass FL_ProceduralAnimations.FL_ProceduralAnimations_C");
		return ptr;
	}



	void STATIC_Rats(float PositionEnd, float position, bool Idling, bool IsRunning, bool IsGoingRight, class UObject* __WorldContext, bool* IdlingOutput, float* PositionOutput, float* PositionEndOutput);
	void STATIC_ArraySinWave_Funct(TArray<float>* RotationValue, float Period, float amplitude, float AbcissOffset, float OrdinateOffset, float timer, float deltaTime, int TimeOffset, float AmplitudeOffset, class UObject* __WorldContext, float* TimerOutput, TArray<float>* RotationValueOutput);
	void STATIC_Sinus_Funct(float Period, float amplitude, float AbcissOffset, float OrdinateOffset, float timer, float deltaTime, class UObject* __WorldContext, float* TimerOutput, float* Value);
	void STATIC_MovingGuts_Funct(TArray<float>* ScaleTab, float amplitude, float Period, float delay, float ScaleStart, float Interval, float time, float deltaTime, class UObject* __WorldContext, float* TimeOut);
	void STATIC_BreathingBubble_Funct(float ScaleMin, float ScaleMax, float AbscissMin, float AbscissMax, struct FBreathingBubble_Struct* BreathingBubbleIn, float deltaTime, class UObject* __WorldContext, struct FBreathingBubble_Struct* BreathingBubbleOut);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
