#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C
// 0x0030 (0x0440 - 0x0410)
class ABP_audio_prem_shop_bsp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTritonComponent*                            Triton;                                                   // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_audio_prem_shop_bsp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
