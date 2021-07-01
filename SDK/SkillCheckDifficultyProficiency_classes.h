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

// BlueprintGeneratedClass SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class USkillCheckDifficultyProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C");
		return ptr;
	}



	bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
	DBDSharedTypes_EStatusEffectType GetType(float Value);
	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class UdbdPlayer* player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
