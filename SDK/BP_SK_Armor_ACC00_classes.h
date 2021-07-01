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

// BlueprintGeneratedClass BP_SK_Armor_ACC00.BP_SK_Armor_ACC00_C
// 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
class UBP_SK_Armor_ACC00_C : public UItemBlueprint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_SK_Armor_ACC00.BP_SK_Armor_ACC00_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SK_Armor_ACC00(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
