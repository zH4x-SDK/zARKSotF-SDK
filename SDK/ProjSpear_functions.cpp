
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

// Function ProjSpear.ProjSpear_C.UserConstructionScript
// ()

void AProjSpear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear.ProjSpear_C.UserConstructionScript");

	AProjSpear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpear.ProjSpear_C.ExecuteUbergraph_ProjSpear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpear_C::ExecuteUbergraph_ProjSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear.ProjSpear_C.ExecuteUbergraph_ProjSpear");

	AProjSpear_C_ExecuteUbergraph_ProjSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
