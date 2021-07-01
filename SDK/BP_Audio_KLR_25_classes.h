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

// BlueprintGeneratedClass BP_Audio_KLR_25.BP_Audio_KLR_24_C
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UBP_Audio_KLR_24_C : public UBP_Audio_KLR_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             StarsCharacter;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_25.BP_Audio_KLR_24_C");
		return ptr;
	}



	void isCharacter(class UdbdPlayer* camperPlayer, TArray<struct FString>* CharacterName, bool* isCharacter);
	void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
	void HitImpactOnSurvivorSFX(class UcamperPlayer* Camper, DBDSharedTypes_EAttackType AttackType, bool isWeaponHit);
	void TriggerKillerReactionSpecificSurvivorSFX(class UdbdPlayer* Camper);
	void ChaseTriggerKillerReactionSpecificSurvivorSFX(class UdbdPlayer* Camper);
	void ExecuteUbergraph_BP_Audio_KLR_25(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
