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
// Enums
//---------------------------------------------------------------------------

// Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
enum class SharedAuthenticationUtilities_ESharedAuthenticationProvider : uint8_t
{
	ESharedAuthenticationProvider__None = 0,
	ESharedAuthenticationProvider__Facebook = 1,
	ESharedAuthenticationProvider__Google = 2,
	ESharedAuthenticationProvider__NetEase = 3,
	ESharedAuthenticationProvider__Kraken = 4,
	ESharedAuthenticationProvider__SignInWithApple = 5,
	ESharedAuthenticationProvider__ESharedAuthenticationProvider_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
// 0x0018
struct FAuthenticationRequestState
{
	unsigned char                                      UnknownData_U2K3[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
