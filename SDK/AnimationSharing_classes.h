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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UAnimSharingStateInstance : public UanimInstance
{
public:
	class UAnimSequence*                               AnimationToPlay;                                           // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PermutationTimeOffset;                                     // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              playRate;                                                  // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EM12[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSharingInstance*                        Instance;                                                  // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}



	void GetInstancedActors(TArray<class Uactor*>* actors);
};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UAnimSharingTransitionInstance : public UanimInstance
{
public:
	TWeakObjectPtr<class UskeletalMeshComponent>       FromComponent;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UskeletalMeshComponent>       ToComponent;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlendTime;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBlendBool;                                                // 0x0284(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EQLV[0xB];                                     // 0x0285(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UAnimSharingAdditiveInstance : public UanimInstance
{
public:
	TWeakObjectPtr<class UskeletalMeshComponent>       BaseComponent;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Alpha;                                                     // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x0284(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XBOU[0xB];                                     // 0x0285(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingInstance
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UAnimSharingInstance : public UObject
{
public:
	TArray<class Uactor*>                              RegisteredActors;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TKQX[0x70];                                    // 0x0040(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationSharingStateProcessor*             StateProcessor;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DH3V[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                    // 0x00F0(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3L2[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       stateEnum;                                                 // 0x0110(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class Uactor*                                      SharingActor;                                              // 0x0118(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5KO[0x20];                                    // 0x0120(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingManager
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                 // 0x0030(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K1CF[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}



	void RegisterActorWithSkeletonBP(class Uactor* InActor, class USkeleton* SharingSkeleton);
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* worldContextObject);
	bool STATIC_CreateAnimationSharingManager(class UObject* worldContextObject, class UAnimationSharingSetup* Setup);
	bool STATIC_AnimationSharingEnabled();
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability                ScalabilitySettings;                                       // 0x0040(0x0010) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      AnimationStateEnum[0x30];                                  // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}



	void ProcessActorState(int* OutState, class Uactor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
