// Name: dbd, Version: 502

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AnimationUtilities.SleepingAnimInstance.WakeUp
// (Final, Native, Public, BlueprintCallable)
void USleepingAnimInstance::WakeUp()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.WakeUp");

	USleepingAnimInstance_WakeUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           neverIdle                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USleepingAnimInstance::SetNeverIdle(bool neverIdle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle");

	USleepingAnimInstance_SetNeverIdle_Params params;
	params.neverIdle = neverIdle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.SleepingAnimInstance.OnMontageStart
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USleepingAnimInstance::OnMontageStart(class UAnimMontage* montage)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.OnMontageStart");

	USleepingAnimInstance_OnMontageStart_Params params;
	params.montage = montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class Ucharacter*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   notifyName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimEffectHandler::HandleAnimNotify(class Ucharacter* player, const struct FName& notifyName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify");

	UAnimEffectHandler_HandleAnimNotify_Params params;
	params.player = player;
	params.notifyName = notifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UanimInstance*           root                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UanimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UanimInstance* UAnimInstanceExt::STATIC_GetSubAnimInstance(class UanimInstance* root, class UClass* type)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance");

	UAnimInstanceExt_GetSubAnimInstance_Params params;
	params.root = root;
	params.type = type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UanimInstance*           animInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UskeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UskeletalMeshComponent* UAnimInstanceExt::STATIC_GetRootSkeletalMeshComponent(class UanimInstance* animInstance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent");

	UAnimInstanceExt_GetRootSkeletalMeshComponent_Params params;
	params.animInstance = animInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UanimInstance*           animInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UskeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UskeletalMeshComponent* UAnimInstanceExt::STATIC_GetOwningCharacterSkeletalMeshComponent(class UanimInstance* animInstance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent");

	UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Params params;
	params.animInstance = animInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UanimInstance*           animInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ucharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Ucharacter* UAnimInstanceExt::STATIC_GetOwningCharacter(class UanimInstance* animInstance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter");

	UAnimInstanceExt_GetOwningCharacter_Params params;
	params.animInstance = animInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.AnimInstanceExt.GetOwningActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UanimInstance*           animInstance                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Uactor* UAnimInstanceExt::STATIC_GetOwningActor(class UanimInstance* animInstance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningActor");

	UAnimInstanceExt_GetOwningActor_Params params;
	params.animInstance = animInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent*   mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(class USkinnedMeshComponent* mesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent");

	UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Params params;
	params.mesh = mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 targetPos                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 extraOffset                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBaseGroundDetectorComponent::GetGroundPosition(const struct Fvector& targetPos, const struct Fvector& extraOffset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition");

	UBaseGroundDetectorComponent_GetGroundPosition_Params params;
	params.targetPos = targetPos;
	params.extraOffset = extraOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   boneSocketName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const struct FName& boneSocketName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity");

	UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params params;
	params.boneSocketName = boneSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationUtilities.MoveComponentToComponent.stop
// (Final, Native, Public, BlueprintCallable)
void UMoveComponentToComponent::stop()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.stop");

	UMoveComponentToComponent_stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.MoveComponentToComponent.start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         componentToMove                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMoveComponentToComponent::start(class USceneComponent* componentToMove, class USceneComponent* target, float duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.start");

	UMoveComponentToComponent_start_Params params;
	params.componentToMove = componentToMove;
	params.target = target;
	params.duration = duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UskeletalMeshComponent*  MasterMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlaveAnimInstance::SetMasterMesh(class UskeletalMeshComponent* MasterMesh)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh");

	USlaveAnimInstance_SetMasterMesh_Params params;
	params.MasterMesh = MasterMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UskeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UskeletalMeshComponent* USlaveAnimInstance::GetMasterMesh()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh");

	USlaveAnimInstance_GetMasterMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
