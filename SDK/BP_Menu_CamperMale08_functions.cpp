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

// Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UBP_Menu_CamperMale08_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ReceiveBeginPlay");

	UBP_Menu_CamperMale08_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          deltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_CamperMale08_C::ReceiveTick(float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ReceiveTick");

	UBP_Menu_CamperMale08_C_ReceiveTick_Params params;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ExecuteUbergraph_BP_Menu_CamperMale08
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Menu_CamperMale08_C::ExecuteUbergraph_BP_Menu_CamperMale08(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Menu_CamperMale08.BP_Menu_CamperMale08_C.ExecuteUbergraph_BP_Menu_CamperMale08");

	UBP_Menu_CamperMale08_C_ExecuteUbergraph_BP_Menu_CamperMale08_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
