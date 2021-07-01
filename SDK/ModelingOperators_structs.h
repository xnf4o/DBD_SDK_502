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

// Enum ModelingOperators.ESplitNormalMethod
enum class ModelingOperators_ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology = 0,
	ESplitNormalMethod__FaceNormalThreshold = 1,
	ESplitNormalMethod__FaceGroupID = 2,
	ESplitNormalMethod__ESplitNormalMethod_MAX = 3,

};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ModelingOperators_ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted = 0,
	ENormalCalculationMethod__AngleWeighted = 1,
	ENormalCalculationMethod__AreaAngleWeighting = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX = 3,

};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ModelingOperators_ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform  = 0,
	ERemeshSmoothingType__Cotangent = 1,
	ERemeshSmoothingType__MeanValue = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX = 3,

};

// Enum ModelingOperators.EUVProjectionMethod
enum class ModelingOperators_EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube      = 0,
	EUVProjectionMethod__Cylinder  = 1,
	EUVProjectionMethod__Plane     = 2,
	EUVProjectionMethod__EUVProjectionMethod_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
