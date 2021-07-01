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
// Enums
//---------------------------------------------------------------------------

// Enum TheOni.EBloodOrbState
enum class TheOni_EBloodOrbState : uint8_t
{
	EBloodOrbState__Invalid        = 0,
	EBloodOrbState__BeingDropped   = 1,
	EBloodOrbState__Idle           = 2,
	EBloodOrbState__WaitingToMove  = 3,
	EBloodOrbState__Attracted      = 4,
	EBloodOrbState__Absorbed       = 5,
	EBloodOrbState__Destroyed      = 6,
	EBloodOrbState__EBloodOrbState_MAX = 7,

};

// Enum TheOni.EBloodOrbVisibilityMode
enum class TheOni_EBloodOrbVisibilityMode : uint8_t
{
	EBloodOrbVisibilityMode__VisibleWithinRange = 0,
	EBloodOrbVisibilityMode__HideAll = 1,
	EBloodOrbVisibilityMode__EBloodOrbVisibilityMode_MAX = 2,

};

// Enum TheOni.EDemonModeState
enum class TheOni_EDemonModeState : uint8_t
{
	EDemonModeState__Invalid       = 0,
	EDemonModeState__NotInPower    = 1,
	EDemonModeState__Activation    = 2,
	EDemonModeState__InPower       = 3,
	EDemonModeState__Cooldown      = 4,
	EDemonModeState__EDemonModeState_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TheOni.GameEventBloodOrbDropParams
// 0x0010
struct FGameEventBloodOrbDropParams
{
	struct FgameplayTag                                gameEvent;                                                 // 0x0000(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              impulseFactor;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheOni.BloodOrbInfo
// 0x0060
struct FBloodOrbInfo
{
	unsigned char                                      UnknownData_DTID[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        OriginalStaticMesh;                                        // 0x0050(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        clonedStaticMesh;                                          // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheOni.Accumulator
// 0x0018
struct FAccumulator
{
	unsigned char                                      UnknownData_CRU5[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct TheOni.BloodOrbDropParams
// 0x0008
struct FBloodOrbDropParams
{
	unsigned char                                      UnknownData_2QAM[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
