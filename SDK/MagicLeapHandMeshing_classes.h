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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UMagicLeapHandMeshingComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		return ptr;
	}



	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		return ptr;
	}



	bool STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool STATIC_DestroyClient();
	bool STATIC_CreateClient();
	bool STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
