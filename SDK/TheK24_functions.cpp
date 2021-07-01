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

// Function TheK24.ActivateK24PowerInteraction.SetK24Power
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uk24Power*               k24Power                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivateK24PowerInteraction::SetK24Power(class Uk24Power* k24Power)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ActivateK24PowerInteraction.SetK24Power");

	UActivateK24PowerInteraction_SetK24Power_Params params;
	params.k24Power = k24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              trappedGenerator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::TrapDettachedToGenerator_Cosmetic(class Ugenerator* trappedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic");

	UBlastMine_TrapDettachedToGenerator_Cosmetic_Params params;
	params.trappedGenerator = trappedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              trappedGenerator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::TrapAttachedToGenerator_Cosmetic(class Ugenerator* trappedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic");

	UBlastMine_TrapAttachedToGenerator_Cosmetic_Params params;
	params.trappedGenerator = trappedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
// (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              location                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlastMine::ThrowBubbleIndicator_Cosmetic(const struct FTransform& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic");

	UBlastMine_ThrowBubbleIndicator_Cosmetic_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.Server_OnActionInputPressed
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::Server_OnActionInputPressed(class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.Server_OnActionInputPressed");

	UBlastMine_Server_OnActionInputPressed_Params params;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.OnRep_TrappedGenerator
// (Final, Native, Private)
// Parameters:
// class Ugenerator*              oldGenerator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnRep_TrappedGenerator(class Ugenerator* oldGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnRep_TrappedGenerator");

	UBlastMine_OnRep_TrappedGenerator_Params params;
	params.oldGenerator = oldGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility
// (Final, Native, Private)
// Parameters:
// class UinteractionDefinition*  oldRepairInteraction           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnRep_CurrentRepairInteractionWithAbility(class UinteractionDefinition* oldRepairInteraction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility");

	UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Params params;
	params.oldRepairInteraction = oldRepairInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.OnActivateExplosion
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              firecrackerTransform           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnActivateExplosion(const struct FTransform& firecrackerTransform, class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnActivateExplosion");

	UBlastMine_OnActivateExplosion_Params params;
	params.firecrackerTransform = firecrackerTransform;
	params.generator = generator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.Client_TrapActivatedLoudNotification
// (Final, Net, NetReliable, Native, Event, Private, HasDefaults, NetClient)
// Parameters:
// struct FTransform              location                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlastMine::Client_TrapActivatedLoudNotification(const struct FTransform& location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.Client_TrapActivatedLoudNotification");

	UBlastMine_Client_TrapActivatedLoudNotification_Params params;
	params.location = location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMine.Authority_OnRepairProgress
// (Final, Native, Private)
// Parameters:
// float                          IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           WasCoop                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::Authority_OnRepairProgress(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMine.Authority_OnRepairProgress");

	UBlastMine_Authority_OnRepairProgress_Params params;
	params.IndividualChargeAmount = IndividualChargeAmount;
	params.TotalChargeAmount = TotalChargeAmount;
	params.ChargeInstigator = ChargeInstigator;
	params.WasCoop = WasCoop;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive
// (Final, Native, Private)
void UBlastMineTrapComponent::OnRep_IsTrapActive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive");

	UBlastMineTrapComponent_OnRep_IsTrapActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Counterforce.Multicast_ShowTotemAura
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class Utotem*                  totem                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCounterforce::Multicast_ShowTotemAura(class Utotem* totem)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Counterforce.Multicast_ShowTotemAura");

	UCounterforce_Multicast_ShowTotemAura_Params params;
	params.totem = totem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.OnRep_IsPerkEnabled
// (Final, Native, Private)
void UEruption::OnRep_IsPerkEnabled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.OnRep_IsPerkEnabled");

	UEruption_OnRep_IsPerkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.Multicast_TriggerPerk
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<class Ugenerator*>      explodingGenerators            (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Multicast_TriggerPerk(TArray<class Ugenerator*> explodingGenerators)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.Multicast_TriggerPerk");

	UEruption_Multicast_TriggerPerk_Params params;
	params.explodingGenerators = explodingGenerators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.Multicast_HighlightGenerator
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Multicast_HighlightGenerator(class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.Multicast_HighlightGenerator");

	UEruption_Multicast_HighlightGenerator_Params params;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.MakeSurvivorScreamCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              screamingSurvivor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::MakeSurvivorScreamCosmetic(class UdbdPlayer* screamingSurvivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.MakeSurvivorScreamCosmetic");

	UEruption_MakeSurvivorScreamCosmetic_Params params;
	params.screamingSurvivor = screamingSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.GetScreamRevealLocationDuration
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UEruption::GetScreamRevealLocationDuration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.GetScreamRevealLocationDuration");

	UEruption_GetScreamRevealLocationDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              highlightedGenerator           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Cosmetic_OnGeneratorHighlightStart(class Ugenerator* highlightedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart");

	UEruption_Cosmetic_OnGeneratorHighlightStart_Params params;
	params.highlightedGenerator = highlightedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class Ugenerator*              highlightedGenerator           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Cosmetic_OnGeneratorHighlightEnd(class Ugenerator* highlightedGenerator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd");

	UEruption_Cosmetic_OnGeneratorHighlightEnd_Params params;
	params.highlightedGenerator = highlightedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress
// (Final, Native, Private)
void UFlashbang::OnRep_GeneratorsRepairProgress()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress");

	UFlashbang_OnRep_GeneratorsRepairProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UFlashbang::Cosmetic_OnGeneratorRepairProgressionTargetAchieved()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved");

	UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
// (Final, Net, Native, Event, Private, NetClient)
void UFlashbang::Client_OnGeneratorRepairProgressionTargetAchieved()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved");

	UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.Flashbang.Authority_OnRepairProgressApplied
// (Final, Native, Private)
// Parameters:
// float                          IndividualChargeAmount         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TotalChargeAmount              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ChargeInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           WasCoop                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          deltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashbang::Authority_OnRepairProgressApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.Flashbang.Authority_OnRepairProgressApplied");

	UFlashbang_Authority_OnRepairProgressApplied_Params params;
	params.IndividualChargeAmount = IndividualChargeAmount;
	params.TotalChargeAmount = TotalChargeAmount;
	params.ChargeInstigator = ChargeInstigator;
	params.WasCoop = WasCoop;
	params.deltaTime = deltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UInjectSerumInteraction::OnSurvivorCured_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic");

	UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.InjectSerumInteraction.OnKillerSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInjectSerumInteraction::OnKillerSet(class UslasherPlayer* Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.OnKillerSet");

	UInjectSerumInteraction_OnKillerSet_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.InjectSerumInteraction.GetInjectionTarget
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UcamperPlayer*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UcamperPlayer* UInjectSerumInteraction::GetInjectionTarget()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.GetInjectionTarget");

	UInjectSerumInteraction_GetInjectionTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.InjectSerumInteraction.Authority_CureSurvivor
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
// class UcamperPlayer*           camperPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInjectSerumInteraction::Authority_CureSurvivor(class UcamperPlayer* camperPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.Authority_CureSurvivor");

	UInjectSerumInteraction_Authority_CureSurvivor_Params params;
	params.camperPlayer = camperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            powerLevel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24AnimInstance::OnKillerPowerLevelChanged(int powerLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged");

	UK24AnimInstance_OnKillerPowerLevelChanged_Params params;
	params.powerLevel = powerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            powerLevel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CharacterFXComponent::Local_OnKillerPowerLevelChanged(int powerLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged");

	UK24CharacterFXComponent_Local_OnKillerPowerLevelChanged_Params params;
	params.powerLevel = powerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo
// (Final, Exec, Native, Public)
// Parameters:
// float                          x                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_TeleportZombiesTo(float x, float y, float z)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo");

	UK24CheatComponent_DBD_TeleportZombiesTo_Params params;
	params.x = x;
	params.y = y;
	params.z = z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24ZombieFall
// (Final, Exec, Native, Public)
// Parameters:
// float                          Zvalue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24ZombieFall(float Zvalue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24ZombieFall");

	UK24CheatComponent_DBD_K24ZombieFall_Params params;
	params.Zvalue = Zvalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24StopAllZombies
// (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24StopAllZombies()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24StopAllZombies");

	UK24CheatComponent_DBD_K24StopAllZombies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24StartAllZombies
// (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24StartAllZombies()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24StartAllZombies");

	UK24CheatComponent_DBD_K24StartAllZombies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
// (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24SpawnZombieOnKiller()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller");

	UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24SetPowerLevelPoints(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints");

	UK24CheatComponent_DBD_K24SetPowerLevelPoints_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24SetContaminationOnSurvivor(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor");

	UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
// (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24ComeToMeMyZombies()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies");

	UK24CheatComponent_DBD_K24ComeToMeMyZombies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24PounceAttack.Server_HitZombie
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UZombieCharacter*        Zombie                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          targetLocationTimestamp        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PounceAttack::Server_HitZombie(class UZombieCharacter* Zombie, float targetLocationTimestamp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24PounceAttack.Server_HitZombie");

	UK24PounceAttack_Server_HitZombie_Params params;
	params.Zombie = Zombie;
	params.targetLocationTimestamp = targetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.WhipAttackStart_Cosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void Uk24Power::WhipAttackStart_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.WhipAttackStart_Cosmetic");

	Uk24Power_WhipAttackStart_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.WhipAttackMove_Cosmetic
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 whipStartLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 whipEndLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isFirstRayCast                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::WhipAttackMove_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& whipEndLocation, bool isFirstRayCast)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.WhipAttackMove_Cosmetic");

	Uk24Power_WhipAttackMove_Cosmetic_Params params;
	params.whipStartLocation = whipStartLocation;
	params.whipEndLocation = whipEndLocation;
	params.isFirstRayCast = isFirstRayCast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.WhipAttackHit_Cosmetic
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 whipStartLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impactPointLocation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 whipEndLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isFirstHit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 impactNormal                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   phyMaterial                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           hitACharacter                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::WhipAttackHit_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& impactPointLocation, const struct Fvector& whipEndLocation, bool isFirstHit, const struct Fvector& impactNormal, const struct FName& phyMaterial, bool hitACharacter)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.WhipAttackHit_Cosmetic");

	Uk24Power_WhipAttackHit_Cosmetic_Params params;
	params.whipStartLocation = whipStartLocation;
	params.impactPointLocation = impactPointLocation;
	params.whipEndLocation = whipEndLocation;
	params.isFirstHit = isFirstHit;
	params.impactNormal = impactNormal;
	params.phyMaterial = phyMaterial;
	params.hitACharacter = hitACharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.WhipAttackEnd_Cosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void Uk24Power::WhipAttackEnd_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.WhipAttackEnd_Cosmetic");

	Uk24Power_WhipAttackEnd_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.Server_PowerDestroyPallet
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class Upallet*                 pallet                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Server_PowerDestroyPallet(class Upallet* pallet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Server_PowerDestroyPallet");

	Uk24Power_Server_PowerDestroyPallet_Params params;
	params.pallet = pallet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.Server_PowerDestroyBreakable
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UBreakableBase*          breakable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Server_PowerDestroyBreakable(class UBreakableBase* breakable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Server_PowerDestroyBreakable");

	Uk24Power_Server_PowerDestroyBreakable_Params params;
	params.breakable = breakable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.Server_KillAZombie
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UZombieCharacter*        Zombie                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_EAttackType     AttackType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Server_KillAZombie(class UZombieCharacter* Zombie, DBDSharedTypes_EAttackType AttackType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Server_KillAZombie");

	Uk24Power_Server_KillAZombie_Params params;
	params.Zombie = Zombie;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.PowerHitStateEnd_Cosmetic
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct Fvector                 whipStartLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 whipEndLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::PowerHitStateEnd_Cosmetic(const struct Fvector& whipStartLocation, const struct Fvector& whipEndLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.PowerHitStateEnd_Cosmetic");

	Uk24Power_PowerHitStateEnd_Cosmetic_Params params;
	params.whipStartLocation = whipStartLocation;
	params.whipEndLocation = whipEndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.PowerCooldownEnd_Cosmetic
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void Uk24Power::PowerCooldownEnd_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.PowerCooldownEnd_Cosmetic");

	Uk24Power_PowerCooldownEnd_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.OnRep_PowerLevelPoints
// (Final, Native, Private)
void Uk24Power::OnRep_PowerLevelPoints()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.OnRep_PowerLevelPoints");

	Uk24Power_OnRep_PowerLevelPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.OnPowerStop_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void Uk24Power::OnPowerStop_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.OnPowerStop_Cosmetic");

	Uk24Power_OnPowerStop_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.OnPowerStartCharge_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void Uk24Power::OnPowerStartCharge_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.OnPowerStartCharge_Cosmetic");

	Uk24Power_OnPowerStartCharge_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.OnPowerLevelChanged_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// int                            powerLevel                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::OnPowerLevelChanged_Cosmetic(int powerLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.OnPowerLevelChanged_Cosmetic");

	Uk24Power_OnPowerLevelChanged_Cosmetic_Params params;
	params.powerLevel = powerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.Multicast_PowerDestroyPallet
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class Upallet*                 pallet                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Multicast_PowerDestroyPallet(class Upallet* pallet)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Multicast_PowerDestroyPallet");

	Uk24Power_Multicast_PowerDestroyPallet_Params params;
	params.pallet = pallet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.Multicast_PowerDestroyBreakable
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// class UBreakableBase*          breakable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Multicast_PowerDestroyBreakable(class UBreakableBase* breakable)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Multicast_PowerDestroyBreakable");

	Uk24Power_Multicast_PowerDestroyBreakable_Params params;
	params.breakable = breakable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24Power.isInPower
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Uk24Power::isInPower()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.isInPower");

	Uk24Power_isInPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.k24Power.GetWhipLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float Uk24Power::GetWhipLength()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.GetWhipLength");

	Uk24Power_GetWhipLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.k24Power.GetPowerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int Uk24Power::GetPowerLevel()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.GetPowerLevel");

	Uk24Power_GetPowerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.k24Power.Authority_OnSurvivorContaminated
// (Final, Native, Public)
// Parameters:
// TheK24_EContaminator           contaminator                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24Power::Authority_OnSurvivorContaminated(TheK24_EContaminator contaminator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24Power.Authority_OnSurvivorContaminated");

	Uk24Power_Authority_OnSurvivorContaminated_Params params;
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
// (Final, Native, Private)
void UK24PowerAnimInstance::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay");

	UK24PowerAnimInstance_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            powerLevel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PowerAnimInstance::OnKillerPowerLevelChanged(int powerLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged");

	UK24PowerAnimInstance_OnKillerPowerLevelChanged_Params params;
	params.powerLevel = powerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24PowerAnimInstance.OnIntroCompleted
// (Final, Native, Private)
void UK24PowerAnimInstance::OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnIntroCompleted");

	UK24PowerAnimInstance_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.k24PowerCooldownInteraction.SetK24Power
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uk24Power*               k24Power                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24PowerCooldownInteraction::SetK24Power(class Uk24Power* k24Power)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.k24PowerCooldownInteraction.SetK24Power");

	Uk24PowerCooldownInteraction_SetK24Power_Params params;
	params.k24Power = k24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uk24Power*               k24Power                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PowerPresentationItemProgressComponent::SetK24Power(class Uk24Power* k24Power)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power");

	UK24PowerPresentationItemProgressComponent_SetK24Power_Params params;
	params.k24Power = k24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24WhipAttack.Server_ContaminatePlayer
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UcamperPlayer*           target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          targetLocationTimestamp        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24WhipAttack::Server_ContaminatePlayer(class UcamperPlayer* target, float targetLocationTimestamp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24WhipAttack.Server_ContaminatePlayer");

	UK24WhipAttack_Server_ContaminatePlayer_Params params;
	params.target = target;
	params.targetLocationTimestamp = targetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.K24WhipAttack.Client_ContaminationResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UdbdPlayer*              target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isValid                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24WhipAttack::Client_ContaminationResult(class UdbdPlayer* target, bool isValid)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.K24WhipAttack.Client_ContaminationResult");

	UK24WhipAttack_Client_ContaminationResult_Params params;
	params.target = target;
	params.isValid = isValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.LethalPursuer.Server_ActivatePerk
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
void ULethalPursuer::Server_ActivatePerk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.LethalPursuer.Server_ActivatePerk");

	ULethalPursuer_Server_ActivatePerk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.LethalPursuer.Local_OnIntroCompleted
// (Final, Native, Private)
void ULethalPursuer::Local_OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.LethalPursuer.Local_OnIntroCompleted");

	ULethalPursuer_Local_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
// (Final, Native, Private)
void URookieSpirit::OnRep_NumberOfGreatSkillChecksOnGeneratorRepair()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair");

	URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
// (Final, Native, Private)
// Parameters:
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URookieSpirit::HandleGeneratorIsDamagedChanged(class Ugenerator* generator, class UdbdPlayer* player)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged");

	URookieSpirit_HandleGeneratorIsDamagedChanged_Params params;
	params.generator = generator;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SupplyCrateInteractable.OnRep_IsOpen
// (Final, Native, Private)
void USupplyCrateInteractable::OnRep_IsOpen()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SupplyCrateInteractable.OnRep_IsOpen");

	USupplyCrateInteractable_OnRep_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing
// (Final, Native, Private)
void USupplyCrateInteractable::OnRep_IsAutoClosing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing");

	USupplyCrateInteractable_OnRep_IsAutoClosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.Server_SetContaminatedValue
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TheK24_EContaminator           contaminator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorContaminationComponent::Server_SetContaminatedValue(bool Value, TheK24_EContaminator contaminator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.Server_SetContaminatedValue");

	USurvivorContaminationComponent_Server_SetContaminatedValue_Params params;
	params.Value = Value;
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
// (Final, Native, Private)
void USurvivorContaminationComponent::OnRep_IsContaminated()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated");

	USurvivorContaminationComponent_OnRep_IsContaminated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnRep_InjectionSerumInteraction
// (Final, Native, Private)
void USurvivorContaminationComponent::OnRep_InjectionSerumInteraction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnRep_InjectionSerumInteraction");

	USurvivorContaminationComponent_OnRep_InjectionSerumInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnPlayerInteractableSet
// (Final, Native, Private)
void USurvivorContaminationComponent::OnPlayerInteractableSet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnPlayerInteractableSet");

	USurvivorContaminationComponent_OnPlayerInteractableSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USurvivorContaminationComponent::OnContaminationCured_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic");

	USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USurvivorContaminationComponent::OnContaminated_SFX_Stinger_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic");

	USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TheK24_EContaminator           contaminator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorContaminationComponent::OnContaminated_Cosmetic(TheK24_EContaminator contaminator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic");

	USurvivorContaminationComponent_OnContaminated_Cosmetic_Params params;
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// TheK24_EContaminator           contaminator                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorContaminationComponent::Multicast_OnContaminated_Cosmetic(TheK24_EContaminator contaminator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic");

	USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Params params;
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.SurvivorContaminationComponent.IsContaminated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorContaminationComponent::IsContaminated()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.IsContaminated");

	USurvivorContaminationComponent_IsContaminated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.ZombieAIController.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieAIController::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieAIController.OnSlasherSet");

	UZombieAIController_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
// (Final, Native, Private)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus             stimulus                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UZombieAIController::Authority_OnTargetPerceptionUpdated(class Uactor* actor, const struct FAIStimulus& stimulus)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated");

	UZombieAIController_Authority_OnTargetPerceptionUpdated_Params params;
	params.actor = actor;
	params.stimulus = stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ugenerator*              generator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieAttractedByGeneratorBTService::OnInRangeChanged(bool inRange, class Ugenerator* generator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged");

	UZombieAttractedByGeneratorBTService_OnInRangeChanged_Params params;
	params.inRange = inRange;
	params.generator = generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// DBDSharedTypes_EAttackType     AttackType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::ZombieKilledByKiller_Cosmetic(DBDSharedTypes_EAttackType AttackType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic");

	UZombieCharacter_ZombieKilledByKiller_Cosmetic_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::SetCharacterActive_Cosmetic(bool Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic");

	UZombieCharacter_SetCharacterActive_Cosmetic_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TheK24_EZombieState            zombieState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::OnZombieStateChanged_Cosmetic(TheK24_EZombieState zombieState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic");

	UZombieCharacter_OnZombieStateChanged_Cosmetic_Params params;
	params.zombieState = zombieState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnSlasherSet");

	UZombieCharacter_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnRep_ZombieState
// (Final, Native, Private)
// Parameters:
// TheK24_EZombieState            PreviousState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::OnRep_ZombieState(TheK24_EZombieState PreviousState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnRep_ZombieState");

	UZombieCharacter_OnRep_ZombieState_Params params;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnRep_ZombieGender
// (Final, Native, Private)
void UZombieCharacter::OnRep_ZombieGender()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnRep_ZombieGender");

	UZombieCharacter_OnRep_ZombieGender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UZombieCharacter::OnFemaleGenderSet_Cosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic");

	UZombieCharacter_OnFemaleGenderSet_Cosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
// (Final, Native, Private)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::OnEndOverlapZombieAttackDetector(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector");

	UZombieCharacter_OnEndOverlapZombieAttackDetector_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              sweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UZombieCharacter::OnBeginOverlapZombieAttackDetector(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector");

	UZombieCharacter_OnBeginOverlapZombieAttackDetector_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.sweepResult = sweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// DBDSharedTypes_EAttackType     AttackType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::Multicast_ZombieKilledByKillerCosmetic(DBDSharedTypes_EAttackType AttackType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic");

	UZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.GetZombieGender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TheK24_EZombieGender           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheK24_EZombieGender UZombieCharacter::GetZombieGender()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetZombieGender");

	UZombieCharacter_GetZombieGender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOtherCharactersVerticalCollisionsHandler* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOtherCharactersVerticalCollisionsHandler* UZombieCharacter::GetOtherCharactersVerticalCollisionsHandler()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler");

	UZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAuthoritativeMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAuthoritativeMovementComponent* UZombieCharacter::GetAuthoritativeMovementComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent");

	UZombieCharacter_GetAuthoritativeMovementComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.ZombieCharacter.GetAudioSwitchState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UZombieCharacter::GetAudioSwitchState()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetAudioSwitchState");

	UZombieCharacter_GetAudioSwitchState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged
// (Final, Native, Private)
// Parameters:
// TheK24_EZombieState            zombieState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::Authority_OnZombieStateChanged(TheK24_EZombieState zombieState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged");

	UZombieCharacter_Authority_OnZombieStateChanged_Params params;
	params.zombieState = zombieState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
// (Final, Native, Private)
// Parameters:
// class UFlashlightComponent*    FlashLight                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::Authority_OnFlashlightRemoved(class UFlashlightComponent* FlashLight)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved");

	UZombieCharacter_Authority_OnFlashlightRemoved_Params params;
	params.FlashLight = FlashLight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded
// (Final, Native, Private)
// Parameters:
// class UFlashlightComponent*    FlashLight                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCharacter::Authority_OnFlashlightAdded(class UFlashlightComponent* FlashLight)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded");

	UZombieCharacter_Authority_OnFlashlightAdded_Params params;
	params.FlashLight = FlashLight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FFirecrackerEffectData  effectData                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UZombieCharacter::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin");

	UZombieCharacter_Authority_OnFirecrackerInRangeBegin_Params params;
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
// (Final, Native, Private)
void UZombieCharacter::Authority_DeactivateZombieAndStartRespawnTimer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer");

	UZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UcamperPlayer*           Survivor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCustomizationComponent::Multicast_SetZombieCustomization(class UcamperPlayer* Survivor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization");

	UZombieCustomizationComponent_Multicast_SetZombieCustomization_Params params;
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
// (Final, Native, Private)
// Parameters:
// class Ucharacter*              character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EMovementMode> prevMovementMode               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  previousCustomMode             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieFallDetectorComponent::Authority_OnMovementModeChange(class Ucharacter* character, TEnumAsByte<Engine_EMovementMode> prevMovementMode, unsigned char previousCustomMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange");

	UZombieFallDetectorComponent_Authority_OnMovementModeChange_Params params;
	params.character = character;
	params.prevMovementMode = prevMovementMode;
	params.previousCustomMode = previousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            powerLevel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieResurrector::Authority_OnKillerPowerLevelChanged(int powerLevel)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged");

	UZombieResurrector_Authority_OnKillerPowerLevelChanged_Params params;
	params.powerLevel = powerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class Uactor*                  originator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  instigatingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           shouldTrack                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          audibleRange                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isQuickAction                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombiesInterestEventManager::Authority_OnLoudNoiseTriggered(class Uactor* originator, class Uactor* instigatingActor, const struct Fvector& location, bool shouldTrack, float* audibleRange, bool isQuickAction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered");

	UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Params params;
	params.originator = originator;
	params.instigatingActor = instigatingActor;
	params.location = location;
	params.shouldTrack = shouldTrack;
	params.isQuickAction = isQuickAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (audibleRange != nullptr)
		*audibleRange = params.audibleRange;

}


// Function TheK24.ZombiesManagement.Authority_OnIntroComplete
// (Final, Native, Private)
void UZombiesManagement::Authority_OnIntroComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheK24.ZombiesManagement.Authority_OnIntroComplete");

	UZombiesManagement_Authority_OnIntroComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
