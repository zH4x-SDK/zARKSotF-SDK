
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

// Function Sauropod_Anim_BP.Sauropod_Anim_BP_C.ExecuteUbergraph_Sauropod_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USauropod_Anim_BP_C::ExecuteUbergraph_Sauropod_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sauropod_Anim_BP.Sauropod_Anim_BP_C.ExecuteUbergraph_Sauropod_Anim_BP");

	USauropod_Anim_BP_C_ExecuteUbergraph_Sauropod_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
