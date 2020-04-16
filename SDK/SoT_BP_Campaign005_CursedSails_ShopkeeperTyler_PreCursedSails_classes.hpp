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

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTyler_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTyler_PreCursedSails_C
// 0x0000 (0x0600 - 0x0600)
class ABP_Campaign005_CursedSails_ShopkeeperTyler_PreCursedSails_C : public ABP_Shopkeeper_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign005_CursedSails_ShopkeeperTyler_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTyler_PreCursedSails_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
