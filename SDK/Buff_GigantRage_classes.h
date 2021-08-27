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

// BlueprintGeneratedClass Buff_GigantRage.Buff_GigantRage_C
// 0x0078 (0x0738 - 0x06C0)
class ABuff_GigantRage_C : public APrimalBuff
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x06C0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GigantRage.Buff_GigantRage_C");
		return ptr;
	}


	void EnterRage();
	float GetHUDProgressBarPercent();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Buff_GigantRage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
