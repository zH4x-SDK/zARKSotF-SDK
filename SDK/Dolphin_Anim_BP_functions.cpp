
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

// Function Dolphin_Anim_BP.Dolphin_Anim_BP_C.ExecuteUbergraph_Dolphin_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDolphin_Anim_BP_C::ExecuteUbergraph_Dolphin_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dolphin_Anim_BP.Dolphin_Anim_BP_C.ExecuteUbergraph_Dolphin_Anim_BP");

	UDolphin_Anim_BP_C_ExecuteUbergraph_Dolphin_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
