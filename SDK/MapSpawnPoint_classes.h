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

// WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C
// 0x0008 (0x03B8 - 0x03B0)
class UMapSpawnPoint_C : public UUI_SpawnPoint
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_Default__MapSpawnPoint_C_Visiblity_1();
	void ExecuteUbergraph_MapSpawnPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
