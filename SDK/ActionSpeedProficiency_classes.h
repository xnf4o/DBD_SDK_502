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

// BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UActionSpeedProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C");
		return ptr;
	}



	TArray<class UdbdPlayer*> FetchInteractingPlayers(class UinteractionDefinition* Chargeable_Interaction, class UdbdPlayer* Interacting_Player);
	float Compute_Overall_speed_including_multiple_interactors(class UChargeableInteractionDefinition* Chargeable_Interaction, class UdbdPlayer* Interacting_Player);
	bool ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable_Interaction);
	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
