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

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary_Rome.BP_TreasureChest_Proxy_Legendary_Rome_C
// 0x0008 (0x0858 - 0x0850)
class ABP_TreasureChest_Proxy_Legendary_Rome_C : public ABP_TreasureChestProxy_Static_C
{
public:
	class UParticleSystemComponent*                    vfx_seadogs_chest_smoke_pickup;                           // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary_Rome.BP_TreasureChest_Proxy_Legendary_Rome_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
