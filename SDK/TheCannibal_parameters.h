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
// Parameters
//---------------------------------------------------------------------------

// Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull
struct UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Params
{
};

// Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges
struct UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Params
{
	int                                                previousNumPowerCharges;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay
struct UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Params
{
};

// Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull
struct UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Params
{
};

// Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull
struct UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Params
{
};

// Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges
struct UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull
struct UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Params
{
};

// Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent
struct UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Params
{
	class UCannibalChainsawPowerComponent*             cannibalPowerChainsawComponent;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
