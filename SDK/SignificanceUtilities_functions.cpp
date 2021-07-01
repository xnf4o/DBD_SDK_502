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

// Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UactorComponent*         component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDistanceBasedTickDisabler::UnregisterComponent(class UactorComponent* component)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent");

	UDistanceBasedTickDisabler_UnregisterComponent_Params params;
	params.component = component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UactorComponent*         component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDistanceBasedTickDisabler::RegisterComponent(class UactorComponent* component)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent");

	UDistanceBasedTickDisabler_RegisterComponent_Params params;
	params.component = component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
