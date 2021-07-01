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

// Class LuminRuntimeSettings.LuminRuntimeSettings
// 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
class ULuminRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationDisplayName;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	LuminRuntimeSettings_ELuminFrameTimingHint         FrameTimingHint;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProtectedContent;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bManualCallToAppReady;                                     // 0x0052(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMobileRendering;                                       // 0x0053(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseVulkan;                                                // 0x0054(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJQN[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFilePath                                   Certificate;                                               // 0x0058(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconModelPath;                                             // 0x0068(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              IconPortalPath;                                            // 0x0078(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FLocalizedIconInfos                         LocalizedIconInfos;                                        // 0x0088(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	int                                                VersionCode;                                               // 0x0098(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumAPILevel;                                           // 0x009C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<LuminRuntimeSettings_ELuminPrivilege>       AppPrivileges;                                             // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                 // 0x00B0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentElement>              ExtraComponentElements;                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SpatializationPlugin;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReverbPlugin;                                              // 0x00E0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OcclusionPlugin;                                           // 0x00F0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoundCueCookQualityIndex;                                  // 0x0100(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveDebugInfo;                                          // 0x0104(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DYM[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              VulkanValidationLayerLibs;                                 // 0x0108(0x0010) (Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                               bFrameVignette;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IA5[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLocalizedAppName>                   LocalizedAppNames;                                         // 0x0120(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GHS6[0x20];                                    // 0x0130(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class LuminRuntimeSettings.LuminRuntimeSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
