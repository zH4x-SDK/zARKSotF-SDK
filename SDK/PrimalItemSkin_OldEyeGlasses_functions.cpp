
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

// Function PrimalItemSkin_OldEyeGlasses.PrimalItemSkin_OldEyeGlasses_C.ExecuteUbergraph_PrimalItemSkin_OldEyeGlasses
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_OldEyeGlasses_C::ExecuteUbergraph_PrimalItemSkin_OldEyeGlasses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_OldEyeGlasses.PrimalItemSkin_OldEyeGlasses_C.ExecuteUbergraph_PrimalItemSkin_OldEyeGlasses");

	UPrimalItemSkin_OldEyeGlasses_C_ExecuteUbergraph_PrimalItemSkin_OldEyeGlasses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
