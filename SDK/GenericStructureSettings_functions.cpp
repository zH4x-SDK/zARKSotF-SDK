
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

// Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericStructureSettings_C::ExecuteUbergraph_GenericStructureSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings");

	UGenericStructureSettings_C_ExecuteUbergraph_GenericStructureSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
