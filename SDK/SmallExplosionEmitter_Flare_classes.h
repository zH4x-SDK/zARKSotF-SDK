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

// BlueprintGeneratedClass SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C
// 0x0000 (0x04D0 - 0x04D0)
class ASmallExplosionEmitter_Flare_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SmallExplosionEmitter_Flare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
