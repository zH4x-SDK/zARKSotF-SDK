
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

// Function StructureSettings_BrokenByMetal.StructureSettings_BrokenByMetal_C.ExecuteUbergraph_StructureSettings_BrokenByMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByMetal_C::ExecuteUbergraph_StructureSettings_BrokenByMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByMetal.StructureSettings_BrokenByMetal_C.ExecuteUbergraph_StructureSettings_BrokenByMetal");

	UStructureSettings_BrokenByMetal_C_ExecuteUbergraph_StructureSettings_BrokenByMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
