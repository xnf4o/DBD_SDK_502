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

// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class MeshModelingTools_EMakeMeshPolygroupMode : uint8_t
{
	EMakeMeshPolygroupMode__Single = 0,
	EMakeMeshPolygroupMode__PerFace = 1,
	EMakeMeshPolygroupMode__PerQuad = 2,
	EMakeMeshPolygroupMode__EMakeMeshPolygroupMode_MAX = 3,

};

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class MeshModelingTools_EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base   = 0,
	EMakeMeshPivotLocation__Centered = 1,
	EMakeMeshPivotLocation__Top    = 2,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX = 3,

};

// Enum MeshModelingTools.EMakeMeshPlacementType
enum class MeshModelingTools_EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__GroundPlane = 0,
	EMakeMeshPlacementType__OnScene = 1,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX = 2,

};

// Enum MeshModelingTools.EMakeMeshShapeType
enum class MeshModelingTools_EMakeMeshShapeType : uint8_t
{
	EMakeMeshShapeType__None       = 0,
	EMakeMeshShapeType__All        = 1,
	EMakeMeshShapeType__Box        = 2,
	EMakeMeshShapeType__Cylinder   = 3,
	EMakeMeshShapeType__Cone       = 4,
	EMakeMeshShapeType__Arrow      = 5,
	EMakeMeshShapeType__Rectangle  = 6,
	EMakeMeshShapeType__RoundedRectangle = 7,
	EMakeMeshShapeType__Disc       = 8,
	EMakeMeshShapeType__PuncturedDisc = 9,
	EMakeMeshShapeType__Torus      = 10,
	EMakeMeshShapeType__SphericalBox = 11,
	EMakeMeshShapeType__Sphere     = 12,
	EMakeMeshShapeType__EMakeMeshShapeType_MAX = 13,

};

// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class MeshModelingTools_EAlignObjectsBoxPoint : uint8_t
{
	EAlignObjectsBoxPoint__Center  = 0,
	EAlignObjectsBoxPoint__Bottom  = 1,
	EAlignObjectsBoxPoint__Top     = 2,
	EAlignObjectsBoxPoint__Left    = 3,
	EAlignObjectsBoxPoint__Right   = 4,
	EAlignObjectsBoxPoint__Front   = 5,
	EAlignObjectsBoxPoint__Back    = 6,
	EAlignObjectsBoxPoint__Min     = 7,
	EAlignObjectsBoxPoint__MAX     = 8,
	EAlignObjectsBoxPoint__EAlignObjectsBoxPoint_MAX = 9,

};

// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class MeshModelingTools_EAlignObjectsAlignToOptions : uint8_t
{
	EAlignObjectsAlignToOptions__FirstSelected = 0,
	EAlignObjectsAlignToOptions__LastSelected = 1,
	EAlignObjectsAlignToOptions__Combined = 2,
	EAlignObjectsAlignToOptions__EAlignObjectsAlignToOptions_MAX = 3,

};

// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class MeshModelingTools_EAlignObjectsAlignTypes : uint8_t
{
	EAlignObjectsAlignTypes__Pivots = 0,
	EAlignObjectsAlignTypes__BoundingBoxes = 1,
	EAlignObjectsAlignTypes__EAlignObjectsAlignTypes_MAX = 2,

};

// Enum MeshModelingTools.EBakeScaleMethod
enum class MeshModelingTools_EBakeScaleMethod : uint8_t
{
	EBakeScaleMethod__BakeFullScale = 0,
	EBakeScaleMethod__BakeNonuniformScale = 1,
	EBakeScaleMethod__DoNotBakeScale = 2,
	EBakeScaleMethod__EBakeScaleMethod_MAX = 3,

};

// Enum MeshModelingTools.EConvertToPolygonsMode
enum class MeshModelingTools_EConvertToPolygonsMode : uint8_t
{
	EConvertToPolygonsMode__FaceNormalDeviation = 0,
	EConvertToPolygonsMode__FromUVISlands = 1,
	EConvertToPolygonsMode__EConvertToPolygonsMode_MAX = 2,

};

