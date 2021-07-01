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

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData_74OO[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9T7P[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAppleImageUtilsImageConversionResult       ConversionResult;                                          // 0x0068(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0W3I[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		return ptr;
	}



	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToTIFF(class Utexture* SourceImage, bool bWantColor, bool bUseGpu, float scale, AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToPNG(class Utexture* SourceImage, bool bWantColor, bool bUseGpu, float scale, AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToJPEG(class Utexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float scale, AppleImageUtils_ETextureRotationDirection Rotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToHEIF(class Utexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float scale, AppleImageUtils_ETextureRotationDirection Rotate);
};

// Class AppleImageUtils.AppleImageInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAppleImageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AppleImageUtils.AppleImageInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
