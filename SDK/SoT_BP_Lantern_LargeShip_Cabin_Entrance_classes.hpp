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

// BlueprintGeneratedClass BP_Lantern_LargeShip_Cabin_Entrance.BP_Lantern_LargeShip_Cabin_Entrance_C
// 0x0000 (0x078D - 0x078D)
class ABP_Lantern_LargeShip_Cabin_Entrance_C : public ABP_InteractableShipLantern_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_Cabin_Entrance.BP_Lantern_LargeShip_Cabin_Entrance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
