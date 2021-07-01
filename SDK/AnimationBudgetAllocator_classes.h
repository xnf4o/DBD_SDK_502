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

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return ptr;
	}



	void STATIC_SetAnimationBudgetParameters(class UObject* worldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	void STATIC_EnableAnimationBudget(class UObject* worldContextObject, bool bEnabled);
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0024 (FullSize[0x0B90] - InheritedSize[0x0B6C])
class USkeletalMeshComponentBudgeted : public UskeletalMeshComponent
{
public:
	unsigned char                                      UnknownData_BXOY[0x4];                                     // 0x0B6C(0x0004) Fix Super Size
	unsigned char                                      UnknownData_ZDRR[0x18];                                    // 0x0B70(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                      // 0x0B88(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoCalculateSignificance : 1;                            // 0x0B88(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                           // 0x0B88(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6WIJ[0x7];                                     // 0x0B89(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return ptr;
	}



	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
