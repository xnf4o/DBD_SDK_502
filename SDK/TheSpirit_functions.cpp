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

// Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
// (Final, Native, Private)
// Parameters:
// class UslasherPlayer*          slasher                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpiritHuskOutlineUpdateStrategy::OnSlasherSet(class UslasherPlayer* slasher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet");

	USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params params;
	params.slasher = slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
