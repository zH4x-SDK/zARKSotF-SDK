
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

// Function DinoSettings_Base.DinoSettings_Base_C.ExecuteUbergraph_DinoSettings_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Base_C::ExecuteUbergraph_DinoSettings_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Base.DinoSettings_Base_C.ExecuteUbergraph_DinoSettings_Base");

	UDinoSettings_Base_C_ExecuteUbergraph_DinoSettings_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif