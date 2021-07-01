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

// Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
// (Final, Native, Public)
// Parameters:
// class UdbdPlayer*              chasedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDEmblem_KillerChaser::OnChaseStart(class UdbdPlayer* chasedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart");

	UDBDEmblem_KillerChaser_OnChaseStart_Params params;
	params.chasedPlayer = chasedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
// (Final, Native, Private)
void UDBDEmblem_KillerDevout::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay");

	UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
// (Final, Native, Public)
void UDBDEmblem_KillerMalicious::OnLevelReadyToPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay");

	UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
// (Final, Native, Public)
// Parameters:
// class UdbdPlayer*              chasedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDEmblem_SurvivorEvader::OnChaseStartEvent(class UdbdPlayer* chasedPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent");

	UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params params;
	params.chasedPlayer = chasedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
// (Final, Native, Private)
void UDBDEmblem_SurvivorUnbroken::OnIntroCompleted()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted");

	UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
