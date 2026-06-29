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

class DefendCard : public SkillCard {
public:
    DefendCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ExhumeCard : public SkillCard {
public:
    ExhumeCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class LimitBreakCard : public SkillCard {
public:
    LimitBreakCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class OfferingCard : public SkillCard {
public:
    OfferingCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ImperviousCard : public SkillCard {
public:
    ImperviousCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class DualWieldCard : public SkillCard {
public:
    DualWieldCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class EntrenchCard : public SkillCard {
public:
    EntrenchCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ShrugItOffCard : public SkillCard {
public:
    ShrugItOffCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class BloodlettingCard : public SkillCard {
public:
    BloodlettingCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class DisarmCard : public SkillCard {
public:
    DisarmCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

#endif