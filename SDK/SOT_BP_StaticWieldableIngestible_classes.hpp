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

// BlueprintGeneratedClass BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C
// 0x0028 (0x0868 - 0x0840)
class ABP_StaticWieldableIngestible_C : public AStaticWieldableIngestible
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPottableComponent*                          Pottable;                                                 // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