// Enum MeshModelingTools.EQuickTransformerMode
enum class MeshModelingTools_EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation = 0,
	EQuickTransformerMode__AxisRotation = 1,
	EQuickTransformerMode__EQuickTransformerMode_MAX = 2,

};

// Enum MeshModelingTools.EWeightScheme
enum class MeshModelingTools_EWeightScheme : uint8_t
{
	EWeightScheme__Uniform         = 0,
	EWeightScheme__Umbrella        = 1,
	EWeightScheme__Valence         = 2,
	EWeightScheme__MeanValue       = 3,
	EWeightScheme__Cotangent       = 4,
	EWeightScheme__ClampedCotangent = 5,
	EWeightScheme__EWeightScheme_MAX = 6,

};

// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class MeshModelingTools_EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear = 0,
	EGroupTopologyDeformationStrategy__Laplacian = 1,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX = 2,

};

// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class MeshModelingTools_EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant = 0,
	EDisplaceMeshToolDisplaceType__RandomNoise = 1,
	EDisplaceMeshToolDisplaceType__PerlinNoise = 2,
	EDisplaceMeshToolDisplaceType__DisplacementMap = 3,
	EDisplaceMeshToolDisplaceType__SineWave = 4,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX = 5,

};

// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class MeshModelingTools_EDrawPolygonOutputMode : uint8_t
{
	EDrawPolygonOutputMode__MeshedPolygon = 0,
	EDrawPolygonOutputMode__ExtrudedConstant = 1,
	EDrawPolygonOutputMode__ExtrudedInteractive = 2,
	EDrawPolygonOutputMode__EDrawPolygonOutputMode_MAX = 3,

};

// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class MeshModelingTools_EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand = 0,
	EDrawPolygonDrawMode__Circle   = 1,
	EDrawPolygonDrawMode__Square   = 2,
	EDrawPolygonDrawMode__Rectangle = 3,
	EDrawPolygonDrawMode__RoundedRectangle = 4,
	EDrawPolygonDrawMode__HoleyCircle = 5,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX = 6,

};

// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class MeshModelingTools_EDrawPolyPathExtrudeDirection : uint8_t
{
	EDrawPolyPathExtrudeDirection__SelectionNormal = 0,
	EDrawPolyPathExtrudeDirection__WorldX = 1,
	EDrawPolyPathExtrudeDirection__WorldY = 2,
	EDrawPolyPathExtrudeDirection__WorldZ = 3,
	EDrawPolyPathExtrudeDirection__LocalX = 4,
	EDrawPolyPathExtrudeDirection__LocalY = 5,
	EDrawPolyPathExtrudeDirection__LocalZ = 6,
	EDrawPolyPathExtrudeDirection__EDrawPolyPathExtrudeDirection_MAX = 7,

};

// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class MeshModelingTools_EDrawPolyPathHeightMode : uint8_t
{
	EDrawPolyPathHeightMode__Interactive = 0,
	EDrawPolyPathHeightMode__Constant = 1,
	EDrawPolyPathHeightMode__EDrawPolyPathHeightMode_MAX = 2,

};

// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class MeshModelingTools_EDrawPolyPathWidthMode : uint8_t
{
	EDrawPolyPathWidthMode__Interactive = 0,
	EDrawPolyPathWidthMode__Constant = 1,
	EDrawPolyPathWidthMode__EDrawPolyPathWidthMode_MAX = 2,

};

// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class MeshModelingTools_EDrawPolyPathOutputMode : uint8_t
{
	EDrawPolyPathOutputMode__Ribbon = 0,
	EDrawPolyPathOutputMode__Extrusion = 1,
	EDrawPolyPathOutputMode__Ramp  = 2,
	EDrawPolyPathOutputMode__EDrawPolyPathOutputMode_MAX = 3,

};

