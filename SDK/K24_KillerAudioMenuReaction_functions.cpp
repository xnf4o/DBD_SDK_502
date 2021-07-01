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

// Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UDBDMenuPlayer*>  menuPlayers                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UK24_KillerAudioMenuReaction_C::LobbyKillerReactionSpecificSurvivorSFX(TArray<class UDBDMenuPlayer*> menuPlayers)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX");

	UK24_KillerAudioMenuReaction_C_LobbyKillerReactionSpecificSurvivorSFX_Params params;
	params.menuPlayers = menuPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UK24_KillerAudioMenuReaction_C::ExecuteUbergraph_K24_KillerAudioMenuReaction(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction");

	UK24_KillerAudioMenuReaction_C_ExecuteUbergraph_K24_KillerAudioMenuReaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
