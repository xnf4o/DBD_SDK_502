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

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
struct ULuminARSessionFunctionLibrary_StartLuminARSession_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ULuminARSessionConfig*                       Configuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
struct ULuminARFrameFunctionLibrary_LuminARLineTrace_Params
{
	class UObject*                                     worldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      OutHitResults;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
struct ULuminARFrameFunctionLibrary_GetTrackingState_Params
{
	MagicLeapAR_ELuminARTrackingState                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
struct ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Params
{
	class UARSessionConfig*                            SessionConfig;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CandidateTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicalWidth;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseUnreliablePose;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImageIsStationary;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULuminARCandidateImage*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
struct ULuminARLightEstimate_GetAmbientIntensityNits_Params
{
	TArray<float>                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
struct ULuminARCandidateImage_GetUseUnreliablePose_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
struct ULuminARCandidateImage_GetImageIsStationary_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
