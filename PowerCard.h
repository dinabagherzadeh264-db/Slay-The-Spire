#ifndef POWERCARD_H
#define POWERCARD_H

#include "Card.h"
#include <string>
#include <iostream>

using namespace std;

class PowerCard : public Card {
public:
    PowerCard(CardType type, string name, string desc, int cost);
    virtual void applyEffect(class Character* caster, class Character* target) override;
};

class InflameCard : public PowerCard {
public:
    InflameCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class MetallicizeCard : public PowerCard {
public:
    MetallicizeCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

#endif
