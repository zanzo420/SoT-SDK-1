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

// BlueprintGeneratedClass BP_IslandStorageBarrel_BananaReward.BP_IslandStorageBarrel_BananaReward_C
// 0x0020 (0x0518 - 0x04F8)
class ABP_IslandStorageBarrel_BananaReward_C : public AStorageContainer
{
public:
	class UNPCDialogComponent*                         InspectDialog;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReplenishableComponent*                     Replenishable;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandStorageBarrel_BananaReward.BP_IslandStorageBarrel_BananaReward_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