// Enum MeshModelingTools.EPlaneBrushSideMode
enum class MeshModelingTools_EPlaneBrushSideMode : uint8_t
{
	EPlaneBrushSideMode__BothSides = 0,
	EPlaneBrushSideMode__PushDown  = 1,
	EPlaneBrushSideMode__PullTowards = 2,
	EPlaneBrushSideMode__EPlaneBrushSideMode_MAX = 3,

};

// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class MeshModelingTools_EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move = 0,
	EDynamicMeshSculptBrushType__Smooth = 1,
	EDynamicMeshSculptBrushType__Offset = 2,
	EDynamicMeshSculptBrushType__SculptView = 3,
	EDynamicMeshSculptBrushType__SculptMax = 4,
	EDynamicMeshSculptBrushType__Inflate = 5,
	EDynamicMeshSculptBrushType__Pinch = 6,
	EDynamicMeshSculptBrushType__Flatten = 7,
	EDynamicMeshSculptBrushType__Plane = 8,
	EDynamicMeshSculptBrushType__PlaneViewAligned = 9,
	EDynamicMeshSculptBrushType__FixedPlane = 10,
	EDynamicMeshSculptBrushType__Resample = 11,
	EDynamicMeshSculptBrushType__LastValue = 12,
	EDynamicMeshSculptBrushType__EDynamicMeshSculptBrushType_MAX = 13,

};

// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class MeshModelingTools_EPolyEditCutPlaneOrientation : uint8_t
{
	EPolyEditCutPlaneOrientation__FaceNormals = 0,
	EPolyEditCutPlaneOrientation__ViewDirection = 1,
	EPolyEditCutPlaneOrientation__EPolyEditCutPlaneOrientation_MAX = 2,

};

// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class MeshModelingTools_EPolyEditExtrudeDirection : uint8_t
{
	EPolyEditExtrudeDirection__SelectionNormal = 0,
	EPolyEditExtrudeDirection__WorldX = 1,
	EPolyEditExtrudeDirection__WorldY = 2,
	EPolyEditExtrudeDirection__WorldZ = 3,
	EPolyEditExtrudeDirection__LocalX = 4,
	EPolyEditExtrudeDirection__LocalY = 5,
	EPolyEditExtrudeDirection__LocalZ = 6,
	EPolyEditExtrudeDirection__EPolyEditExtrudeDirection_MAX = 7,

};

// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class MeshModelingTools_EEditMeshPolygonsToolActions : uint8_t
{
	EEditMeshPolygonsToolActions__NoAction = 0,
	EEditMeshPolygonsToolActions__PlaneCut = 1,
	EEditMeshPolygonsToolActions__Extrude = 2,
	EEditMeshPolygonsToolActions__Offset = 3,
	EEditMeshPolygonsToolActions__Inset = 4,
	EEditMeshPolygonsToolActions__Outset = 5,
	EEditMeshPolygonsToolActions__Merge = 6,
	EEditMeshPolygonsToolActions__Delete = 7,
	EEditMeshPolygonsToolActions__CutFaces = 8,
	EEditMeshPolygonsToolActions__RecalculateNormals = 9,
	EEditMeshPolygonsToolActions__FlipNormals = 10,
	EEditMeshPolygonsToolActions__Retriangulate = 11,
	EEditMeshPolygonsToolActions__Decompose = 12,
	EEditMeshPolygonsToolActions__Disconnect = 13,
	EEditMeshPolygonsToolActions__CollapseEdge = 14,
	EEditMeshPolygonsToolActions__WeldEdges = 15,
	EEditMeshPolygonsToolActions__StraightenEdge = 16,
	EEditMeshPolygonsToolActions__FillHole = 17,
	EEditMeshPolygonsToolActions__PlanarProjectionUV = 18,
	EEditMeshPolygonsToolActions__PokeSingleFace = 19,
	EEditMeshPolygonsToolActions__SplitSingleEdge = 20,
	EEditMeshPolygonsToolActions__FlipSingleEdge = 21,
	EEditMeshPolygonsToolActions__CollapseSingleEdge = 22,
	EEditMeshPolygonsToolActions__EEditMeshPolygonsToolActions_MAX = 23,

};

