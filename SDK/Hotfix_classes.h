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

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (FullSize[0x0228] - InheritedSize[0x0030])
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData_PI71[0x1B8];                                   // 0x0030(0x01B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OSSName;                                                   // 0x01E8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HotfixManagerClassName;                                    // 0x01F8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugPrefix;                                               // 0x0208(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                                // 0x0218(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}



	void StartHotfixProcess();
};

// Class Hotfix.UpdateManager
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData_SMT3[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HotfixCheckCompleteDelay;                                  // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UpdateCheckCompleteDelay;                                  // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HotfixAvailabilityCheckCompleteDelay;                      // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UpdateCheckAvailabilityCompleteDelay;                      // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckPlatformOSSForUpdate;                                // 0x00A0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckOSSForUpdate;                                        // 0x00A1(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R1LB[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AppSuspendedUpdateCheckTimeSeconds;                        // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TTZH[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPlatformEnvironmentDetected;                              // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInitialUpdateFinished;                                    // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckHotfixAvailabilityOnly;                              // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EUpdateState                                CurrentUpdateState;                                        // 0x00B3(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WorstNumFilesPendingLoadViewed;                            // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EPatchCheckResult                           LastPatchCheckResult;                                      // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EHotfixResult                               LastHotfixResult;                                          // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WPAC[0x2E];                                    // 0x00BA(0x002E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastUpdateCheck[0x2];                                      // 0x00E8(0x0010) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EUpdateCompletionStatus                     LastCompletionResult[0x2];                                 // 0x00F8(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3TKS[0x16];                                    // 0x00FA(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       UpdateStateEnum;                                           // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                       UpdateCompletionEnum;                                      // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
