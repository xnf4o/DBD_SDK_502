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

// BlueprintGeneratedClass BP_BloodwebGenerator.BP_BloodwebGenerator_C
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UBP_BloodwebGenerator_C : public UBloodwebGenerator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_BloodwebGenerator.BP_BloodwebGenerator_C");
		return ptr;
	}



	void ReceiveBeginPlay_2();
	void ReceiveActorBeginOverlap_2(class Uactor* otherActor);
	void ReceiveTick_2(float deltaSeconds);
	void ExecuteUbergraph_BP_BloodwebGenerator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
