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

// Enum GameplayUtilities.ESightStatus
enum class GameplayUtilities_ESightStatus : uint8_t
{
	ESightStatus__OutOfSight       = 0,
	ESightStatus__Discerned        = 1,
	ESightStatus__Sighted          = 2,
	ESightStatus__ESightStatus_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayUtilities.AuthorityDiscernedCharacter
// 0x0010
struct FAuthorityDiscernedCharacter
{
	class Ucharacter*                                  _character;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isSighted;                                                // 0x0008(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RLHA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayUtilities.DiscernibleCharacter
// 0x0018
struct FDiscernibleCharacter
{
	class Ucharacter*                                  _character;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RS50[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayUtilities.HitValidatorInstigatorParams
// 0x0060
struct FHitValidatorInstigatorParams
{
	class Uactor*                                      instigator;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MJF[0x48];                                    // 0x0008(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         HitPrimitive;                                              // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85IN[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayUtilities.HitValidatorTargetParams
// 0x0018
struct FHitValidatorTargetParams
{
	class Ucharacter*                                  target;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCapsuleComponent*                           HittableCapsule;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              targetLocationTimestamp;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFWX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayUtilities.HitValidationReport
// 0x0160
struct FHitValidationReport
{
	struct FHitValidatorInstigatorParams               InstigatorParams;                                          // 0x0000(0x0060) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitValidatorTargetParams                   TargetParams;                                              // 0x0060(0x0018) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              ValidationTimestamp;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                                 TargetRecorderTimeRange;                                   // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Q9L[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ucharacter*                                  InstigatorOwningCharacter;                                 // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDistance;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleInflation;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidHit;                                                // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidDistance;                                           // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OEC[0xE];                                     // 0x00A2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InstigatorTransform;                                       // 0x00B0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     RewindedTargetLocation;                                    // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     TargetLocation;                                            // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SquareDistance;                                            // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasPerformCollisionCheck;                                  // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValidCollision;                                          // 0x00FD(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BO6B[0x2];                                     // 0x00FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  HitPrimitiveTransform;                                     // 0x0100(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  HittablePrimitiveTransform;                                // 0x0130(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
