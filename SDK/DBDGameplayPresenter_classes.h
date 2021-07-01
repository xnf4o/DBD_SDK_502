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

// Class DBDGameplayPresenter.SurvivorStatusComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class USurvivorStatusComponent : public UactorComponent
{
public:
	class UcamperPlayer*                               _survivor;                                                 // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C2JC[0x30];                                    // 0x00C0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplayPresenter.SurvivorStatusComponent");
		return ptr;
	}



	void OnValidatedInteractionStarted();
	void OnValidatedInteractionEnded();
	void OnSuvivorDamaged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState newDamageState);
	void OnSurivorStatusChange();
	void OnRunningAndMovementChanged(bool isRunningAndMoving);
	void OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
	void OnHookedStateChanged();
	void OnGuidedStateChanged();
	void OnCrouchChanged(bool IsCrouched);
	bool IsSleeping();
	bool IsRunning();
	bool IsInjured();
	bool IsHooked();
	bool IsHiding();
	bool IsHealing();
	bool IsHarpooned();
	bool IsGettingStrangled();
	bool IsGettingSacrificed();
	bool IsDying();
	bool isDead();
	bool IsCrouching();
	bool IsCaptured();
	void GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
