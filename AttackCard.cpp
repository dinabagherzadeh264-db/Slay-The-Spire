#include "AttackCard.h"
class Character;

//___________________________________AttackCard______________________________________
AttackCard::AttackCard(CardType t, string n, string d, int e, int damage) :
	Card(t, n, d, e), baseDamage(damage){ }

AttackCard::~AttackCard() = default;

void AttackCard::applyEffect(class Character* caster, class Character* target) {
	if (target) {
		//target->takeDamage(baseDamage); // 
		cout << name << " card played! Hit target for " << baseDamage << " damage\n";
	}
} 

//___________________________________ReaperCard______________________________________
ReaperCard::ReaperCard(): AttackCard(CardType::Attack, "Reaper", 
	"Deal 4 damage to all enemies - Heal HP equal to unblocked damage - Exhaust", 2, 4) {}

void ReaperCard::applyEffect(class Character* caster, class Character* target) {
	if (caster && target) {
		int realDamage = 4;
		//realDamage = target->claculate_total_damage(4);
		//caster->increaseHP(realDamage);
		cout << "Reaper card played! (Base Damage: 4) -> Dealt " << realDamage
			<< " real damage. Your HP increased by " << realDamage << "!\n";
	}
}