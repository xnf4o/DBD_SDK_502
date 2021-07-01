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

// BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
// 0x0049 (FullSize[0x0669] - InheritedSize[0x0620])
class UBP_Menu_Base_Camper_C : public UDBDMenuPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SurvivorRightFootGroundDetector_C*       RightFootGroundDetector;                                   // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SurvivorLeftFootGroundDetector_C*        LeftFootGroundDetector;                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharmSpawnerComponent*                      CharmSpawner;                                              // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCustomizedAudioComponent*                   CustomizedAudio;                                           // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                Ak_Audio_Menu_Base_Camper;                                 // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCustomizedSkeletalMesh*                     CustomizedSkeletalMesh;                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;        // 0x0658(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1;      // 0x065C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U9KU[0x3];                                     // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          dissolve;                                                  // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destroying;                                                // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C");
		return ptr;
	}



	void Set_Height();
	class UCharmSpawnerComponent* GetCharmSpawnerComponent();
	void UserConstructionScript();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestroySequence_Internal();
	void BeginSmokeIn();
	void RestartInSequence_Internal();
	void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(DeadByDaylight_EAudioCustomizationCategory category, const struct FString& SwitchState);
	void ExecuteUbergraph_BP_Menu_Base_Camper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
