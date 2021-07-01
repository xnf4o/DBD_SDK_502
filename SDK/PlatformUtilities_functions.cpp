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

// Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlatformSupportSubsystem::DBD_StadiaShowStreamDebug(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaShowStreamDebug");

	UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll
// (Final, Exec, Native, Public)
void UPlatformSupportSubsystem::DBD_StadiaRoleSelectPoll()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaRoleSelectPoll");

	UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll
// (Final, Exec, Native, Public)
void UPlatformSupportSubsystem::DBD_StadiaCharacterSelectPoll()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function PlatformUtilities.PlatformSupportSubsystem.DBD_StadiaCharacterSelectPoll");

	UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
