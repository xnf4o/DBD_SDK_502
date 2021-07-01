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

// BlueprintGeneratedClass Audio.Audio_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class UAudio_C : public ULevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass Audio.Audio_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Audio(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
