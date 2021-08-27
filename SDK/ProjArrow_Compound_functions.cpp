
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

// Function ProjArrow_Compound.ProjArrow_Compound_C.UserConstructionScript
// ()

void AProjArrow_Compound_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Compound.ProjArrow_Compound_C.UserConstructionScript");

	AProjArrow_Compound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Compound.ProjArrow_Compound_C.ExecuteUbergraph_ProjArrow_Compound
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Compound_C::ExecuteUbergraph_ProjArrow_Compound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Compound.ProjArrow_Compound_C.ExecuteUbergraph_ProjArrow_Compound");

	AProjArrow_Compound_C_ExecuteUbergraph_ProjArrow_Compound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
