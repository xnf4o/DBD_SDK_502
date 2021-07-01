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

// Function BP_MKW01.BP_MKW01_C.GetChainVelocity
struct UBP_MKW01_C_GetChainVelocity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.ConvertVelocityToRTPC
struct UBP_MKW01_C_ConvertVelocityToRTPC_Params
{
	float                                              Velocity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.UserConstructionScript
struct UBP_MKW01_C_UserConstructionScript_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ReceiveTick
struct UBP_MKW01_C_ReceiveTick_Params
{
	float                                              deltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MKW01.BP_MKW01_C.ReceiveBeginPlay
struct UBP_MKW01_C_ReceiveBeginPlay_Params
{
};

// Function BP_MKW01.BP_MKW01_C.ExecuteUbergraph_BP_MKW01
struct UBP_MKW01_C_ExecuteUbergraph_BP_MKW01_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
