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

// BlueprintGeneratedClass DinoSpawnEntriesBeach.DinoSpawnEntriesBeach_C
// 0x0000 (0x0050 - 0x0050)
class UDinoSpawnEntriesBeach_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesBeach.DinoSpawnEntriesBeach_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSpawnEntriesBeach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
