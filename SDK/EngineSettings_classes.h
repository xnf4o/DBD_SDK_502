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

// Class EngineSettings.ConsoleSettings
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V6EN[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                    // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AutoCompleteMapPaths;                                      // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackgroundOpacityPercentage;                               // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrderTopToBottom;                                         // 0x005C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayHelpInAutoComplete;                                // 0x005D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G1L7[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fcolor                                      InputColor;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fcolor                                      HistoryColor;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fcolor                                      AutoCompleteCommandColor;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fcolor                                      AutoCompleteCVarColor;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fcolor                                      AutoCompleteFadedColor;                                    // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEYK[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}



};

// Class EngineSettings.GameMapsSettings
// 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
class UGameMapsSettings : public UObject
{
public:
	struct FString                                     LocalMapOptions;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             TransitionMap;                                             // 0x0040(0x0020) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSplitscreen;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;                                // 0x0061(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EngineSettings_EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;                              // 0x0062(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EngineSettings_EFourPlayerSplitScreenType          FourPlayerSplitscreenLayout;                               // 0x0063(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOffsetPlayerGamepadIds;                                   // 0x0064(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KX1I[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              GameInstanceClass;                                         // 0x0068(0x0020) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             GameDefaultMap;                                            // 0x0088(0x0020) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ServerDefaultMap;                                          // 0x00A8(0x0020) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                     // 0x00C8(0x0020) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                               // 0x00E8(0x0020) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                       // 0x0108(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                      // 0x0118(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}



	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
	bool GetSkipAssigningGamepadToPlayer1();
	class UGameMapsSettings* STATIC_GetGameMapsSettings();
};

// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDynamicBandwidth;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNetBandwidth;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BadPingThreshold;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                             // 0x0040(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFYG[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StandbyRxCheatTime;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StandbyTxCheatTime;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForRxStandby;                                // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentMissingForTxStandby;                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentForBadPing;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JoinInProgressStandbyWaitTime;                             // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQSC[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}



};

// Class EngineSettings.GameSessionSettings
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0034(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPushToTalk : 1;                                   // 0x0038(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R488[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}



};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGeneralEngineSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}



};

// Class EngineSettings.GeneralProjectChunkingSettings
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UGeneralProjectChunkingSettings : public UObject
{
public:
	int                                                NumberOfPaksInInitialChunk;                                // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfPaksInAllChunks;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LeftoverPakId;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAES[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPathPak>                            PakAssignmentPaths;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AtlantaNumberOfPaksInInitialChunk;                         // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AtlantaAndroidNumberOfPaksInAllChunks;                     // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AtlantaIOSNumberOfPaksInAllChunks;                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AtlantaLeftoverPakId;                                      // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPathPak>                            AtlantaPakAssignmentPaths;                                 // 0x0060(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPathPak>                            AtlantaAndroidPakAssignmentPaths;                          // 0x0070(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPathPak>                            AtlantaIOSPakAssignmentPaths;                              // 0x0080(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GeneralProjectChunkingSettings");
		return ptr;
	}



};

// Class EngineSettings.GeneralProjectSettings
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CompanyDistinguishedName;                                  // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CopyrightNotice;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     description;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Homepage;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LicensingTerms;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrivacyPolicy;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       ProjectID;                                                 // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectName;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectVersion;                                            // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SupportContact;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDisplayedTitle;                                     // 0x00E0(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDebugTitleInfo;                                     // 0x00F8(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bShouldWindowPreserveAspectRatio;                          // 0x0110(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseBorderlessWindow;                                      // 0x0111(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInVR;                                                // 0x0112(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInAR;                                                // 0x0113(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportAR;                                                // 0x0114(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowWindowResize;                                        // 0x0115(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowClose;                                               // 0x0116(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMaximize;                                            // 0x0117(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMinimize;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7T3O[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}



};

// Class EngineSettings.HudSettings
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                              // 0x0030(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZM5[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DebugDisplay;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
