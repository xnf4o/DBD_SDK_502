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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                 // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D61X[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AdditionalSlotIndex;                                       // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SlotDisplayName;                                           // 0x0138(0x0018) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}



};

// Class Paper2D.PaperCharacter
// 0x0010 (FullSize[0x04E0] - InheritedSize[0x04D0])
class UPaperCharacter : public Ucharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M4V7[0x8];                                     // 0x04D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}



};

// Class Paper2D.PaperFlipbook
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2ZBS[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          DefaultMaterial;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_EFlipbookCollisionMode>        CollisionSource;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AJWL[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}



	bool IsValidKeyFrameIndex(int index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float time, bool bClampToEnds);
};

// Class Paper2D.PaperFlipbookActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UPaperFlipbookActor : public Uactor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}



};

// Class Paper2D.PaperFlipbookComponent
// 0x0048 (FullSize[0x04C0] - InheritedSize[0x0478])
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                            // 0x0478(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0480(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              playRate;                                                  // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLooping : 1;                                              // 0x048C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReversePlayback : 1;                                      // 0x048C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bPlaying : 1;                                              // 0x048C(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8M9M[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AccumulatedTime;                                           // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedFrameIndex;                                          // 0x0494(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                               // 0x0498(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                         // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}



	void stop();
	void SetSpriteColor(const struct FLinearColor& newColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UPaperGroupedSpriteActor : public Uactor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}



};

// Class Paper2D.PaperGroupedSpriteComponent
// 0x0038 (FullSize[0x04B0] - InheritedSize[0x0478])
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UmaterialInterface*>                  InstanceMaterials;                                         // 0x0478(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                     // 0x0488(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZR1O[0x18];                                    // 0x0498(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}



	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct Fvector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& color);
};

// Class Paper2D.PaperRuntimeSettings
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableTerrainSplineEditing;                               // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResizeSpriteDataToMatchTextures;                          // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVQB[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}



};

// Class Paper2D.PaperSprite
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData_FXQC[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Utexture*>                            AdditionalSourceTextures;                                  // 0x0040(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceUV;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceDimension;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BakedSourceTexture;                                        // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          DefaultMaterial;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          AlternateMaterial;                                         // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                   // 0x0078(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F8FV[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PixelsPerUnrealUnit;                                       // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  BodySetup;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AlternateMaterialSplitIndex;                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I7ZF[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector4>                            BakedRenderData;                                           // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UPaperSpriteActor : public Uactor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteAtlas
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPaperSpriteAtlas : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}



};

// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}



	struct FSlateBrush STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int height);
};

// Class Paper2D.PaperSpriteComponent
// 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UmaterialInterface*                          MaterialOverride;                                          // 0x0480(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                               // 0x0488(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CR1P[0x8];                                     // 0x0498(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}



	void SetSpriteColor(const struct FLinearColor& newColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};

// Class Paper2D.PaperTerrainActor
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UPaperTerrainActor : public Uactor
{
public:
	class USceneComponent*                             DummyRoot;                                                 // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*                splineComponent;                                           // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                      RenderComponent;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}



};

// Class Paper2D.PaperTerrainComponent
// 0x0058 (FullSize[0x0480] - InheritedSize[0x0428])
class UPaperTerrainComponent : public UprimitiveComponent
{
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClosedSpline;                                             // 0x0430(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilledSpline;                                             // 0x0431(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZ8G[0x6];                                     // 0x0432(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                          // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                                // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SegmentOverlapAmount;                                      // 0x0444(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TerrainColor;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReparamStepsPerSegment;                                    // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x045C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PZOH[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionThickness;                                        // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XII2[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LWKZ[0x10];                                    // 0x0470(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}



	void SetTerrainColor(const struct FLinearColor& newColor);
};

// Class Paper2D.PaperTerrainMaterial
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                InteriorFill;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}



};

// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (FullSize[0x0530] - InheritedSize[0x0520])
class UPaperTerrainSplineComponent : public UsplineComponent
{
public:
	unsigned char                                      UnknownData_GVWP[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}



};

// Class Paper2D.PaperTileLayer
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                 // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                LayerWidth;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LayerHeight;                                               // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHiddenInGame : 1;                                         // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bLayerCollides : 1;                                        // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionThickness : 1;                           // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionOffset : 1;                              // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5I1B[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionThicknessOverride;                                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CollisionOffsetOverride;                                   // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                LayerColor;                                                // 0x005C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q52S[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                            // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               TileSet;                                                   // 0x0088(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int>                                        AllocatedGrid;                                             // 0x0090(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}



};

// Class Paper2D.PaperTileMap
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UPaperTileMap : public UObject
{
public:
	bool                                               Draft;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Licensed;                                                  // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M1J[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MapWidth;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileWidth;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileHeight;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelsPerUnrealUnit;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileX;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileY;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerLayer;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LDE[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SelectedTileSet[0x30];                                     // 0x0054(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>                     TileLayers;                                                // 0x0090(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ESpriteCollisionMode>          SpriteCollisionDomain;                                     // 0x00A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Paper2D_ETileMapProjectionMode>        ProjectionMode;                                            // 0x00A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EX5[0x2];                                     // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HexSideLength;                                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R91C[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  BodySetup;                                                 // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerNameIndex;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUAV[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}



};

// Class Paper2D.PaperTileMapActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UPaperTileMapActor : public Uactor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}



};

// Class Paper2D.PaperTileMapComponent
// 0x0058 (FullSize[0x04D0] - InheritedSize[0x0478])
class UPaperTileMapComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_ZYXV[0x4];                                     // 0x0478(0x0004) Fix Super Size
	int                                                MapHeight;                                                 // 0x047C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileWidth;                                                 // 0x0480(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                                // 0x0484(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               DefaultLayerTileSet;                                       // 0x0488(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0490(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>                     TileLayers;                                                // 0x0498(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TileMapColor;                                              // 0x04A8(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                UseSingleLayerIndex;                                       // 0x04B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseSingleLayer;                                           // 0x04BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TUIV[0x3];                                     // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPaperTileMap*                               tileMap;                                                   // 0x04C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BR8T[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}



	void SetTileMapColor(const struct FLinearColor& newColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int x, int y, int Layer, const struct FPaperTileInfo& newValue);
	void SetLayerColor(const struct FLinearColor& newColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, TArray<struct Fvector>* points, int LayerIndex, bool bWorldSpace);
	struct FLinearColor GetTileMapColor();
	struct Fvector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct Fvector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int x, int y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// Class Paper2D.PaperTileSet
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  TileSheet;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Utexture*>                            AdditionalSourceTextures;                                  // 0x0040(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntMargin                                  BorderMargin;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   PerTileSpacing;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   DrawingOffset;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WidthInTiles;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                HeightInTiles;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                           // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                               // 0x0080(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                  // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileWidth;                                                 // 0x00A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                                // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Margin;                                                    // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Spacing;                                                   // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}



};

// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}



	struct FPaperTileInfo STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	struct FName STATIC_GetTileUserData(const struct FPaperTileInfo& Tile);
	struct FTransform STATIC_GetTileTransform(const struct FPaperTileInfo& Tile);
	void STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
