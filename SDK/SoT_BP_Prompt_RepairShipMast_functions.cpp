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

// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterDamageEventFromCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::UnregisterDamageEventFromCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterDamageEventFromCurrentShip");

	UBP_Prompt_RepairShipMast_C_UnregisterDamageEventFromCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterDamageEventWithCurrentShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::RegisterDamageEventWithCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterDamageEventWithCurrentShip");

	UBP_Prompt_RepairShipMast_C_RegisterDamageEventWithCurrentShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_RepairShipMast_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.Evaluate");

	UBP_Prompt_RepairShipMast_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle* CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShipMast_C::RegisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.RegisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShipMast_C_RegisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnCurrentShipChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCurrentShipChanged Event                          (Parm)

void UBP_Prompt_RepairShipMast_C::OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnCurrentShipChanged");

	UBP_Prompt_RepairShipMast_C_OnCurrentShipChanged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnShipMastDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventMastDamageLevelChanged Event                          (Parm)

void UBP_Prompt_RepairShipMast_C::OnShipMastDamaged(const struct FEventMastDamageLevelChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.OnShipMastDamaged");

	UBP_Prompt_RepairShipMast_C_OnShipMastDamaged_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle* CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_RepairShipMast_C::UnregisterCharacterEvents_Implementable(struct FObjectMessagingDispatcherHandle* CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.UnregisterCharacterEvents_Implementable");

	UBP_Prompt_RepairShipMast_C_UnregisterCharacterEvents_Implementable_Params params;
	params.CharacterDispatcher = CharacterDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.ExecuteUbergraph_BP_Prompt_RepairShipMast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_RepairShipMast_C::ExecuteUbergraph_BP_Prompt_RepairShipMast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C.ExecuteUbergraph_BP_Prompt_RepairShipMast");

	UBP_Prompt_RepairShipMast_C_ExecuteUbergraph_BP_Prompt_RepairShipMast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
