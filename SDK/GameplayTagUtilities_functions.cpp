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

// Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   scoreEventID                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UDBDGameplayTagUtilities::STATIC_GetScoreModifierName(const struct FName& scoreEventID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName");

	UDBDGameplayTagUtilities_GetScoreModifierName_Params params;
	params.scoreEventID = scoreEventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   tagName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDGameplayTagUtilities::STATIC_GameplayTagExists(const struct FName& tagName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists");

	UDBDGameplayTagUtilities_GameplayTagExists_Params params;
	params.tagName = tagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayTagUtilities.GameplayTagContainerComponent.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FgameplayTag            state                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTagContainerComponent::Remove(const struct FgameplayTag& state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayTagUtilities.GameplayTagContainerComponent.Remove");

	UGameplayTagContainerComponent_Remove_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayTagUtilities.GameplayTagContainerComponent.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FgameplayTag            state                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTagContainerComponent::Add(const struct FgameplayTag& state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayTagUtilities.GameplayTagContainerComponent.Add");

	UGameplayTagContainerComponent_Add_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
