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

// Function Reviving.ReviveComponent.OnRep_ReviveState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EReviveState>      PreviousReviveState            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UReviveComponent::OnRep_ReviveState(TEnumAsByte<EReviveState> PreviousReviveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.OnRep_ReviveState");

	UReviveComponent_OnRep_ReviveState_Params params;
	params.PreviousReviveState = PreviousReviveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay
// (Final, Native, Public)

void UReviveComponent::HandleOwningCharacterEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.ReviveComponent.HandleOwningCharacterEndPlay");

	UReviveComponent_HandleOwningCharacterEndPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Reviving.ReviveGhost.SetupGhostMaterials
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AReviveGhost::SetupGhostMaterials(class USkeletalMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Reviving.ReviveGhost.SetupGhostMaterials");

	AReviveGhost_SetupGhostMaterials_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
