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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
struct UClothingSimulationInteractor_PhysicsAssetUpdated_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
struct UClothingSimulationInteractor_EnableGravityOverride_Params
{
	struct Fvector                                     InVector;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
struct UClothingSimulationInteractor_DisableGravityOverride_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
struct UClothingSimulationInteractor_ClothConfigUpdated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
