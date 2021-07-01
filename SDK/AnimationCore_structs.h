﻿#pragma once

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
// Enums
//---------------------------------------------------------------------------

// Enum AnimationCore.ETransformConstraintType
enum class AnimationCore_ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4,

};

// Enum AnimationCore.EConstraintType
enum class AnimationCore_EConstraintType : uint8_t
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationCore.CCDIKChainLink
// 0x0080
struct FCCDIKChainLink
{
	unsigned char                                      UnknownData_60HA[0x80];                                    // 0x0000(0x0080) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.Axis
// 0x0010
struct FAxis
{
	struct Fvector                                     Axis;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLocalSpace;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VFN[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010
struct FConstraintDescriptor
{
	AnimationCore_EConstraintType                      type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L054[0xF];                                     // 0x0001(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.ConstraintData
// 0x0080
struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                                // 0x0000(0x0010) (NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9QNJ[0xB];                                     // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  CurrentTransform;                                          // 0x0050(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003
struct FFilterOptionPerAxis
{
	bool                                               bX;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bY;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bZ;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010
struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData_N5Q1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilterOptionPerAxis                        AxesFilterOption;                                          // 0x0008(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQZN[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis                                       LookAt_Axis;                                               // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       LookUp_Axis;                                               // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseLookUp;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JO1L[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     LookUpTarget;                                              // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	AnimationCore_ETransformConstraintType             TransformType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_199I[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D
struct FConstraintDescription
{
	bool                                               bTranslation;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotation;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScale;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParent;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        TranslationAxes;                                           // 0x0004(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        RotationAxes;                                              // 0x0007(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        ScaleAxes;                                                 // 0x000A(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0030
struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                  // 0x0000(0x000D) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMXJ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SourceNode;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetNode;                                                // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaintainOffset;                                           // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I30I[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060
struct FConstraintOffset
{
	struct Fvector                                     Translation;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GDZ0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       rotation;                                                  // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     scale;                                                     // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHU9[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Parent;                                                    // 0x0030(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.TransformFilter
// 0x0009
struct FTransformFilter
{
	struct FFilterOptionPerAxis                        TranslationFilter;                                         // 0x0000(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        RotationFilter;                                            // 0x0003(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        ScaleFilter;                                               // 0x0006(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.EulerTransform
// 0x0024
struct FEulerTransform
{
	struct Fvector                                     location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     scale;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.FABRIKChainLink
// 0x0038
struct FFABRIKChainLink
{
	unsigned char                                      UnknownData_4646[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationCore.NodeChain
// 0x0010
struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.NodeObject
// 0x0018
struct FNodeObject
{
	struct FName                                       name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentName;                                                // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070
struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Transforms;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                    // 0x0020(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078
struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData_R4PL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNodeHierarchyData                          Hierarchy;                                                 // 0x0008(0x0070) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimationCore.TransformNoScale
// 0x0020
struct FTransformNoScale
{
	struct Fvector                                     location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MXLQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       rotation;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif