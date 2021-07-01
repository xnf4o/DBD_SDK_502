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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
class UCameraRig_Crane : public Uactor
{
public:
	float                                              CranePitch;                                                // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CraneYaw;                                                  // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CraneArmLength;                                            // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockMountPitch;                                           // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockMountYaw;                                             // 0x023D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MEI[0x2];                                     // 0x023E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TransformComponent;                                        // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             CraneYawControl;                                           // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             CranePitchControl;                                         // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             CraneCameraMount;                                          // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}



};

// Class CinematicCamera.CameraRig_Rail
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class UCameraRig_Rail : public Uactor
{
public:
	float                                              CurrentPositionOnRail;                                     // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockOrientationToRail;                                    // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MEYX[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TransformComponent;                                        // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UsplineComponent*                            RailSplineComponent;                                       // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             RailCameraMount;                                           // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}



	class UsplineComponent* GetRailSplineComponent();
};

// Class CinematicCamera.CineCameraActor
// 0x0070 (FullSize[0x0810] - InheritedSize[0x07A0])
class UCineCameraActor : public UCameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                    // 0x07A0(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J870[0x18];                                    // 0x07F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}



	class UCineCameraComponent* GetCineCameraComponent();
};

// Class CinematicCamera.CineCameraComponent
// 0x0100 (FullSize[0x08D0] - InheritedSize[0x07D0])
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                          // 0x07D0(0x000C) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                     Filmback;                                                  // 0x07DC(0x000C) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                         LensSettings;                                              // 0x07E8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                        FocusSettings;                                             // 0x0800(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              CurrentFocalLength;                                        // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentAperture;                                           // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentFocusDistance;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F1K4[0xC];                                     // 0x086C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                           // 0x0878(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>                    LensPresets;                                               // 0x0888(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DefaultFilmbackPresetName;                                 // 0x0898(0x0010) (ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DefaultFilmbackPreset;                                     // 0x08A8(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     DefaultLensPresetName;                                     // 0x08B8(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultLensFocalLength;                                    // 0x08C8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultLensFStop;                                          // 0x08CC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}



	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	void SetCurrentFocalLength(float InFocalLength);
	float GetVerticalFieldOfView();
	TArray<struct FNamedLensPreset> STATIC_GetLensPresetsCopy();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
	struct FString GetDefaultFilmbackPresetName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
