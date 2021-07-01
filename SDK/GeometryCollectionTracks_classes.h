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

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams         Params;                                                    // 0x00E8(0x0038) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
		return ptr;
	}



};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0060(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
