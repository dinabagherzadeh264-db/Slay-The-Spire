#ifndef CURSECARD_H
#define CURSECARD_H

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

class CurseCard : public Card {
public:
    CurseCard(CardType type, string name, string desc, int cost = -1);
    virtual void applyEffect(class Character* caster, class Character* target) override;
    virtual bool isPlayable() const override;
};

class JAXCard : public CurseCard {
public:
    JAXCard();
    void applyEffect(class Character* caster, class Character* target) override;
    bool isPlayable() const override;
};

class CurseOfBellCard : public CurseCard {
public:
    CurseOfBellCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class RegretCard : public CurseCard {
public:
    RegretCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

#endif