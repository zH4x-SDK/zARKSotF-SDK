#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneSpawnable
// 0x0048
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      GeneratedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct MovieSceneCore.MovieScene.MovieScenePossessable
// 0x0040
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      PossessedObjectClass;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneObjectBinding
// 0x0048
struct FMovieSceneObjectBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FText                                       BindingName;                                              // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct MovieSceneCore.MovieSceneBindings.MovieSceneBoundObject
// 0x0020
struct FMovieSceneBoundObject
{
	struct FGuid                                       PossessableGuid;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCore.MovieScene.MovieSceneEditorData
// 0x0010
struct FMovieSceneEditorData
{
	TArray<struct FString>                             CollapsedSequencerNodes;                                  // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
