#include "AttackCard.h"
class Character;

//___________________________________AttackCard______________________________________
AttackCard::AttackCard(CardType t, string n, string d, int e, int damage) :
	Card(t, n, d, e), baseDamage(damage){}

AttackCard::~AttackCard() = default;

void AttackCard::applyEffect(class Character* caster, class Character* target) {
	//if (caster) {
	//	 caster->decreaseEnergy(energy); 
	//	cout << caster->getName() << " spent " << energyCost << " energy to play " << name << ".\n";
	//}
	//if (target) {
	//	 target->takeDamage(baseDamage); 
	//}
} 

//___________________________________ReaperCard______________________________________
ReaperCard::ReaperCard(): AttackCard(CardType::Attack, "Reaper", 
	"Deal 4 damage to all enemies - Heal HP equal to unblocked damage - Exhaust", 2, 4) {}

void ReaperCard::applyEffect(class Character* caster, class Character* target) {
	AttackCard::applyEffect(caster, target);
	if (caster && target) {
		int realDamage = 4;
		//realDamage = target->claculate_total_damage(4);
		//caster->increaseHP(realDamage);
		cout << "Reaper card played! (Base Damage: 4) -> Dealt " << realDamage
			<< " real damage. Your HP increased by " << realDamage << endl;
	}
}

//____________________________________FeedCard_______________________________________
FeedCard::FeedCard(): AttackCard(CardType::Attack, "Feed",
	"Deal 10 damage - If fatal, raise max HP by 3 - Exhaust", 1, 10) {}

void FeedCard::applyEffect(class Character* caster, class Character* target) {
	AttackCard::applyEffect(caster, target);
	if (caster && target) {
		int realDamage = 10;
		//realDamage = target->claculate_total_damage(10);
		// bool isFatal = (realDamage >= target->getHP()); 
		//if (isFatal)
			// caster->increaseMaxHP(3); 
		cout << "Feed card played! (Base Damage: 10) -> Dealt " << realDamage << " real damage\n";
		//if (isFatal) 
			//cout << "Fatal blow! Your Max HP increased by 3!\n";
	}
}

//__________________________________ImmolateCard_____________________________________
ImmolateCard::ImmolateCard(): AttackCard(CardType::Attack, "Immolate",
	"Deal 21 damage to all enemies - Add 2 BURN into discard pile", 2, 21) {
}

void ImmolateCard::applyEffect(class Character* caster, class Character* target) {
	AttackCard::applyEffect(caster, target);
	if (caster && target) {
		int realDamage = 21;
		//realDamage = target->claculate_total_damage(21);
		// caster->addBurnToDiscard(2);
		cout << "Immolate Card played! (Base Damage: 21) -> Dealt " << realDamage << " real damage\n";
		// cout << "2 BURN cards added to discard pile!\n";
	}
}


