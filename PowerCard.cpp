#include "PowerCard.h"

//______________________________________PowerCard______________________________________
PowerCard::PowerCard(CardType type, string name, string description, int cost)
	: Card(type, name, description, cost) {}

void PowerCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        //caster->decreaseEnergy(energyCost); 
        //cout << caster->getName() << " spent " << energyCost << " energy to play " << name << ".\n";
    }
}

//_____________________________________InflameCard_____________________________________
InflameCard::InflameCard(): PowerCard(CardType::Power, "Inflame",
    "Gain 2 Strength", 1) {}

void InflameCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Inflame card played!\n";
        //caster->applyStatus("Strength", 2); 
        cout << " -> You gained 2 strength\n";
    }
}

//___________________________________MetallicizeCard___________________________________
MetallicizeCard::MetallicizeCard() : PowerCard(CardType::Power, "Metallicize",
    "At the end of your turn get 3 block", 1) {
}

void MetallicizeCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Metallicize card played!\n";
        // caster->applyStatus("Metallicize", 3);
        cout << " -> Metallicize buff applied! (you will gain 3 block at end of your turn)\n";
    }
}