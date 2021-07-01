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

// Function ImgMedia.ImgMediaSource.SetSequencePath
struct UImgMediaSource_SetSequencePath_Params
{
	struct FString                                     path;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetSequencePath
struct UImgMediaSource_GetSequencePath_Params
{
	struct FString                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ImgMedia.ImgMediaSource.GetProxies
struct UImgMediaSource_GetProxies_Params
{
	TArray<struct FString>                             OutProxies;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
