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

#endif
