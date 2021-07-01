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

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                         // 0x0030(0x0050) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}



};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                     // 0x0030(0x001B) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJI0[0x15];                                    // 0x004B(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
