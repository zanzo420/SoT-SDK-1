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

// BlueprintGeneratedClass wld_bush_cluster_01_d.wld_bush_cluster_01_d_C
// 0x0018 (0x0468 - 0x0450)
class Awld_bush_cluster_01_d_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wsp_bush_08_c_01;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_bush_05_b_01;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_bush_cluster_01_d.wld_bush_cluster_01_d_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
