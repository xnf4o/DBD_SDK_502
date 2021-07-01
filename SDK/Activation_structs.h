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

// Enum Activation.EActivationStrategy
enum class Activation_EActivationStrategy : uint8_t
{
	EActivationStrategy__ActivateIfAnyTagMatches = 0,
	EActivationStrategy__ActivateIfAllTagMatches = 1,
	EActivationStrategy__DeactivateIfAnyTagMatches = 2,
	EActivationStrategy__DeactivateIfAllTagMatches = 3,
	EActivationStrategy__DeactivateWhenDependenciesAreDeactivated = 4,
	EActivationStrategy__EActivationStrategy_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Activation.ActivationDefinition
// 0x0028
struct FActivationDefinition
{
	Activation_EActivationStrategy                     _activationStrategy;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0SSE[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _activationTags;                                           // 0x0008(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Activation.TestableActivationDefinition
// 0x0000 (0x0028 - 0x0028)
struct FTestableActivationDefinition : public FActivationDefinition
{

};

// ScriptStruct Activation.DependencyBasedActivationStrategy
// 0x0020
struct FDependencyBasedActivationStrategy
{
	unsigned char                                      UnknownData_4G9V[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
