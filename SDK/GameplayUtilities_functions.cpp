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

// Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Ucharacter*              character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ignore                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::SetIgnoredCharacter(class Ucharacter* character, bool ignore)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter");

	UCharacterPusherComponent_SetIgnoredCharacter_Params params;
	params.character = character;
	params.ignore = ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
// (Final, Native, Protected)
// Parameters:
// class UprimitiveComponent*     hitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::OnCharacterDetectorOverlapExit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit");

	UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Params params;
	params.hitComponent = hitComponent;
	params.otherActor = otherActor;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterPusherComponent.Construct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCapsuleComponent*       characterDetector              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCapsuleComponent*       characterCollision             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBasePushStrategyComponent* pushStrategy                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterPusherComponent::Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterPusherComponent.Construct");

	UCharacterPusherComponent_Construct_Params params;
	params.characterDetector = characterDetector;
	params.characterCollision = characterCollision;
	params.pushStrategy = pushStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.BasePoolableActorComponent.SetAcquired
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           active                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBasePoolableActorComponent::SetAcquired(bool active)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.BasePoolableActorComponent.SetAcquired");

	UBasePoolableActorComponent_SetAcquired_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.BasePoolableActorComponent.IsAcquired
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBasePoolableActorComponent::IsAcquired()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.BasePoolableActorComponent.IsAcquired");

	UBasePoolableActorComponent_IsAcquired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
// (Final, Native, Private)
void UAuthoritativePoolableActorComponent::OnRep_Acquired()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired");

	UAuthoritativePoolableActorComponent_OnRep_Acquired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool
// (Final, Native, Private)
// Parameters:
// TArray<class Uactor*>          previousPool                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativeActorPoolComponent::OnRep_Pool(TArray<class Uactor*> previousPool)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_Pool");

	UAuthoritativeActorPoolComponent_OnRep_Pool_Params params;
	params.previousPool = previousPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class Uactor*                  destroyedActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(class Uactor* destroyedActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.AuthoritativeActorPoolComponent.Authority_OnActorDestroyed");

	UAuthoritativeActorPoolComponent_Authority_OnActorDestroyed_Params params;
	params.destroyedActor = destroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen");

	UBoxOcclusionQueryComponent_GetVisiblePercentOfScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels");

	UBoxOcclusionQueryComponent_GetNumberOfVisiblePixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount");

	UBoxOcclusionQueryComponent_GetEstimatedRenderedPixelCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.CameraUtilities.IsLookingTowards
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class Ucontroller*             controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          precisionAngle                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCameraUtilities::STATIC_IsLookingTowards(class Ucontroller* controller, const struct Fvector& position, float precisionAngle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CameraUtilities.IsLookingTowards");

	UCameraUtilities_IsLookingTowards_Params params;
	params.controller = controller;
	params.position = position;
	params.precisionAngle = precisionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// GameplayUtilities_ESightStatus Status                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightableComponent::OnHighestSightStatusChangedBP__DelegateSignature(GameplayUtilities_ESightStatus Status)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature");

	UCharacterSightableComponent_OnHighestSightStatusChangedBP__DelegateSignature_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// GameplayUtilities_ESightStatus ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GameplayUtilities_ESightStatus UCharacterSightableComponent::GetHighestSightStatus()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus");

	UCharacterSightableComponent_GetHighestSightStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent");

	UCharacterSightComponent_SetScreenVisibilityZoneRadiusPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent");

	UCharacterSightComponent_SetMinimumCharacterVisiblePixelsPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMinimumCharacterScreenPercent(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercent");

	UCharacterSightComponent_SetMinimumCharacterScreenPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::SetMaximumSightDistance(float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance");

	UCharacterSightComponent_SetMaximumSightDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<class Ucharacter*>      characters                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterSightComponent::Server_UpdateDiscernedCharacters(TArray<class Ucharacter*> characters)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters");

	UCharacterSightComponent_Server_UpdateDiscernedCharacters_Params params;
	params.characters = characters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
// (Final, Native, Private)
void UCharacterSightComponent::OnRep_DiscernibleCharacters()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters");

	UCharacterSightComponent_OnRep_DiscernibleCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee
// (Final, Native, Private)
void UCharacterSightComponent::OnRep_CanSee()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.CharacterSightComponent.OnRep_CanSee");

	UCharacterSightComponent_OnRep_CanSee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          secondsToAdd                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          baseMaxSeconds                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          baseRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UChargeableUtilities::STATIC_ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier");

	UChargeableUtilities_ConvertSecondsToAddToRateMultiplier_Params params;
	params.secondsToAdd = secondsToAdd;
	params.baseMaxSeconds = baseMaxSeconds;
	params.baseRate = baseRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.MovementUtilities.Local_MoveActorTo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Uactor*                  actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovementUtilities::STATIC_Local_MoveActorTo(class Uactor* actor, const struct Fvector& location, const struct FRotator& rotation, float duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.MovementUtilities.Local_MoveActorTo");

	UMovementUtilities_Local_MoveActorTo_Params params;
	params.actor = actor;
	params.location = location;
	params.rotation = rotation;
	params.duration = duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplayUtilities.PawnUtilities.GetOwningPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class Uactor*                  origin                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Upawn* UPawnUtilities::STATIC_GetOwningPawn(class Uactor* origin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.PawnUtilities.GetOwningPawn");

	UPawnUtilities_GetOwningPawn_Params params;
	params.origin = origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Upawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class Upawn* UPawnUtilities::STATIC_GetLocallyObservedPawn(class UObject* worldContext)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function GameplayUtilities.PawnUtilities.GetLocallyObservedPawn");

	UPawnUtilities_GetLocallyObservedPawn_Params params;
	params.worldContext = worldContext;

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
