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

// BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C
// 0x0008 (0x0620 - 0x0618)
class ABP_ShipCookingPot_C : public ABP_CookingPotBase_C
{
public:
	class UCookerIgnitionComponent*                    CookerIgnition;                                           // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipCookingPot.BP_ShipCookingPot_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
