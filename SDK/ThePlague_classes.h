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

// Class ThePlague.PlagueSurvivorAnalyticsComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class UPlagueSurvivorAnalyticsComponent : public UactorComponent
{
public:
	uint32_t                                           _replicatedRegularVomitHits;                               // 0x00B8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZV2I[0xA4];                                    // 0x00BC(0x00A4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePlague.PlagueSurvivorAnalyticsComponent");
		return ptr;
	}



};

// Class ThePlague.SicknessSurvivorSubAnimInstance
// 0x0070 (FullSize[0x0560] - InheritedSize[0x04F0])
class USicknessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	struct FString                                     _vomitingEnteredStatEvent;                                 // 0x04F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _hitByVomitTime;                                           // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSick;                                                   // 0x0504(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVomiting;                                               // 0x0505(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasRecentlyBeenHitByVomit;                                // 0x0506(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOpeningExitGate;                                        // 0x0507(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XIYV[0x58];                                    // 0x0508(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePlague.SicknessSurvivorSubAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
