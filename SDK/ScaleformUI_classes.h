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

// Class ScaleformUI.GFxEngine
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RefCount;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9YOY[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ScaleformUI.GFxEngine");
		return ptr;
	}



};

// Class ScaleformUI.GFxMoviePlayer
// 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
class UGFxMoviePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_SIW7[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SwfAssetName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                                  root;                                                      // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisplayWithHudOff : 1;                                    // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableGammaCorrection : 1;                                // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowInput : 1;                                           // 0x0050(0x0001) BIT_FIELD (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowFocus : 1;                                           // 0x0050(0x0001) BIT_FIELD (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCloseOnLevelChange : 1;                                   // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyOwnerFocusable : 1;                                   // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDiscardNonOwnerInput : 1;                                 // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCaptureKeyboardInput : 1;                                 // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCaptureMouseInput : 1;                                    // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCaptureGamepadInput : 1;                                  // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCaptureTouchInput : 1;                                    // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsSplitscreenLayoutModified : 1;                          // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowDefaultMouseCursor : 1;                               // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBlurLesserMovies : 1;                                     // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHideLesserMovies : 1;                                     // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPriorityBlurred : 1;                                    // 0x0051(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPriorityHidden : 1;                                     // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreVisibilityEffect : 1;                               // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreBlurEffect : 1;                                     // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRefreshed : 1;                                            // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformHitTest : 1;                                       // 0x0052(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C17F[0x1];                                     // 0x0053(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ScaleformUI_EGFxHitTestType>           HitTestType;                                               // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I33G[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      RenderTexture;                                             // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ExternalInterface;                                         // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fkey>                                CaptureKeys;                                               // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fkey>                                FocusIgnoreKeys;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExternalTexture>                    ExternalTextures;                                          // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ScaleformUI_EGFxRenderTextureMode>     RenderTextureMode;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      priority;                                                  // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ERQT[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                            // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SplitscreenLayoutYAdjust;                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALZG[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFsCommand;                                               // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartCommand;                                            // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCloseCommand;                                            // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTickCommand;                                             // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusGainedCommand;                                      // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusLostCommand;                                        // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7YG[0xB8];                                    // 0x0118(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGFxObject*>                          CachedMovieClipsArray;                                     // 0x01D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ScaleformUI.GFxMoviePlayer");
		return ptr;
	}



	bool start(bool bRefresh);
	void SetVisibility(const struct FString& MovieClipName, bool bVisible);
	void SetViewScaleMode(TEnumAsByte<ScaleformUI_EGFxScaleMode> ScaleMode);
	void SetViewport(int x, int y, int Width, int height);
	void SetView3D(const struct FTransform& ViewTransform);
	void SetVariableValueArray(const struct FString& MovieClipName, const struct FString& MemberName, TArray<struct FASValue> Value);
	void SetVariableValue(const struct FString& MovieClipName, const struct FString& MemberName, const struct FASValue& Value);
	void SetTimingMode(TEnumAsByte<ScaleformUI_EGFxTimingMode> TimingMode);
	void SetScale(const struct FString& MovieClipName, float XScale, float YScale);
	void SetPosition(const struct FString& MovieClipName, float x, float y);
	void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform);
	void SetPause(bool bPausePlayback);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetFocusIgnoreKeys(TArray<struct Fkey> Keys);
	bool SetExternalTexture(const struct FString& Resource, class Utexture* texture);
	void SetDisplayTransform(const struct FString& MovieClipName, const struct FTransform& DisplayTransform);
	void SetDisplayInfo(const struct FString& MovieClipName, const struct FASDisplayInfo& Info);
	void SetColorTransform(const struct FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform);
	void SetCaptureKeys(TArray<struct Fkey> Keys);
	void SetAlignment(TEnumAsByte<ScaleformUI_EGFxAlign> Align);
	void ReceiveGFxCommand(const struct FString& Command, const struct FString& Arguments);
	class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
	void OnTick(float deltaTime);
	void OnStart();
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void OnClose();
	bool LoadAndStart(const struct FString& InSwfAssetName, bool bRefresh);
	struct FASValue Invoke(const struct FString& MovieClipName, const struct FString& FunctionName, TArray<struct FASValue> Params);
	void GotoAndStopI(const struct FString& MovieClipName, int Frame);
	void GotoAndStop(const struct FString& MovieClipName, const struct FString& Frame);
	void GotoAndPlayI(const struct FString& MovieClipName, int Frame);
	void GotoAndPlay(const struct FString& MovieClipName, const struct FString& Frame);
	bool GetVisibility(const struct FString& MovieClipName);
	struct FTransform GetView3D();
	TArray<struct FASValue> GetVariableValueArray(const struct FString& MovieClipName, const struct FString& MemberName);
	struct FASValue GetVariableValue(const struct FString& MovieClipName, const struct FString& MemberName);
	bool GetScale(const struct FString& MovieClipName, float* XScale, float* YScale);
	bool GetPosition(const struct FString& MovieClipName, float* x, float* y);
	struct FASPerspectiveTransform GetPerspective3D();
	class UGFxObject* GetMovieClip(const struct FString& MovieClipName);
	struct FTransform GetDisplayTransform(const struct FString& MovieClipName);
	struct FASDisplayInfo GetDisplayInfo(const struct FString& MovieClipName);
	struct FASColorTransform GetColorTransform(const struct FString& MovieClipName);
	void Close(bool Unload);
};

