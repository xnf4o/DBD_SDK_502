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

// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveBeginPlay_2
// (BlueprintCallable, BlueprintEvent)
void UBP_BloodwebGenerator_C::ReceiveBeginPlay_2()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveBeginPlay_2");

	UBP_BloodwebGenerator_C_ReceiveBeginPlay_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveActorBeginOverlap_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uactor*                  otherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BloodwebGenerator_C::ReceiveActorBeginOverlap_2(class Uactor* otherActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveActorBeginOverlap_2");

	UBP_BloodwebGenerator_C_ReceiveActorBeginOverlap_2_Params params;
	params.otherActor = otherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveTick_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          deltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BloodwebGenerator_C::ReceiveTick_2(float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ReceiveTick_2");

	UBP_BloodwebGenerator_C_ReceiveTick_2_Params params;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ExecuteUbergraph_BP_BloodwebGenerator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BloodwebGenerator_C::ExecuteUbergraph_BP_BloodwebGenerator(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BloodwebGenerator.BP_BloodwebGenerator_C.ExecuteUbergraph_BP_BloodwebGenerator");

	UBP_BloodwebGenerator_C_ExecuteUbergraph_BP_BloodwebGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
