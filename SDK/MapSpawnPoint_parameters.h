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

// Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1
struct UMapSpawnPoint_C_Get_Default__MapSpawnPoint_C_Visiblity_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MapSpawnPoint.MapSpawnPoint_C.ExecuteUbergraph_MapSpawnPoint
struct UMapSpawnPoint_C_ExecuteUbergraph_MapSpawnPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
