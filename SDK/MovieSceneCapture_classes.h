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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	unsigned char                                      UnknownData_SPVF[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MovieSceneCapture_EMovieSceneCaptureProtocolState  state;                                                     // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RKMM[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}



	bool IsCapturing();
	MovieSceneCapture_EMovieSceneCaptureProtocolState GetState();
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}



};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	struct FString                                     FileName;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2S8T[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}



};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0070 (FullSize[0x00D0] - InheritedSize[0x0060])
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                       // 0x0060(0x0010) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                               bCaptureFramesInHDR;                                       // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NNNK[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HDRCompressionQuality;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_15WK[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             PostProcessingMaterial;                                    // 0x0080(0x0020) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableScreenPercentage;                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4VCD[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          PostProcessingMaterialPtr;                                 // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7BI6[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	unsigned char                                      UnknownData_YG18[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0070 (FullSize[0x00E0] - InheritedSize[0x0070])
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	unsigned char                                      UnknownData_XVED[0x70];                                    // 0x0070(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int                                                CompressionQuality;                                        // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMT7[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                               bCompressed;                                               // 0x00E0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MovieSceneCapture_EHDRCaptureGamut>    CaptureGamut;                                              // 0x00E1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8IW[0xE];                                     // 0x00E2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCapture
// 0x0208 (FullSize[0x0238] - InheritedSize[0x0030])
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData_7VAQ[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              ImageCaptureProtocolType;                                  // 0x0040(0x0020) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              AudioCaptureProtocolType;                                  // 0x0060(0x0020) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                      // 0x0080(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                      // 0x0088(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings                  settings;                                                  // 0x0090(0x0070) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                               bUseSeparateProcess;                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCloseEditorWhenCaptureStarts;                             // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMDT[0x6];                                     // 0x0102(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdditionalCommandLineArguments;                            // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InheritedCommandLineArguments;                             // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N48L[0x110];                                   // 0x0128(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}



	void SetImageCaptureProtocolType(class UClass* ProtocolType);
	void SetAudioCaptureProtocolType(class UClass* ProtocolType);
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// Class MovieSceneCapture.LevelCapture
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                         // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3I8[0xB];                                     // 0x0239(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       PrerequisiteActorId;                                       // 0x0244(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NFBG[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}



	bool STATIC_IsCaptureInProgress();
	int STATIC_GetCaptureFrameNumber();
	float STATIC_GetCaptureElapsedTime();
	class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
	class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0080 (FullSize[0x00E0] - InheritedSize[0x0060])
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class Uworld*                                      world;                                                     // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_636C[0x78];                                    // 0x0068(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}



	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID);
	void ResolveBuffer(class Utexture* Buffer, const struct FCapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& Id, const struct FFrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	struct FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	ImageWriteQueue_EDesiredImageFormat                Format;                                                    // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCompression;                                        // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFUK[0x2];                                     // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CompressionQuality;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}



	void WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
	struct FString GenerateFilenameForCurrentFrame();
	struct FString GenerateFilenameForBuffer(class Utexture* Buffer, const struct FCapturedPixelsID& StreamID);
};

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                               bUseCompression;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VG8Q[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CompressionQuality;                                        // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48AZ[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
