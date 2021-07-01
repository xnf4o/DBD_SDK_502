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

// Class MeshModelingTools.AddPatchToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_818D[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AddPatchToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AddPatchToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Width;                                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              rotation;                                                  // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Shift;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AddPatchToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.AddPatchTool
// 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
class UAddPatchTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_08F5[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAddPatchToolProperties*                     ShapeSettings;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FA3F[0x58];                                    // 0x00B0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AddPatchTool");
		return ptr;
	}



};

// Class MeshModelingTools.AddPrimitiveToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_4E3T[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.ProceduralShapeToolProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bInstanceIfPossible;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSSW[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMakeMeshShapeType               Shape;                                                     // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SG2P[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              height;                                                    // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeatureRadius;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slices;                                                    // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPolygroupMode           PolygroupMode;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPlacementType           PlaceMode;                                                 // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMakeMeshPivotLocation           PivotLocation;                                             // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TFUV[0x1];                                     // 0x0077(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              rotation;                                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignShapeToPlacementSurface;                             // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TZ0B[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.LastActorInfo
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULastActorInfo : public UObject
{
public:
	unsigned char                                      UnknownData_YW4G[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      actor;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.LastActorInfo");
		return ptr;
	}



};

// Class MeshModelingTools.AddPrimitiveTool
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UAddPrimitiveTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData_GNMP[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProceduralShapeToolProperties*              ShapeSettings;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULastActorInfo*                              LastGenerated;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JP08[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AlignObjectsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EAlignObjectsAlignTypes          AlignType;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSPS[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsAlignToOptions      AlignTo;                                                   // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBJJ[0x3];                                     // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EAlignObjectsBoxPoint            BoxPosition;                                               // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JCLW[0x3];                                     // 0x0060(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bAlignX;                                                   // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignY;                                                   // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlignZ;                                                   // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZGC[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AlignObjectsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.AlignObjectsTool
// 0x00B0 (FullSize[0x0148] - InheritedSize[0x0098])
class UAlignObjectsTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_EMJ4[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAlignObjectsToolProperties*                 AlignProps;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H94B[0xA0];                                    // 0x00A8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AlignObjectsTool");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_LKOT[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.BakeTransformToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bBakeRotation;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EBakeScaleMethod                 BakeScale;                                                 // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecenterPivot;                                            // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8T88[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.BakeTransformToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BakeTransformTool
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UBakeTransformTool : public UMultiSelectionTool
{
public:
	class UBakeTransformToolProperties*                BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5GX7[0x20];                                    // 0x00A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.BakeTransformTool");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesToolBuilder
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_LDVV[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bDeleteSourceActors;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUXJ[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.CombineMeshesTool
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
class UCombineMeshesTool : public UMultiSelectionTool
{
public:
	class UCombineMeshesToolProperties*                BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YZ44[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EConvertToPolygonsMode           ConversionMode;                                            // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DX4S[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCalculateNormals;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XXO0[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.ConvertToPolygonsTool
// 0x0480 (FullSize[0x0510] - InheritedSize[0x0090])
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*            settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QVHC[0x470];                                   // 0x00A0(0x0470) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EGroupTopologyDeformationStrategy DeformationStrategy;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EQuickTransformerMode            TransformMode;                                             // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectFaces;                                              // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                              // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                           // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YHPM[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EWeightScheme                    SelectedWeightScheme;                                      // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9U66[0x3];                                     // 0x005F(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_99KQ[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             HandleWeight;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPostFixHandles;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MDB[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTransformProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DeformMeshPolygonsTool
// 0x15B8 (FullSize[0x1680] - InheritedSize[0x00C8])
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_Y9PS[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                            // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YOSV[0x15A0];                                  // 0x00E0(0x15A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.DisplaceMeshToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DisplaceMeshTool
// 0x02C8 (FullSize[0x0358] - InheritedSize[0x0090])
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	MeshModelingTools_EDisplaceMeshToolDisplaceType    DisplacementType;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_65B8[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DisplaceIntensity;                                         // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Subdivisions;                                              // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DisplacementMap;                                           // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplaceFrequency;                                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplacePhaseShift;                                        // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WA7U[0x2A8];                                   // 0x00B0(0x02A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_AWDK[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolStandardProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolygonDrawMode             PolygonType;                                               // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolygonOutputMode           OutputMode;                                                // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T37U[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeatureSizeRatio;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtrudeHeight;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Steps;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSelfIntersections;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60GC[0x6];                                     // 0x006A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonToolSnapProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapping;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToVertices;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToEdges;                                              // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToAngles;                                             // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToLengths;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CHH[0x2];                                     // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SegmentLength;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitSceneObjects;                                          // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GG3N[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HitNormalOffset;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJT5[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolygonTool
// 0x0528 (FullSize[0x05B0] - InheritedSize[0x0088])
class UDrawPolygonTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_F631[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XM73[0xB8];                                    // 0x00A8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A8E4[0x408];                                   // 0x0178(0x0408) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                            // 0x0580(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FKQL[0x28];                                    // 0x0588(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_E3EX[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolyPathToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathOutputMode          OutputType;                                                // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TI9W[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MeshModelingTools_EDrawPolyPathWidthMode           WidthMode;                                                 // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DRD[0x3];                                     // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDrawPolyPathHeightMode          HeightMode;                                                // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_206S[0x3];                                     // 0x0064(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              height;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RampStartRatio;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DQDI[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolyPathProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EDrawPolyPathExtrudeDirection    direction;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZXJ[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_E1LP[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolyPathExtrudeProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DrawPolyPathTool
// 0x0188 (FullSize[0x0210] - InheritedSize[0x0088])
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_A4SP[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDrawPolyPathProperties*                     TransformProps;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                         // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                        // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G8UC[0x80];                                    // 0x00C0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                             // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P3K6[0xA0];                                    // 0x0148(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RB87[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DrawPolyPathTool");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshBrushTool
// 0x0040 (FullSize[0x0210] - InheritedSize[0x01D0])
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                                PreviewMesh;                                               // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQRM[0x38];                                    // 0x01D8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_NYFL[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SculptBrushProperties
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class USculptBrushProperties : public UBrushBaseProperties
{
public:
	float                                              Depth;                                                     // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQ20[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.SculptBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BrushSculptProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bIsRemeshingEnabled;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EDynamicMeshSculptBrushType      PrimaryBrushType;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WZJ[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PrimaryBrushSpeed;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreserveUVFlow;                                           // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeTarget;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LP5K[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothBrushSpeed;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetailPreservingSmooth;                                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWMP[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneBrushProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPlaneBrushSideMode              WhichSide;                                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NPKU[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PlaneBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.FixedPlaneBrushProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPropertySetEnabled;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGizmo;                                                // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToGrid;                                               // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWIH[0x1];                                     // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     position;                                                  // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYXD[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       rotation;                                                  // 0x0070(0x0010) (Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.SculptMaxBrushProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                              MaxHeight;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFreezeCurrentHeight;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3B5Y[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.SculptMaxBrushProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshConstraintProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPreserveSharpEdges;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMeshBoundaryConstraint          MeshBoundaryConstraint;                                    // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EGroupBoundaryConstraint         GroupBoundaryConstraint;                                   // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EMaterialBoundaryConstraint      MaterialBoundaryConstraint;                                // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreventNormalFlips;                                       // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BT1[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshConstraintProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshProperties
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                              SmoothingStrength;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlips;                                                    // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSplits;                                                   // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollapses;                                                // 0x0066(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JCK5[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemeshProperties");
		return ptr;
	}



};

// Class MeshModelingTools.BrushRemeshProperties
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                               bEnableRemeshing;                                          // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLHJ[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TriangleSize;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreserveDetail;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QXG[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		return ptr;
	}



};

// Class MeshModelingTools.DynamicMeshSculptTool
// 0x0BF8 (FullSize[0x0CC0] - InheritedSize[0x00C8])
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                      BrushProperties;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushSculptProperties*                      SculptProperties;                                          // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaneBrushProperties*                       PlaneBrushProperties;                                      // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                  // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBrushRemeshProperties*                      RemeshProperties;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshEditingViewProperties*                  ViewProperties;                                            // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YH06[0x40];                                    // 0x0100(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBrushStampIndicator*                        BrushIndicator;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                    // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPreviewMesh*                                BrushIndicatorMesh;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                    // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GWAW[0xB40];                                   // 0x0168(0x0B40) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0CA8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0CB0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S599[0x8];                                     // 0x0CB8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_X14J[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditTransformProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UPolyEditTransformProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FUWP[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ELocalFrameMode                  LocalFrameMode;                                            // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3QZ[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bLockRotation;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSPH[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PolyEditTransformProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_FD8T[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsToolActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		return ptr;
	}



	void Retriangulate();
	void RecalcNormals();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
};

// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		return ptr;
	}



	void RecalcNormals();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		return ptr;
	}



	void PlanarProjection();
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		return ptr;
	}



	void Weld();
	void Straighten();
	void FillHole();
};

// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		return ptr;
	}



	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// Class MeshModelingTools.PolyEditExtrudeProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditExtrudeDirection        direction;                                                 // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TF5G[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_VRME[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditCutProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EPolyEditCutPlaneOrientation     Orientation;                                               // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUTU[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bSnapToVertices;                                           // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JTN[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PolyEditSetUVProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowMaterial;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0M6K[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditMeshPolygonsTool
// 0x0908 (FullSize[0x09D0] - InheritedSize[0x00C8])
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_UOBN[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditTransformProperties*                TransformProps;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KLFP[0x128];                                   // 0x00E8(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditMeshPolygonsToolActions*                EditActions;                                               // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                     // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                           // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                 // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                         // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BVBO[0x90];                                    // 0x0240(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditCutProperties*                      CutProperties;                                             // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditSetUVProperties*                    SetUVProperties;                                           // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OVDV[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1X22[0x3A8];                                   // 0x02F8(0x03A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolyEditPreviewMesh*                        EditPreview;                                               // 0x06A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K94D[0x8];                                     // 0x06A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                     // 0x06B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                         // 0x06B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                       // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LRLX[0x308];                                   // 0x06C8(0x0308) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_KPVW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bRecomputeNormals;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ENormalCalculationMethod         NormalCalculationMethod;                                   // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixInconsistentNormals;                                   // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertNormals;                                            // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ESplitNormalMethod               SplitNormalMethod;                                         // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M065[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SharpEdgeAngleThreshold;                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSharpVertices;                                       // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6T1Q[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsAdvancedProperties
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UEditNormalsOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_E3Q2[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditNormalsTool*                            Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RIQS[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.EditNormalsTool
// 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ADFP[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditPivotToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapDragging;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EEditPivotSnapDragRotationMode   RotationMode;                                              // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V9UC[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditPivotToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.EditPivotToolActionPropertySet
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_UZ15[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseWorldBox;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T895[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditPivotToolActionPropertySet");
		return ptr;
	}



	void Top();
	void Right();
	void left();
	void Front();
	void center();
	void Bottom();
	void Back();
};

// Class MeshModelingTools.EditPivotTool
// 0x0178 (FullSize[0x0210] - InheritedSize[0x0098])
class UEditPivotTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_D3FY[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditPivotToolProperties*                    TransformProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4JRK[0xD0];                                    // 0x00B0(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEditPivotTarget>                    ActiveGizmos;                                              // 0x0180(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZAM0[0x80];                                    // 0x0190(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditPivotTool");
		return ptr;
	}



};

// Class MeshModelingTools.EditUVIslandsToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditUVIslandsToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.EditUVIslandsTool
// 0x02F8 (FullSize[0x03C0] - InheritedSize[0x00C8])
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData_OPZ9[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                         // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NT04[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMultiTransformer*                           MultiTransformer;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZLQX[0x2D0];                                   // 0x00F0(0x02D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.EditUVIslandsTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshAnalysisProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     SurfaceArea;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     volume;                                                    // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bWireframe;                                                // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoundaryEdges;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPolygonBorders;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUVSeams;                                                  // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalSeams;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalVectors;                                            // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTangentVectors;                                           // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ZN1[0x1];                                     // 0x005F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NormalLength;                                              // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TangentLength;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshInspectorTool
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*                    settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M44C[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          DefaultMaterial;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HLXY[0x40];                                    // 0x00B8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		return ptr;
	}



};

// Class MeshModelingTools.NewMeshMaterialProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UVScale;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWireframe;                                                // 0x0065(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowExtendedOptions;                                      // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7R8U[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}



};

// Class MeshModelingTools.ExistingMeshMaterialProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ESetMeshMaterialMode             MaterialMode;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQ03[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CheckerDensity;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UmaterialInterface*                          OverrideMaterial;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshEditingViewProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRZ6[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshEditingMaterialModes        MaterialMode;                                              // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOBI[0x3];                                     // 0x0059(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFlatShading;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJ4B[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                color;                                                     // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GFQ[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  image;                                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionToolBuilder
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData_ZGNM[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_GFBX[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionEditActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		return ptr;
	}



	void Shrink();
	void SelectLargestComponentByTriCount();
	void SelectLargestComponentByArea();
	void SelectAll();
	void OptimizeSelection();
	void Invert();
	void Grow();
	void ExpandToConnected();
	void Clear();
};

// Class MeshModelingTools.MeshSelectionMeshEditActions
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		return ptr;
	}



	void SeparateTriangles();
	void FlipNormals();
	void DisconnectTriangles();
	void DeleteTriangles();
	void CreatePolygroup();
};

// Class MeshModelingTools.MeshSelectionToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EMeshSelectionToolPrimaryMode    SelectionMode;                                             // 0x0058(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EMW[0x3];                                     // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitBackFaces;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DFUG[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_EMeshFacesColorMode              FaceColorMode;                                             // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVPA[0x3];                                     // 0x0062(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSelectionTool
// 0x03D0 (FullSize[0x05E0] - InheritedSize[0x0210])
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                            // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionEditActions*                   SelectionActions;                                          // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionToolActionPropertySet*         EditActions;                                               // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshSelectionSet*                           Selection;                                                 // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class Uactor*>                              SpawnedActors;                                             // 0x0230(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OC46[0x3A0];                                   // 0x0240(0x03A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SpaceDeformerOperatorFactory
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USpaceDeformerOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_BWEZ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.SpaceDeformerOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.MeshSpaceDeformerTool
// 0x00E8 (FullSize[0x01B0] - InheritedSize[0x00C8])
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	MeshModelingTools_ENonlinearOperationType          SelectedOperationType;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2TV[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpperBoundsInterval;                                       // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowerBoundsInterval;                                       // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModifierPercent;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4TA1[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C4RW[0x20];                                    // 0x00F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     GizmoCenter;                                               // 0x0110(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1YVT[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       GizmoOrientation;                                          // 0x0120(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UIntervalGizmo*                              IntervalGizmo;                                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             TransformProxy;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                          // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                     // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4C1E[0x50];                                    // 0x0160(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		return ptr;
	}



};

// Class MeshModelingTools.MeshStatisticsProperties
// 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     mesh;                                                      // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UV;                                                        // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Attributes;                                                // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_W66P[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.AcceptOutputProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1A7A[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.AcceptOutputProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutToolProperties
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSnapToWorldGrid;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepBothHalves;                                           // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W5MM[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpacingBetweenHalves;                                      // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillCutHole;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPreview;                                              // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFillSpans;                                                // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IY9F[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UPlaneCutOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_9YXZ[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutTool*                               CutTool;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKYL[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.PlaneCutTool
// 0x00D8 (FullSize[0x0170] - InheritedSize[0x0098])
class UPlaneCutTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_I462[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlaneCutToolProperties*                     BasicProperties;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAcceptOutputProperties*                     AcceptProperties;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     CutPlaneOrigin;                                            // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2EZS[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       CutPlaneOrientation;                                       // 0x00C0(0x0010) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00D0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                               // 0x00E0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M6ZJ[0x68];                                    // 0x00F0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9T3E[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		return ptr;
	}



	void Cut();
};

