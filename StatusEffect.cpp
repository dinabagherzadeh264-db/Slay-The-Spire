#include "StatusEffect.h"

//_______________________________________StatusEffect_______________________________________
StatusEffect:: StatusEffect(string name, int amount) : name(name), amount(amount) {}

string StatusEffect::getName() const { return name; }
int StatusEffect::getAmount() const { return amount; }
void StatusEffect::setAmount(int value) { amount = value; }

int StatusEffect::modifyOutgoingDamage(int baseDamage) { return baseDamage; }
int StatusEffect::modifyIncomingDamage(int baseDamage) { return baseDamage; }
int StatusEffect::modifyBlock(int baseBlock) { return baseBlock; }

//______________________________________StrengthEffect______________________________________
StrengthEffect::StrengthEffect(int increaseDamageBy) : StatusEffect("Strength", increaseDamageBy) {}

int StrengthEffect::modifyOutgoingDamage(int baseDamage) { return baseDamage + amount; }

//______________________________________DexterityEffect_____________________________________
DexterityEffect::DexterityEffect(int increaseBlockBy) : StatusEffect("Dexterity", increaseBlockBy) {}

int DexterityEffect::modifyBlock(int baseBlock) { return baseBlock + amount; }

//_____________________________________VulnerableEffect_____________________________________
VulnerableEffect::VulnerableEffect(int turns) : StatusEffect("Vulnerable", turns) {}

int VulnerableEffect::modifyIncomingDamage(int baseDamage) {
    if (amount > 0) 
        return baseDamage * 1.5; 
    return baseDamage;
}

void VulnerableEffect::onTurnEnd() {
    if (amount > 0) 
        amount--; 
}