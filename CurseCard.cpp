#include "CurseCard.h"

//______________________________________StatusCard______________________________________
CurseCard::CurseCard(CardType type, string name, string description, int cost = -1)
	: Card(type, name, description, cost) {}

void CurseCard::applyEffect(class Character* caster, class Character* target) {}