// Class MeshModelingTools.PositionPlaneGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.PositionPlaneGizmo
// 0x04E0 (FullSize[0x0520] - InheritedSize[0x0040])
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_ZIXX[0x48];                                    // 0x0040(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                CenterBallShape;                                           // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           CenterBallMaterial;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7LAC[0x488];                                   // 0x0098(0x0488) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		return ptr;
	}



};

// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_5RA9[0x30];                                    // 0x0080(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_R1D3[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshToolProperties
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int                                                TargetTriangleCount;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ModelingOperators_ERemeshSmoothingType             SmoothingType;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_80GQ[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RemeshIterations;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDiscardAttributes;                                        // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWireframe;                                            // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGroupColors;                                          // 0x0076(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTargetEdgeLength;                                      // 0x0077(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetEdgeLength;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReproject;                                                // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XAO7[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemeshMeshTool
// 0x0180 (FullSize[0x0210] - InheritedSize[0x0090])
class URemeshMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_J8KW[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemeshMeshToolProperties*                   BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSBD[0x160];                                   // 0x00B0(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_C5PM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_EOcclusionCalculationUIMode      OcclusionTestMethod;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_EOcclusionTriangleSamplingUIMode TriangleSampling;                                          // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OQJQ[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             WindingIsoValue;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddRandomRays;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddTriangleSamples;                                        // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlySelfOcclude;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_60D0[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData_9UN1[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_RMUM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URemoveOccludedTrianglesTool*                Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YRK[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.RemoveOccludedTrianglesTool
// 0x00C8 (FullSize[0x0160] - InheritedSize[0x0098])
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPreviewMesh*>                        PreviewCopies;                                             // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YVY4[0x98];                                    // 0x00C8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesTool");
		return ptr;
	}



};