// Class ScaleformUI.GFxObject
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGFxObject : public UObject
{
public:
	unsigned char                                      UnknownData_ZKNG[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ScaleformUI.GFxObject");
		return ptr;
	}



	void SetVisible(bool bVisible);
	void SetScale(float XScale, float YScale);
	void SetPosition(float x, float y);
	void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const struct FString& MemberName, TArray<struct FASValue> input);
	void SetMemberValue(const struct FString& MemberName, const struct FASValue& input);
	void SetDisplayTransform(const struct FTransform& DisplayTransform);
	void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo);
	void SetColorTransform(const struct FASColorTransform& UnrealColorTransform);
	struct FASValue Invoke(const struct FString& FunctionName, TArray<struct FASValue> Params);
	void GotoAndStopI(int FrameNumber);
	void GotoAndStop(const struct FString& FrameString);
	void GotoAndPlayI(int FrameNumber);
	void GotoAndPlay(const struct FString& FrameString);
	bool GetVisible();
	bool GetScale(float* XScale, float* YScale);
	bool GetPosition(float* x, float* y);
	TArray<struct FASValue> GetMemberValueArray(const struct FString& MemberName);
	struct FASValue GetMemberValue(const struct FString& MemberName);
	struct FTransform GetDisplayTransform();
	struct FASDisplayInfo GetDisplayInfo();
	struct FASColorTransform GetColorTransform();
};

// Class ScaleformUI.ScaleformBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ScaleformUI.ScaleformBlueprintLibrary");
		return ptr;
	}



	class UGFxMoviePlayer* STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
	struct FASValue STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const struct FString& FunctionName);
	struct FASValue STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const struct FString& FunctionName, TArray<struct FASValue> Params);
	class UGFxObject* STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const struct FString& VariablePath);
	class UGFxObject* STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const struct FString& MovieClipName);
	class UGFxObject* STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const struct FString& MemberName);
	void STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer);
};

// Class ScaleformUI.SwfMovie
// 0x0188 (FullSize[0x01B8] - InheritedSize[0x0030])
class USwfMovie : public UObject
{
public:
	unsigned char                                      bUseGFxExport : 1;                                         // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOptimizeForMobiles : 1;                                   // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSetSRGBOnImportedTextures : 1;                            // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPackTextures : 1;                                         // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NEL[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PackTextureSize;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceSquarePacking : 1;                                   // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0871[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ScaleformUI_EFlashTextureRescale>      TextureRescale;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T0YQ[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TextureFormat;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReplaceImages : 1;                                        // 0x0050(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXJ3[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SourceFile;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FontMappings;                                              // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceFileTimestamp;                                       // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           ImportTimeStamp;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              RawData;                                                   // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReferencedAssetNames;                                      // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             References;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             UserReferences;                                            // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUKD[0xE8];                                    // 0x00D0(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ScaleformUI.SwfMovie");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
