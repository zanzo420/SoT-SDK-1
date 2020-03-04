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

// Function BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_TheArtOfTheTrickster_CollectableTrapmakerNote_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C.GetClosestInteractionPoint");

	ABP_TheArtOfTheTrickster_CollectableTrapmakerNote_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TheArtOfTheTrickster_CollectableTrapmakerNote_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TheArtOfTheTrickster_CollectableTrapmakerNote.BP_TheArtOfTheTrickster_CollectableTrapmakerNote_C.UserConstructionScript");

	ABP_TheArtOfTheTrickster_CollectableTrapmakerNote_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
