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

// BlueprintGeneratedClass ProjGrapHook.ProjGrapHook_C
// 0x0000 (0x05F8 - 0x05F8)
class AProjGrapHook_C : public APrimalProjectileGrapplingHook
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrapHook.ProjGrapHook_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjGrapHook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
