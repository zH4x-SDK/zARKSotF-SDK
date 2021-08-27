#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Beam_Metal.Beam_Metal_C
// 0x0000 (0x0928 - 0x0928)
class ABeam_Metal_C : public ABeam_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Beam_Metal.Beam_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Beam_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
