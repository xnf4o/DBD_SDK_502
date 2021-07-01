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
// Classes
//---------------------------------------------------------------------------

// Class Interaction.AIInteractableTargetInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIInteractableTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Interaction.AIInteractableTargetInterface");
		return ptr;
	}



};

// Class Interaction.interaction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class Uinteraction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Interaction.interaction");
		return ptr;
	}



};

// Class Interaction.InteractionPerformer
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractionPerformer : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Interaction.InteractionPerformer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
