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

// BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
// 0x008D (FullSize[0x0719] - InheritedSize[0x068C])
class UBP_Menu_Slasher13_C : public UBP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_UYDU[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_13_C*                          BP_Audio_KLR_14;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_RedStainComponent_C*                     RedStainComponent;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;           // 0x06A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x06AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF;  // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF;    // 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D3AW[0x3];                                     // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Show_Sword;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fvector                                     Timeline_2_Size_548F5340441650D05914669F2F45DC7E;          // 0x06C0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fvector                                     Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x06CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_548F5340441650D05914669F2F45DC7E;    // 0x06D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y0MM[0x7];                                     // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fvector                                     Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x06E8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fvector                                     Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x06F4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0704(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0708(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x070C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TZWU[0x3];                                     // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Make_Sword_Disappear;                                      // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SwordShouldBeVisible;                                      // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C");
		return ptr;
	}



	void GetShard(class UskeletalMeshComponent** Shard);
	void GetSword(class UskeletalMeshComponent** Sword);
	void Make_Sword_Disappear__FinishedFunc();
	void Make_Sword_Disappear__UpdateFunc();
	void Show_Sword__FinishedFunc();
	void Show_Sword__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Make_Weapon_Appear();
	void Make_Weapon_Disappear();
	void MakeSwordVisible();
	void MakeSwordInvisible();
	void OnCustomizationUpdated();
	void ReceiveBeginPlay();
	void OnAttack_StopTimeline();
	void ExecuteUbergraph_BP_Menu_Slasher13(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
