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

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Proxy.BP_MerchantCrate_Commodity_Ore_Proxy_C
// 0x0008 (0x07D8 - 0x07D0)
class ABP_MerchantCrate_Commodity_Ore_Proxy_C : public ABP_MerchantCrate_Commodity_Base_Proxy_C
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Proxy.BP_MerchantCrate_Commodity_Ore_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif