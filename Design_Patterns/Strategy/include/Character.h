#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "IAttackBehavior.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

class Weapon;
class Attack;


class Character
{
public:
    Character(string name) : name(name)
    {
        cout << "Create " << name << endl;
    }
    void setAttackBehavior(Attack* attack) ;
    void setWeapon(Weapon* weapon);
    void performAttack(Character* enemy);
    string getWeapon(){return weapon->getName();}
    string getName(){return this->name;}

private:
    string name;
    Weapon *weapon;
    Attack *attack;
};


#endif // CHARACTER_H
