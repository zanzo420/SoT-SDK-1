// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wld_bush_cluster_01_g.wld_bush_cluster_01_g_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awld_bush_cluster_01_g_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_01_g.wld_bush_cluster_01_g_C.UserConstructionScript");

	Awld_bush_cluster_01_g_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
