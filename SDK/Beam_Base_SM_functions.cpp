
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

// Function Beam_Base_SM.Beam_Base_SM_C.UserConstructionScript
// ()

void ABeam_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Base_SM.Beam_Base_SM_C.UserConstructionScript");

	ABeam_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Beam_Base_SM.Beam_Base_SM_C.ExecuteUbergraph_Beam_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeam_Base_SM_C::ExecuteUbergraph_Beam_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beam_Base_SM.Beam_Base_SM_C.ExecuteUbergraph_Beam_Base_SM");

	ABeam_Base_SM_C_ExecuteUbergraph_Beam_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
