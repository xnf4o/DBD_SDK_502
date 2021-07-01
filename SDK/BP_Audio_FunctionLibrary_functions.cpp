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

// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AK_Audio_State                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Audio_State                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Status(const struct FString& AK_Audio_State, class UDBDBasePlayer* player, class UObject* __WorldContext, struct FString* Audio_State)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Params params;
	params.AK_Audio_State = AK_Audio_State;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Audio_State != nullptr)
		*Audio_State = params.Audio_State;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Post_AkEvent(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Post_AkEvent_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Right(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Right_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Left(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Left_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Body(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body");

	UBP_Audio_FunctionLibrary_C_Audio_Survivor_Body_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_K20_Weapon_Scrap(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap");

	UBP_Audio_FunctionLibrary_C_Audio_K20_Weapon_Scrap_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Surface_Impact(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Surface_Impact_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Impact(class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Impact_Params params;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_PullOut(class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_PullOut_Params params;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Clean(class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Clean_Params params;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Attack(class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Attack_Params params;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Arm(class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Arm_Params params;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*            AudioComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AudioStateKiller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*           StartEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Setup(class UAkComponent* AudioComponent, const struct FName& AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Setup_Params params;
	params.AudioComponent = AudioComponent;
	params.AudioStateKiller = AudioStateKiller;
	params.StartEvent = StartEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Post_AkEvent(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Post_AkEvent_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Grunt(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Grunt_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Right(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Right_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Left(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Left_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Body
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           AK_Audio_Event                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Body(class UAkAudioEvent* AK_Audio_Event, class UDBDBasePlayer* player, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Body");

	UBP_Audio_FunctionLibrary_C_Audio_Killer_Body_Params params;
	params.AK_Audio_Event = AK_Audio_Event;
	params.player = player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
