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

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ImageWriteQueue.ImageWriteBlueprintLibrary");
		return ptr;
	}



	void STATIC_ExportToDisk(class Utexture* texture, const struct FString& FileName, const struct FImageWriteOptions& Options);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
