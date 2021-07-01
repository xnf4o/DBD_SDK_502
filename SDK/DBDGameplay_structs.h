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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDGameplay.AimDirection
// 0x0024
struct FAimDirection
{
	unsigned char                                      UnknownData_EJ9F[0x24];                                    // 0x0000(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.BlindTargetViewData
// 0x0040
struct FBlindTargetViewData
{
	unsigned char                                      UnknownData_W2JY[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.TestableStat
// 0x0008 (0x0088 - 0x0080)
struct FTestableStat : public FTunableStat
{
	unsigned char                                      UnknownData_ECEG[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
