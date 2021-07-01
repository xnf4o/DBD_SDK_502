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

// ScriptStruct TheCannibal.ChainsawHitWithPowerCharge
// 0x0004 (0x0008 - 0x0004)
struct FChainsawHitWithPowerCharge : public FChainsawEvent
{
	int                                                NumPowerCharges;                                           // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheCannibal.CannibalAnalytics
// 0x0020 (0x00A8 - 0x0088)
struct FCannibalAnalytics : public FChainsawAnalytics
{
	TArray<struct FChainsawHitWithPowerCharge>         HitWithPowerChargeEvents;                                  // 0x0088(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEvent>                      RevToTantrumEvents;                                        // 0x0098(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
