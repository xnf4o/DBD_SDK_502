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

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class ULevelVariantSets : public UObject
{
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UVariantSet*>                         VariantSets;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D73E[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}



	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};

// Class VariantManagerContent.LevelVariantSetsActor
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class ULevelVariantSetsActor : public Uactor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                          // 0x0230(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}



	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData_M3Y2[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValue
// 0x01A8 (FullSize[0x01D8] - InheritedSize[0x0030])
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData_7DUI[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Properties[0x10];                                          // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<int>                                        PropertyIndices;                                           // 0x00A0(0x0010) (ZeroConstructor, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                      // 0x00B0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     FullDisplayString;                                         // 0x00C0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       PropertySetterName;                                        // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RDLN[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                           // 0x00E0(0x0050) (Protected, NativeAccessSpecifierProtected)
	bool                                               bHasRecordedData;                                          // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XFS4[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LeafPropertyClass;                                         // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TEDT[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ValueBytes;                                                // 0x0148(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	VariantManagerContent_EPropertyValueCategory       PropCategory;                                              // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3MU2[0x7F];                                    // 0x0159(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}



	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};

// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueTransform : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueVisibility : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueColor
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueColor : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueMaterial : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueOption
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueOption : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueSoftObject
// 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
class UPropertyValueSoftObject : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.PropertyValueSoftObject");
		return ptr;
	}



};

// Class VariantManagerContent.SwitchActor
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class USwitchActor : public Uactor
{
public:
	unsigned char                                      UnknownData_UBPM[0x18];                                    // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneComponent;                                            // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LastSelectedOption;                                        // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FZVR[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}



	void SelectOption(int OptionIndex);
	int GetSelectedOption();
	TArray<class Uactor*> GetOptions();
};

// Class VariantManagerContent.Variant
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UVariant : public UObject
{
public:
	struct FText                                       DisplayText;                                               // 0x0030(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_THIS[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                            // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  Thumbnail;                                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}



	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	bool isActive();
	class UTexture2D* GetThumbnail();
	int GetNumActors();
	struct FText GetDisplayText();
	class Uactor* GetActor(int ActorIndex);
};

// Class VariantManagerContent.VariantObjectBinding
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UVariantObjectBinding : public UObject
{
public:
	struct FString                                     CachedActorLabel;                                          // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ObjectPtr;                                                 // 0x0040(0x0020) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                             // 0x0060(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RO7O[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyValue*>                      CapturedProperties;                                        // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                           // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}



};

// Class VariantManagerContent.VariantSet
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                               // 0x0030(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JC4O[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExpanded;                                                 // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LD15[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UVariant*>                            Variants;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}



	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariantByName(const struct FString& VariantName);
	class UVariant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