// Enum MeshModelingTools.ELocalFrameMode
enum class MeshModelingTools_ELocalFrameMode : uint8_t
{
	ELocalFrameMode__FromObject    = 0,
	ELocalFrameMode__FromGeometry  = 1,
	ELocalFrameMode__ELocalFrameMode_MAX = 2,

};

// Enum MeshModelingTools.EEditPivotToolActions
enum class MeshModelingTools_EEditPivotToolActions : uint8_t
{
	EEditPivotToolActions__NoAction = 0,
	EEditPivotToolActions__Center  = 1,
	EEditPivotToolActions__Bottom  = 2,
	EEditPivotToolActions__Top     = 3,
	EEditPivotToolActions__Left    = 4,
	EEditPivotToolActions__Right   = 5,
	EEditPivotToolActions__Front   = 6,
	EEditPivotToolActions__Back    = 7,
	EEditPivotToolActions__EEditPivotToolActions_MAX = 8,

};

// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class MeshModelingTools_EEditPivotSnapDragRotationMode : uint8_t
{
	EEditPivotSnapDragRotationMode__Ignore = 0,
	EEditPivotSnapDragRotationMode__Align = 1,
	EEditPivotSnapDragRotationMode__AlignFlipped = 2,
	EEditPivotSnapDragRotationMode__LastValue = 3,
	EEditPivotSnapDragRotationMode__EEditPivotSnapDragRotationMode_MAX = 4,

};

// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class MeshModelingTools_EMeshEditingMaterialModes : uint8_t
{
	EMeshEditingMaterialModes__ExistingMaterial = 0,
	EMeshEditingMaterialModes__Diffuse = 1,
	EMeshEditingMaterialModes__Grey = 2,
	EMeshEditingMaterialModes__Soft = 3,
	EMeshEditingMaterialModes__TangentNormal = 4,
	EMeshEditingMaterialModes__Custom = 5,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX = 6,

};

// Enum MeshModelingTools.ESetMeshMaterialMode
enum class MeshModelingTools_ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__KeepOriginal = 0,
	ESetMeshMaterialMode__Checkerboard = 1,
	ESetMeshMaterialMode__Override = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX = 3,

};

// Enum MeshModelingTools.EMeshFacesColorMode
enum class MeshModelingTools_EMeshFacesColorMode : uint8_t
{
	EMeshFacesColorMode__None      = 0,
	EMeshFacesColorMode__ByGroup   = 1,
	EMeshFacesColorMode__ByMaterialID = 2,
	EMeshFacesColorMode__ByUVIsland = 3,
	EMeshFacesColorMode__EMeshFacesColorMode_MAX = 4,

};

// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class MeshModelingTools_EMeshSelectionToolPrimaryMode : uint8_t
{
	EMeshSelectionToolPrimaryMode__Brush = 0,
	EMeshSelectionToolPrimaryMode__VolumetricBrush = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered = 2,
	EMeshSelectionToolPrimaryMode__Visible = 3,
	EMeshSelectionToolPrimaryMode__AllConnected = 4,
	EMeshSelectionToolPrimaryMode__AllInGroup = 5,
	EMeshSelectionToolPrimaryMode__ByMaterial = 6,
	EMeshSelectionToolPrimaryMode__ByUVIsland = 7,
	EMeshSelectionToolPrimaryMode__AllWithinAngle = 8,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX = 9,

};

