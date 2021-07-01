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

// Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_ESurvivorTutorialSections             tutorialSection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EKillerTutorialSections               tutorialSection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
struct UAnalyticsFunctionLibrary_IncrementHookSpawned_Params
{
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_ESurvivorTutorialSections             tutorialSection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EKillerTutorialSections               tutorialSection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
struct UClosetAnalytics_RecordClosetSearchSuccess_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
struct UClosetAnalytics_RecordClosetSearchFail_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
struct UClosetAnalytics_IncrementClosetEnter_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
struct UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params
{
	class UdbdPlayer*                                  interruptedPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
struct UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params
{
	class UdbdPlayer*                                  hitPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
struct UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params
{
	class UdbdPlayer*                                  revealedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
struct UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params
{
	class UdbdPlayer*                                  findingSurvivor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  foundSurvivor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
struct UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params
{
	class UdbdPlayer*                                  HitSurvivor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  slasher;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
struct UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params
{
	class UdbdPlayer*                                  previousOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.RecordRBTSearch
struct UPigAnalytics_RecordRBTSearch_Params
{
	class UcamperPlayer*                               searchingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
struct UPigAnalytics_OnRBTAttached_Analytics_Params
{
	class UslasherPlayer*                              attacher;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UcamperPlayer*                               attachee;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
struct UPigAnalytics_IncrementRBTTimerActived_Params
{
	class UcamperPlayer*                               attachedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
struct UPigAnalytics_IncrementRBTKilledCount_Params
{
	class UcamperPlayer*                               playerKilled;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               killedByExecutionZone;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
struct UPulldownAnalytics_IncrementPalletStun_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
struct UPulldownAnalytics_IncrementPalletSpawned_Params
{
	class Uactor*                                      actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
struct UPulldownAnalytics_IncrementPalletDrop_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
struct UPulldownAnalytics_IncrementPalletDestroy_Params
{
	class UslasherPlayer*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
struct USurvivorInteractionAnalytics_RecordHealSuccess_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
struct USurvivorInteractionAnalytics_RecordHatchEscape_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementUnhookCount
struct USurvivorInteractionAnalytics_IncrementUnhookCount_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
struct USurvivorInteractionAnalytics_IncrementHealCount_Params
{
	class UcamperPlayer*                               Survivor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
