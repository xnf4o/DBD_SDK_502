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
// Enums
//---------------------------------------------------------------------------

// Enum AnimationUtilities.EEditorCollectionType
enum class AnimationUtilities_EEditorCollectionType : uint8_t
{
	animation                      = 0,
	Blendspace                     = 1,
	Selector                       = 2,
	EEditorCollectionType_MAX      = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationUtilities.TaggedAnimSequence
// 0x0028
struct FTaggedAnimSequence
{
	class UAnimSequence*                               sequence;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       tags;                                                      // 0x0008(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.AnimSequenceSelector
// 0x0018
struct FAnimSequenceSelector
{
	class UAnimSequence*                               _selected;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTaggedAnimSequence>                 _taggedSequences;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimationUtilities.AnimationMontageDescriptor
// 0x0020
struct FAnimationMontageDescriptor
{
	struct FName                                       montageID;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AB7Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               tags;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.montagePlaybackDefinition
// 0x0028
struct FmontagePlaybackDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                                // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              playRate;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               follower;                                                  // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3W3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.SocketOrBoneCache
// 0x0060
struct FSocketOrBoneCache
{
	unsigned char                                      _sourceAnimation[0x30];                                    // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       _socketName;                                               // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _notifyName;                                               // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _location;                                                 // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                                    _rotation;                                                 // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct AnimationUtilities.EditorCollectionMetadata
// 0x0001
struct FEditorCollectionMetadata
{
	unsigned char                                      UnknownData_G5U6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.EditorAnimCollectionDisplay
// 0x00F0
struct FEditorAnimCollectionDisplay
{
	TMap<struct FgameplayTag, struct FEditorCollectionMetadata> _taggedAnimSequencesMetadata;                              // 0x0000(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FgameplayTag, struct FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata;                            // 0x0050(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FgameplayTag, struct FEditorCollectionMetadata> _taggedAnimSelectorsMetadata;                              // 0x00A0(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.montageStopDefinition
// 0x0028
struct FmontageStopDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                                // 0x0000(0x0020) (Transient, NativeAccessSpecifierPublic)
	float                                              blendOutTime;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FLR[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.TaggedAnimCollection
// 0x0040
struct FTaggedAnimCollection
{
	struct FgameplayTag                                tag;                                                       // 0x0000(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7D0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ANimCollection[0x30];                                      // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
