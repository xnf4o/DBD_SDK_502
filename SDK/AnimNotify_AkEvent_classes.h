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

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class UAnimNotify_AkEvent_C : public UanimNotify
{
public:
	struct FString                                     Attach_Name;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               event;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Follow;                                                    // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3YNF[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EventName;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C");
		return ptr;
	}



	bool Received_Notify(class UskeletalMeshComponent* MeshComp, class UAnimSequenceBase* animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
