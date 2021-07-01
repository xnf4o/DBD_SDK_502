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

// Function BPI_Effect_General.BPI_Effect_General_C.ReturnOniToNormal
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ReturnOniToNormal()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ReturnOniToNormal");

	UBPI_Effect_General_C_ReturnOniToNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.AddBloodDrippingGKMoriMale
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::AddBloodDrippingGKMoriMale()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.AddBloodDrippingGKMoriMale");

	UBPI_Effect_General_C_AddBloodDrippingGKMoriMale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeLT
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_HideKnifeLT()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeLT");

	UBPI_Effect_General_C_K23_HideKnifeLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeRT
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_HideKnifeRT()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeRT");

	UBPI_Effect_General_C_K23_HideKnifeRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_HideBat
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_HideBat()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_HideBat");

	UBPI_Effect_General_C_K23_HideBat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowBat
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_ShowBat()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowBat");

	UBPI_Effect_General_C_K23_ShowBat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeRT
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_ShowKnifeRT()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeRT");

	UBPI_Effect_General_C_K23_ShowKnifeRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeLT
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K23_ShowKnifeLT()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeLT");

	UBPI_Effect_General_C_K23_ShowKnifeLT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_IsAttachedLocker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAttachedLocker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K22_IsAttachedLocker(bool IsAttachedLocker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_IsAttachedLocker");

	UBPI_Effect_General_C_K22_IsAttachedLocker_Params params;
	params.IsAttachedLocker = IsAttachedLocker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K23_CamperHitByKnife
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isLocallyObserved              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          LacerationPercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDangerous                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K23_CamperHitByKnife(bool isLocallyObserved, float LacerationPercent, bool IsDangerous)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K23_CamperHitByKnife");

	UBPI_Effect_General_C_K23_CamperHitByKnife_Params params;
	params.isLocallyObserved = isLocallyObserved;
	params.LacerationPercent = LacerationPercent;
	params.IsDangerous = IsDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump_Stop
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_HighlightMissJump_Stop()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump_Stop");

	UBPI_Effect_General_C_K22_HighlightMissJump_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_BrotherDissolveLocker
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_BrotherDissolveLocker()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_BrotherDissolveLocker");

	UBPI_Effect_General_C_K22_BrotherDissolveLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_End
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Camper_AntidoteBoostVignette_End()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_End");

	UBPI_Effect_General_C_Camper_AntidoteBoostVignette_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_Start
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Camper_AntidoteBoostVignette_Start()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_Start");

	UBPI_Effect_General_C_Camper_AntidoteBoostVignette_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_End
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Killer_LungeAttack_End()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_End");

	UBPI_Effect_General_C_Killer_LungeAttack_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_Start
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Killer_LungeAttack_Start()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_Start");

	UBPI_Effect_General_C_Killer_LungeAttack_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_QuickDissolveBrother
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_QuickDissolveBrother()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_QuickDissolveBrother");

	UBPI_Effect_General_C_K22_QuickDissolveBrother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_PlaceVignette
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_Killer_PlaceVignette()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_PlaceVignette");

	UBPI_Effect_General_C_K12_Killer_PlaceVignette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_RemoveVignette
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_Killer_RemoveVignette()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_RemoveVignette");

	UBPI_Effect_General_C_K12_Killer_RemoveVignette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_BombSmokeColor
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_Killer_BombSmokeColor()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_BombSmokeColor");

	UBPI_Effect_General_C_K12_Killer_BombSmokeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteBegin
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_Killer_AntidoteBegin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteBegin");

	UBPI_Effect_General_C_K12_Killer_AntidoteBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteEnd
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_Killer_AntidoteEnd()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteEnd");

	UBPI_Effect_General_C_K12_Killer_AntidoteEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_GetAntidoteVignette
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K12_GetAntidoteVignette()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_GetAntidoteVignette");

	UBPI_Effect_General_C_K12_GetAntidoteVignette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K12_GetToxinVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TheClown_EBombType             Bomb_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Effect_General_C::K12_GetToxinVignette(TheClown_EBombType Bomb_Type)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K12_GetToxinVignette");

	UBPI_Effect_General_C_K12_GetToxinVignette_Params params;
	params.Bomb_Type = Bomb_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLandingVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WrongLanding                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K22_WrongLandingVignette(bool WrongLanding)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLandingVignette");

	UBPI_Effect_General_C_K22_WrongLandingVignette_Params params;
	params.WrongLanding = WrongLanding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_DetachedFromSurvivor_VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_DetachedFromSurvivor_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_DetachedFromSurvivor_VFX");

	UBPI_Effect_General_C_K22_DetachedFromSurvivor_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_AttachedToSurvivor_VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_AttachedToSurvivor_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_AttachedToSurvivor_VFX");

	UBPI_Effect_General_C_K22_AttachedToSurvivor_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLanding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Wrong_Landing                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K22_WrongLanding(bool Wrong_Landing)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLanding");

	UBPI_Effect_General_C_K22_WrongLanding_Params params;
	params.Wrong_Landing = Wrong_Landing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOff
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K04_TelekinesisOff()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOff");

	UBPI_Effect_General_C_K04_TelekinesisOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOn
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K04_TelekinesisOn()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOn");

	UBPI_Effect_General_C_K04_TelekinesisOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOff
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K04_InvisibleOff()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOff");

	UBPI_Effect_General_C_K04_InvisibleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOn
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K04_InvisibleOn()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOn");

	UBPI_Effect_General_C_K04_InvisibleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K07_TreatmentStart
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K07_TreatmentStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K07_TreatmentStart");

	UBPI_Effect_General_C_K07_TreatmentStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K05_BloodDrops
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K05_BloodDrops()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K05_BloodDrops");

	UBPI_Effect_General_C_K05_BloodDrops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpactOff
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K05_TrapImpactOff()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpactOff");

	UBPI_Effect_General_C_K05_TrapImpactOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpact
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K05_TrapImpact()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpact");

	UBPI_Effect_General_C_K05_TrapImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K05_SetTrap
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K05_SetTrap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K05_SetTrap");

	UBPI_Effect_General_C_K05_SetTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.On Execution
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::On_Execution()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.On Execution");

	UBPI_Effect_General_C_On_Execution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Inactive
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_Jump_Inactive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Inactive");

	UBPI_Effect_General_C_K22_Jump_Inactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Active
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_Jump_Active()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Active");

	UBPI_Effect_General_C_K22_Jump_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyRespawn
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_BabyRespawn()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyRespawn");

	UBPI_Effect_General_C_K22_BabyRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyBloodDissolve
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_BabyBloodDissolve()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyBloodDissolve");

	UBPI_Effect_General_C_K22_BabyBloodDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneDelete
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_MembraneDelete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneDelete");

	UBPI_Effect_General_C_K22_MembraneDelete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneRecovery
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_MembraneRecovery()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneRecovery");

	UBPI_Effect_General_C_K22_MembraneRecovery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_ReleaseBrother
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_ReleaseBrother()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_ReleaseBrother");

	UBPI_Effect_General_C_K22_ReleaseBrother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_JumpTrail_Deactivate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Deactivate");

	UBPI_Effect_General_C_K22_JumpTrail_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Activate
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_JumpTrail_Activate()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Activate");

	UBPI_Effect_General_C_K22_JumpTrail_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_DormantAttachedSlasher
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_DormantAttachedSlasher()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_DormantAttachedSlasher");

	UBPI_Effect_General_C_K22_DormantAttachedSlasher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_HighlightMissJump()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump");

	UBPI_Effect_General_C_K22_HighlightMissJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDormant_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K22_HighlightDormant(bool IsDormant_)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormant");

	UBPI_Effect_General_C_K22_HighlightDormant_Params params;
	params.IsDormant_ = IsDormant_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormantMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDormantMain_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::K22_HighlightDormantMain(bool IsDormantMain_)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormantMain");

	UBPI_Effect_General_C_K22_HighlightDormantMain_Params params;
	params.IsDormantMain_ = IsDormantMain_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.K22_SpawnWipeVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::K22_SpawnWipeVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.K22_SpawnWipeVFX");

	UBPI_Effect_General_C_K22_SpawnWipeVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.HideSyringeOnStun
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::HideSyringeOnStun()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.HideSyringeOnStun");

	UBPI_Effect_General_C_HideSyringeOnStun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateVignetteOnWallCollision
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivateVignetteOnWallCollision()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateVignetteOnWallCollision");

	UBPI_Effect_General_C_ActivateVignetteOnWallCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.AnimateLiquidSyringe
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::AnimateLiquidSyringe()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.AnimateLiquidSyringe");

	UBPI_Effect_General_C_AnimateLiquidSyringe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.HideSyringe
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::HideSyringe()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.HideSyringe");

	UBPI_Effect_General_C_HideSyringe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ShowSyringe
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ShowSyringe()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ShowSyringe");

	UBPI_Effect_General_C_ShowSyringe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateAttemptEscapeVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivateAttemptEscapeVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateAttemptEscapeVFX");

	UBPI_Effect_General_C_ActivateAttemptEscapeVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedRelocateVignette
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::StartDeathBedRelocateVignette()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedRelocateVignette");

	UBPI_Effect_General_C_StartDeathBedRelocateVignette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.SpawnFullScreenBlood
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::SpawnFullScreenBlood()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.SpawnFullScreenBlood");

	UBPI_Effect_General_C_SpawnFullScreenBlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateKnockoutVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivateKnockoutVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateKnockoutVFX");

	UBPI_Effect_General_C_ActivateKnockoutVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.DeactivateKnockoutVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::DeactivateKnockoutVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.DeactivateKnockoutVFX");

	UBPI_Effect_General_C_DeactivateKnockoutVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedDissolve
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::StartDeathBedDissolve()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedDissolve");

	UBPI_Effect_General_C_StartDeathBedDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateSacrificeCamBlood
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivateSacrificeCamBlood()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateSacrificeCamBlood");

	UBPI_Effect_General_C_ActivateSacrificeCamBlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.SpawnFakeBullet
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::SpawnFakeBullet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.SpawnFakeBullet");

	UBPI_Effect_General_C_SpawnFakeBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.HideGunBullet
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::HideGunBullet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.HideGunBullet");

	UBPI_Effect_General_C_HideGunBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ShowGunBullet
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ShowGunBullet()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ShowGunBullet");

	UBPI_Effect_General_C_ShowGunBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana_TPV
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Hide_Oni_Katana_TPV()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana_TPV");

	UBPI_Effect_General_C_Hide_Oni_Katana_TPV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ReturnToDemonMode
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ReturnToDemonMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ReturnToDemonMode");

	UBPI_Effect_General_C_ReturnToDemonMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.DisableDemonMode
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::DisableDemonMode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.DisableDemonMode");

	UBPI_Effect_General_C_DisableDemonMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.HideDemonCosmetic
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::HideDemonCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.HideDemonCosmetic");

	UBPI_Effect_General_C_HideDemonCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ShowDemonCosmetic
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ShowDemonCosmetic()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ShowDemonCosmetic");

	UBPI_Effect_General_C_ShowDemonCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Switch Oni Weapons To Normal
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Switch_Oni_Weapons_To_Normal()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Switch Oni Weapons To Normal");

	UBPI_Effect_General_C_Switch_Oni_Weapons_To_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Destroy Blood Orb
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Destroy_Blood_Orb()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Destroy Blood Orb");

	UBPI_Effect_General_C_Destroy_Blood_Orb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Show Oni Katana
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Show_Oni_Katana()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Show Oni Katana");

	UBPI_Effect_General_C_Show_Oni_Katana_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Hide_Oni_Katana()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana");

	UBPI_Effect_General_C_Hide_Oni_Katana_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo to Normal Mode
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Switch_Kanobo_to_Normal_Mode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo to Normal Mode");

	UBPI_Effect_General_C_Switch_Kanobo_to_Normal_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo To Demon Mode
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Switch_Kanobo_To_Demon_Mode()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo To Demon Mode");

	UBPI_Effect_General_C_Switch_Kanobo_To_Demon_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivatePounceStateVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivatePounceStateVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivatePounceStateVFX");

	UBPI_Effect_General_C_ActivatePounceStateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling PP
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Stop_Travelling_PP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling PP");

	UBPI_Effect_General_C_Stop_Travelling_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Stop Saliva VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Stop_Saliva_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Stop Saliva VFX");

	UBPI_Effect_General_C_Stop_Saliva_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Start Saliva VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Start_Saliva_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Start Saliva VFX");

	UBPI_Effect_General_C_Start_Saliva_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Stop Pounce VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Stop_Pounce_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Stop Pounce VFX");

	UBPI_Effect_General_C_Stop_Pounce_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Start Pounce VFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Start_Pounce_VFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Start Pounce VFX");

	UBPI_Effect_General_C_Start_Pounce_VFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling Dissolve
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Stop_Travelling_Dissolve()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling Dissolve");

	UBPI_Effect_General_C_Stop_Travelling_Dissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling Dissolve
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Start_Travelling_Dissolve()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling Dissolve");

	UBPI_Effect_General_C_Start_Travelling_Dissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling PP
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::Start_Travelling_PP()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling PP");

	UBPI_Effect_General_C_Start_Travelling_PP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerGlitchVFX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* GlitchFX                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Face                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Madness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool Killer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerGlitchVFX");

	UBPI_Effect_General_C_ActivatePlayerGlitchVFX_Params params;
	params.GlitchFX = GlitchFX;
	params.Face = Face;
	params.Madness = Madness;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerLightningVFX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* LightningFX                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Intense                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool Intense)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerLightningVFX");

	UBPI_Effect_General_C_ActivatePlayerLightningVFX_Params params;
	params.LightningFX = LightningFX;
	params.Intense = Intense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.SetHighlightedVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::SetHighlightedVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.SetHighlightedVFX");

	UBPI_Effect_General_C_SetHighlightedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.SetPlayerExposedVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::SetPlayerExposedVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.SetPlayerExposedVFX");

	UBPI_Effect_General_C_SetPlayerExposedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateLocalPlayerExposedVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivateLocalPlayerExposedVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateLocalPlayerExposedVFX");

	UBPI_Effect_General_C_ActivateLocalPlayerExposedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerExposedVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_General_C::ActivatePlayerExposedVFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerExposedVFX");

	UBPI_Effect_General_C_ActivatePlayerExposedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Effect_General.BPI_Effect_General_C.ActivateEndGameVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Effect_General_C::ActivateEndGameVignette(bool isActive)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_General.BPI_Effect_General_C.ActivateEndGameVignette");

	UBPI_Effect_General_C_ActivateEndGameVignette_Params params;
	params.isActive = isActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
