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

// Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
struct UChainsawRevInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
struct UhillbillyChainsawOverheatComponent_OnRep_IsChainsawOverheating_Params
{
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnLevelReadyToPlay
struct UhillbillyChainsawOverheatComponent_OnLevelReadyToPlay_Params
{
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.OnHeatChargeUpdate
struct UhillbillyChainsawOverheatComponent_OnHeatChargeUpdate_Params
{
	float                                              currentCharge;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              previosCharge;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.isChainsawOverheating
struct UhillbillyChainsawOverheatComponent_isChainsawOverheating_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
struct UhillbillyChainsawOverheatComponent_Authority_OnHeatChargeFull_Params
{
};

// Function TheHillbilly.hillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
struct UhillbillyChainsawOverheatComponent_Authority_OnHeatChargeEmpty_Params
{
};

// Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
struct UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Params
{
	class UhillbillyChainsawOverheatComponent*         hillbillyChainsawOverheatComponent;                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue
struct ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
