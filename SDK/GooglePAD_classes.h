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

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		return ptr;
	}



	GooglePAD_EGooglePADErrorCode STATIC_ShowCellularDataConfirmation();
	GooglePAD_EGooglePADErrorCode STATIC_RequestRemoval(const struct FString& name);
	GooglePAD_EGooglePADErrorCode STATIC_RequestInfo(TArray<struct FString> AssetPacks);
	GooglePAD_EGooglePADErrorCode STATIC_RequestDownload(TArray<struct FString> AssetPacks);
	void STATIC_ReleaseDownloadState(int state);
	void STATIC_ReleaseAssetPackLocation(int location);
	int STATIC_GetTotalBytesToDownload(int state);
	GooglePAD_EGooglePADStorageMethod STATIC_GetStorageMethod(int location);
	GooglePAD_EGooglePADErrorCode STATIC_GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status);
	GooglePAD_EGooglePADDownloadStatus STATIC_GetDownloadStatus(int state);
	GooglePAD_EGooglePADErrorCode STATIC_GetDownloadState(const struct FString& name, int* state);
	int STATIC_GetBytesDownloaded(int state);
	struct FString STATIC_GetAssetsPath(int location);
	GooglePAD_EGooglePADErrorCode STATIC_GetAssetPackLocation(const struct FString& name, int* location);
	GooglePAD_EGooglePADErrorCode STATIC_CancelDownload(TArray<struct FString> AssetPacks);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
