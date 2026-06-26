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

//_______________________________________DazeCard_______________________________________
DazeCard::DazeCard(): StatusCard(CardType::Status, "Daze", 
    "Unplayable - Ethereal") {}

void DazeCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        cout << "Daze card checked in hand!\n";
        // caster->exhaust_card_automatically(this);
        cout << " -> Daze is Ethereal! (It'll be automatically Exhausted at the end of your turn if not played)\n";
    }
}

//______________________________________SlimeCard_______________________________________
SlimeCard::SlimeCard() : StatusCard(CardType::Status, "Slime",
    "Has no effect - Exhaust", 1) {
}

void SlimeCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        cout << "Slime card played but hey it has no effect!\n";
        // caster->exhaustCard(this);
        cout << " -> Slime has been Exhausted and moved to the exhaust pile\n";
    }
}