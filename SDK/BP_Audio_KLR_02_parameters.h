#pragma once

// Name: dbd, Version: 502


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Audio_KLR_02.BP_Audio_KLR_02_C.ReceiveBeginPlay
struct UBP_Audio_KLR_02_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_02.BP_Audio_KLR_02_C.ReceiveEndPlay
struct UBP_Audio_KLR_02_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_02.BP_Audio_KLR_02_C.ExecuteUbergraph_BP_Audio_KLR_02
struct UBP_Audio_KLR_02_C_ExecuteUbergraph_BP_Audio_KLR_02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
