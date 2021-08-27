
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

// Function Bigfoot_Anim_Blueprint.Bigfoot_Anim_Blueprint_C.ExecuteUbergraph_Bigfoot_Anim_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBigfoot_Anim_Blueprint_C::ExecuteUbergraph_Bigfoot_Anim_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bigfoot_Anim_Blueprint.Bigfoot_Anim_Blueprint_C.ExecuteUbergraph_Bigfoot_Anim_Blueprint");

	UBigfoot_Anim_Blueprint_C_ExecuteUbergraph_Bigfoot_Anim_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
