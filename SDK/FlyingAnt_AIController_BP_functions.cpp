
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

// Function FlyingAnt_AIController_BP.FlyingAnt_AIController_BP_C.UserConstructionScript
// ()

void AFlyingAnt_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlyingAnt_AIController_BP.FlyingAnt_AIController_BP_C.UserConstructionScript");

	AFlyingAnt_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FlyingAnt_AIController_BP.FlyingAnt_AIController_BP_C.ExecuteUbergraph_FlyingAnt_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlyingAnt_AIController_BP_C::ExecuteUbergraph_FlyingAnt_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlyingAnt_AIController_BP.FlyingAnt_AIController_BP_C.ExecuteUbergraph_FlyingAnt_AIController_BP");

	AFlyingAnt_AIController_BP_C_ExecuteUbergraph_FlyingAnt_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
