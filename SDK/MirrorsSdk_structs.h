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

// Enum MirrorsSdk.EMirrorsRequestLogLevel
enum class MirrorsSdk_EMirrorsRequestLogLevel : uint8_t
{
	EMirrorsRequestLogLevel__None  = 0,
	EMirrorsRequestLogLevel__NetworkError = 1,
	EMirrorsRequestLogLevel__HttpError = 2,
	EMirrorsRequestLogLevel__All   = 3,
	EMirrorsRequestLogLevel__EMirrorsRequestLogLevel_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
