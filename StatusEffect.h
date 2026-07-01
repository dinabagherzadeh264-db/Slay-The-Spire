#ifndef STATUSEFFECT_H
#define STATUSEFFECT_H
#include <string>
using namespace std;

class StatusEffect {
protected:
    string name;
    int amount;     

public:
    StatusEffect(string name, int amount);
    virtual ~StatusEffect() = default;

    string getName() const;
    int getAmount() const;
    void setAmount(int value);

    virtual int modifyOutgoingDamage(int baseDamage);
    virtual int modifyIncomingDamage(int baseDamage);
};

class StrengthEffect : public StatusEffect {
public:
    StrengthEffect(int increaseDamageBy);
    int modifyOutgoingDamage(int baseDamage) override;
};

#endif