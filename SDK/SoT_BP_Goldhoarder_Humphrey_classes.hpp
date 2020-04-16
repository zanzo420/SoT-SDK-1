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

// BlueprintGeneratedClass BP_Goldhoarder_Humphrey.BP_Goldhoarder_Humphrey_C
// 0x0000 (0x0600 - 0x0600)
class ABP_Goldhoarder_Humphrey_C : public ABP_Goldhoarder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Goldhoarder_Humphrey.BP_Goldhoarder_Humphrey_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
