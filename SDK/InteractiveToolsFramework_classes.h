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

// Class InteractiveToolsFramework.InteractionMechanic
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UInteractionMechanic : public UObject
{
public:
	unsigned char                                      UnknownData_C0XG[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData_4453[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     CachedProperties;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsPropertySetEnabled;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DTVO[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UInternalToolFrameworkActor : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractiveToolBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveTool
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData_5D6Z[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           InputBehaviors;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             ToolPropertyObjects;                                       // 0x0058(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H35J[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_PC5O[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_ZM5F[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_A7E5[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_G0JN[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_UN2I[0x38];                                    // 0x0090(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BaseBrushTool
// 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInBrushStroke;                                            // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WG1D[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBrushStampData                             LastBrushStamp;                                            // 0x00D4(0x00B0) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18DK[0x14];                                    // 0x0184(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PropertyClass[0x30];                                       // 0x0184(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	class UBrushStampIndicator*                        BrushStampIndicator;                                       // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushBaseProperties
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpecifyRadius;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y915[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BrushRadius;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushStrength;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushFalloffAmount;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowStrength;                                             // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFalloff;                                              // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VAH9[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractiveGizmoBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData_CRVM[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           InputBehaviors;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData_MI5U[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_2LIT[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (FullSize[0x00F8] - InheritedSize[0x0040])
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_3NIB[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                               // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                               // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GWW[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     RotationOrigin;                                            // 0x0094(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     RotationAxis;                                              // 0x00A0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     RotationPlaneX;                                            // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     RotationPlaneY;                                            // 0x00B8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionStartPoint;                                     // 0x00C4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionCurPoint;                                       // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionStartAngle;                                     // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionCurAngle;                                       // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRT5[0x14];                                    // 0x00E4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (FullSize[0x00E0] - InheritedSize[0x0040])
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_JEYF[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                               // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bEnableSignedAxis;                                         // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                            // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4LNO[0x2];                                     // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     InteractionOrigin;                                         // 0x0094(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionAxis;                                           // 0x00A0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionStartPoint;                                     // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionCurPoint;                                       // 0x00B8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionStartParameter;                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionCurParameter;                                   // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterSign;                                             // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGKQ[0x10];                                    // 0x00D0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_0Z85[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     origin;                                                    // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     direction;                                                 // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_2HA6[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     origin;                                                    // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     direction;                                                 // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     TangentX;                                                  // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     TangentY;                                                  // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_Z976[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     origin;                                                    // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_FJJY[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             component;                                                 // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalAxes;                                                // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCHV[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushStampIndicator
// 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                              BrushRadius;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushFalloff;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     BrushPosition;                                             // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     BrushNormal;                                               // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawIndicatorLines;                                       // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawRadiusCircle;                                         // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawFalloffCircle;                                        // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CN4R[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SampleStepCount;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LineColor;                                                 // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDepthTested;                                              // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawSecondaryLines;                                       // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5994[0x2];                                     // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SecondaryLineThickness;                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryLineColor;                                        // 0x0084(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGU8[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         AttachedComponent;                                         // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1LN3[0x18];                                    // 0x00A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_DNSQ[0xA0];                                    // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUpdateModifiersDuringDrag;                                // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5POG[0x1F];                                    // 0x0121(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// 0x0140 (FullSize[0x0280] - InheritedSize[0x0140])
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	unsigned char                                      UnknownData_WQOT[0x140];                                   // 0x0140(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_0HU6[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UGizmoActor : public UInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (FullSize[0x0448] - InheritedSize[0x0428])
class UGizmoBaseComponent : public UprimitiveComponent
{
public:
	struct FLinearColor                                color;                                                     // 0x0428(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoverSizeMultiplier;                                       // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelHitDistanceThreshold;                                 // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8R5Y[0x8];                                     // 0x0440(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}



	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0028 (FullSize[0x0470] - InheritedSize[0x0448])
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct Fvector                                     direction;                                                 // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gap;                                                       // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              length;                                                    // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YIQJ[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBoxComponent
// 0x0048 (FullSize[0x0490] - InheritedSize[0x0448])
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct Fvector                                     origin;                                                    // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JX6G[0xC];                                     // 0x0454(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       rotation;                                                  // 0x0460(0x0010) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     Dimensions;                                                // 0x0470(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveHiddenLines;                                        // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableAxisFlip;                                           // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A05F[0xE];                                     // 0x0482(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0028 (FullSize[0x0470] - InheritedSize[0x0448])
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct Fvector                                     normal;                                                    // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              radius;                                                    // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSides;                                                  // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bViewAligned;                                              // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyAllowFrontFacingHits;                                 // 0x0461(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZU2X[0xE];                                     // 0x0462(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoTransformSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}



	void SetTransform(const struct FTransform& NewTransform);
	struct FTransform GetTransform();
};

// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoAxisSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}



	bool HasTangentVectors();
	void GetTangentVectors(struct Fvector* TangentXOut, struct Fvector* TangentYOut);
	struct Fvector GetOrigin();
	struct Fvector GetDirection();
};

// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoClickTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}



	void UpdateHoverState(bool bHovering);
};

// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoStateTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}



	void EndUpdate();
	void BeginUpdate();
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoFloatParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}



	void SetParameter(float newValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGizmoVec2ParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}



	void SetParameter(const struct FVector2D& newValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// 0x0028 (FullSize[0x0470] - InheritedSize[0x0448])
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct Fvector                                     normal;                                                    // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandleSize;                                                // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     direction;                                                 // 0x045C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              length;                                                    // 0x0468(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImageScale;                                               // 0x046C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXIF[0x3];                                     // 0x046D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0038 (FullSize[0x0480] - InheritedSize[0x0448])
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct Fvector                                     DirectionX;                                                // 0x0448(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     DirectionY;                                                // 0x0454(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetX;                                                   // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetY;                                                   // 0x0464(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LengthX;                                                   // 0x0468(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LengthY;                                                   // 0x046C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SegmentFlags;                                              // 0x0474(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NBY7[0xB];                                     // 0x0475(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData_LSRV[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData_O1XR[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         component;                                                 // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V9IR[0x40];                                    // 0x0040(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                 // 0x0030(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInputBehaviorSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputRouter
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                    // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoInvalidateOnCapture;                                  // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S43P[0xE];                                     // 0x0032(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_69YH[0x70];                                    // 0x0048(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData_NK9K[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                              // 0x0038(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WMCC[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                             // 0x0060(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3UW9[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UToolContextTransactionProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolManager
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData_L4O6[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractiveTool*                            ActiveLeftTool;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveTool*                            ActiveRightTool;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q022[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                              // 0x0098(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QMBC[0x58];                                    // 0x00E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UToolFrameworkComponent : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData_748D[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputRouter*                                InputRouter;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveToolManager*                     ToolManager;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*                    GizmoManager;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToolManagerClass[0x30];                                    // 0x0078(0x0030) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmoActor
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UIntervalGizmoActor : public UGizmoActor
{
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                       // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                     // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData_YEMC[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmo
// 0x0100 (FullSize[0x0140] - InheritedSize[0x0040])
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4M6[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             TransformProxy;                                            // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UprimitiveComponent*>                 ActiveComponents;                                          // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                              // 0x0070(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MS9E[0x18];                                    // 0x0080(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGizmoComponentAxisSource*                   AxisYSource;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                               // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MQYF[0x98];                                    // 0x00A8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData_DKBX[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoFloatParameterSource> FloatParameterSource;                                      // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              MinParameter;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxParameter;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_5JVA[0xF8];                                    // 0x0038(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_I7N1[0x68];                                    // 0x0038(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_O8NY[0xB0];                                    // 0x0080(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x0054(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8O5H[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData_F4Z6[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x0058(0x0010) (NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x00C0 (FullSize[0x0110] - InheritedSize[0x0050])
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData_HXEM[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              Parameter;                                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x00B4(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationAxis;                                        // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationOrigin;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z14V[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00E0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x00E0 (FullSize[0x0130] - InheritedSize[0x0050])
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData_2QV0[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                 // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x00B8(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationOrigin;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationNormal;                                      // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationAxisX;                                       // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurTranslationAxisY;                                       // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L3X1[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x0100(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              angle;                                                     // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x0074(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurRotationAxis;                                           // 0x007C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurRotationOrigin;                                         // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWTQ[0xC];                                     // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00A0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// 0x00A0 (FullSize[0x00F0] - InheritedSize[0x0050])
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                 // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x007C(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleOrigin;                                            // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleNormal;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleAxisX;                                             // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleAxisY;                                             // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1G6[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00C0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Parameter;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x0078(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleAxis;                                              // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleOrigin;                                            // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UL2X[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00A0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// 0x00E0 (FullSize[0x0130] - InheritedSize[0x0050])
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData_KRX7[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                           // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                 // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x00BC(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleOrigin;                                            // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleNormal;                                            // 0x00D8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleAxisX;                                             // 0x00E4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     CurScaleAxisY;                                             // 0x00F0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1EZ[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x0100(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_S158[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                           // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                               // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bEnableSignedAxis;                                         // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipX;                                                    // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipY;                                                    // 0x0092(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                            // 0x0093(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionOrigin;                                         // 0x0094(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionNormal;                                         // 0x00A0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionAxisX;                                          // 0x00AC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionAxisY;                                          // 0x00B8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionStartPoint;                                     // 0x00C4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     InteractionCurPoint;                                       // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionStartParameter;                                 // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionCurParameter;                                   // 0x00E4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ParameterSigns;                                            // 0x00EC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MP0G[0x14];                                    // 0x00F4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData_4HX5[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Edges;                                                     // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Faces;                                                     // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Groups;                                                    // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_CV7A[0x40];                                    // 0x0080(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HitTestOnRelease;                                          // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_643F[0x6F];                                    // 0x00C1(0x006F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_N06A[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_B6PT[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_YQVO[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_OY0R[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                        // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SKH[0x88];                                    // 0x0068(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UTransformGizmoActor : public UGizmoActor
{
public:
	class UprimitiveComponent*                         TranslateX;                                                // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         TranslateY;                                                // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         TranslateZ;                                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         TranslateYZ;                                               // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         TranslateXZ;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         TranslateXY;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         RotateX;                                                   // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         RotateY;                                                   // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         RotateZ;                                                   // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         UniformScale;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         AxisScaleX;                                                // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         AxisScaleY;                                                // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         AxisScaleZ;                                                // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         PlaneScaleYZ;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         PlaneScaleXZ;                                              // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UprimitiveComponent*                         PlaneScaleXY;                                              // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData_FCMD[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmo
// 0x0150 (FullSize[0x0190] - InheritedSize[0x0040])
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_MPZS[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             ActiveTarget;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseContextCoordinateSystem;                               // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4APN[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	InteractiveToolsFramework_EToolContextCoordinateSystem CurrentCoordinateSystem;                                   // 0x0054(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVVB[0x3];                                     // 0x0052(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_1JCQ[0x98];                                    // 0x0058(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UprimitiveComponent*>                 ActiveComponents;                                          // 0x00F0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UprimitiveComponent*>                 NonuniformScaleComponents;                                 // 0x0100(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                              // 0x0110(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UY0D[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                          // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisXSource;                                               // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisYSource;                                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                               // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                           // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                           // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                           // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                     // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TVTI[0x18];                                    // 0x0178(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformProxy
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData_SO5X[0x48];                                    // 0x0030(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRotatePerObject;                                          // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPivotMode;                                             // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20KH[0x16];                                    // 0x007A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SharedTransform;                                           // 0x0090(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                                  InitialSharedTransform;                                    // 0x00C0(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData_GKDY[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             component;                                                 // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyComponentOnTransform;                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74RQ[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class UGizmoTransformSource>      ChildTransformSource;                                      // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MD7G[0x80];                                    // 0x0060(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
