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

// BlueprintGeneratedClass BP_AI_wpn_unarmedCombat_ItemDesc.BP_AI_wpn_unarmedCombat_ItemDesc_C
// 0x0000 (0x0130 - 0x0130)
class UBP_AI_wpn_unarmedCombat_ItemDesc_C : public UItemWithoutIconsDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_wpn_unarmedCombat_ItemDesc.BP_AI_wpn_unarmedCombat_ItemDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
