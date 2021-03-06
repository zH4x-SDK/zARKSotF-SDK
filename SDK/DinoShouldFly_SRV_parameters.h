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

// Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ReceiveTick
struct UDinoShouldFly_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ExecuteUbergraph_DinoShouldFly_SRV
struct UDinoShouldFly_SRV_C_ExecuteUbergraph_DinoShouldFly_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
