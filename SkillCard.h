#ifndef SKILLCARD_H
#define SKILLCARD_H

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

class SkillCard : public Card {
protected:
    int baseBlock; 
public:
    SkillCard(CardType type, string name, string description, int cost, int baseBlock);
    virtual ~SkillCard() = default;
    virtual void applyEffect(class Character* caster, class Character* target) override;
    int getBaseBlock() const;
};

#endif