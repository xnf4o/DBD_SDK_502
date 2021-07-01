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

// Class Halloween2020.BlightedSerumAddon
// 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
class UBlightedSerumAddon : public UItemAddon
{
public:
	class UClass*                                      _blightedSerumCollectable;                                 // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumDashInteraction*               _dashInteraction;                                          // 0x0280(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _theBlightExtraTokens;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numberOfDashesPerEvent;                                   // 0x028C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_80B2[0x40];                                    // 0x0290(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumAddon");
		return ptr;
	}



	void OnRep_DashInteraction();
	void OnBlightedDashEnabledVfxSfx();
};

// Class Halloween2020.BlightedSerumCollisionInteraction
// 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
class UBlightedSerumCollisionInteraction : public UinteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x0558(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _bounceTime;                                               // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WHBI[0xC];                                     // 0x0564(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumCollisionInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
};

// Class Halloween2020.BlightedSerumCooldownInteraction
// 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
class UBlightedSerumCooldownInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_IDO3[0x4];                                     // 0x0558(0x0004) Fix Super Size
	float                                              _cameraPitchRecenterTime;                                  // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WHY5[0x10];                                    // 0x0560(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumCooldownInteraction");
		return ptr;
	}



};

// Class Halloween2020.BlightedSerumDashInteraction
// 0x0098 (FullSize[0x05F0] - InheritedSize[0x0558])
class UBlightedSerumDashInteraction : public UinteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x0558(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumCollisionInteraction*          _collisionInteraction;                                     // 0x0560(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _dashSpeedCurve;                                           // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _dashDuration;                                             // 0x0580(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _vectorInterpToSpeed;                                      // 0x0584(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashAccelerationMultiplier;                           // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cameraPitchRecenterTime;                                  // 0x058C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lookAngleTurnRateModifier;                                // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRadius;                                  // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionHeight;                                  // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRange;                                   // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ET4G[0x50];                                    // 0x05A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumDashInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
	void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
};

// Class Halloween2020.ToxinPlantInteractable
// 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
class UToxinPlantInteractable : public USpecialBehaviourInteractable
{
public:
	unsigned char                                      UnknownData_VCSY[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.ToxinPlantInteractable");
		return ptr;
	}



	void SetToxinPlantComplete(bool isComplete);
	void OnToxinPlantComplete();
	void OnSalvageInteractionStart();
	void OnSalvageInteractionFinished();
	bool IsToxinPlantComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
