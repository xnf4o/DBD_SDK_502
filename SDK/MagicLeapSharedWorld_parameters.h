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

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
struct UMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
struct UMagicLeapSharedWorldGameMode_SelectChosenOne_Params
{
};

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
struct UMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
struct UMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params
{
	struct FMagicLeapSharedWorldSharedData             NewSharedWorldData;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
struct UMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
struct UMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params
{
};

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
struct UMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
struct UMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
struct UMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params
{
	struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData;                                 // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
struct UMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params
{
	struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms;                                     // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
struct UMagicLeapSharedWorldPlayerController_IsChosenOne_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
struct UMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params
{
	bool                                               bChosenOne;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
struct UMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
struct UMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
