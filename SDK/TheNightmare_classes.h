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

// Class TheNightmare.BlackBox
// 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
class UBlackBox : public UItemAddon
{
public:
	struct FDBDTunableRowHandle                        _blockDuration;                                            // 0x0278(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_43E8[0x18];                                    // 0x02A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.BlackBox");
		return ptr;
	}



};

// Class TheNightmare.DreamInducerComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UDreamInducerComponent : public UactorComponent
{
public:
	class UClass*                                      _generatorDreamworldClass;                                 // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.DreamInducerComponent");
		return ptr;
	}



	void Authority_OnLevelReadyToPlay();
};

// Class TheNightmare.DreamSnare
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UDreamSnare : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.DreamSnare");
		return ptr;
	}



};

// Class TheNightmare.GeneratorDreamworldComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UGeneratorDreamworldComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_TVGN[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               _beamSocketsForBloodEffect;                                // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.GeneratorDreamworldComponent");
		return ptr;
	}



	void OnRepairSkillCheckFailed(bool Success, bool bonus, class UdbdPlayer* player, bool triggerLoudNoise, bool HadInput, DBDSharedTypes_ESkillCheckCustomType type, float chargeChange);
	void Cosmetic_OnPlayerFailSkillCheck(class UdbdPlayer* player);
};

// Class TheNightmare.GeneratorTeleportInteraction
// 0x00C0 (FullSize[0x0740] - InheritedSize[0x0680])
class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{
public:
	float                                              OnBloodSpurtsAINoiseEventRange;                            // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZ1O[0x4];                                     // 0x0684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _teleportCooldownTimer;                                    // 0x0688(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NXMW[0x40];                                    // 0x0690(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _selectedGenerator;                                        // 0x06D0(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Ugenerator*                                  _locallySelectedGenerator;                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                                  _selectedTeleportLocation;                                 // 0x06E0(0x0030) (BlueprintVisible, Net, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               _isInteractionOngoing;                                     // 0x0710(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _teleportFailed;                                           // 0x0711(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z0K9[0x2];                                     // 0x0712(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _bloodSpurtInterval;                                       // 0x0714(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleHalfHeight;                          // 0x0718(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleRadius;                              // 0x071C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _collisionCheckLocationOffset;                             // 0x0720(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _capsuleTraceAngleIncrement;                               // 0x072C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorTeleportMaxAngle;                                // 0x0730(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _downRaycastLength;                                        // 0x0734(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GSS3[0x8];                                     // 0x0738(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.GeneratorTeleportInteraction");
		return ptr;
	}



	bool TeleportPlayerToLocation(class UdbdPlayer* teleportingPlayer, const struct Fvector& location, const struct FRotator& rotation);
	void StopBloodSpurts();
	void StartBloodSpurts();
	void ShowBloodSpurtsVFX();
	void Server_SetSelectedGenerator(class Ugenerator* generator);
	void OnTeleportReady();
	void OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location);
	void OnTeleported(const struct FTransform& transformBeforeTeleport);
	void OnSelectedGeneratorSet(class Ugenerator* selectedGenerator);
	void OnRep_TeleportCooldownTimer();
	void OnRep_SelectedGenerator();
	void OnLocallySelectedGeneratorSet(class Ugenerator* selectedGenerator);
	void OnIntroCompleted();
	void OnBloodSpurts();
	void Multicast_TeleportPlayer(const struct Fvector& location, const struct FRotator& rotation);
	void Multicast_OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location);
	bool IsTeleportAvailable();
	void InitializeTunableValues(class UslasherPlayer* Killer);
	class UdbdPlayer* GetOwningPlayer();
	class Ugenerator* GetInlineGenerator(class UdbdPlayer* player);
	bool CanTeleportAtGenerator(class Ugenerator* generator);
	bool Authority_TeleportPlayerToGenerator(class UdbdPlayer* playerToTeleport, class Ugenerator* generator);
	void Authority_StartTeleportCooldown(bool teleported);
};

// Class TheNightmare.InDreamSurvivorSubAnimInstance
// 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _shouldLookSleepy;                                         // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KUGU[0x1F];                                    // 0x04F1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.InDreamSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.NightmareAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNightmareAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_UUFE[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.NightmareAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.PlaceDreamPalletInteraction
// 0x0028 (FullSize[0x0580] - InheritedSize[0x0558])
class UPlaceDreamPalletInteraction : public UinteractionDefinition
{
public:
	TArray<class UPalletTracker*>                      _palletTrackers;                                           // 0x0558(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PA37[0x8];                                     // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPalletTracker*                              _closestTracker;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JNTQ[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.PlaceDreamPalletInteraction");
		return ptr;
	}



	void SpawnDreamPallet(class UPalletTracker* trackerAtLocation);
	void InitializeTunableValues(class UslasherPlayer* Killer);
	class UPalletTracker* GetTargetedPallet();
	bool CanSpawnDreamPalletAtTracker(class UPalletTracker* tracker);
};

// Class TheNightmare.PresentationGeneratorTeleportProgressComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData_5GZP[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.PresentationGeneratorTeleportProgressComponent");
		return ptr;
	}



};

// Class TheNightmare.SetDreamSnareInteraction
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
public:
	float                                              MinPitch;                                                  // 0x0680(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinPlacementDistance;                                      // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxPlacementDistance;                                      // 0x0688(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K4VS[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.SetDreamSnareInteraction");
		return ptr;
	}



	bool HasCancelledDreamSnare();
	float GetTrapDistanceFromControlRotation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
