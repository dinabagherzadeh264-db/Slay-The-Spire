#include "CurseCard.h"

//______________________________________StatusCard______________________________________
CurseCard::CurseCard(CardType type, string name, string description, int cost = -1)
	: Card(type, name, description, cost) {}

void CurseCard::applyEffect(class Character* caster, class Character* target) {}

//________________________________________J.A.XCard_______________________________________
JAXCard::JAXCard():CurseCard(CardType::Curse, "JAX",
	"Special event card: Lose 3 HP - Gain 2 Strength", 0) {}

void JAXCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        cout << "JAX card played!\n";
        // caster->decreaseHP(3);
        //caster->applyStatus("Strength", 2);
        cout << " -> You lost 3 HP and gained 2 Strength\n";
    }
}

//____________________________________CurseOfBellCard___________________________________
CurseOfBellCard::CurseOfBellCard() :CurseCard(CardType::Curse, "CurseOfBell",
	"Unplayable - You cannot remove this card from your deck") {}

void CurseOfBellCard::applyEffect(class Character* caster, class Character* target) {
    cout << "Curse of Bell card is stuck in your deck and it can't be removed!\n";
}

//______________________________________RegretCard______________________________________
RegretCard::RegretCard() :CurseCard(CardType::Curse, "Regret",
	"Unplayable - Take 1 damage for every card in hand after your turn ends") {}

void RegretCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        cout << "Regret card is in your hand\n";
        // int handSize = caster->getHand().size();
        // caster->take_damage(handSize);
        cout << " -> It will deal 1 damage for every card in your hand when your turn ends\n";
    }
}