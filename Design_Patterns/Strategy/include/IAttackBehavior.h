#ifndef IATTACKBEHAVIOR_H
#define IATTACKBEHAVIOR_H

#include "Weapon.h"
#include "Character.h"
#include <iostream>

class Character;
class Weapon;

using namespace std;

class Attack
{
public:
    virtual void attack( Character* attacker, Character* enemy) = 0;
};

class SlasheAttack : public Attack
{
public:
    virtual void attack( Character* attacker, Character* enemy) override;
};

class CrushesAttack : public Attack
{
public:
    virtual void attack( Character* attacker, Character* enemy) override;
};


#endif // IATTACKBEHAVIOR_H
