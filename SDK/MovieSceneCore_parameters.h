#pragma once

#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function MovieSceneCore.RuntimeMovieScenePlayer.Play
struct URuntimeMovieScenePlayer_Play_Params
{
};

// Function MovieSceneCore.RuntimeMovieScenePlayer.Pause
struct URuntimeMovieScenePlayer_Pause_Params
{
};

// Function MovieSceneCore.RuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer
struct URuntimeMovieScenePlayer_CreateRuntimeMovieScenePlayer_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMovieSceneBindings*                         InMovieSceneBindings;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URuntimeMovieScenePlayer*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
