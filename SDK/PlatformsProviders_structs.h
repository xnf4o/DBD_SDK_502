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

// Enum PlatformsProviders.EProviderFlag
enum class PlatformsProviders_EProviderFlag : uint8_t
{
	EProviderFlag__None            = 0,
	EProviderFlag__Google          = 1,
	EProviderFlag__DMM             = 2,
	EProviderFlag__Facebook        = 3,
	EProviderFlag__Nintendo        = 4,
	EProviderFlag__PSN             = 5,
	EProviderFlag__Steam           = 6,
	EProviderFlag__WinGDK          = 7,
	EProviderFlag__Xbox            = 8,
	EProviderFlag__Apple           = 9,
	EProviderFlag__Kraken          = 10,
	EProviderFlag__Stadia          = 11,
	EProviderFlag__GAS3            = 12,
	EProviderFlag__EProviderFlag_MAX = 13,

};

// Enum PlatformsProviders.EPlatformFlag
enum class PlatformsProviders_EPlatformFlag : uint8_t
{
	EPlatformFlag__None            = 0,
	EPlatformFlag__Android         = 1,
	EPlatformFlag__DMM             = 2,
	EPlatformFlag__IOS             = 3,
	EPlatformFlag__Switch          = 4,
	EPlatformFlag__PS4             = 5,
	EPlatformFlag__Steam           = 6,
	EPlatformFlag__WinGDK          = 7,
	EPlatformFlag__Xbox            = 8,
	EPlatformFlag__Stadia          = 9,
	EPlatformFlag__PS5             = 10,
	EPlatformFlag__XSX             = 11,
	EPlatformFlag__EPlatformFlag_MAX = 12,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
