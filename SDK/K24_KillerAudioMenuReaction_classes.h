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

// BlueprintGeneratedClass K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UK24_KillerAudioMenuReaction_C : public UKillerAudioMenuReactionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FString>                             StarsCharacter;                                            // 0x00D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C");
		return ptr;
	}



	void LobbyKillerReactionSpecificSurvivorSFX(TArray<class UDBDMenuPlayer*> menuPlayers);
	void ExecuteUbergraph_K24_KillerAudioMenuReaction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
