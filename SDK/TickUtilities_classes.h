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

// Class TickUtilities.RoundRobinTicker
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class URoundRobinTicker : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_WSZJ[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TickUtilities.RoundRobinTicker");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
