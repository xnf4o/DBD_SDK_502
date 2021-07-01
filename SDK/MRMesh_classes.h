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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshReconstructorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}



	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* mesh);
};

// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (FullSize[0x0280] - InheritedSize[0x0210])
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                      // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               ScanWorld;                                                 // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestNormals;                                            // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestVertexConfidence;                                   // 0x0222(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MRMesh_EMeshTrackerVertexColorMode                 VertexColorMode;                                           // 0x0223(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GGF9[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct Fcolor>                              BlockVertexColors;                                         // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceZero;                             // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceOne;                              // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateInterval;                                            // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K5QN[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMRMeshComponent*                            MRMesh;                                                    // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R87T[0x18];                                    // 0x0268(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}



	void OnMockDataMeshTrackerUpdated__DelegateSignature(int index, TArray<struct Fvector> Vertices, TArray<int> Triangles, TArray<struct Fvector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// Class MRMesh.MRMeshComponent
// 0x0078 (FullSize[0x04A0] - InheritedSize[0x0428])
class UMRMeshComponent : public UprimitiveComponent
{
public:
	unsigned char                                      UnknownData_6MJE[0x8];                                     // 0x0428(0x0008) Fix Super Size
	class UmaterialInterface*                          MATERIAL;                                                  // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCreateMeshProxySections;                                  // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUpdateNavMeshOnMeshUpdate;                                // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bNeverCreateCollisionMesh;                                 // 0x043A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1P56[0x5];                                     // 0x043B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                          BodySetups;                                                // 0x0448(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UmaterialInterface*                          WireframeMaterial;                                         // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JKU0[0x40];                                    // 0x0460(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}



	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
