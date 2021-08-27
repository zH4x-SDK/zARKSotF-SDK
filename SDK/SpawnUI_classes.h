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

// WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C
// 0x01E0 (0x0818 - 0x0638)
class USpawnUI_C : public UUI_Spawn
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0638(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C");
		return ptr;
	}


	void ExecuteUbergraph_SpawnUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
