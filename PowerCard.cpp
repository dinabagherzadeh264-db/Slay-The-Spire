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
    "At the end of your turn get 3 block", 1) {}

void MetallicizeCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Metallicize card played!\n";
        // caster->applyStatus("Metallicize", 3);
        cout << " -> Metallicize buff applied! (you will gain 3 block at end of your turn)\n";
    }
}

//____________________________________DemonFormCard____________________________________
DemonFormCard::DemonFormCard() : PowerCard(CardType::Power, "DemonForm",
    "At the start of your turn gain 3 Strength", 3) {}

void DemonFormCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Demon Form card played!\n";
        // caster->TurnStartEffect("DemonForm");
        cout << " -> Demon Form applied! (You will gain 3 Strength at the start of each turn)\n";
    }
}

//____________________________________BrutalityCard____________________________________
BrutalityCard::BrutalityCard() : PowerCard(CardType::Power, "Brutality",
    "At the start of your turn lose 1 HP and draw 1 card", 0) {}

void BrutalityCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Brutality card played!\n";
        // caster->TurnStartEffect("Brutality");
        cout << " -> Brutality applied! (You will lose 1 HP and draw 1 card at the start of each turn)\n";
    }
}

//____________________________________FeelNoPainCard___________________________________
FeelNoPainCard::FeelNoPainCard():PowerCard(CardType::Power, "FeelNoPain",
    "Every time a card is Exhausted, gain 3 block", 1) {}

void FeelNoPainCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Feel No Pain card played!\n";
        // caster->add_block_when_exhausted();
        cout << " -> Feel No Pain applied! (You will gain 3 block every time a card is Exhausted)\n";
    }
}

//____________________________________BarricadeCard____________________________________
BarricadeCard::BarricadeCard():PowerCard(CardType::Power, "Barricade",
    "Block is not removed at the start of your turn", 3) {}

void BarricadeCard::applyEffect(class Character* caster, class Character* target) {
    PowerCard::applyEffect(caster, target);
    if (caster) {
        cout << "Barricade card played!\n";
        // caster->keep_block_until_next_turn();
        cout << " -> Barricade applied! (Your block will not be removed at the start of your turn)\n";
    }
}