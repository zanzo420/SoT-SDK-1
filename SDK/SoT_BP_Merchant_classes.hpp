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

// BlueprintGeneratedClass BP_Merchant.BP_Merchant_C
// 0x0048 (0x0628 - 0x05E0)
class ABP_Merchant_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                      // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialogSellCrate;                                       // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMerchantCrateProviderComponent*             MerchantCrateProvider;                                    // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      cmp_pocket_watch_mrh_01_e;                                // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Merchant.BP_Merchant_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayItemAnimation();
	void ExecuteUbergraph_BP_Merchant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
