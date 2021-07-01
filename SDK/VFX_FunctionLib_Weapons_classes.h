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

// BlueprintGeneratedClass VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVFX_FunctionLib_Weapons_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C");
		return ptr;
	}



	void STATIC_FX_SpawnDissolveEmitter(bool HideWeapon, bool FPV, class USceneComponent* mesh, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
