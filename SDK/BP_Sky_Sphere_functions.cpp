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

// Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Sky_Sphere_C::RefreshMaterial()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial");

	UBP_Sky_Sphere_C_RefreshMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Sky_Sphere_C::UpdateSunDirection()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection");

	UBP_Sky_Sphere_C_UpdateSunDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_Sky_Sphere_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript");

	UBP_Sky_Sphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
