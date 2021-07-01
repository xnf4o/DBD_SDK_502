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

// Class Anniversary2021.Anniversary2021EventComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UAnniversary2021EventComponent : public URespawningEventComponent
{
public:
	class UInteractionRespawnableTrigger*              _interactionRespawnableTrigger;                            // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTimedRespawnableTrigger*                    _timedRespawnableTrigger;                                  // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BHJI[0x18];                                    // 0x00D8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2021.Anniversary2021EventComponent");
		return ptr;
	}



	void Authority_OnIntroComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
