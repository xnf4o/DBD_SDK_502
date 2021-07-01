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

// Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
struct ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params
{
	class UgameEventDispatcher*                        gameEventDispatcher;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
struct ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params
{
	class UgameEventDispatcher*                        gameEventDispatcher;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
struct ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params
{
	struct FgameplayTag                                GameEventType;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FgameEventData                              gameEventData;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
