#ifndef ATTACKCARD_H
#define ATTACKCARD_H
#include "card.h"

class AttackCard: public Card {
protected:
	int baseDamage;
public:
	AttackCard(CardType t, string n, string d, int e, int damage);
	virtual ~AttackCard();
	virtual void applyEffect(class Character* caster, class Character* target) override;
};

class ReaperCard: public AttackCard {
public:
	ReaperCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class FeedCard : public AttackCard {
public:
	FeedCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class ImmolateCard : public AttackCard {
public:
	ImmolateCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class WhirlwindCard : public AttackCard {
public:
	WhirlwindCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class Blood_for_BloodCard : public AttackCard {
	Blood_for_BloodCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class BashCard : public AttackCard {
	BashCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class TwinStrikeCard : public AttackCard {
	TwinStrikeCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

class PerfectedStrike : public AttackCard {
	PerfectedStrike();
	void applyEffect(class Character* caster, class Character* target) override;
};

class ClashCard : public AttackCard {
	ClashCard();
	void applyEffect(class Character* caster, class Character* target) override;
};

#endif
