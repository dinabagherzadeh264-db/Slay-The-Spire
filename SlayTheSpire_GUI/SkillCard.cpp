#include "SkillCard.h"

//______________________________________SkillCard______________________________________
SkillCard::SkillCard(CardType type, string name, string description, int cost, int baseB)
    : Card(type, name, description, cost), baseBlock(baseB) {}

void SkillCard::applyEffect(class Character* caster, class Character* target) {
    if (caster) {
        //caster->decreaseEnergy(energyCost); 
        //cout << caster->getName() << " spent " << energyCost << " energy to play " << name << ".\n";
    }
}

int SkillCard::getBaseBlock() const { return baseBlock; } 

//______________________________________DefendCard_____________________________________
DefendCard::DefendCard(): SkillCard(CardType::Skill, "Defend",
    "Gain 5 block", 1, 5){}

void DefendCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        int realBlock = 5;
        // realBlock = caster->calculate_total_block(5); 
        // caster->AddBlock(realBlock); 
        //cout << "Defend card played! -> Gained " << realBlock << " block\n";
    }
}

//_____________________________________ExhumeCard______________________________________
ExhumeCard::ExhumeCard():SkillCard(CardType::Skill, "Exhume",
    "Put a card from exhaust pile into hand - Exhaust", 1, 0) {}

void ExhumeCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target); 
    if (caster) {
        //cout << "Exhume card played!\n";
        bool hasExhaustedCards = true; 
        // if (caster->hasCardsInExhaustPile()) { ... }
        if (hasExhaustedCards) {
            // caster->moveCardFromExhaustToHand();
            cout << " -> Successfully recovered a card from the Exhaust pile back to your hand!\n";
        }
        else 
            cout << " -> Exhaust pile is empty! No card to recover\n";
        // caster->exhaustCard(this);
        cout << " -> Exhume has been Exhausted and moved to the exhaust pile\n";
    }
}

//___________________________________LimitBreakCard____________________________________
LimitBreakCard::LimitBreakCard():SkillCard(CardType::Skill, "LimitBreak",
    "Double your Strength - Exhaust", 1, 0) {}

void LimitBreakCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        //cout << "LimitBreak card played!\n";
        int currentStrength = 2;
        // currentStrength = caster->getStatusValue("Strength");
        // caster->applyStatus("Strength", currentStrength); 
        cout << " -> Your Strength has been doubled! (Added " << currentStrength << " more Strength)\n";
        // caster->exhaustCard(this);
        cout << " -> LimitBreak has been Exhausted and moved to the exhaust pile\n";
    }
}

//____________________________________OfferingCard_____________________________________
OfferingCard::OfferingCard():SkillCard(CardType::Skill, "Offering",
    "Lose 6 HP - Gain 2 Energy - Draw 3 cards - Exhaust", 0, 0) {}

void OfferingCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target); 
    if (caster) {
        //cout << "Offering card played! A risky but powerful move...\n";
        // caster->decreaseHP(6);
        //cout << " -> You lost 6 HP\n";
        // caster->increaseEnergy(2);
        //cout << " -> Gained 2 Energy\n";
        // caster->drawCards(3);
        //cout << " -> Drew 3 cards into your hand\n";
        // caster->exhaustCard(this);
        cout << " -> Offering has been Exhausted and moved to the exhaust pile\n";
    }
}

//____________________________________ImperviousCard___________________________________
ImperviousCard::ImperviousCard(): SkillCard(CardType::Skill, "Impervious",
    "Gain 30 block - Exhaust", 2, 30) {}

void ImperviousCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        int realBlock = 30;
        // realBlock = caster->calculate_total_block(30); 
        // caster->AddBlock(realBlock); 
        //cout << "Impervious card played! -> Gained " << realBlock << " block\n";
        // caster->exhaustCard(this);
        cout << " -> Impervious has been Exhausted and moved to the exhaust pile\n";
    }
}

//____________________________________DualWieldCard____________________________________
DualWieldCard::DualWieldCard(): SkillCard(CardType::Skill, "DualWield",
    "Choose a card in hand - Add 2 copies into hand", 1, 0) {}

void DualWieldCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target); 
    if (caster) {
        //cout << "DualWield card played!\n";
        // Card* chosenCard = caster->chooseCardFromHand();
        // caster->addCopiesToHand(chosenCard, 2);
        //cout << " -> Chose a card from your hand and added 2 copies of it into your hand!\n";
    }
}

//____________________________________EntrenchCard_____________________________________
EntrenchCard::EntrenchCard(): SkillCard(CardType::Skill, "Entrench",
    "Double your Block", 2, 0) {}

void EntrenchCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        //cout << "Entrench card played!\n";
        int currentBlock = 0;
        //currentBlock = caster->getBlock();
        //caster->setBlock( currentBlock * 2 );
        //cout << " -> your Block was doubled\n";
    }
}

//___________________________________ShrugItOffCard____________________________________
ShrugItOffCard::ShrugItOffCard(): SkillCard(CardType::Skill, "ShrugItOff",
    "Draw 1 card - Gain 8 block", 1, 8) {}

void ShrugItOffCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        //cout << "ShrugItOff card played!\n";
        // caster->drawCards(1);
        //cout << " -> Drew 1 cards into your hand\n";
        int realBlock = 8;
        // realBlock = caster->calculate_total_block(8); 
        // caster->AddBlock(realBlock); 
        //cout << " -> Gained " << realBlock << " block\n";
    }
}

//___________________________________BloodlettingCard__________________________________
BloodlettingCard::BloodlettingCard(): SkillCard(CardType::Skill, "Bloodletting",
    "Lose 3 HP - Gain 2 Energy", 0, 0) {}

void BloodlettingCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        //cout << "Bloodletting card played!\n";
        // caster->decreaseHP(3);
        //cout << " -> You lost 3 HP\n";
        // caster->increaseEnergy(2);
        //cout << " -> Gained 2 Energy\n";
    }
}

//_____________________________________DisarmCard______________________________________
DisarmCard::DisarmCard(): SkillCard(CardType::Skill, "Disarm",
    "Enemy loses 2 Strength - Exhaust", 1, 0) {}

void DisarmCard::applyEffect(class Character* caster, class Character* target) {
    SkillCard::applyEffect(caster, target);
    if (caster) {
        //cout << "Disarm card played!\n";
        //target->applyStatus("Strength", -2); 
        //cout << " -> Enemy lost 2 strength\n";
        // caster->exhaustCard(this);
        cout << " -> Disarm has been Exhausted and moved to the exhaust pile\n";
    }
}