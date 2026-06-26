#include "StatusCard.h"

//______________________________________StatusCard______________________________________
StatusCard::StatusCard(CardType type, string name, string description, int cost)
	: Card(type, name, description, cost) {}

void StatusCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        //caster->decreaseEnergy(energyCost); 
        //cout << caster->getName() << " spent " << energyCost << " energy to play " << name << ".\n";
    }
}