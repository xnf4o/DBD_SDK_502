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

// Class TheShape.KillStandingInteractionDefinition
// 0x0008 (FullSize[0x0560] - InheritedSize[0x0558])
class UKillStandingInteractionDefinition : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_6J34[0x8];                                     // 0x0558(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheShape.KillStandingInteractionDefinition");
		return ptr;
	}



};

// Class TheShape.ShapeAnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UShapeAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_7JOK[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	class UEvilWithinComponent*                        _evilWithinComponent;                                      // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7PTX[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheShape.ShapeAnimInstance");
		return ptr;
	}



};

// Class TheShape.ShapePounceAttackOpenSubstate
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	TArray<struct FDBDTunableRowHandle>                _tierDurations;                                            // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheShape.ShapePounceAttackOpenSubstate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
