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

class DazeCard : public StatusCard {
public:
    DazeCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class SlimeCard : public StatusCard {
public:
    SlimeCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class WoundCard : public StatusCard {
public:
    WoundCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class BurnCard : public StatusCard {
public:
    BurnCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

#endif