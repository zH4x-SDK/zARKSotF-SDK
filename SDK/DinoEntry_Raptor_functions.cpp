
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

// Function DinoEntry_Raptor.DinoEntry_Raptor_C.ExecuteUbergraph_DinoEntry_Raptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Raptor_C::ExecuteUbergraph_DinoEntry_Raptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Raptor.DinoEntry_Raptor_C.ExecuteUbergraph_DinoEntry_Raptor");

	UDinoEntry_Raptor_C_ExecuteUbergraph_DinoEntry_Raptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
