
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

// Function DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_Rex_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex");

	UDinoSettings_Carnivore_Huge_Rex_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
