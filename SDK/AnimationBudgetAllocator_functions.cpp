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

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAnimationBudgetAllocatorParameters InParameters                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAnimationBudgetBlueprintLibrary::STATIC_SetAnimationBudgetParameters(class UObject* worldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters");

	UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params params;
	params.worldContextObject = worldContextObject;
	params.InParameters = InParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationBudgetBlueprintLibrary::STATIC_EnableAnimationBudget(class UObject* worldContextObject, bool bEnabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget");

	UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params params;
	params.worldContextObject = worldContextObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoRegisterWithBudgetAllocator (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator");

	USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params params;
	params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
