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

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// (Final, Native, Public, BlueprintCallable)
void UMagicLeapARPinComponent::UnPin()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");

	UMagicLeapARPinComponent_UnPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	UMagicLeapARPinComponent_PinSceneComponent_Params params;
	params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");

	UMagicLeapARPinComponent_PinRestoredOrSynced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  ActorToPin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinActor(class Uactor* ActorToPin)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	UMagicLeapARPinComponent_PinActor_Params params;
	params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bRestoredOrSynced              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params;
	params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::IsPinned()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");

	UMagicLeapARPinComponent_IsPinned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMagicLeapARPinState    state                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	UMagicLeapARPinComponent_GetPinState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (state != nullptr)
		*state = params.state;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fguid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinnedPinID(struct Fguid* PinId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	UMagicLeapARPinComponent_GetPinnedPinID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  PinDataClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UClass* PinDataClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	UMagicLeapARPinComponent_GetPinData_Params params;
	params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid");

	UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetNumAvailableARPins(int* Count)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fvector                 SearchPoint                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fguid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetClosestARPin(const struct Fvector& SearchPoint, struct Fguid* PinId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin");

	UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            NumRequested                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct Fguid>           Pins                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetAvailableARPins(int NumRequested, TArray<struct Fguid>* Pins)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params;
	params.NumRequested = NumRequested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapARPinState    state                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapARPinFunctionLibrary::STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString");

	UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params;
	params.state = state;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fguid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapARPinState    state                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetARPinState(const struct Fguid& PinId, struct FMagicLeapARPinState* state)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState");

	UMagicLeapARPinFunctionLibrary_GetARPinState_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (state != nullptr)
		*state = params.state;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fguid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct Fguid& PinId, struct Fvector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fguid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation(const struct Fguid& PinId, struct Fvector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker");

	UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker");

	UMagicLeapARPinFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
