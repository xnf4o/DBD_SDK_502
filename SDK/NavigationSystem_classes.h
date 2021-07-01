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

// Class NavigationSystem.NavRelevantComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UNavRelevantComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_SMWY[0x24];                                    // 0x00B8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAttachToOwnersRoot : 1;                                   // 0x00DC(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_055M[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     CachedNavParent;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}



	void SetNavigationRelevancy(bool bRelevant);
};

// Class NavigationSystem.NavLinkCustomComponent
// 0x00B0 (FullSize[0x0198] - InheritedSize[0x00E8])
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData_L3UG[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           NavLinkUserId;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GNWL[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EnabledAreaClass;                                          // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DisabledAreaClass;                                         // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0108(0x0004) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct Fvector                                     LinkRelativeStart;                                         // 0x010C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     LinkRelativeEnd;                                           // 0x0118(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ENavLinkDirection>              LinkDirection;                                             // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_72UX[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLinkEnabled : 1;                                          // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenEnabled : 1;                                    // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenDisabled : 1;                                   // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateBoxObstacle : 1;                                    // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9JXO[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     ObstacleOffset;                                            // 0x012C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     ObstacleExtent;                                            // 0x0138(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NDKN[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ObstacleAreaClass;                                         // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastRadius;                                           // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastInterval;                                         // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              BroadcastChannel;                                          // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FZ9M[0x3F];                                    // 0x0159(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavArea
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FixedAreaEnteringCost;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fcolor                                      DrawColor;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0044(0x0004) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0048(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0049(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYO6[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}



};

// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      IncludeFlags;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      ExcludeFlags;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKGM[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}



};

// Class NavigationSystem.NavModifierComponent
// 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                 // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     FailsafeExtent;                                            // 0x00F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeAgentHeight : 1;                                   // 0x00FC(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2CCU[0x53];                                    // 0x00FD(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavigationData
// 0x01F8 (FullSize[0x0428] - InheritedSize[0x0230])
class UNavigationData : public Uactor
{
public:
	unsigned char                                      UnknownData_4YW9[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UprimitiveComponent*                         RenderingComp;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                              NavDataConfig;                                             // 0x0240(0x0090) (Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bEnableDrawing : 1;                                        // 0x02D0(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bForceRebuildOnLoad : 1;                                   // 0x02D0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoDestroyWhenNoNavigation : 1;                          // 0x02D0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanBeMainNavData : 1;                                     // 0x02D0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                    // 0x02D0(0x0001) BIT_FIELD (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRebuildAtRuntime : 1;                                     // 0x02D0(0x0001) BIT_FIELD (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GY4D[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	NavigationSystem_ERuntimeGenerationType            RuntimeGeneration;                                         // 0x02D4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T05S[0x3];                                     // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObservedPathsTickInterval;                                 // 0x02D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           DataVersion;                                               // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R438[0xE0];                                    // 0x02E0(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                            // 0x03C0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8YRC[0x58];                                    // 0x03D0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}



};

// Class NavigationSystem.AbstractNavData
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class UAbstractNavData : public UNavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}



};

// Class NavigationSystem.CrowdManagerBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCrowdManagerBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Default
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Default : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_LowHeight : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Null
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Null : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavArea_Obstacle : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavAreaMeta : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent1Area;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent2Area;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent3Area;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent4Area;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent5Area;                                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent6Area;                                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent7Area;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent8Area;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent9Area;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent10Area;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent11Area;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent12Area;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent13Area;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent14Area;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent15Area;                                               // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}



};

// Class NavigationSystem.NavCollision
// 0x0068 (FullSize[0x00E0] - InheritedSize[0x0078])
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData_ZB4A[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                         // 0x0088(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                              // 0x0098(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherConvexGeometry : 1;                                 // 0x00B0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x00B0(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVQQ[0x2F];                                    // 0x00B1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraph
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class UNavigationGraph : public UNavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNode
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UNavigationGraphNode : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                      // 0x0210(0x0018) (NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5240[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UNavigationInvokerComponent : public UactorComponent
{
public:
	float                                              TileGenerationRadius;                                      // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileRemovalRadius;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationPath
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct Fvector>                             PathPoints;                                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENavigationOptionFlag>          RecalculateOnInvalidation;                                 // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5F9L[0x3F];                                    // 0x0051(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}



	bool isValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNavigationPathGenerator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}



};

