
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

// Function StructureSettings_BrokenByStone.StructureSettings_BrokenByStone_C.ExecuteUbergraph_StructureSettings_BrokenByStone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByStone_C::ExecuteUbergraph_StructureSettings_BrokenByStone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByStone.StructureSettings_BrokenByStone_C.ExecuteUbergraph_StructureSettings_BrokenByStone");

	UStructureSettings_BrokenByStone_C_ExecuteUbergraph_StructureSettings_BrokenByStone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
