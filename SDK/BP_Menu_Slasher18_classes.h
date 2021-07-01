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

// BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C
// 0x00CC (FullSize[0x0758] - InheritedSize[0x068C])
class UBP_Menu_Slasher18_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_XW67[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_18_C*                          BP_Audio_KLR_19;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      rings;                                                     // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDemonModeMenuComponent*                     DemonModeMenu;                                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      SKWS01_REF;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06B8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KLWD[0x7];                                     // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TML_DemonModeCusto;                                        // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UHHV[0x3];                                     // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TML_KatanaDissolve;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsKatanaVisible;                                           // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3N34[0x7];                                     // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UskeletalMeshComponent*>              NormalModeCustoParts;                                      // 0x06F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UparticleSystemComponent*>            DemonModeVFX;                                              // 0x0708(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UskeletalMeshComponent*>              DemonModeCustoParts;                                       // 0x0718(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        SKOniEmissiveDefault;                                      // 0x0728(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               isInDemonMode;                                             // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7QS3[0x7];                                     // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLinearColor>                        SM_OniEmissiveDefault;                                     // 0x0740(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              MaxSwordDissolveValue;                                     // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDissolvevalue;                                          // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C");
		return ptr;
	}



	void SM_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
	void SK_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
	void ShowDemonModeCusto(bool isInDemonMode, bool IsInNormalMode);
	void SaveOniEmissiveParameter();
	void GetDemonModeCusto();
	void TML_KatanaDissolve__FinishedFunc();
	void TML_KatanaDissolve__UpdateFunc();
	void TML_DemonModeCusto__FinishedFunc();
	void TML_DemonModeCusto__UpdateFunc();
	void TML_DemonModeCusto__Switch_Normal__EventFunc();
	void TML_DemonModeCusto__Switch_Demon__EventFunc();
	void ActivateEndGameVignette(bool isActive);
	void ActivatePlayerExposedVFX();
	void ActivateLocalPlayerExposedVFX();
	void SetPlayerExposedVFX();
	void SetHighlightedVFX();
	void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool Intense);
	void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool Killer);
	void Start_Travelling_PP();
	void Start_Travelling_Dissolve();
	void Stop_Travelling_Dissolve();
	void Start_Pounce_VFX();
	void Stop_Pounce_VFX();
	void Start_Saliva_VFX();
	void Stop_Saliva_VFX();
	void Stop_Travelling_PP();
	void ActivatePounceStateVFX();
	void Destroy_Blood_Orb();
	void Switch_Oni_Weapons_To_Normal();
	void DisableDemonMode();
	void ReturnToDemonMode();
	void Hide_Oni_Katana_TPV();
	void ShowGunBullet();
	void HideGunBullet();
	void SpawnFakeBullet();
	void ActivateSacrificeCamBlood();
	void StartDeathBedDissolve();
	void DeactivateKnockoutVFX();
	void ActivateKnockoutVFX();
	void SpawnFullScreenBlood();
	void StartDeathBedRelocateVignette();
	void ActivateAttemptEscapeVFX();
	void ShowSyringe();
	void HideSyringe();
	void AnimateLiquidSyringe();
	void ActivateVignetteOnWallCollision();
	void HideSyringeOnStun();
	void K22_SpawnWipeVFX();
	void K22_HighlightDormantMain(bool IsDormantMain_);
	void K22_HighlightDormant(bool IsDormant_);
	void K22_HighlightMissJump();
	void K22_DormantAttachedSlasher();
	void K22_JumpTrail_Activate();
	void K22_JumpTrail_Deactivate();
	void K22_ReleaseBrother();
	void K22_MembraneRecovery();
	void K22_MembraneDelete();
	void K22_BabyBloodDissolve();
	void K22_BabyRespawn();
	void K22_Jump_Active();
	void K22_Jump_Inactive();
	void On_Execution();
	void K05_SetTrap();
	void K05_TrapImpact();
	void K05_TrapImpactOff();
	void K05_BloodDrops();
	void K07_TreatmentStart();
	void K04_InvisibleOn();
	void K04_InvisibleOff();
	void K04_TelekinesisOn();
	void K04_TelekinesisOff();
	void K22_WrongLanding(bool Wrong_Landing);
	void K22_AttachedToSurvivor_VFX();
	void K22_DetachedFromSurvivor_VFX();
	void K22_WrongLandingVignette(bool WrongLanding);
	void K12_GetToxinVignette(TheClown_EBombType Bomb_Type);
	void K12_GetAntidoteVignette();
	void K12_Killer_AntidoteEnd();
	void K12_Killer_AntidoteBegin();
	void K12_Killer_BombSmokeColor();
	void K12_Killer_RemoveVignette();
	void K12_Killer_PlaceVignette();
	void K22_QuickDissolveBrother();
	void Killer_LungeAttack_Start();
	void Killer_LungeAttack_End();
	void Camper_AntidoteBoostVignette_Start();
	void Camper_AntidoteBoostVignette_End();
	void K22_BrotherDissolveLocker();
	void K22_HighlightMissJump_Stop();
	void K23_CamperHitByKnife(bool isLocallyObserved, float LacerationPercent, bool IsDangerous);
	void K22_IsAttachedLocker(bool IsAttachedLocker);
	void K23_ShowKnifeLT();
	void K23_ShowKnifeRT();
	void K23_ShowBat();
	void K23_HideBat();
	void K23_HideKnifeRT();
	void K23_HideKnifeLT();
	void AddBloodDrippingGKMoriMale();
	void ReceiveBeginPlay();
	void Switch_Kanobo_To_Demon_Mode();
	void Switch_Kanobo_to_Normal_Mode();
	void Show_Oni_Katana();
	void Hide_Oni_Katana();
	void On_Customisation_Updated();
	void ShowDemonCosmetic();
	void HideDemonCosmetic();
	void ReturnOniToNormal();
	void StopTransformation();
	void ExecuteUbergraph_BP_Menu_Slasher18(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
