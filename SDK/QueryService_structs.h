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

// ScriptStruct QueryService.DistanceTrackerCase
// 0x0020
struct FDistanceTrackerCase
{
	unsigned char                                      UnknownData_BE81[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _distanceToTrackSquared;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _inRange;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WNLP[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct QueryService.ActorPairQuery
// 0x0068
struct FActorPairQuery
{
	unsigned char                                      UnknownData_3EE0[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<uint32_t, struct FDistanceTrackerCase>        _distanceTrackerCases;                                     // 0x0010(0x0050) (NativeAccessSpecifierPrivate)
	uint32_t                                           _caseIndex;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_11FA[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct QueryService.ActorsInRangeBool
// 0x0040
struct FActorsInRangeBool
{
	class UActorPairQueryEvaluatorComponent*           _actorPairQueryComponent;                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uactor*                                      _sourceActor;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uactor*                                      _otherActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _range;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _inRange;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X166[0x23];                                    // 0x001D(0x0023) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
