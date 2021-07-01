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

// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class ActorSequence_EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028
struct FActorSequenceObjectReference
{
	ActorSequence_EActorSequenceObjectReferenceType    type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T2YD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       ActorId;                                                   // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NTX7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PathToComponent;                                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010
struct FActorSequenceObjectReferences
{
	TArray<struct FActorSequenceObjectReference>       Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020
struct FActorSequenceObjectReferenceMap
{
	TArray<struct Fguid>                               BindingIds;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FActorSequenceObjectReferences>      References;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
