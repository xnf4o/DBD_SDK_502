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

// Enum ImageWriteQueue.EDesiredImageFormat
enum class ImageWriteQueue_EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
struct FImageWriteOptions
{
	ImageWriteQueue_EDesiredImageFormat                Format;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YQ5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnComplete;                                                // 0x0004(0x0010) ELEMENT_SIZE_MISMATCH (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNMX[0x4];                                     // 0x0001(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CompressionQuality;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverwriteFile;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsync;                                                    // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDRA[0x42];                                    // 0x001E(0x0042) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