// Class NavigationSystem.NavigationSystemV1
// 0x0530 (FullSize[0x0560] - InheritedSize[0x0030])
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class UNavigationData*                             MainNavData;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationData*                             AbstractNavData;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultAgentName;                                          // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EL82[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CrowdManagerClass[0x30];                                   // 0x004C(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      bAutoCreateNavigationData : 1;                             // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowClientSideNavigation : 1;                            // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                         // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bTickWhilePaused : 1;                                      // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSupportRebuilding : 1;                                    // 0x0080(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInitialBuildingLocked : 1;                                // 0x0080(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LI8U : 1;                                      // 0x0080(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;               // 0x0081(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KRSM[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_ENavDataGatheringModeConfig                 DataGatheringMode;                                         // 0x0084(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PDSU[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;       // 0x0088(0x0001) BIT_FIELD (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F01G[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActiveTilesUpdateInterval;                                 // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                           // 0x0090(0x0010) (Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                           SupportedAgentsMask;                                       // 0x00A0(0x0004) (Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L99D[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UNavigationData*>                     NavDataSet;                                                // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNavigationData*>                     NavDataRegistrationQueue;                                  // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7FB[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                  // 0x00D8(0x0010) (ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                    // 0x00E8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68N4[0xE8];                                    // 0x00F8(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_EFNavigationSystemRunMode                   OperationMode;                                             // 0x01E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TAUA[0x35B];                                   // 0x01E1(0x035B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirtyAreasUpdateFreq;                                      // 0x053C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ND0Z[0x20];                                    // 0x0540(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}



	void UnregisterNavigationInvoker(class Uactor* Invoker);
	void STATIC_SimpleMoveToLocation(class Ucontroller* controller, const struct Fvector& goal);
	void STATIC_SimpleMoveToActor(class Ucontroller* controller, class Uactor* goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig newMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class Uactor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct Fvector STATIC_ProjectPointToNavigation(class UObject* worldContextObject, const struct Fvector& point, class UNavigationData* NavData, class UClass* filterClass, const struct Fvector& QueryExtent);
	void OnNavigationBoundsUpdated(class UNavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* worldContextObject, const struct Fvector& RayStart, const struct Fvector& RayEnd, struct Fvector* HitLocation, class UClass* filterClass, class Ucontroller* Querier);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* worldContextObject, const struct Fvector& point, struct Fvector* ProjectedLocation, class UNavigationData* NavData, class UClass* filterClass, const struct Fvector& QueryExtent);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass);
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, struct Fvector* RandomLocation, float radius, class UNavigationData* NavData, class UClass* filterClass);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* worldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject* worldContextObject);
	struct Fvector STATIC_GetRandomReachablePointInRadius(class UObject* worldContextObject, const struct Fvector& origin, float radius, class UNavigationData* NavData, class UClass* filterClass);
	struct Fvector STATIC_GetRandomPointInNavigableRadius(class UObject* worldContextObject, const struct Fvector& origin, float radius, class UNavigationData* NavData, class UClass* filterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathLength(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, float* PathLength, class UNavigationData* NavData, class UClass* filterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathCost(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, float* PathCost, class UNavigationData* NavData, class UClass* filterClass);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* worldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* worldContextObject, const struct Fvector& PathStart, const struct Fvector& PathEnd, class Uactor* PathfindingContext, class UClass* filterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* worldContextObject, const struct Fvector& PathStart, class Uactor* goalActor, float TetherDistance, class Uactor* PathfindingContext, class UClass* filterClass);
};

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                       // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                              // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3BNB[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}



};

