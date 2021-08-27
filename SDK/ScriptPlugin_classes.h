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

// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0030 (0x01F8 - 0x01C8)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptBlueprint
// 0x0040 (0x0100 - 0x00C0)
class UScriptBlueprint : public UBlueprint
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return ptr;
	}

};


// Class ScriptPlugin.ScriptComponent
// 0x0008 (0x0110 - 0x0108)
class UScriptComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptComponent");
		return ptr;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContext
// 0x0008 (0x0030 - 0x0028)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return ptr;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0008 (0x0110 - 0x0108)
class UScriptContextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return ptr;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0018 (0x0440 - 0x0428)
class AScriptTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return ptr;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
