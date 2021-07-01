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

// Class MediaIOCore.MediaOutput
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UMediaOutput : public UObject
{
public:
	int                                                NumberOfTextureBuffers;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7K6[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaIOCore.MediaOutput");
		return ptr;
	}



	bool Validate(struct FString* OutFailureReason);
	class UMediaCapture* CreateMediaCapture();
};

// Class MediaIOCore.MediaCapture
// 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
class UMediaCapture : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9I1O[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaOutput*                                MediaOutput;                                               // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LWJ6[0x20];                                    // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      CapturingRenderTarget;                                     // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6N2Z[0x88];                                    // 0x0088(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaIOCore.MediaCapture");
		return ptr;
	}



	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	MediaIOCore_EMediaCaptureState GetState();
	struct FIntPoint GetDesiredSize();
	TEnumAsByte<CoreUObject_EPixelFormat> GetDesiredPixelFormat();
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
};

// Class MediaIOCore.FileMediaCapture
// 0x0070 (FullSize[0x0180] - InheritedSize[0x0110])
class UFileMediaCapture : public UMediaCapture
{
public:
	unsigned char                                      UnknownData_5X3O[0x70];                                    // 0x0110(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaIOCore.FileMediaCapture");
		return ptr;
	}



};

// Class MediaIOCore.FileMediaOutput
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
class UFileMediaOutput : public UMediaOutput
{
public:
	unsigned char                                      UnknownData_CR58[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FImageWriteOptions                          WriteOptions;                                              // 0x0040(0x0060) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              FilePath;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     BaseFileName;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDesiredSize;                                      // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FF8F[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   DesiredSize;                                               // 0x00C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverridePixelFormat;                                      // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UYP3[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MediaIOCore_EFileMediaOutputPixelFormat            DesiredPixelFormat;                                        // 0x00D0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWPO[0x3];                                     // 0x00CD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_G4X1[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaIOCore.FileMediaOutput");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
