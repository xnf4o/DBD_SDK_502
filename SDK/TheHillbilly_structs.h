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

// ScriptStruct TheHillbilly.ChainsawEvent
// 0x0004
struct FChainsawEvent
{
	float                                              ElapsedMatchTime;                                          // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheHillbilly.ChainsawEventWhileCamping
// 0x0004 (0x0008 - 0x0004)
struct FChainsawEventWhileCamping : public FChainsawEvent
{
	float                                              DistanceFromClosestHook;                                   // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheHillbilly.ChainsawAnalytics
// 0x0020 (0x0088 - 0x0068)
struct FChainsawAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchId;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEventWhileCamping>          DownSurvivorsWithChainsawWhileCampingEvents;               // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheHillbilly.HillbillyAnalytics
// 0x0040 (0x00C8 - 0x0088)
struct FHillbillyAnalytics : public FChainsawAnalytics
{
	TArray<struct FChainsawEvent>                      OverheatEvents;                                            // 0x0088(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEvent>                      OverheatWhileSprintingEvents;                              // 0x0098(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEventWhileCamping>          OverheatWhileCampingEvents;                                // 0x00A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChainsawEvent>                      RevFromZeroHeatEvents;                                     // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
