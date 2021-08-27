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

// Class TrueSkyPlugin.TrueSkyComponent
// 0x0000 (0x0108 - 0x0108)
class UTrueSkyComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkyComponent");
		return ptr;
	}

};


// Class TrueSkyPlugin.TrueSkySequenceActor
// 0x0070 (0x0498 - 0x0428)
class ATrueSkySequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0428(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceActor");
		return ptr;
	}


	void SetTime(float Value);
	void SetPointLightSource(int ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& pos, float minRadius, float maxRadius);
	void SetPointLight(class APointLight* Source);
	void SetKeyframeInt(int keyframeUid, const struct FString& Name, int Value);
	void SetKeyframeFloat(int keyframeUid, const struct FString& Name, float Value);
	void SetInt(const struct FString& Name, int Value);
	void SetFloat(const struct FString& Name, float Value);
	struct FRotator GetSunRotation();
	struct FLinearColor GetSunColor();
	int GetNextModifiableSkyKeyframe();
	int GetNextModifiableCloudKeyframe(int Layer);
	int GetKeyframeInt(int keyframeUid, const struct FString& Name);
	float GetKeyframeFloat(int keyframeUid, const struct FString& Name);
	int GetInt(const struct FString& Name);
	float GetFloat(const struct FString& Name);
	void ForceUpdate();
	float CloudPointTest(int queryId, const struct FVector& pos);
	float CloudLineTest(int queryId, const struct FVector& StartPos, const struct FVector& EndPos);
};


// Class TrueSkyPlugin.TrueSkySequenceAsset
// 0x0010 (0x0038 - 0x0028)
class UTrueSkySequenceAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
