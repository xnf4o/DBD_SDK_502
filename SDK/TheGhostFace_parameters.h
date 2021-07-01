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

// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
struct UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params
{
	bool                                               isInStalkMode;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
struct UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params
{
	DBDSharedTypes_ELeanState                          leanState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostFace.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
struct UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params
{
	bool                                               isStealth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
struct UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params
{
	class UchargeableComponent*                        chargeableComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentCompletionChange;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalPercentComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostFace.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
struct UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params
{
	struct FgameplayTag                                gameplayTag;                                               // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
