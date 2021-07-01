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

// Class DBDUIManagers.UIScaleManager
// 0x00A8 (FullSize[0x00E0] - InheritedSize[0x0038])
class UUIScaleManager : public UGameInstanceSubsystem
{
public:
	class UDataTable*                                  _dpiScaleCurveDB;                                          // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _dpiScaleCurve;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WIVT[0x98];                                    // 0x0048(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIManagers.UIScaleManager");
		return ptr;
	}



	float GetSkillCheckScaleFactor();
	float GetScaleFactor(DBDUIManagers_EScaleType type);
	float GetMenuScaleFactor();
	float GetHudScaleFactor();
	DBDUIManagers_EDPIScaleCurveRatio GetDPIScaleCurveRatio();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
