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

// Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
struct UDBDGameplayTagUtilities_GetScoreModifierName_Params
{
	struct FName                                       scoreEventID;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
struct UDBDGameplayTagUtilities_GameplayTagExists_Params
{
	struct FName                                       tagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTagUtilities.GameplayTagContainerComponent.Remove
struct UGameplayTagContainerComponent_Remove_Params
{
	struct FgameplayTag                                state;                                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayTagUtilities.GameplayTagContainerComponent.Add
struct UGameplayTagContainerComponent_Add_Params
{
	struct FgameplayTag                                state;                                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
