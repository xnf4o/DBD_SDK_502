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
// Enums
//---------------------------------------------------------------------------

// Enum MediaIOCore.EFileMediaOutputPixelFormat
enum class MediaIOCore_EFileMediaOutputPixelFormat : uint8_t
{
	EFileMediaOutputPixelFormat__B8G8R8A8 = 0,
	EFileMediaOutputPixelFormat__FloatRGBA = 1,
	EFileMediaOutputPixelFormat__EFileMediaOutputPixelFormat_MAX = 2,

};

// Enum MediaIOCore.EMediaCaptureCroppingType
enum class MediaIOCore_EMediaCaptureCroppingType : uint8_t
{
	EMediaCaptureCroppingType__None = 0,
	EMediaCaptureCroppingType__Center = 1,
	EMediaCaptureCroppingType__TopLeft = 2,
	EMediaCaptureCroppingType__Custom = 3,
	EMediaCaptureCroppingType__EMediaCaptureCroppingType_MAX = 4,

};

// Enum MediaIOCore.EMediaCaptureState
enum class MediaIOCore_EMediaCaptureState : uint8_t
{
	EMediaCaptureState__Error      = 0,
	EMediaCaptureState__Capturing  = 1,
	EMediaCaptureState__Preparing  = 2,
	EMediaCaptureState__StopRequested = 3,
	EMediaCaptureState__Stopped    = 4,
	EMediaCaptureState__EMediaCaptureState_MAX = 5,

};

// Enum MediaIOCore.EMediaIOReferenceType
enum class MediaIOCore_EMediaIOReferenceType : uint8_t
{
	EMediaIOReferenceType__FreeRun = 0,
	EMediaIOReferenceType__External = 1,
	EMediaIOReferenceType__Input   = 2,
	EMediaIOReferenceType__EMediaIOReferenceType_MAX = 3,

};

// Enum MediaIOCore.EMediaIOOutputType
enum class MediaIOCore_EMediaIOOutputType : uint8_t
{
	EMediaIOOutputType__Fill       = 0,
	EMediaIOOutputType__FillAndKey = 1,
	EMediaIOOutputType__EMediaIOOutputType_MAX = 2,

};

// Enum MediaIOCore.EMediaIOInputType
enum class MediaIOCore_EMediaIOInputType : uint8_t
{
	EMediaIOInputType__Fill        = 0,
	EMediaIOInputType__FillAndKey  = 1,
	EMediaIOInputType__EMediaIOInputType_MAX = 2,

};

// Enum MediaIOCore.EMediaIOTimecodeFormat
enum class MediaIOCore_EMediaIOTimecodeFormat : uint8_t
{
	EMediaIOTimecodeFormat__None   = 0,
	EMediaIOTimecodeFormat__LTC    = 1,
	EMediaIOTimecodeFormat__VITC   = 2,
	EMediaIOTimecodeFormat__EMediaIOTimecodeFormat_MAX = 3,

};

// Enum MediaIOCore.EMediaIOStandardType
enum class MediaIOCore_EMediaIOStandardType : uint8_t
{
	EMediaIOStandardType__Progressive = 0,
	EMediaIOStandardType__Interlaced = 1,
	EMediaIOStandardType__ProgressiveSegmentedFrame = 2,
	EMediaIOStandardType__EMediaIOStandardType_MAX = 3,

};

// Enum MediaIOCore.EMediaIOQuadLinkTransportType
enum class MediaIOCore_EMediaIOQuadLinkTransportType : uint8_t
{
	EMediaIOQuadLinkTransportType__SquareDivision = 0,
	EMediaIOQuadLinkTransportType__TwoSampleInterleave = 1,
	EMediaIOQuadLinkTransportType__EMediaIOQuadLinkTransportType_MAX = 2,

};

// Enum MediaIOCore.EMediaIOTransportType
enum class MediaIOCore_EMediaIOTransportType : uint8_t
{
	EMediaIOTransportType__SingleLink = 0,
	EMediaIOTransportType__DualLink = 1,
	EMediaIOTransportType__QuadLink = 2,
	EMediaIOTransportType__HDMI    = 3,
	EMediaIOTransportType__EMediaIOTransportType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaIOCore.MediaCaptureOptions
// 0x0010
struct FMediaCaptureOptions
{
	MediaIOCore_EMediaCaptureCroppingType              Crop;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UJH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   CustomCapturePoint;                                        // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResizeSourceBuffer;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipFrameWhenRunningExpensiveTasks;                       // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MWS3[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct MediaIOCore.MediaIODevice
// 0x0010
struct FMediaIODevice
{
	struct FName                                       DeviceName;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceIdentifier;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaIOCore.MediaIOMode
// 0x0018
struct FMediaIOMode
{
	struct FFrameRate                                  FrameRate;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   resolution;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MediaIOCore_EMediaIOStandardType                   Standard;                                                  // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EF5P[0x3];                                     // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                DeviceModeIdentifier;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaIOCore.MediaIOConnection
// 0x0028
struct FMediaIOConnection
{
	struct FMediaIODevice                              Device;                                                    // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Protocol;                                                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MediaIOCore_EMediaIOTransportType                  TransportType;                                             // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I37R[0x3];                                     // 0x001C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MediaIOCore_EMediaIOQuadLinkTransportType          QuadTransportType;                                         // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAWL[0x3];                                     // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                PortIdentifier;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaIOCore.MediaIOConfiguration
// 0x0044
struct FMediaIOConfiguration
{
	bool                                               bIsInput;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R441[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMediaIOConnection                          MediaConnection;                                           // 0x0004(0x0028) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMediaIOMode                                MediaMode;                                                 // 0x002C(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaIOCore.MediaIOOutputConfiguration
// 0x0054
struct FMediaIOOutputConfiguration
{
	struct FMediaIOConfiguration                       MediaConfiguration;                                        // 0x0000(0x0044) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	MediaIOCore_EMediaIOOutputType                     OutputType;                                                // 0x0044(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8EM[0x3];                                     // 0x0044(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                KeyPortIdentifier;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MediaIOCore_EMediaIOReferenceType                  OutputReference;                                           // 0x004C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QS3K[0x3];                                     // 0x004C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                ReferencePortIdentifier;                                   // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MediaIOCore.MediaIOInputConfiguration
// 0x004C
struct FMediaIOInputConfiguration
{
	struct FMediaIOConfiguration                       MediaConfiguration;                                        // 0x0000(0x0044) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	MediaIOCore_EMediaIOInputType                      InputType;                                                 // 0x0044(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SORC[0x3];                                     // 0x0044(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                KeyPortIdentifier;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
