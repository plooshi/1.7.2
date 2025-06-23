#include "pch.h"
#include "Abilities.h"

void ConsumeAllReplicatedData(UFortAbilitySystemComponentAthena* AbilitySystemComponent, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey) {
    auto& AbilityTargetDataMap = *(FGameplayAbilityReplicatedDataContainer*)(__int64(AbilitySystemComponent) + offsetof(UAbilitySystemComponent, ActivatableAbilities) + sizeof(FGameplayAbilitySpecContainer));

    for (FGameplayAbilityReplicatedDataContainer::FKeyDataPair& Pair : AbilityTargetDataMap.InUseData)
    {
        if (Pair.Key().AbilityHandle.Handle == AbilityHandle.Handle && Pair.Key().PredictionKeyAtCreation == AbilityOriginalPredictionKey.Current)
        {
            Pair.Value().Object = nullptr;
            Pair.Value().SharedReferenceCount->SharedReferenceCount = 1;
        }
    }
}


void Abilities::InternalServerTryActivateAbility(UFortAbilitySystemComponentAthena* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData) {
    auto Spec = AbilitySystemComponent->ActivatableAbilities.Items.Search([&](FGameplayAbilitySpec& item) {
        return item.Handle.Handle == Handle.Handle;
        });
    if (!Spec)
        return AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);

    ConsumeAllReplicatedData(AbilitySystemComponent, Handle, PredictionKey);
    Spec->InputPressed = true;

    UGameplayAbility* InstancedAbility = nullptr;
    auto Abilites = (bool (*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility**, void*, const FGameplayEventData*)) (ImageBase + 0x3d51d30);
    if (!Abilites(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
    {
        AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
        Spec->InputPressed = false;
        AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
    }
}

void Abilities::GiveAbility(UAbilitySystemComponent* AbilitySystemComponent, UObject* Ability)
{
    if (!AbilitySystemComponent || !Ability)
        return;

    FGameplayAbilitySpec Spec{};
    Spec.MostRecentArrayReplicationKey = -1;
    Spec.ReplicationID = -1;
    Spec.ReplicationKey = -1;
    Spec.Ability = (UGameplayAbility *) Ability;
    Spec.Level = 1;
    Spec.InputID = -1;
    Spec.Handle.Handle = rand();
    Spec.SourceObject = nullptr;
    ((FGameplayAbilitySpecHandle * (__fastcall*)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec)) (ImageBase + 0x3d50a60))(AbilitySystemComponent, &Spec.Handle, Spec);
}

void Abilities::GiveAbilitySet(UAbilitySystemComponent* AbilitySystemComponent, UFortAbilitySet* Set)
{
    if (Set)
    {
        for (auto& GameplayAbility : Set->GameplayAbilities)
            GiveAbility(AbilitySystemComponent, GameplayAbility->DefaultObject);
    }
}

void Abilities::Hook() {
    Utils::HookEvery<UAbilitySystemComponent>(0xc9, InternalServerTryActivateAbility);
}
