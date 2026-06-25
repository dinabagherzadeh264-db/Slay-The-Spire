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
    DefendCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ExhumeCard : public SkillCard {
    ExhumeCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class LimitBreakCard : public SkillCard {
    LimitBreakCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class OfferingCard : public SkillCard {
    OfferingCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ImperviousCard : public SkillCard {
    ImperviousCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class DualWieldCard : public SkillCard {
    DualWieldCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class EntrenchCard : public SkillCard {
    EntrenchCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class ShrugItOffCard : public SkillCard {
    ShrugItOffCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class BloodlettingCard : public SkillCard {
    BloodlettingCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

class DisarmCard : public SkillCard {
    DisarmCard();
    void applyEffect(class Character* caster, class Character* target) override;
};

#endif