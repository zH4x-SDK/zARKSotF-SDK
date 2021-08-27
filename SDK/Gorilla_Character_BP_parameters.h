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

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.UserConstructionScript
struct AGorilla_Character_BP_C_UserConstructionScript_Params
{
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveTick
struct AGorilla_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AGorilla_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveBeginPlay
struct AGorilla_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveDestroyed
struct AGorilla_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ExecuteUbergraph_Gorilla_Character_BP
struct AGorilla_Character_BP_C_ExecuteUbergraph_Gorilla_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
