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

// Function DBDBots.DBDAIBTController.OnPawnBump
struct UDBDAIBTController_OnPawnBump_Params
{
	class Uactor*                                      selfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      otherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     normalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FhitResult                                  hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDBots.DBDAIBTController.Authority_FinishedPlaying
struct UDBDAIBTController_Authority_FinishedPlaying_Params
{
};

// Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
struct UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Params
{
};

// Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
struct UNavLinkProxy_Base_OnSmartLinkReachedCallback_Params
{
	class Uactor*                                      MovingActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     DestinationPoint;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints
struct UNavLinkProxy_Base_AutoAdjustSmartLinkPoints_Params
{
};

// Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
struct UNavLinkProxy_DirectMove_OnDisplayDebugInfo_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
