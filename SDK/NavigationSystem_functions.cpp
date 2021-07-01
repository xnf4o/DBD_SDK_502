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

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRelevant                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	UNavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	UNavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationPath.isValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::isValid()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.isValid");

	UNavigationPath_isValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsStringPulled()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	UNavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsPartial()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	UNavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathLength()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	UNavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathCost()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	UNavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UNavigationPath::GetDebugString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	UNavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	UNavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bShouldDrawDebugData           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            PathColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	UNavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::UnregisterNavigationInvoker(class Uactor* Invoker)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class Ucontroller*             controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class Ucontroller* controller, const struct Fvector& goal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	UNavigationSystemV1_SimpleMoveToLocation_Params params;
	params.controller = controller;
	params.goal = goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class Ucontroller*             controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToActor(class Ucontroller* controller, class Uactor* goal)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	UNavigationSystemV1_SimpleMoveToActor_Params params;
	params.controller = controller;
	params.goal = goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxNumberOfJobs                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Engine_ENavDataGatheringModeConfig newMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig newMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	UNavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.newMode = newMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// (Final, Native, Public, BlueprintCallable)
void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uactor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TileGenerationRadius           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TileRemovalRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::RegisterNavigationInvoker(class Uactor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	UNavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* worldContextObject, const struct Fvector& point, class UNavigationData* NavData, class UClass* filterClass, const struct Fvector& QueryExtent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	UNavigationSystemV1_ProjectPointToNavigation_Params params;
	params.worldContextObject = worldContextObject;
	params.point = point;
	params.NavData = NavData;
	params.filterClass = filterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNavMeshBoundsVolume*    NavVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::OnNavigationBoundsUpdated(class UNavMeshBoundsVolume* NavVolume)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 RayStart                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 RayEnd                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Ucontroller*             Querier                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_NavigationRaycast(class UObject* worldContextObject, const struct Fvector& RayStart, const struct Fvector& RayEnd, struct Fvector* HitLocation, class UClass* filterClass, class Ucontroller* Querier)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	UNavigationSystemV1_NavigationRaycast_Params params;
	params.worldContextObject = worldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.filterClass = filterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params params;
	params.Object = Object;
	params.OldArea = OldArea;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ProjectedLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* worldContextObject, const struct Fvector& point, struct Fvector* ProjectedLocation, class UNavigationData* NavData, class UClass* filterClass, const struct Fvector& QueryExtent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.worldContextObject = worldContextObject;
	params.point = point;
	params.NavData = NavData;
	params.filterClass = filterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.worldContextObject = worldContextObject;
	params.origin = origin;
	params.radius = radius;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.worldContextObject = worldContextObject;
	params.origin = origin;
	params.radius = radius;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params params;
	params.worldContextObject = worldContextObject;
	params.origin = origin;
	params.radius = radius;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* worldContextObject, const struct Fvector& origin, float radius, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.worldContextObject = worldContextObject;
	params.origin = origin;
	params.radius = radius;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct Fvector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, float radius, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.worldContextObject = worldContextObject;
	params.origin = origin;
	params.radius = radius;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PathLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathLength(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, float* PathLength, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	UNavigationSystemV1_GetPathLength_Params params;
	params.worldContextObject = worldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PathCost                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathCost(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, float* PathCost, class UNavigationData* NavData, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	UNavigationSystemV1_GetPathCost_Params params;
	params.worldContextObject = worldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationSystemV1*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject* worldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	UNavigationSystemV1_GetNavigationSystem_Params params;
	params.worldContextObject = worldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, class Uactor* PathfindingContext, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.worldContextObject = worldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  goalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TetherDistance                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  filterClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject* worldContextObject, const struct Fvector& PathStart, class Uactor* goalActor, float TetherDistance, class Uactor* PathfindingContext, class UClass* filterClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	UNavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.worldContextObject = worldContextObject;
	params.PathStart = PathStart;
	params.goalActor = goalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.filterClass = filterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	UNavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct Fbox                    Bounds                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UClass*                  OldArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NewArea                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReplaceLinks                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool URecastNavMesh::K2_ReplaceAreaInTileBounds(const struct Fbox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	URecastNavMesh_K2_ReplaceAreaInTileBounds_Params params;
	params.Bounds = Bounds;
	params.OldArea = OldArea;
	params.NewArea = NewArea;
	params.ReplaceLinks = ReplaceLinks;

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
