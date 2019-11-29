#include "IAttackBehavior.h"


void SlasheAttack::attack(Character* attacker, Character* enemy)
{
    cout << attacker->getName() << " slashes " << enemy->getName() << " with " << attacker->getWeapon() << endl;
}

void CrushesAttack::attack(Character* attacker, Character* enemy)
{
    cout << attacker->getName() << " crushes " << enemy->getName() << " with " << attacker->getWeapon() << endl;
}
