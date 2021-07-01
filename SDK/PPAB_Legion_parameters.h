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

// Function PPAB_Legion.PPAB_Legion_C.AnimGraph
struct UPPAB_Legion_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function PPAB_Legion.PPAB_Legion_C.ExecuteUbergraph_PPAB_Legion
struct UPPAB_Legion_C_ExecuteUbergraph_PPAB_Legion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
