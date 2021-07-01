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

// Class SocialBlockList.BlockListFacade
// 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
class UBlockListFacade : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_CZEF[0xB8];                                    // 0x0038(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SocialBlockList.BlockListFacade");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
