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

// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_MatineeEvent
struct AMainMenu_C_K2Node_MatineeController_1_MatineeEvent_Params
{
};

// Function MainMenu.MainMenu_C.K2Node_MatineeController_1_Finished
struct AMainMenu_C_K2Node_MatineeController_1_Finished_Params
{
};

// Function MainMenu.MainMenu_C.ReceiveBeginPlay
struct AMainMenu_C_ReceiveBeginPlay_Params
{
};

// Function MainMenu.MainMenu_C.ReceiveEndPlay
struct AMainMenu_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
