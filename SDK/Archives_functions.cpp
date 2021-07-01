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

// Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAfterExitOpenQEEvaluator::OnExitGateOpened(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened");

	UAfterExitOpenQEEvaluator_OnExitGateOpened_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodPointsQEEvaluator::OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying");

	UBloodPointsQEEvaluator_OnFinishedPlaying_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   specialBehaviourId             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UContextualQuestUtilities::STATIC_PlayerHasToCompleteAssociatedQuest(class UdbdPlayer* player, const struct FName& specialBehaviourId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest");

	UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params params;
	params.player = player;
	params.specialBehaviourId = specialBehaviourId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UdbdPlayer*              player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   specialBehaviourId             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UContextualQuestUtilities::STATIC_PlayerHasAssociatedQuest(class UdbdPlayer* player, const struct FName& specialBehaviourId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest");

	UContextualQuestUtilities_PlayerHasAssociatedQuest_Params params;
	params.player = player;
	params.specialBehaviourId = specialBehaviourId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDoBeforeEscapeQEEvaluator::OnEscaped(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped");

	UDoBeforeEscapeQEEvaluator_OnEscaped_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.DoBeforeHookQEEvaluator.OnHooked
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDoBeforeHookQEEvaluator::OnHooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.DoBeforeHookQEEvaluator.OnHooked");

	UDoBeforeHookQEEvaluator_OnHooked_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDuringEndGameCollapseQEEvaluator::OnEndGameCollapseStart(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart");

	UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEarnEmblemQualityQEEvaluator::OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying");

	UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEndOfGameQEEvaluator::OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying");

	UEndOfGameQEEvaluator_OnFinishedPlaying_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.OnRep_PlayersWithVisibility
// (Final, Native, Protected)
void UGlyph::OnRep_PlayersWithVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.OnRep_PlayersWithVisibility");

	UGlyph_OnRep_PlayersWithVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.DoesLocalPlayerHaveVisibility
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGlyph::DoesLocalPlayerHaveVisibility()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.DoesLocalPlayerHaveVisibility");

	UGlyph_DoesLocalPlayerHaveVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Archives.Glyph.Cosmetic_OnStoppedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UGlyph::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Cosmetic_OnStoppedInteracting");

	UGlyph_Cosmetic_OnStoppedInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Cosmetic_OnStartedInteracting
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          interactionDuration            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGlyph::Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Cosmetic_OnStartedInteracting");

	UGlyph_Cosmetic_OnStartedInteracting_Params params;
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Cosmetic_OnInteractionCompleted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGlyph::Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Cosmetic_OnInteractionCompleted");

	UGlyph_Cosmetic_OnInteractionCompleted_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isVisible                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGlyph::Cosmetic_OnGlyphVisibilityChanged(class UdbdPlayer* interactingPlayer, bool isVisible)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged");

	UGlyph_Cosmetic_OnGlyphVisibilityChanged_Params params;
	params.interactingPlayer = interactingPlayer;
	params.isVisible = isVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
// (Final, Native, Private)
// Parameters:
// bool                           isWithinRange                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  trackedActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class Uactor* trackedActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold");

	UGlyph_Authority_OnPlayerBreachedRangeThreshold_Params params;
	params.isWithinRange = isWithinRange;
	params.trackedActor = trackedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Authority_OnIntroCompleted
// (Final, Native, Private)
void UGlyph::Authority_OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Authority_OnIntroCompleted");

	UGlyph_Authority_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.Glyph.Authority_OnInteractionCompleted
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGlyph::Authority_OnInteractionCompleted(class UdbdPlayer* interactingPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.Glyph.Authority_OnInteractionCompleted");

	UGlyph_Authority_OnInteractionCompleted_Params params;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.NearKillerQEEvaluator.OnRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearKillerQEEvaluator::OnRangeChanged(bool inRange)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.NearKillerQEEvaluator.OnRangeChanged");

	UNearKillerQEEvaluator_OnRangeChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnSlashHarpoonedCamper(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper");

	UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnHarpoonHit(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit");

	UHideNearKillerQEEvaluator_OnHarpoonHit_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying");

	UHideNearKillerQEEvaluator_OnFinishedPlaying_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnChaseStart
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              chasedSurvivor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnChaseStart(class UdbdPlayer* chasedSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnChaseStart");

	UHideNearKillerQEEvaluator_OnChaseStart_Params params;
	params.chasedSurvivor = chasedSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
// (Final, Native, Private)
// Parameters:
// class UdbdPlayer*              chasedSurvivor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          chaseTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnChaseEnd(class UdbdPlayer* chasedSurvivor, float chaseTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnChaseEnd");

	UHideNearKillerQEEvaluator_OnChaseEnd_Params params;
	params.chasedSurvivor = chasedSurvivor;
	params.chaseTime = chaseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnCamperBreakFreeFromHarpoon(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon");

	UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnStopEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.MaxEventCountQEEvaluator.OnStopEventCount");

	UMaxEventCountQEEvaluator_OnStopEventCount_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnIncrementEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount");

	UMaxEventCountQEEvaluator_OnIncrementEventCount_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnDecrementEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount");

	UMaxEventCountQEEvaluator_OnDecrementEventCount_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
// (Native, Protected, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USurvivorHookSameTimeQEEvaluator::OnSurvivorUnhooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked");

	USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
// (Native, Protected, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USurvivorHookSameTimeQEEvaluator::OnSurvivorHooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked");

	USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UInLockerNearKillerQEEvaluator::OnClosetHideExit(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit");

	UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UInLockerNearKillerQEEvaluator::OnClosetHideEnter(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter");

	UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UItemConsumedQEEvaluator::OnItemConsumed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.ItemConsumedQEEvaluator.OnItemConsumed");

	UItemConsumedQEEvaluator_OnItemConsumed_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.ItemUsedQEEvaluator.OnItemUsed
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UItemUsedQEEvaluator::OnItemUsed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.ItemUsedQEEvaluator.OnItemUsed");

	UItemUsedQEEvaluator_OnItemUsed_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           survivorRemoved                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULivingSurvivorsCountQEEvaluator::OnSurvivorRemoved(class UcamperPlayer* survivorRemoved)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved");

	ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params params;
	params.survivorRemoved = survivorRemoved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
// (Final, Native, Private)
// Parameters:
// class UcamperPlayer*           survivorAdded                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULivingSurvivorsCountQEEvaluator::OnSurvivorAdded(class UcamperPlayer* survivorAdded)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded");

	ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params params;
	params.survivorAdded = survivorAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.NearTrackedActorComponent.StopTrackingActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::StopTrackingActor(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.NearTrackedActorComponent.StopTrackingActor");

	UNearTrackedActorComponent_StopTrackingActor_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.NearTrackedActorComponent.StartTrackingActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::StartTrackingActor(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.NearTrackedActorComponent.StartTrackingActor");

	UNearTrackedActorComponent_StartTrackingActor_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.NearTrackedActorComponent.SetDistanceThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::SetDistanceThreshold(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.NearTrackedActorComponent.SetDistanceThreshold");

	UNearTrackedActorComponent_SetDistanceThreshold_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           isWithinRange                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  trackedActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class Uactor* trackedActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature");

	UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params params;
	params.isWithinRange = isWithinRange;
	params.trackedActor = trackedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.NearTrackedActorComponent.IsActorWithinRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uactor*                  actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNearTrackedActorComponent::IsActorWithinRange(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.NearTrackedActorComponent.IsActorWithinRange");

	UNearTrackedActorComponent_IsActorWithinRange_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Archives.questEventsHandler.OnPlayerGameStateChanged
// (Final, Native, Private)
// Parameters:
// DBDSharedTypes_EGameState      gameState                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UquestEventsHandler::OnPlayerGameStateChanged(DBDSharedTypes_EGameState gameState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.questEventsHandler.OnPlayerGameStateChanged");

	UquestEventsHandler_OnPlayerGameStateChanged_Params params;
	params.gameState = gameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.questEventsHandler.OnGameEnded
// (Final, Native, Private)
// Parameters:
// DeadByDaylight_EEndGameReason  Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UquestEventsHandler::OnGameEnded(DeadByDaylight_EEndGameReason Reason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.questEventsHandler.OnGameEnded");

	UquestEventsHandler_OnGameEnded_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.questEventsHandler.OnFinishedPlaying
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UquestEventsHandler::OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.questEventsHandler.OnFinishedPlaying");

	UquestEventsHandler_OnFinishedPlaying_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.questEventsHandler.DBD_ShowInGameCurrentQuestInfos
// (Final, Exec, Native, Public)
void UquestEventsHandler::DBD_ShowInGameCurrentQuestInfos()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.questEventsHandler.DBD_ShowInGameCurrentQuestInfos");

	UquestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.questEventsHandler.DBD_InGameAddProgressionToCurrentQuest
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UquestEventsHandler::DBD_InGameAddProgressionToCurrentQuest(int Amount)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.questEventsHandler.DBD_InGameAddProgressionToCurrentQuest");

	UquestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UquestEventsHandler*     questEventsHandler             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestEventsHandlerUtilities::STATIC_InitializeQuestEventHandler(class UquestEventsHandler* questEventsHandler)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler");

	UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params params;
	params.questEventsHandler = questEventsHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USearchItemRarityQEEvaluator::OnItemSpawnedFromChest(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest");

	USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckConsecutiveQEEvaluator::OnSkillCheckSuccess(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess");

	USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params params;
	params.GameEventType = GameEventType;
	params.gameEventData = gameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FgameplayTag            GameEventType                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FgameEventData          gameEventData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckConsecutiveQEEvaluator::OnSkillCheckFail(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail");

	USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params params;
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
