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

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraMergeable : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return ptr;
	}



};

// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
