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

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
class UMagicLeapSharedWorldGameMode : public UGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                           // 0x0328(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewLocalDataFromClients;                                 // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PinSelectionConfidenceThreshold;                           // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IU8[0xA4];                                    // 0x034C(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMagicLeapSharedWorldPlayerController*       ChosenOne;                                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
		return ptr;
	}



	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
class UMagicLeapSharedWorldGameState : public UgameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                           // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                       // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSharedWorldDataUpdated;                                  // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAlignmentTransformsUpdated;                              // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
		return ptr;
	}



	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
class UMagicLeapSharedWorldPlayerController : public UplayerController
{
public:
	unsigned char                                      UnknownData_5EB0[0x18];                                    // 0x0588(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
		return ptr;
	}



	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
