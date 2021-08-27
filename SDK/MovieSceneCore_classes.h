#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MovieSceneCore.MovieScene
// 0x0040 (0x0068 - 0x0028)
class UMovieScene : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieScene");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneBindings
// 0x0018 (0x0040 - 0x0028)
class UMovieSceneBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneBindings");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneSection
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneSection");
		return ptr;
	}

};


// Class MovieSceneCore.MovieSceneTrack
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTrack : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieSceneCore.MovieScenePropertyTrack
// 0x0030 (0x0058 - 0x0028)
class UMovieScenePropertyTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneCore.RuntimeMovieScenePlayer
// 0x0090 (0x00B8 - 0x0028)
class URuntimeMovieScenePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCore.RuntimeMovieScenePlayer");
		return ptr;
	}


	void Play();
	void Pause();
	class URuntimeMovieScenePlayer* CreateRuntimeMovieScenePlayer(class ULevel* Level, class UMovieSceneBindings* InMovieSceneBindings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
