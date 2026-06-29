#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
using namespace std;

enum class CardType{ Attack, Skill, Power, Status, Curse};

class Card {
protected:
	CardType type;
	string name;
	string description;
	int energyCost;
public:
	Card(CardType t, string n, string d, int e);
	virtual ~Card();
	virtual void applyEffect(class Character* caster, class Character* target) = 0;
	string getName() const;
	string getDescription() const;
	int getEnergyCost() const;
	CardType getType() const;
	virtual bool isPlayable() const; 
};

#endif
