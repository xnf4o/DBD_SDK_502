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

// Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.AttachToSkeletalMesh
// (Event, Public, BlueprintEvent)
// Parameters:
// class UskeletalMeshComponent*  SkeletonPart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Effect_HK_Body01_C::AttachToSkeletalMesh(class UskeletalMeshComponent* SkeletonPart)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.AttachToSkeletalMesh");

	UBP_Effect_HK_Body01_C_AttachToSkeletalMesh_Params params;
	params.SkeletonPart = SkeletonPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.OnAttackBegin
// (Event, Public, BlueprintEvent)
void UBP_Effect_HK_Body01_C::OnAttackBegin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.OnAttackBegin");

	UBP_Effect_HK_Body01_C_OnAttackBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.OnAttackEnd
// (Event, Public, BlueprintEvent)
void UBP_Effect_HK_Body01_C::OnAttackEnd()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.OnAttackEnd");

	UBP_Effect_HK_Body01_C_OnAttackEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.ExecuteUbergraph_BP_Effect_HK_Body01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Effect_HK_Body01_C::ExecuteUbergraph_BP_Effect_HK_Body01(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Effect_HK_Body01.BP_Effect_HK_Body01_C.ExecuteUbergraph_BP_Effect_HK_Body01");

	UBP_Effect_HK_Body01_C_ExecuteUbergraph_BP_Effect_HK_Body01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
