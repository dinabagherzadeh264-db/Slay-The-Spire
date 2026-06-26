#ifndef STATUSCARD_H
#define STATUSCARD_H

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

class StatusCard : public Card {
public:
    StatusCard(CardType type, string name, string desc, int cost = 0);
    virtual void applyEffect(class Character* caster, class Character* target) override;
};

#endif