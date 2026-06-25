#include "SkillCard.h"

//______________________________________SkillCard______________________________________
SkillCard::SkillCard(CardType type, string name, string description, int cost, int baseB)
    : Card(type, name, description, cost), baseBlock(baseB) {}

void SkillCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        //caster->decreaseEnergy(energyCost); 
        //cout << caster->getName() << " spent " << energyCost << " energy to play " << name << ".\n";
    }
}

int SkillCard::getBaseBlock() const { return baseBlock; } 

//______________________________________DefendCard_____________________________________
DefendCard::DefendCard(): SkillCard(CardType::Skill, "Defend",
    "Gain 5 block", 1, 5){}

void DefendCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        int realBlock = 5;
        // realBlock = caster->calculate_total_block(5); 
        // caster->AddBlock(realBlock); 
        cout << "Defend card played! -> Gained " << realBlock << " block\n";
    }
}

//_____________________________________ExhumeCard______________________________________
ExhumeCard::ExhumeCard():SkillCard(CardType::Skill, "Exhume",
    "Put a card from exhaust pile into hand - Exhaust", 1, 0) {}

void ExhumeCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target); 
    if (caster) {
        cout << "Exhume card played!\n";
        bool hasExhaustedCards = true; 
        // if (caster->hasCardsInExhaustPile()) { ... }
        if (hasExhaustedCards) {
            // caster->moveCardFromExhaustToHand();
            cout << " -> Successfully recovered a card from the Exhaust pile back to your hand!\n";
        }
        else 
            cout << " -> Exhaust pile is empty! No card to recover\n";
        // caster->exhaustCard(this);
        cout << " -> Exhume has been Exhausted and moved to the exhaust pile\n";
    }
}