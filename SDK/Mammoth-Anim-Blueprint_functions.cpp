
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

// Function Mammoth-Anim-Blueprint.Mammoth-Anim-Blueprint_C.ExecuteUbergraph_Mammoth-Anim-Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMammoth_Anim_Blueprint_C::ExecuteUbergraph_Mammoth_Anim_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mammoth-Anim-Blueprint.Mammoth-Anim-Blueprint_C.ExecuteUbergraph_Mammoth-Anim-Blueprint");

	UMammoth_Anim_Blueprint_C_ExecuteUbergraph_Mammoth_Anim_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
