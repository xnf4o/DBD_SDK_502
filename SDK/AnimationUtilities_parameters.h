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

// Function AnimationUtilities.SleepingAnimInstance.WakeUp
struct USleepingAnimInstance_WakeUp_Params
{
};

// Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle
struct USleepingAnimInstance_SetNeverIdle_Params
{
	bool                                               neverIdle;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.SleepingAnimInstance.OnMontageStart
struct USleepingAnimInstance_OnMontageStart_Params
{
	class UAnimMontage*                                montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify
struct UAnimEffectHandler_HandleAnimNotify_Params
{
	class Ucharacter*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       notifyName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
struct UAnimInstanceExt_GetSubAnimInstance_Params
{
	class UanimInstance*                               root;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UanimInstance*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
struct UAnimInstanceExt_GetRootSkeletalMeshComponent_Params
{
	class UanimInstance*                               animInstance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UskeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
struct UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Params
{
	class UanimInstance*                               animInstance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UskeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter
struct UAnimInstanceExt_GetOwningCharacter_Params
{
	class UanimInstance*                               animInstance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Ucharacter*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.AnimInstanceExt.GetOwningActor
struct UAnimInstanceExt_GetOwningActor_Params
{
	class UanimInstance*                               animInstance;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
struct UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Params
{
	class USkinnedMeshComponent*                       mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
struct UBaseGroundDetectorComponent_GetGroundPosition_Params
{
	struct Fvector                                     targetPos;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     extraOffset;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
struct UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params
{
	struct FName                                       boneSocketName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.MoveComponentToComponent.stop
struct UMoveComponentToComponent_stop_Params
{
};

// Function AnimationUtilities.MoveComponentToComponent.start
struct UMoveComponentToComponent_start_Params
{
	class USceneComponent*                             componentToMove;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             target;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              duration;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
struct USlaveAnimInstance_SetMasterMesh_Params
{
	class UskeletalMeshComponent*                      MasterMesh;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
struct USlaveAnimInstance_GetMasterMesh_Params
{
	class UskeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
