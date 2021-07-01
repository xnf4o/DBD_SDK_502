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

// Class Onboarding.OnboardingManager
// 0x0178 (FullSize[0x01B0] - InheritedSize[0x0038])
class UOnboardingManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_GEB5[0x178];                                   // 0x0038(0x0178) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Onboarding.OnboardingManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