// Class MeshModelingTools.SmoothMeshToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USmoothMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_EUN1[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.SmoothMeshTool
// 0x0290 (FullSize[0x0320] - InheritedSize[0x0090])
class USmoothMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_KNX8[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MeshModelingTools_ESmoothMeshToolSmoothType        SmoothType;                                                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1UO9[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SmoothSpeed;                                               // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SmoothIterations;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6BBE[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PGER[0x270];                                   // 0x00B0(0x0270) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesToolProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	MeshModelingTools_ETransformMeshesTransformMode    TransformMode;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPivot;                                                 // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSnapDragging;                                       // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragSource   SnapDragSource;                                            // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MeshModelingTools_ETransformMeshesSnapDragRotationMode RotationMode;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDSB[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.TransformMeshesTool
// 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData_PGCW[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformMeshesToolProperties*              TransformProps;                                            // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L5Q8[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransformMeshesTarget>              ActiveGizmos;                                              // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_79NT[0x88];                                    // 0x00C8(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_8TY8[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionToolProperties
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	ModelingOperators_EUVProjectionMethod              UVProjectionMethod;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OMI5[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     ProjectionPrimitiveScale;                                  // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CylinderProjectToTopOrBottomAngleThreshold;                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVScale;                                                   // 0x006C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVOffset;                                                  // 0x0074(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpaceUVScale;                                        // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JPX[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionAdvancedProperties
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionOperatorFactory
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UUVProjectionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData_JYCW[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUVProjectionTool*                           Tool;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPIH[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}



};

// Class MeshModelingTools.UVProjectionTool
// 0x0188 (FullSize[0x0220] - InheritedSize[0x0098])
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                  // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                           // 0x00C8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTransformProxy*>                     TransformProxies;                                          // 0x00D8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K991[0x138];                                   // 0x00E8(0x0138) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}



};

// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		return ptr;
	}



};

// Class MeshModelingTools.WeldMeshEdgesTool
// 0x0278 (FullSize[0x0308] - InheritedSize[0x0090])
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                              tolerance;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyUnique;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_143M[0x273];                                   // 0x0095(0x0273) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
