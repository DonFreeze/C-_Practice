#include "Character.h"

void Character::setAttackBehavior(Attack* attack)
{
    cout << this->name << " switches attack mode" << endl;
    this->attack = attack;
}

void Character::setWeapon(Weapon* weapon)
{
    cout << this->name << " takes " << weapon->getName() << endl;
    this->weapon = weapon;
}

void Character::performAttack(Character* enemy)
{
    this->attack->attack(this, enemy);
}
