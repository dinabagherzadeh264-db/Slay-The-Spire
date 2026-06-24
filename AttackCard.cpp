#include "AttackCard.h"
class Character;

//___________________________________AttackCard______________________________________
AttackCard::AttackCard(CardType t, string n, string d, int e, int damage) :
	Card(t, n, d, e), baseDamage(damage){}

AttackCard::~AttackCard() = default;

void AttackCard::applyEffect(class Character* caster, class Character* target) {
	//if (caster) {
	//	 caster->decreaseEnergy(energyCost); 
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
	"Deal 21 damage to all enemies - Add 2 BURN into discard pile", 2, 21) {}

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

//__________________________________WhirlwindCard_____________________________________
WhirlwindCard::WhirlwindCard() : AttackCard(CardType::Attack, "Whirlwind",
	"Deal 5 damage to all enemies X times (X = your current energy)", 0, 5) {}

void WhirlwindCard::applyEffect(class Character* caster, class Character* target) {
	if (caster && target) {
		int currentEnergy = 3;
		//currentEnergy = caster->getEnergy(); 
		int realDamage = 5;
		// realDamage = target->claculate_total_damage(5);
		cout << "Whirlwind card played! Expending ALL " << currentEnergy << " energy\n";
		for (int i = 0; i < currentEnergy; i++) {
			cout << " -> [Hit " << (i + 1) << "] Dealt " << realDamage << " real damage to target\n";
		}
		// caster->decreaseEnergy(currentEnergy);
	}
}

//__________________________________Blood_for_BloodCard_____________________________________
Blood_for_BloodCard::Blood_for_BloodCard() : AttackCard(CardType::Attack, "Blood for Blood",
	"Deal 18 damage - Costs 1 less for each time you lose HP this combat", 4, 18) {
} 

void Blood_for_BloodCard::applyEffect(class Character* caster, class Character* target) {
	if (caster && target) {
		int baseCost = 4;
		int timesDamaged = 2; 
		// timesDamaged = caster->getTimesDamagedThisCombat();
		int currentCost = baseCost - timesDamaged;
		if (currentCost < 0)
			currentCost = 0;
		int realDamage = 18;
		// realDamage = target->claculate_total_damage(18);
		cout << "Card [Blood for Blood] played! Cost: " << currentCost <<
			" energy (Base cost reduced because you took damage " << timesDamaged << 
			" times) \n-> Dealt" << realDamage << " damage to enemy.\n";
		// caster->decreaseEnergy(currentCost);
	}
}