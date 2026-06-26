#ifndef STATUSCARD_H
#define STATUSCARD_H

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

class CurseCard : public Card {
public:
    CurseCard(CardType type, string name, string desc, int cost = -1);
    virtual void applyEffect(class Character* caster, class Character* target) override;
};

#endif