
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

// Function Dilo_AnimBlueprint.Dilo_AnimBlueprint_C.ExecuteUbergraph_Dilo_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDilo_AnimBlueprint_C::ExecuteUbergraph_Dilo_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dilo_AnimBlueprint.Dilo_AnimBlueprint_C.ExecuteUbergraph_Dilo_AnimBlueprint");

	UDilo_AnimBlueprint_C_ExecuteUbergraph_Dilo_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
