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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDatasmithObjectTemplate : public UObject
{
public:
	unsigned char                                      UnknownData_Z9U9[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithActorTemplate
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      Layers[0x50];                                              // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      tags[0x50];                                                // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAdditionalData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithAdditionalData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UDatasmithAreaLightActor : public Uactor
{
public:
	DatasmithContent_EDatasmithAreaLightActorType      LightType;                                                 // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithAreaLightActorShape     LightShape;                                                // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BDN[0x2];                                     // 0x0232(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Dimensions;                                                // 0x0234(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              intensity;                                                 // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_94AX[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                color;                                                     // 0x0244(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Temperature;                                               // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                        IESTexture;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseIESBrightness;                                         // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3HJY[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IESBrightnessScale;                                        // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x0268(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpotlightInnerAngle;                                       // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpotlightOuterAngle;                                       // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	DatasmithContent_EDatasmithAreaLightActorType      LightType;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithAreaLightActorShape     LightShape;                                                // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEIK[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Dimensions;                                                // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                color;                                                     // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              intensity;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8HKD[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Temperature;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IESTexture[0x30];                                          // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bUseIESBrightness;                                         // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDJ4[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IESBrightnessScale;                                        // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rotation;                                                  // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SourceRadius;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithAssetImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithSceneImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	struct FString                                     generator;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              version;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TZQ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Author;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     License;                                                   // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     source;                                                    // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceMeshName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                               bGenerateLightmapUVs;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H84[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TexturesDir;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IntermediateSerialization;                                 // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bColorizeMaterials;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1MJ[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithFBXSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOptimizeDuplicatedNodes;                                  // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveInvisibleNodes;                                     // 0x0052(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimplifyNodeHierarchy;                                    // 0x0053(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportVar;                                                // 0x0054(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8S7N[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VarPath;                                                   // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportPos;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0I0Z[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PosPath;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportTml;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJGC[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TmlPath;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0060 (FullSize[0x00B0] - InheritedSize[0x0050])
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                               bMergeNodes;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOptimizeDuplicatedNodes;                                  // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportMats;                                               // 0x0052(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X4L8[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MatsPath;                                                  // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportVar;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCleanVar;                                                 // 0x0069(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTMQ[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VarPath;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportLightInfo;                                          // 0x0080(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MI6J[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LightInfoPath;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportClipInfo;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIMP[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClipInfoPath;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	struct FString                                     SourceGlobalId;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 Metadata;                                                  // 0x0030(0x0050) (Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                                    // 0x0038(0x0038) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                             // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CurrentFocalLength;                                        // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentAperture;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WM8[0xC];                                     // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                       // 0x0060(0x0040) (NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}



	struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& key);
	void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);
};

// Class DatasmithContent.DatasmithCustomActionBase
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDatasmithCustomActionBase : public UObject
{
public:
	unsigned char                                      UnknownData_E1BT[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UDatasmithImportedSequencesActor : public Uactor
{
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                         // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}



	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

// Class DatasmithContent.DatasmithOptionsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDatasmithOptionsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithOptionsBase");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct FDatasmithTessellationOptions               Options;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithImportOptions
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	DatasmithContent_EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                                       // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                                    // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                                     // 0x0032(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                               // 0x0033(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       LightImportPolicy;                                         // 0x0034(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       CameraImportPolicy;                                        // 0x0035(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportActorPolicy       OtherActorImportPolicy;                                    // 0x0036(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DatasmithContent_EDatasmithImportMaterialQuality   MaterialQuality;                                           // 0x0037(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJZ3[0x4];                                     // 0x0038(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithImportBaseOptions                 BaseOptions;                                               // 0x003C(0x0018) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FDatasmithReimportOptions                   ReimportOptions;                                           // 0x0054(0x0002) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AG1R[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FileName;                                                  // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FilePath;                                                  // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FYQ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UmaterialInterface*                          LandscapeMaterial;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z9CF[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                              // 0x0038(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VFOW[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CastShadows : 1;                                           // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseTemperature : 1;                                       // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseIESBrightness : 1;                                     // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B2AZ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              intensity;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Temperature;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IESBrightnessScale;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LightColor;                                                // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRMT[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UmaterialInterface*                          LightFunctionMaterial;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                        IESTexture;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      ParentMaterial[0x30];                                      // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<struct FName, float>                          ScalarParameterValues;                                     // 0x0068(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FLinearColor>            VectorParameterValues;                                     // 0x00B8(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      TextureParameterValues[0x50];                              // 0x0108(0x0050) UNKNOWN PROPERTY: MapProperty
	struct FDatasmithStaticParameterSetTemplate        StaticParameters;                                          // 0x0158(0x0050) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	Engine_ELightUnits                                 IntensityUnits;                                            // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UHN[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SourceRadius;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceLength;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationRadius;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData_MMRP[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDatasmithPostProcessSettingsTemplate       settings;                                                  // 0x0040(0x0040) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0080(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUnbound : 1;                                              // 0x0080(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O8KH[0xF];                                     // 0x0081(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithScene
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDatasmithScene : public UObject
{
public:
	unsigned char                                      UnknownData_0QYF[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UDatasmithSceneActor : public Uactor
{
public:
	class UDatasmithScene*                             Scene;                                                     // 0x0230(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RelatedActors[0x50];                                       // 0x0238(0x0050) UNKNOWN PROPERTY: MapProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData_YO0N[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RelativeTransform;                                         // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0JCI[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AttachParent[0x30];                                        // 0x0071(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      tags[0x50];                                                // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_M0F0[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<Engine_ESkyLightSourceType>            SourceType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1TO8[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CubemapResolution;                                         // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                                Cubemap;                                                   // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterConeAngle;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UmaterialInterface*>                  OverrideMaterials;                                         // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                            // 0x0038(0x0050) (Edit, EditConst, NativeAccessSpecifierPublic)
	int                                                LightMapCoordinateIndex;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightMapResolution;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                           // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
