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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UChaosDebugDrawComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_8IHR[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UChaosEventListenerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_FFWT[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (FullSize[0x0278] - InheritedSize[0x00C0])
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData_OC1F[0x110];                                   // 0x00C0(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UprimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                               // 0x01D0(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UprimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                   // 0x0220(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BLQK[0x8];                                     // 0x0270(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UChaosNotifyHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		return ptr;
	}



	struct FhitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UChaosSolver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverActor
// 0x0088 (FullSize[0x02B8] - InheritedSize[0x0230])
class UChaosSolverActor : public Uactor
{
public:
	float                                              TimeStepMultiplier;                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionIterations;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutIterations;                                         // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutPairIterations;                                     // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClusterConnectionFactor;                                   // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ChaosSolverEngine_EClusterConnectionTypeEnum       ClusterUnionConnectionType;                                // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoGenerateCollisionData;                                   // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVOE[0x2];                                     // 0x0246(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                   // 0x0248(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateBreakingData;                                    // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3H4G[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                    // 0x025C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateTrailingData;                                    // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LAOJ[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                    // 0x0270(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasFloor;                                                 // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OXI[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorHeight;                                               // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateContactGraph;                                     // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                  // 0x028D(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UBillboardComponent*                         SpriteComponent;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNQE[0x18];                                    // 0x0298(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                          // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}



	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData_FUAW[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                              // 0x0050(0x0020) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
