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

// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)
void UBP_TextDesignTunables_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay");

	UBP_TextDesignTunables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          deltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextDesignTunables_C::ReceiveTick(float deltaSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick");

	UBP_TextDesignTunables_C_ReceiveTick_Params params;
	params.deltaSeconds = deltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextDesignTunables_C::ExecuteUbergraph_BP_TextDesignTunables(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables");

	UBP_TextDesignTunables_C_ExecuteUbergraph_BP_TextDesignTunables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
