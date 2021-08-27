
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

// Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.UserConstructionScript
// (Final)

void ASpino_AI_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.UserConstructionScript");

	ASpino_AI_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.ExecuteUbergraph_Spino_AI_Blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_AI_Blueprint_C::ExecuteUbergraph_Spino_AI_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint.Spino_AI_Blueprint_C.ExecuteUbergraph_Spino_AI_Blueprint");

	ASpino_AI_Blueprint_C_ExecuteUbergraph_Spino_AI_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
