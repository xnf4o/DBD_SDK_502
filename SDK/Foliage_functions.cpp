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

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 CenterPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFoliageStatistics::STATIC_FoliageOverlappingSphereCount(class UObject* worldContextObject, class UStaticMesh* StaticMesh, const struct Fvector& CenterPosition, float radius)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.worldContextObject = worldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.radius = radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 worldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fbox                    box                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFoliageStatistics::STATIC_FoliageOverlappingBoxCount(class UObject* worldContextObject, class UStaticMesh* StaticMesh, const struct Fbox& box)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.worldContextObject = worldContextObject;
	params.StaticMesh = StaticMesh;
	params.box = box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UprimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  other                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UprimitiveComponent*     otherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            otherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UInteractiveFoliageActor::CapsuleTouched(class UprimitiveComponent* OverlappedComp, class Uactor* other, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& OverlapInfo)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	UInteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.other = other;
	params.otherComp = otherComp;
	params.otherBodyIndex = otherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