// Enum MeshModelingTools.EMeshSelectionToolActions
enum class MeshModelingTools_EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction = 0,
	EMeshSelectionToolActions__SelectAll = 1,
	EMeshSelectionToolActions__ClearSelection = 2,
	EMeshSelectionToolActions__InvertSelection = 3,
	EMeshSelectionToolActions__GrowSelection = 4,
	EMeshSelectionToolActions__ShrinkSelection = 5,
	EMeshSelectionToolActions__ExpandToConnected = 6,
	EMeshSelectionToolActions__SelectLargestComponentByTriCount = 7,
	EMeshSelectionToolActions__SelectLargestComponentByArea = 8,
	EMeshSelectionToolActions__OptimizeSelection = 9,
	EMeshSelectionToolActions__DeleteSelected = 10,
	EMeshSelectionToolActions__DisconnectSelected = 11,
	EMeshSelectionToolActions__SeparateSelected = 12,
	EMeshSelectionToolActions__FlipSelected = 13,
	EMeshSelectionToolActions__CreateGroup = 14,
	EMeshSelectionToolActions__CycleSelectionMode = 15,
	EMeshSelectionToolActions__CycleViewMode = 16,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX = 17,

};

// Enum MeshModelingTools.ENonlinearOperationType
enum class MeshModelingTools_ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend  = 0,
	ENonlinearOperationType__Flare = 1,
	ENonlinearOperationType__Twist = 2,
	ENonlinearOperationType__ENonlinearOperationType_MAX = 3,

};

// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class MeshModelingTools_EMaterialBoundaryConstraint : uint8_t
{
	EMaterialBoundaryConstraint__Fixed = 0,
	EMaterialBoundaryConstraint__Refine = 1,
	EMaterialBoundaryConstraint__Free = 2,
	EMaterialBoundaryConstraint__Ignore = 3,
	EMaterialBoundaryConstraint__EMaterialBoundaryConstraint_MAX = 4,

};

// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class MeshModelingTools_EGroupBoundaryConstraint : uint8_t
{
	EGroupBoundaryConstraint__Fixed = 0,
	EGroupBoundaryConstraint__Refine = 1,
	EGroupBoundaryConstraint__Free = 2,
	EGroupBoundaryConstraint__Ignore = 3,
	EGroupBoundaryConstraint__EGroupBoundaryConstraint_MAX = 4,

};

// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class MeshModelingTools_EMeshBoundaryConstraint : uint8_t
{
	EMeshBoundaryConstraint__Fixed = 0,
	EMeshBoundaryConstraint__Refine = 1,
	EMeshBoundaryConstraint__Free  = 2,
	EMeshBoundaryConstraint__EMeshBoundaryConstraint_MAX = 3,

};

// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class MeshModelingTools_EOcclusionCalculationUIMode : uint8_t
{
	EOcclusionCalculationUIMode__GeneralizedWindingNumber = 0,
	EOcclusionCalculationUIMode__RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode__EOcclusionCalculationUIMode_MAX = 2,

};

// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class MeshModelingTools_EOcclusionTriangleSamplingUIMode : uint8_t
{
	EOcclusionTriangleSamplingUIMode__Vertices = 0,
	EOcclusionTriangleSamplingUIMode__VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode__EOcclusionTriangleSamplingUIMode_MAX = 2,

};

// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class MeshModelingTools_ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative = 0,
	ESmoothMeshToolSmoothType__BiHarmonic_Cotan = 1,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX = 2,

};

// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class MeshModelingTools_ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore = 0,
	ETransformMeshesSnapDragRotationMode__Align = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped = 2,
	ETransformMeshesSnapDragRotationMode__LastValue = 3,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX = 4,

};

// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class MeshModelingTools_ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint = 0,
	ETransformMeshesSnapDragSource__Pivot = 1,
	ETransformMeshesSnapDragSource__LastValue = 2,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX = 3,

};

// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class MeshModelingTools_ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal = 1,
	ETransformMeshesTransformMode__PerObjectGizmo = 2,
	ETransformMeshesTransformMode__LastValue = 3,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.EditPivotTarget
// 0x0010
struct FEditPivotTarget
{
	class UTransformProxy*                             TransformProxy;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
