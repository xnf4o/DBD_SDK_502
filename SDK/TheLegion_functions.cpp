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

// Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UgameEventDispatcher*    gameEventDispatcher            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULegionKillerAnalyticsComponent::SetGameEventDispatcher(class UgameEventDispatcher* gameEventDispatcher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher");

	ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params params;
	params.gameEventDispatcher = gameEventDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UgameEventDispatcher*    gameEventDispatcher            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULegionSurvivorAnalyticsComponent::SetGameEventDispatcher(class UgameEventDispatcher* gameEventDispatcher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher");

	ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params params;
	params.gameEventDispatcher = gameEventDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULegionSurvivorAnalyticsComponent::OnGameEventDispatched(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched");

	ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
