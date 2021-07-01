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

// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 currencyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsWalletWithdraw(const struct FString& currencyName, int Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Params params;
	params.currencyName = currencyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 currencyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsWalletGetCurrency(const struct FString& currencyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency");

	UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Params params;
	params.currencyName = currencyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 stateName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            version                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsSaveTestValue(const struct FString& stateName, int version)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Params params;
	params.stateName = stateName;
	params.version = version;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 stateName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnlinePresenceExternalCommands::DBD_MirrorsGetValue(const struct FString& stateName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue");

	UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Params params;
	params.stateName = stateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InString                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_IsDlcInstalled(const struct FString& InString)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled");

	UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Params params;
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_GrantPromoItems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems");

	UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UOnlinePresenceExternalCommands::DBD_GenerateTestItems()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems");

	UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
