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

// BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo.BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C
// 0x0008 (0x0790 - 0x0788)
class ABP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C : public ALockedCollectorsChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo.BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
