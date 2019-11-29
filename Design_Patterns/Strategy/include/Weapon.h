#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
using namespace std;

class Weapon
{
public:
    Weapon(string name) : name(name)
    {
        cout << "Create a " << name << endl;
    }
    string getName(){return this->name;}
private:
    string name;
};


#endif // WEAPON_H
