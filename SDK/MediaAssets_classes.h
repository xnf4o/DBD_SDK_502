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

// Class MediaAssets.MediaSource
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData_22SY[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}



	bool Validate();
	void SetMediaOptionString(const struct FName& key, const struct FString& Value);
	void SetMediaOptionInt64(const struct FName& key, int64_t Value);
	void SetMediaOptionFloat(const struct FName& key, float Value);
	void SetMediaOptionBool(const struct FName& key, bool Value);
	struct FString GetUrl();
};

// Class MediaAssets.BaseMediaSource
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       playerName;                                                // 0x0088(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MPMZ[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}



};

// Class MediaAssets.FileMediaSource
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PrecacheFile;                                              // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZNI[0x17];                                    // 0x00A9(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}



	void SetFilePath(const struct FString& path);
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	void STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
	void STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int Filter);
};

// Class MediaAssets.MediaComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UMediaComponent : public UactorComponent
{
public:
	class UMediaTexture*                               MediaTexture;                                              // 0x00B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, Interp, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaComponent");
		return ptr;
	}



	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};

// Class MediaAssets.MediaPlayer
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                             // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                         // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                         // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                       // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                           // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTracksChanged;                                           // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheAhead;                                                // 0x00B0(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheBehind;                                               // 0x00B8(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   CacheBehindGame;                                           // 0x00C0(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NativeAudioOut;                                            // 0x00C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayOnOpen;                                                // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQM9[0x2];                                     // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Shuffle : 1;                                               // 0x00CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Loop : 1;                                                  // 0x00CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_63E2[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlaylist*                              Playlist;                                                  // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PlaylistIndex;                                             // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ATOW[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   TimeDelay;                                                 // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HorizontalFieldOfView;                                     // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              VerticalFieldOfView;                                       // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                                    viewRotation;                                              // 0x00F0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OOR4[0x2C];                                    // 0x00FC(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       PlayerGuid;                                                // 0x0128(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OMB0[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}



	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	void SetTimeDelay(const struct FTimespan& TimeDelay);
	bool SetRate(float rate);
	bool SetNativeVolume(float volume);
	void SetMediaOptions(class UMediaSource* Options);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& playerName);
	void SetBlockOnTime(const struct FTimespan& time);
	bool SelectTrack(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& time);
	bool Rewind();
	bool Reopen();
	bool previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& Url);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	void OpenSourceLatent(class UObject* worldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool isReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
	int GetSelectedTrack(MediaAssets_EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(MediaAssets_EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(MediaAssets_EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	struct FTimespan GetLastVideoSampleProcessedTime();
	struct FTimespan GetLastAudioSampleProcessedTime();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& Url);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};

// Class MediaAssets.MediaPlaylist
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                        Items;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}



	bool Replace(int index, class UMediaSource* Replacement);
	bool RemoveAt(int index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int index);
	bool AddUrl(const struct FString& Url);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};

// Class MediaAssets.MediaSoundComponent
// 0x0200 (FullSize[0x08F0] - InheritedSize[0x06F0])
class UMediaSoundComponent : public USynthComponent
{
public:
	MediaAssets_EMediaSoundChannels                    Channels;                                                  // 0x06F0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BQV[0x3];                                     // 0x06F0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               DynamicRateAdjustment;                                     // 0x06F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZWE[0x3];                                     // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RateAdjustmentFactor;                                      // 0x06F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                                 RateAdjustmentRange;                                       // 0x06FC(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OH5F[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2ZNX[0x1D8];                                   // 0x0718(0x01D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}



	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, MediaAssets_EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int AttackTimeMsec, int ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	class UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
};

// Class MediaAssets.MediaTexture
// 0x00D0 (FullSize[0x0190] - InheritedSize[0x00C0])
class UMediaTexture : public Utexture
{
public:
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoClear;                                                 // 0x00C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NNGG[0x1];                                     // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ClearColor;                                                // 0x00C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableGenMips;                                             // 0x00D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NumMips;                                                   // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWUA[0x2];                                     // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G24J[0xB0];                                    // 0x00E0(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	int GetWidth();
	class UMediaPlayer* GetMediaPlayer();
	int GetHeight();
	float GetAspectRatio();
};

// Class MediaAssets.PlatformMediaSource
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                               // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}



};

// Class MediaAssets.StreamMediaSource
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                 // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}



};

// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                               bUseTimeSynchronization;                                   // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKAS[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FrameDelay;                                                // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             TimeDelay;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
