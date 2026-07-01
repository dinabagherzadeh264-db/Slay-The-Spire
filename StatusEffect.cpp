#include "StatusEffect.h"

StatusEffect:: StatusEffect(string name, int amount) : name(name), amount(amount) {}

string StatusEffect::getName() const { return name; }
int StatusEffect::getAmount() const { return amount; }
void StatusEffect::setAmount(int value) { amount = value; }

int StatusEffect::modifyOutgoingDamage(int baseDamage) { return baseDamage; }
int StatusEffect::modifyIncomingDamage(int baseDamage) { return baseDamage; }