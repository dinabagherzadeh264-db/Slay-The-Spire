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