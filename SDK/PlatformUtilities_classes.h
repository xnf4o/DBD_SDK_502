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

// Class PlatformUtilities.CrowdChoiceManager
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UCrowdChoiceManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_57TX[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PlatformUtilities.CrowdChoiceManager");
		return ptr;
	}



};

// Class PlatformUtilities.CrowdPlayManager
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UCrowdPlayManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_7WML[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PlatformUtilities.CrowdPlayManager");
		return ptr;
	}



};

// Class PlatformUtilities.PlatformSupportSubsystem
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UPlatformSupportSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_WQM7[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class PlatformUtilities.PlatformSupportSubsystem");
		return ptr;
	}



	void DBD_StadiaShowStreamDebug(bool bEnabled);
	void DBD_StadiaRoleSelectPoll();
	void DBD_StadiaCharacterSelectPoll();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
