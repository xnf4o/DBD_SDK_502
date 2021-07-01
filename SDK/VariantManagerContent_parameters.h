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

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct ULevelVariantSets_GetVariantSetByName_Params
{
	struct FString                                     VariantSetName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariantSet*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct ULevelVariantSets_GetVariantSet_Params
{
	int                                                VariantSetIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariantSet*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct ULevelVariantSets_GetNumVariantSets_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct ULevelVariantSetsActor_SwitchOnVariantByName_Params
{
	struct FString                                     VariantSetName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariantName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct ULevelVariantSetsActor_SwitchOnVariantByIndex_Params
{
	int                                                VariantSetIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VariantIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct ULevelVariantSetsActor_SetLevelVariantSets_Params
{
	class ULevelVariantSets*                           InVariantSets;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct ULevelVariantSetsActor_GetLevelVariantSets_Params
{
	bool                                               bLoad;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelVariantSets*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.HasRecordedData
struct UPropertyValue_HasRecordedData_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct UPropertyValue_GetPropertyTooltip_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct UPropertyValue_GetFullDisplayString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.SelectOption
struct USwitchActor_SelectOption_Params
{
	int                                                OptionIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.GetSelectedOption
struct USwitchActor_GetSelectedOption_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.SwitchActor.GetOptions
struct USwitchActor_GetOptions_Params
{
	TArray<class Uactor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.SwitchOn
struct UVariant_SwitchOn_Params
{
};

// Function VariantManagerContent.Variant.SetDisplayText
struct UVariant_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.isActive
struct UVariant_isActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetThumbnail
struct UVariant_GetThumbnail_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetNumActors
struct UVariant_GetNumActors_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetDisplayText
struct UVariant_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.Variant.GetActor
struct UVariant_GetActor_Params
{
	int                                                ActorIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.SetDisplayText
struct UVariantSet_SetDisplayText_Params
{
	struct FText                                       NewDisplayText;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetVariantByName
struct UVariantSet_GetVariantByName_Params
{
	struct FString                                     VariantName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariant*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetVariant
struct UVariantSet_GetVariant_Params
{
	int                                                VariantIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVariant*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetNumVariants
struct UVariantSet_GetNumVariants_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VariantManagerContent.VariantSet.GetDisplayText
struct UVariantSet_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
