
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

// Function DinoSettings_Carnivore_Huge.DinoSettings_Carnivore_Huge_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge.DinoSettings_Carnivore_Huge_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge");

	UDinoSettings_Carnivore_Huge_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
