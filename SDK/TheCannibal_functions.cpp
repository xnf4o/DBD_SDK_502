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

// Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull");

	UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges
// (Final, Native, Private)
// Parameters:
// int                            previousNumPowerCharges        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCannibalChainsawPowerComponent::OnRep_NumPowerCharges(int previousNumPowerCharges)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges");

	UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Params params;
	params.previousNumPowerCharges = previousNumPowerCharges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UCannibalChainsawPowerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay");

	UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UCannibalChainsawPowerComponent::Multicast_OnTantrumPowerChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull");

	UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull
// (Final, Native, Private)
void UCannibalChainsawPowerComponent::Local_OnTantrumPowerChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull");

	UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCannibalChainsawPowerComponent::GetNumberOfChainsawPowerCharges()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges");

	UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull
// (Final, Native, Private)
void UCannibalChainsawPowerComponent::Authority_OnChainsawPowerChargeFull()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull");

	UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCannibalPowerPresentationItemProgressComponent::SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent");

	UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Params params;
	params.cannibalPowerChainsawComponent = cannibalPowerChainsawComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