// Class NavigationSystem.NavigationTestingActor
// 0x00F8 (FullSize[0x0328] - InheritedSize[0x0230])
class UNavigationTestingActor : public Uactor
{
public:
	unsigned char                                      UnknownData_W048[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*                 InvokerComponent;                                          // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bActAsNavigationInvoker : 1;                               // 0x0250(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CBYY[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNavAgentProperties                         NavAgentProps;                                             // 0x0258(0x0038) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     QueryingExtent;                                            // 0x0290(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUWO[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavigationData*                             MyNavData;                                                 // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     ProjectedLocation;                                         // 0x02A8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectedLocationValid : 1;                               // 0x02B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSearchStart : 1;                                          // 0x02B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALBW[0x3];                                     // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CostLimitFactor;                                           // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumCostLimit;                                          // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBacktracking : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                           // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherDetailedInfo : 1;                                   // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDistanceToWall : 1;                                   // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowNodePool : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowBestPath : 1;                                         // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                             // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x02C0(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5KV[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<NavigationSystem_ENavCostDisplay>      CostDisplayMode;                                           // 0x02C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_28QP[0x3];                                     // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TextCanvasOffset;                                          // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathExist : 1;                                            // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsPartial : 1;                                        // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                 // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9N0V[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathfindingTime;                                           // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathCost;                                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathfindingSteps;                                          // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationTestingActor*                     otherActor;                                                // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      filterClass;                                               // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShowStepIndex;                                             // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetFromCornersDistance;                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SLR[0x30];                                    // 0x02F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkComponent
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class UNavLinkComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_1MNJ[0x8];                                     // 0x0428(0x0008) Fix Super Size
	TArray<struct FNavigationLink>                     Links;                                                     // 0x0430(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNavLinkCustomInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNavLinkHostInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkRenderingComponent
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class UNavLinkRenderingComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_KQDW[0x8];                                     // 0x0428(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkTrivial
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UNavLinkTrivial : public UNavLinkDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class UNavMeshBoundsVolume : public Uvolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0268(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QM7F[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshRenderingComponent
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class UNavMeshRenderingComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_F9EA[0x8];                                     // 0x0428(0x0008) Fix Super Size
	unsigned char                                      UnknownData_QA1Z[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavModifierVolume
// 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
class UNavModifierVolume : public Uvolume
{
public:
	unsigned char                                      UnknownData_9YSF[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavNodeInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNavNodeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UNavSystemConfigOverride : public Uactor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                    // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	NavigationSystem_ENavSystemOverridePolicy          OverridePolicy;                                            // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLoadOnClient : 1;                                         // 0x0239(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PGE8[0x6];                                     // 0x023A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}



};

// Class NavigationSystem.NavTestRenderingComponent
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class UNavTestRenderingComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_2HP8[0x8];                                     // 0x0428(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMesh
// 0x00B8 (FullSize[0x04E0] - InheritedSize[0x0428])
class URecastNavMesh : public UNavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                    // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolyEdges : 1;                                        // 0x0428(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFilledPolys : 1;                                      // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMeshEdges : 1;                                     // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileBounds : 1;                                       // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                            // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileLabels : 1;                                       // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolygonLabels : 1;                                    // 0x0428(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                               // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                                // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavLinks : 1;                                         // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedNavLinks : 1;                                   // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawClusters : 1;                                         // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctree : 1;                                           // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctreeDetails : 1;                                    // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                             // 0x0429(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                        // 0x042A(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMesh : 1;                                          // 0x042A(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_79VI[0x1];                                     // 0x042B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrawOffset;                                                // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedTilePoolSize : 1;                                    // 0x0430(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K12H[0x3];                                     // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TilePoolSize;                                              // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSizeUU;                                                // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x043C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellHeight;                                                // 0x0440(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              agentRadius;                                               // 0x0444(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                               // 0x0448(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxHeight;                                            // 0x044C(0x0004) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxSlope;                                             // 0x0450(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxStepHeight;                                        // 0x0454(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRegionArea;                                             // 0x0458(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MergeRegionSize;                                           // 0x045C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimplificationError;                                    // 0x0460(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSimultaneousTileGenerationJobsCount;                    // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileNumberHardLimit;                                       // 0x0468(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefTileBits;                                           // 0x046C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefNavPolyBits;                                        // 0x0470(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefSaltBits;                                           // 0x0474(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fvector                                     NavMeshOriginOffset;                                       // 0x0478(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultDrawDistance;                                       // 0x0484(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxSearchNodes;                                     // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxHierarchicalSearchNodes;                         // 0x048C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  RegionPartitioning;                                        // 0x0490(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  LayerPartitioning;                                         // 0x0491(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3BO[0x2];                                     // 0x0492(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RegionChunkSplits;                                         // 0x0494(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerChunkSplits;                                          // 0x0498(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortNavigationAreasByCost : 1;                            // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformVoxelFiltering : 1;                                // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMarkLowHeightAreas : 1;                                   // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanSequences : 1;                               // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                           // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                         // 0x049C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                          // 0x049C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                 // 0x049C(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVirtualFilters : 1;                                    // 0x049D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                                // 0x049D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVoxelCache : 1;                                        // 0x049D(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XJBA[0x2];                                     // 0x049E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TileSetUpdateInterval;                                     // 0x04A0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeuristicScale;                                            // 0x04A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalDeviationFromGroundCompensation;                   // 0x04A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IA4D[0x34];                                    // 0x04AC(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}



	bool K2_ReplaceAreaInTileBounds(const struct Fbox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
};

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData_UHJP[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
