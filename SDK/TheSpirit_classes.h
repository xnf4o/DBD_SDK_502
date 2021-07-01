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

// Class TheSpirit.SpiritHuskOutlineUpdateStrategy
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	unsigned char                                      UnknownData_4LZF[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheSpirit.SpiritHuskOutlineUpdateStrategy");
		return ptr;
	}



	void OnSlasherSet(class UslasherPlayer* slasher);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
