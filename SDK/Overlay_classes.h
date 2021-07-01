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

// Class Overlay.Overlays
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOverlays : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}



};

// Class Overlay.BasicOverlays
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}



};

// Class Overlay.LocalizedOverlays
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                       // 0x0038(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
