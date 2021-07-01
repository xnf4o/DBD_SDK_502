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

// Class RemoteSession.RemoteSessionMediaOutput
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class URemoteSessionMediaOutput : public UMediaOutput
{
public:
	unsigned char                                      UnknownData_YIVO[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class RemoteSession.RemoteSessionMediaOutput");
		return ptr;
	}



};

// Class RemoteSession.RemoteSessionMediaCapture
// 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
class URemoteSessionMediaCapture : public UMediaCapture
{
public:
	unsigned char                                      UnknownData_2OE1[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class RemoteSession.RemoteSessionMediaCapture");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
