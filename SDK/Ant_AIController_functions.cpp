
#include "../SDK.h"

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Ant_AIController.Ant_AIController_C.UserConstructionScript
// (Final)

void AAnt_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_AIController.Ant_AIController_C.UserConstructionScript");

	AAnt_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ant_AIController.Ant_AIController_C.ExecuteUbergraph_Ant_AIController
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnt_AIController_C::ExecuteUbergraph_Ant_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_AIController.Ant_AIController_C.ExecuteUbergraph_Ant_AIController");

	AAnt_AIController_C_ExecuteUbergraph_Ant_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
