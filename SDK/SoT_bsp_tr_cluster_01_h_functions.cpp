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

// Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_tr_cluster_01_h_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_tr_cluster_01_h.bsp_tr_cluster_01_h_C.UserConstructionScript");

	Absp_tr_cluster_01_h_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
