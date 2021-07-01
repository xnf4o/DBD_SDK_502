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

// Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDAnalytics_ESurvivorTutorialSections tutorialSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_StartSurvivorTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics");

	UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Params params;
	params.worldContextObject = worldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDAnalytics_EKillerTutorialSections tutorialSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_StartKillerTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics");

	UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Params params;
	params.worldContextObject = worldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
// (Final, Native, Static, Public, BlueprintCallable)
void UAnalyticsFunctionLibrary::STATIC_IncrementHookSpawned()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned");

	UAnalyticsFunctionLibrary_IncrementHookSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDAnalytics_ESurvivorTutorialSections tutorialSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_EndSurvivorTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics");

	UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Params params;
	params.worldContextObject = worldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDAnalytics_EKillerTutorialSections tutorialSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_EndKillerTutorialSectionAnalytics(class UObject* worldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics");

	UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Params params;
	params.worldContextObject = worldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_RecordClosetSearchSuccess(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess");

	UClosetAnalytics_RecordClosetSearchSuccess_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_RecordClosetSearchFail(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail");

	UClosetAnalytics_RecordClosetSearchFail_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_IncrementClosetEnter(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter");

	UClosetAnalytics_IncrementClosetEnter_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              interruptedPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableInterruptAnalytics(class UdbdPlayer* interruptedPlayer, class UdbdPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics");

	UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params params;
	params.interruptedPlayer = interruptedPlayer;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              hitPlayer                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableHitNearGeneratorAnalytics(class UdbdPlayer* hitPlayer, class UdbdPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics");

	UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params params;
	params.hitPlayer = hitPlayer;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              revealedPlayer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendLightbornAuraRevealedAnalytics(class UdbdPlayer* revealedPlayer, class UdbdPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics");

	UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params params;
	params.revealedPlayer = revealedPlayer;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              findingSurvivor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              foundSurvivor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendKnockoutSurvivorFoundAnalytics(class UdbdPlayer* findingSurvivor, class UdbdPlayer* foundSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics");

	UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params params;
	params.findingSurvivor = findingSurvivor;
	params.foundSurvivor = foundSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              HitSurvivor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendFranklinsHitSurvivorNearDroppedItemAnalytics(class UdbdPlayer* HitSurvivor, class UdbdPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics");

	UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params params;
	params.HitSurvivor = HitSurvivor;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              previousOwner                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendFranklinsConsumeItemAnalytics(class UdbdPlayer* previousOwner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics");

	UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params params;
	params.previousOwner = previousOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PigAnalytics.RecordRBTSearch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           searchingPlayer                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_RecordRBTSearch(class UcamperPlayer* searchingPlayer, bool Success)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PigAnalytics.RecordRBTSearch");

	UPigAnalytics_RecordRBTSearch_Params params;
	params.searchingPlayer = searchingPlayer;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UslasherPlayer*          attacher                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UcamperPlayer*           attachee                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_OnRBTAttached_Analytics(class UslasherPlayer* attacher, class UcamperPlayer* attachee)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics");

	UPigAnalytics_OnRBTAttached_Analytics_Params params;
	params.attacher = attacher;
	params.attachee = attachee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           attachedPlayer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_IncrementRBTTimerActived(class UcamperPlayer* attachedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived");

	UPigAnalytics_IncrementRBTTimerActived_Params params;
	params.attachedPlayer = attachedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           playerKilled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           killedByExecutionZone          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_IncrementRBTKilledCount(class UcamperPlayer* playerKilled, bool killedByExecutionZone)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount");

	UPigAnalytics_IncrementRBTKilledCount_Params params;
	params.playerKilled = playerKilled;
	params.killedByExecutionZone = killedByExecutionZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletStun(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun");

	UPulldownAnalytics_IncrementPalletStun_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletSpawned(class Uactor* actor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned");

	UPulldownAnalytics_IncrementPalletSpawned_Params params;
	params.actor = actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletDrop(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop");

	UPulldownAnalytics_IncrementPalletDrop_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletDestroy(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy");

	UPulldownAnalytics_IncrementPalletDestroy_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_RecordHealSuccess(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess");

	USurvivorInteractionAnalytics_RecordHealSuccess_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_RecordHatchEscape(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape");

	USurvivorInteractionAnalytics_RecordHatchEscape_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementUnhookCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_IncrementUnhookCount(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementUnhookCount");

	USurvivorInteractionAnalytics_IncrementUnhookCount_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_IncrementHealCount(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn =
UObject::FindObject<UFunction>("Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount");

	USurvivorInteractionAnalytics_IncrementHealCount_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
