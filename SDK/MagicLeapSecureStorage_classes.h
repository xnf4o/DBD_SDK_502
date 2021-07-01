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

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class MagicLeapSecureStorage.MagicLeapSecureStorage");
		return ptr;
	}



	bool STATIC_PutSecureVector(const struct FString& key, const struct Fvector& DataToStore);
	bool STATIC_PutSecureTransform(const struct FString& key, const struct FTransform& DataToStore);
	bool STATIC_PutSecureString(const struct FString& key, const struct FString& DataToStore);
	bool STATIC_PutSecureSaveGame(const struct FString& key, class USaveGame* ObjectToStore);
	bool STATIC_PutSecureRotator(const struct FString& key, const struct FRotator& DataToStore);
	bool STATIC_PutSecureInt64(const struct FString& key, int64_t DataToStore);
	bool STATIC_PutSecureInt(const struct FString& key, int DataToStore);
	bool STATIC_PutSecureFloat(const struct FString& key, float DataToStore);
	bool STATIC_PutSecureByte(const struct FString& key, unsigned char DataToStore);
	bool STATIC_PutSecureBool(const struct FString& key, bool DataToStore);
	bool STATIC_PutSecureArray(const struct FString& key, TArray<int> DataToStore);
	bool STATIC_GetSecureVector(const struct FString& key, struct Fvector* DataToRetrieve);
	bool STATIC_GetSecureTransform(const struct FString& key, struct FTransform* DataToRetrieve);
	bool STATIC_GetSecureString(const struct FString& key, struct FString* DataToRetrieve);
	bool STATIC_GetSecureSaveGame(const struct FString& key, class USaveGame** ObjectToRetrieve);
	bool STATIC_GetSecureRotator(const struct FString& key, struct FRotator* DataToRetrieve);
	bool STATIC_GetSecureInt64(const struct FString& key, int64_t* DataToRetrieve);
	bool STATIC_GetSecureInt(const struct FString& key, int* DataToRetrieve);
	bool STATIC_GetSecureFloat(const struct FString& key, float* DataToRetrieve);
	bool STATIC_GetSecureByte(const struct FString& key, unsigned char* DataToRetrieve);
	bool STATIC_GetSecureBool(const struct FString& key, bool* DataToRetrieve);
	bool STATIC_GetSecureArray(const struct FString& key, TArray<int>* DataToRetrieve);
	bool STATIC_DeleteSecureData(const struct FString& key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
