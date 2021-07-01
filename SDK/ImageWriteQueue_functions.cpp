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

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class Utexture*                texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FileName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageWriteOptions      Options                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UImageWriteBlueprintLibrary::STATIC_ExportToDisk(class Utexture* texture, const struct FString& FileName, const struct FImageWriteOptions& Options)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk");

	UImageWriteBlueprintLibrary_ExportToDisk_Params params;
	params.texture = texture;
	params.FileName = FileName;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
