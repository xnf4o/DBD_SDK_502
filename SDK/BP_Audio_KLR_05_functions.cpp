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

// Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_05_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveBeginPlay");

	UBP_Audio_KLR_05_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_05_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveEndPlay");

	UBP_Audio_KLR_05_C_ReceiveEndPlay_Params params;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ExecuteUbergraph_BP_Audio_KLR_05
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_05_C::ExecuteUbergraph_BP_Audio_KLR_05(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_05.BP_Audio_KLR_05_C.ExecuteUbergraph_BP_Audio_KLR_05");

	UBP_Audio_KLR_05_C_ExecuteUbergraph_BP_Audio_KLR_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
