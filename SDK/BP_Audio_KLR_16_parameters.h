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

// Function BP_Audio_KLR_16.BP_Audio_KLR_15_C.OnKillerSoundbankLoaded
struct UBP_Audio_KLR_15_C_OnKillerSoundbankLoaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_16.BP_Audio_KLR_15_C.ReceiveBeginPlay
struct UBP_Audio_KLR_15_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_16.BP_Audio_KLR_15_C.ReceiveEndPlay
struct UBP_Audio_KLR_15_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_16.BP_Audio_KLR_15_C.ExecuteUbergraph_BP_Audio_KLR_16
struct UBP_Audio_KLR_15_C_ExecuteUbergraph_BP_Audio_KLR_16_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
