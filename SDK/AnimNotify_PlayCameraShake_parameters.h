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

// Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.GetNotifyName
struct UAnimNotify_PlayCameraShake_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AnimNotify_PlayCameraShake.AnimNotify_PlayCameraShake_C.Received_Notify
struct UAnimNotify_PlayCameraShake_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
