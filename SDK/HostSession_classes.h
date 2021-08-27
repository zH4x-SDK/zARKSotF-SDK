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

// WidgetBlueprintGeneratedClass HostSession.HostSession_C
// 0x02B8 (0x09F0 - 0x0738)
class UHostSession_C : public UUI_HostSession
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0738(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HostSession.HostSession_C");
		return ptr;
	}


	void ExecuteUbergraph_HostSession(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
