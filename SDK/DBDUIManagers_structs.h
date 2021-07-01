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

// Enum DBDUIManagers.EDPIScaleCurveRatio
enum class DBDUIManagers_EDPIScaleCurveRatio : uint8_t
{
	EDPIScaleCurveRatio__Default   = 0,
	EDPIScaleCurveRatio__SmallerEqual4 = 1,
	EDPIScaleCurveRatio__EDPIScaleCurveRatio_MAX = 2,

};

// Enum DBDUIManagers.EScaleType
enum class DBDUIManagers_EScaleType : uint8_t
{
	EScaleType__None               = 0,
	EScaleType__Menu               = 1,
	EScaleType__Hud                = 2,
	EScaleType__SkillCheck         = 3,
	EScaleType__EScaleType_MAX     = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIManagers.DPIScaleCurveForRatio
// 0x0038 (0x0040 - 0x0008)
struct FDPIScaleCurveForRatio : public FDBDTableRowBase
{
	DBDUIManagers_EDPIScaleCurveRatio                  ratio;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NUY[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DPIScaleCurve[0x30];                                       // 0x0009(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
