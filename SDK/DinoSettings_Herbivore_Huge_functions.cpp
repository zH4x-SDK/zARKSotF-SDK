
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

// Function DinoSettings_Herbivore_Huge.DinoSettings_Herbivore_Huge_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Huge_C::ExecuteUbergraph_DinoSettings_Herbivore_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Huge.DinoSettings_Herbivore_Huge_C.ExecuteUbergraph_DinoSettings_Herbivore_Huge");

	UDinoSettings_Herbivore_Huge_C_ExecuteUbergraph_DinoSettings_Herbivore_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
