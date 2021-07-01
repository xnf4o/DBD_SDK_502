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

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class ModelingComponents_EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents = 0,
	EDynamicMeshTangentCalcType__AutoCalculated = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType__EDynamicMeshTangentCalcType_MAX = 3,

};

// Enum ModelingComponents.EMultiTransformerMode
enum class ModelingComponents_EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo = 0,
	EMultiTransformerMode__QuickAxisTranslation = 1,
	EMultiTransformerMode__EMultiTransformerMode_MAX = 2,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
