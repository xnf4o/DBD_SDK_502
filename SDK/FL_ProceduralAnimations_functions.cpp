// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Rats
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PositionEnd                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Idling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsRunning                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsGoingRight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IdlingOutput                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PositionOutput                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PositionEndOutput              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_Rats(float PositionEnd, float position, bool Idling, bool IsRunning, bool IsGoingRight, class UObject* __WorldContext, bool* IdlingOutput, float* PositionOutput, float* PositionEndOutput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Rats");

	UFL_ProceduralAnimations_C_Rats_Params params;
	params.PositionEnd = PositionEnd;
	params.position = position;
	params.Idling = Idling;
	params.IsRunning = IsRunning;
	params.IsGoingRight = IsGoingRight;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IdlingOutput != nullptr)
		*IdlingOutput = params.IdlingOutput;
	if (PositionOutput != nullptr)
		*PositionOutput = params.PositionOutput;
	if (PositionEndOutput != nullptr)
		*PositionEndOutput = params.PositionEndOutput;

}


// Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.ArraySinWave_Funct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  RotationValue                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// float                          Period                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AbcissOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OrdinateOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          deltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AmplitudeOffset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimerOutput                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                  RotationValueOutput            (Parm, OutParm, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_ArraySinWave_Funct(TArray<float>* RotationValue, float Period, float amplitude, float AbcissOffset, float OrdinateOffset, float timer, float deltaTime, int TimeOffset, float AmplitudeOffset, class UObject* __WorldContext, float* TimerOutput, TArray<float>* RotationValueOutput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.ArraySinWave_Funct");

	UFL_ProceduralAnimations_C_ArraySinWave_Funct_Params params;
	params.Period = Period;
	params.amplitude = amplitude;
	params.AbcissOffset = AbcissOffset;
	params.OrdinateOffset = OrdinateOffset;
	params.timer = timer;
	params.deltaTime = deltaTime;
	params.TimeOffset = TimeOffset;
	params.AmplitudeOffset = AmplitudeOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RotationValue != nullptr)
		*RotationValue = params.RotationValue;
	if (TimerOutput != nullptr)
		*TimerOutput = params.TimerOutput;
	if (RotationValueOutput != nullptr)
		*RotationValueOutput = params.RotationValueOutput;

}


// Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Sinus_Funct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Period                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AbcissOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OrdinateOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          deltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimerOutput                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_Sinus_Funct(float Period, float amplitude, float AbcissOffset, float OrdinateOffset, float timer, float deltaTime, class UObject* __WorldContext, float* TimerOutput, float* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Sinus_Funct");

	UFL_ProceduralAnimations_C_Sinus_Funct_Params params;
	params.Period = Period;
	params.amplitude = amplitude;
	params.AbcissOffset = AbcissOffset;
	params.OrdinateOffset = OrdinateOffset;
	params.timer = timer;
	params.deltaTime = deltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimerOutput != nullptr)
		*TimerOutput = params.TimerOutput;
	if (Value != nullptr)
		*Value = params.Value;

}


// Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.MovingGuts_Funct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  ScaleTab                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// float                          amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Period                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaleStart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Interval                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          deltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TimeOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_MovingGuts_Funct(TArray<float>* ScaleTab, float amplitude, float Period, float delay, float ScaleStart, float Interval, float time, float deltaTime, class UObject* __WorldContext, float* TimeOut)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.MovingGuts_Funct");

	UFL_ProceduralAnimations_C_MovingGuts_Funct_Params params;
	params.amplitude = amplitude;
	params.Period = Period;
	params.delay = delay;
	params.ScaleStart = ScaleStart;
	params.Interval = Interval;
	params.time = time;
	params.deltaTime = deltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaleTab != nullptr)
		*ScaleTab = params.ScaleTab;
	if (TimeOut != nullptr)
		*TimeOut = params.TimeOut;

}


// Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.BreathingBubble_Funct
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScaleMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScaleMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AbscissMin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AbscissMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBreathingBubble_Struct BreathingBubbleIn              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          deltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBreathingBubble_Struct BreathingBubbleOut             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_BreathingBubble_Funct(float ScaleMin, float ScaleMax, float AbscissMin, float AbscissMax, struct FBreathingBubble_Struct* BreathingBubbleIn, float deltaTime, class UObject* __WorldContext, struct FBreathingBubble_Struct* BreathingBubbleOut)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.BreathingBubble_Funct");

	UFL_ProceduralAnimations_C_BreathingBubble_Funct_Params params;
	params.ScaleMin = ScaleMin;
	params.ScaleMax = ScaleMax;
	params.AbscissMin = AbscissMin;
	params.AbscissMax = AbscissMax;
	params.deltaTime = deltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreathingBubbleIn != nullptr)
		*BreathingBubbleIn = params.BreathingBubbleIn;
	if (BreathingBubbleOut != nullptr)
		*BreathingBubbleOut = params.BreathingBubbleOut;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
