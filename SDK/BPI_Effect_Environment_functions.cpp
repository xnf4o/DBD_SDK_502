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

// Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_Environment_C::KNY_StartSnowstorm()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm");

	UBPI_Effect_Environment_C_KNY_StartSnowstorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
